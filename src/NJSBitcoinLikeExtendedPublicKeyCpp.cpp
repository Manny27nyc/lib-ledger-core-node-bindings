// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#include "NJSBitcoinLikeExtendedPublicKeyCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSBitcoinLikeExtendedPublicKey::derive) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey::derive needs 1 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeExtendedPublicKey>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey::derive : implementation of BitcoinLikeExtendedPublicKey is not valid");
    }

    auto result = cpp_impl->derive(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSBitcoinLikeAddress::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBitcoinLikeExtendedPublicKey::derivePublicKey) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey::derivePublicKey needs 1 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeExtendedPublicKey>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey::derivePublicKey : implementation of BitcoinLikeExtendedPublicKey is not valid");
    }

    auto result = cpp_impl->derivePublicKey(arg_0);

    //Wrap result in node object
    Local<Array> arg_1 = Nan::New<Array>();
    for(size_t arg_1_id = 0; arg_1_id < result.size(); arg_1_id++)
    {
        auto arg_1_elem = Nan::New<Uint32>(result[arg_1_id]);
        Nan::Set(arg_1, (int)arg_1_id,arg_1_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBitcoinLikeExtendedPublicKey::deriveHash160) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey::deriveHash160 needs 1 arguments");
    }

    //Check if parameters have correct types
    Nan::Utf8String string_arg_0(info[0]->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeExtendedPublicKey>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey::deriveHash160 : implementation of BitcoinLikeExtendedPublicKey is not valid");
    }

    auto result = cpp_impl->deriveHash160(arg_0);

    //Wrap result in node object
    Local<Array> arg_1 = Nan::New<Array>();
    for(size_t arg_1_id = 0; arg_1_id < result.size(); arg_1_id++)
    {
        auto arg_1_elem = Nan::New<Uint32>(result[arg_1_id]);
        Nan::Set(arg_1, (int)arg_1_id,arg_1_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBitcoinLikeExtendedPublicKey::toBase58) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey::toBase58 needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeExtendedPublicKey>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey::toBase58 : implementation of BitcoinLikeExtendedPublicKey is not valid");
    }

    auto result = cpp_impl->toBase58();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeExtendedPublicKey::getRootPath) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey::getRootPath needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeExtendedPublicKey>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey::getRootPath : implementation of BitcoinLikeExtendedPublicKey is not valid");
    }

    auto result = cpp_impl->getRootPath();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSBitcoinLikeExtendedPublicKey::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSBitcoinLikeExtendedPublicKey::BitcoinLikeExtendedPublicKey_prototype;

Local<Object> NJSBitcoinLikeExtendedPublicKey::wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeExtendedPublicKey> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(BitcoinLikeExtendedPublicKey_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeExtendedPublicKey>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSBitcoinLikeExtendedPublicKey::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSBitcoinLikeExtendedPublicKey::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeExtendedPublicKey>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSBitcoinLikeExtendedPublicKey::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBitcoinLikeExtendedPublicKey::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBitcoinLikeExtendedPublicKey").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"derive", derive);
    Nan::SetPrototypeMethod(func_template,"derivePublicKey", derivePublicKey);
    Nan::SetPrototypeMethod(func_template,"deriveHash160", deriveHash160);
    Nan::SetPrototypeMethod(func_template,"toBase58", toBase58);
    Nan::SetPrototypeMethod(func_template,"getRootPath", getRootPath);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    BitcoinLikeExtendedPublicKey_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSBitcoinLikeExtendedPublicKey").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
