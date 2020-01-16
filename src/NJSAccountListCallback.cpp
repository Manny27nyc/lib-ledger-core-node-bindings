// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "NJSAccountListCallback.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

void NJSAccountListCallback::onCallback(const std::experimental::optional<std::vector<std::shared_ptr<::ledger::core::api::Account>>> & result, const std::experimental::optional<::ledger::core::api::Error> & error)
{
    Nan::HandleScope scope;
    //Wrap parameters
    Local<Value> arg_0;
    if(result)
    {
        auto arg_0_optional = (result).value();
        Local<Array> arg_0_tmp = Nan::New<Array>();
        for(size_t arg_0_tmp_id = 0; arg_0_tmp_id < arg_0_optional.size(); arg_0_tmp_id++)
        {
            auto arg_0_tmp_elem = NJSAccount::wrap(arg_0_optional[arg_0_tmp_id]);

            Nan::Set(arg_0_tmp, (int)arg_0_tmp_id,arg_0_tmp_elem);
        }

        arg_0 = arg_0_tmp;
    }

    Local<Value> arg_1;
    if(error)
    {
        auto arg_1_optional = (error).value();
        auto arg_1_tmp = Nan::New<Object>();
        auto arg_1_tmp_1 = Nan::New<Integer>((int)arg_1_optional.code);
        Nan::DefineOwnProperty(arg_1_tmp, Nan::New<String>("code").ToLocalChecked(), arg_1_tmp_1);
        auto arg_1_tmp_2 = Nan::New<String>(arg_1_optional.message).ToLocalChecked();
        Nan::DefineOwnProperty(arg_1_tmp, Nan::New<String>("message").ToLocalChecked(), arg_1_tmp_2);

        arg_1 = arg_1_tmp;
    }

    auto local_resolver = Nan::New<Promise::Resolver>(pers_resolver);
    if(error)
    {
        auto rejected = local_resolver->Reject(Nan::GetCurrentContext(), arg_1);
        rejected.FromJust();
    }
    else
    {
        auto resolve = local_resolver->Resolve(Nan::GetCurrentContext(), arg_0);
        resolve.FromJust();
    }
}

NAN_METHOD(NJSAccountListCallback::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSAccountListCallback function can only be called as constructor (use New)");
    }

    auto resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    auto node_instance = std::make_shared<NJSAccountListCallback>(resolver);
    djinni::js::ObjectWrapper<NJSAccountListCallback>::Wrap(node_instance, info.This());
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSAccountListCallback::AccountListCallback_prototype;

Local<Object> NJSAccountListCallback::wrap(const std::shared_ptr<ledger::core::api::AccountListCallback> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(AccountListCallback_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::AccountListCallback>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSAccountListCallback::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

void NJSAccountListCallback::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSAccountListCallback::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSAccountListCallback").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"New", New);
    //Set object prototype
    AccountListCallback_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSAccountListCallback").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
