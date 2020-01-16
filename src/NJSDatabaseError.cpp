// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from database.djinni

#include "NJSDatabaseError.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

std::string NJSDatabaseError::getMessage()
{
    Nan::HandleScope scope;
    //Wrap parameters
    Local<Value> args[1];
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSDatabaseError::getMessage fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getMessage").ToLocalChecked()).ToLocalChecked();
    auto result_getMessage = Nan::CallAsFunction(calling_funtion->ToObject(Nan::GetCurrentContext()).ToLocalChecked(),local_njs_impl,0,args);
    if(result_getMessage.IsEmpty())
    {
        Nan::ThrowError("NJSDatabaseError::getMessage call failed");
    }
    auto checkedResult_getMessage = result_getMessage.ToLocalChecked();
    Nan::Utf8String string_fResult_getMessage(checkedResult_getMessage->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto fResult_getMessage = std::string(*string_fResult_getMessage);
    return fResult_getMessage;
}

NAN_METHOD(NJSDatabaseError::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSDatabaseError function can only be called as constructor (use New)");
    }

    if(!info[0]->IsObject())
    {
        return Nan::ThrowError("NJSDatabaseError::New requires an implementation from node");
    }
    auto node_instance = std::make_shared<NJSDatabaseError>(info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked());
    djinni::js::ObjectWrapper<NJSDatabaseError>::Wrap(node_instance, info.This());
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSDatabaseError::DatabaseError_prototype;

Local<Object> NJSDatabaseError::wrap(const std::shared_ptr<ledger::core::api::DatabaseError> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(DatabaseError_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::DatabaseError>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSDatabaseError::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

void NJSDatabaseError::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSDatabaseError::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSDatabaseError").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"New", New);
    //Set object prototype
    DatabaseError_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSDatabaseError").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
