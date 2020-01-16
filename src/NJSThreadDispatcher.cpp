// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from thread_dispatcher.djinni

#include "NJSThreadDispatcher.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

std::shared_ptr<ExecutionContext> NJSThreadDispatcher::getSerialExecutionContext(const std::string & name)
{
    Nan::HandleScope scope;
    //Wrap parameters
    auto arg_0 = Nan::New<String>(name).ToLocalChecked();
    Local<Value> args[1] = {arg_0};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSThreadDispatcher::getSerialExecutionContext fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getSerialExecutionContext").ToLocalChecked()).ToLocalChecked();
    auto result_getSerialExecutionContext = Nan::CallAsFunction(calling_funtion->ToObject(Nan::GetCurrentContext()).ToLocalChecked(),local_njs_impl,1,args);
    if(result_getSerialExecutionContext.IsEmpty())
    {
        Nan::ThrowError("NJSThreadDispatcher::getSerialExecutionContext call failed");
    }
    auto checkedResult_getSerialExecutionContext = result_getSerialExecutionContext.ToLocalChecked();
    Local<Object> njs_fResult_getSerialExecutionContext = checkedResult_getSerialExecutionContext->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto fResult_getSerialExecutionContext = djinni::js::ObjectWrapper<ledger::core::api::ExecutionContext>::Unwrap(njs_fResult_getSerialExecutionContext);

    return fResult_getSerialExecutionContext;
}

std::shared_ptr<ExecutionContext> NJSThreadDispatcher::getThreadPoolExecutionContext(const std::string & name)
{
    Nan::HandleScope scope;
    //Wrap parameters
    auto arg_0 = Nan::New<String>(name).ToLocalChecked();
    Local<Value> args[1] = {arg_0};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSThreadDispatcher::getThreadPoolExecutionContext fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getThreadPoolExecutionContext").ToLocalChecked()).ToLocalChecked();
    auto result_getThreadPoolExecutionContext = Nan::CallAsFunction(calling_funtion->ToObject(Nan::GetCurrentContext()).ToLocalChecked(),local_njs_impl,1,args);
    if(result_getThreadPoolExecutionContext.IsEmpty())
    {
        Nan::ThrowError("NJSThreadDispatcher::getThreadPoolExecutionContext call failed");
    }
    auto checkedResult_getThreadPoolExecutionContext = result_getThreadPoolExecutionContext.ToLocalChecked();
    Local<Object> njs_fResult_getThreadPoolExecutionContext = checkedResult_getThreadPoolExecutionContext->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto fResult_getThreadPoolExecutionContext = djinni::js::ObjectWrapper<ledger::core::api::ExecutionContext>::Unwrap(njs_fResult_getThreadPoolExecutionContext);

    return fResult_getThreadPoolExecutionContext;
}

std::shared_ptr<ExecutionContext> NJSThreadDispatcher::getMainExecutionContext()
{
    Nan::HandleScope scope;
    //Wrap parameters
    Local<Value> args[1];
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSThreadDispatcher::getMainExecutionContext fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("getMainExecutionContext").ToLocalChecked()).ToLocalChecked();
    auto result_getMainExecutionContext = Nan::CallAsFunction(calling_funtion->ToObject(Nan::GetCurrentContext()).ToLocalChecked(),local_njs_impl,0,args);
    if(result_getMainExecutionContext.IsEmpty())
    {
        Nan::ThrowError("NJSThreadDispatcher::getMainExecutionContext call failed");
    }
    auto checkedResult_getMainExecutionContext = result_getMainExecutionContext.ToLocalChecked();
    Local<Object> njs_fResult_getMainExecutionContext = checkedResult_getMainExecutionContext->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto fResult_getMainExecutionContext = djinni::js::ObjectWrapper<ledger::core::api::ExecutionContext>::Unwrap(njs_fResult_getMainExecutionContext);

    return fResult_getMainExecutionContext;
}

std::shared_ptr<Lock> NJSThreadDispatcher::newLock()
{
    Nan::HandleScope scope;
    //Wrap parameters
    Local<Value> args[1];
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSThreadDispatcher::newLock fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("newLock").ToLocalChecked()).ToLocalChecked();
    auto result_newLock = Nan::CallAsFunction(calling_funtion->ToObject(Nan::GetCurrentContext()).ToLocalChecked(),local_njs_impl,0,args);
    if(result_newLock.IsEmpty())
    {
        Nan::ThrowError("NJSThreadDispatcher::newLock call failed");
    }
    auto checkedResult_newLock = result_newLock.ToLocalChecked();
    Local<Object> njs_fResult_newLock = checkedResult_newLock->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto fResult_newLock = djinni::js::ObjectWrapper<ledger::core::api::Lock>::Unwrap(njs_fResult_newLock);

    return fResult_newLock;
}

NAN_METHOD(NJSThreadDispatcher::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSThreadDispatcher function can only be called as constructor (use New)");
    }

    if(!info[0]->IsObject())
    {
        return Nan::ThrowError("NJSThreadDispatcher::New requires an implementation from node");
    }
    auto node_instance = std::make_shared<NJSThreadDispatcher>(info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked());
    djinni::js::ObjectWrapper<NJSThreadDispatcher>::Wrap(node_instance, info.This());
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSThreadDispatcher::ThreadDispatcher_prototype;

Local<Object> NJSThreadDispatcher::wrap(const std::shared_ptr<ledger::core::api::ThreadDispatcher> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(ThreadDispatcher_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::ThreadDispatcher>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSThreadDispatcher::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

void NJSThreadDispatcher::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSThreadDispatcher::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSThreadDispatcher").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"New", New);
    //Set object prototype
    ThreadDispatcher_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSThreadDispatcher").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
