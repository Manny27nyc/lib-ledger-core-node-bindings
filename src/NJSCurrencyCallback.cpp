// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "NJSCurrencyCallback.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

void NJSCurrencyCallback::onCallback(const std::experimental::optional<Currency> & result, const std::experimental::optional<Error> & error)
{
    Nan::HandleScope scope;
    //Wrap parameters
    Local<Value> arg_0;
    if(result)
    {
        auto arg_0_optional = (result).value();
        auto arg_0_tmp = Nan::New<Object>();
        auto arg_0_tmp_1 = Nan::New<Integer>((int)arg_0_optional.walletType);
        Nan::DefineOwnProperty(arg_0_tmp, Nan::New<String>("walletType").ToLocalChecked(), arg_0_tmp_1);
        auto arg_0_tmp_2 = Nan::New<String>(arg_0_optional.name).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_tmp, Nan::New<String>("name").ToLocalChecked(), arg_0_tmp_2);
        auto arg_0_tmp_3 = Nan::New<Int32>(arg_0_optional.bip44CoinType);
        Nan::DefineOwnProperty(arg_0_tmp, Nan::New<String>("bip44CoinType").ToLocalChecked(), arg_0_tmp_3);
        auto arg_0_tmp_4 = Nan::New<String>(arg_0_optional.paymentUriScheme).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_tmp, Nan::New<String>("paymentUriScheme").ToLocalChecked(), arg_0_tmp_4);
        Local<Array> arg_0_tmp_5 = Nan::New<Array>();
        for(size_t arg_0_tmp_5_id = 0; arg_0_tmp_5_id < arg_0_optional.units.size(); arg_0_tmp_5_id++)
        {
            auto arg_0_tmp_5_elem = Nan::New<Object>();
            auto arg_0_tmp_5_elem_1 = Nan::New<String>(arg_0_optional.units[arg_0_tmp_5_id].name).ToLocalChecked();
            Nan::DefineOwnProperty(arg_0_tmp_5_elem, Nan::New<String>("name").ToLocalChecked(), arg_0_tmp_5_elem_1);
            auto arg_0_tmp_5_elem_2 = Nan::New<String>(arg_0_optional.units[arg_0_tmp_5_id].symbol).ToLocalChecked();
            Nan::DefineOwnProperty(arg_0_tmp_5_elem, Nan::New<String>("symbol").ToLocalChecked(), arg_0_tmp_5_elem_2);
            auto arg_0_tmp_5_elem_3 = Nan::New<String>(arg_0_optional.units[arg_0_tmp_5_id].code).ToLocalChecked();
            Nan::DefineOwnProperty(arg_0_tmp_5_elem, Nan::New<String>("code").ToLocalChecked(), arg_0_tmp_5_elem_3);
            auto arg_0_tmp_5_elem_4 = Nan::New<Int32>(arg_0_optional.units[arg_0_tmp_5_id].numberOfDecimal);
            Nan::DefineOwnProperty(arg_0_tmp_5_elem, Nan::New<String>("numberOfDecimal").ToLocalChecked(), arg_0_tmp_5_elem_4);

            arg_0_tmp_5->Set((int)arg_0_tmp_5_id,arg_0_tmp_5_elem);
        }

        Nan::DefineOwnProperty(arg_0_tmp, Nan::New<String>("units").ToLocalChecked(), arg_0_tmp_5);
        Local<Value> arg_0_tmp_6;
        if(arg_0_optional.bitcoinLikeNetworkParameters)
        {
            auto arg_0_tmp_6_optional = (arg_0_optional.bitcoinLikeNetworkParameters).value();
            auto arg_0_tmp_6_tmp = Nan::New<Object>();
            auto arg_0_tmp_6_tmp_1 = Nan::New<String>(arg_0_tmp_6_optional.Identifier).ToLocalChecked();
            Nan::DefineOwnProperty(arg_0_tmp_6_tmp, Nan::New<String>("Identifier").ToLocalChecked(), arg_0_tmp_6_tmp_1);
            Local<Array> arg_0_tmp_6_tmp_2 = Nan::New<Array>();
            for(size_t arg_0_tmp_6_tmp_2_id = 0; arg_0_tmp_6_tmp_2_id < arg_0_tmp_6_optional.P2PKHVersion.size(); arg_0_tmp_6_tmp_2_id++)
            {
                auto arg_0_tmp_6_tmp_2_elem = Nan::New<Uint32>(arg_0_tmp_6_optional.P2PKHVersion[arg_0_tmp_6_tmp_2_id]);
                arg_0_tmp_6_tmp_2->Set((int)arg_0_tmp_6_tmp_2_id,arg_0_tmp_6_tmp_2_elem);
            }

            Nan::DefineOwnProperty(arg_0_tmp_6_tmp, Nan::New<String>("P2PKHVersion").ToLocalChecked(), arg_0_tmp_6_tmp_2);
            Local<Array> arg_0_tmp_6_tmp_3 = Nan::New<Array>();
            for(size_t arg_0_tmp_6_tmp_3_id = 0; arg_0_tmp_6_tmp_3_id < arg_0_tmp_6_optional.P2SHVersion.size(); arg_0_tmp_6_tmp_3_id++)
            {
                auto arg_0_tmp_6_tmp_3_elem = Nan::New<Uint32>(arg_0_tmp_6_optional.P2SHVersion[arg_0_tmp_6_tmp_3_id]);
                arg_0_tmp_6_tmp_3->Set((int)arg_0_tmp_6_tmp_3_id,arg_0_tmp_6_tmp_3_elem);
            }

            Nan::DefineOwnProperty(arg_0_tmp_6_tmp, Nan::New<String>("P2SHVersion").ToLocalChecked(), arg_0_tmp_6_tmp_3);
            Local<Array> arg_0_tmp_6_tmp_4 = Nan::New<Array>();
            for(size_t arg_0_tmp_6_tmp_4_id = 0; arg_0_tmp_6_tmp_4_id < arg_0_tmp_6_optional.XPUBVersion.size(); arg_0_tmp_6_tmp_4_id++)
            {
                auto arg_0_tmp_6_tmp_4_elem = Nan::New<Uint32>(arg_0_tmp_6_optional.XPUBVersion[arg_0_tmp_6_tmp_4_id]);
                arg_0_tmp_6_tmp_4->Set((int)arg_0_tmp_6_tmp_4_id,arg_0_tmp_6_tmp_4_elem);
            }

            Nan::DefineOwnProperty(arg_0_tmp_6_tmp, Nan::New<String>("XPUBVersion").ToLocalChecked(), arg_0_tmp_6_tmp_4);
            auto arg_0_tmp_6_tmp_5 = Nan::New<Integer>((int)arg_0_tmp_6_optional.FeePolicy);
            Nan::DefineOwnProperty(arg_0_tmp_6_tmp, Nan::New<String>("FeePolicy").ToLocalChecked(), arg_0_tmp_6_tmp_5);
            auto arg_0_tmp_6_tmp_6 = Nan::New<Number>(arg_0_tmp_6_optional.DustAmount);
            Nan::DefineOwnProperty(arg_0_tmp_6_tmp, Nan::New<String>("DustAmount").ToLocalChecked(), arg_0_tmp_6_tmp_6);
            auto arg_0_tmp_6_tmp_7 = Nan::New<String>(arg_0_tmp_6_optional.MessagePrefix).ToLocalChecked();
            Nan::DefineOwnProperty(arg_0_tmp_6_tmp, Nan::New<String>("MessagePrefix").ToLocalChecked(), arg_0_tmp_6_tmp_7);
            auto arg_0_tmp_6_tmp_8 = Nan::New<Boolean>(arg_0_tmp_6_optional.UsesTimestampedTransaction);
            Nan::DefineOwnProperty(arg_0_tmp_6_tmp, Nan::New<String>("UsesTimestampedTransaction").ToLocalChecked(), arg_0_tmp_6_tmp_8);
            auto arg_0_tmp_6_tmp_9 = Nan::New<Number>(arg_0_tmp_6_optional.TimestampDelay);
            Nan::DefineOwnProperty(arg_0_tmp_6_tmp, Nan::New<String>("TimestampDelay").ToLocalChecked(), arg_0_tmp_6_tmp_9);
            Local<Array> arg_0_tmp_6_tmp_10 = Nan::New<Array>();
            for(size_t arg_0_tmp_6_tmp_10_id = 0; arg_0_tmp_6_tmp_10_id < arg_0_tmp_6_optional.SigHash.size(); arg_0_tmp_6_tmp_10_id++)
            {
                auto arg_0_tmp_6_tmp_10_elem = Nan::New<Uint32>(arg_0_tmp_6_optional.SigHash[arg_0_tmp_6_tmp_10_id]);
                arg_0_tmp_6_tmp_10->Set((int)arg_0_tmp_6_tmp_10_id,arg_0_tmp_6_tmp_10_elem);
            }

            Nan::DefineOwnProperty(arg_0_tmp_6_tmp, Nan::New<String>("SigHash").ToLocalChecked(), arg_0_tmp_6_tmp_10);
            Local<Array> arg_0_tmp_6_tmp_11 = Nan::New<Array>();
            for(size_t arg_0_tmp_6_tmp_11_id = 0; arg_0_tmp_6_tmp_11_id < arg_0_tmp_6_optional.AdditionalBIPs.size(); arg_0_tmp_6_tmp_11_id++)
            {
                auto arg_0_tmp_6_tmp_11_elem = Nan::New<String>(arg_0_tmp_6_optional.AdditionalBIPs[arg_0_tmp_6_tmp_11_id]).ToLocalChecked();
                arg_0_tmp_6_tmp_11->Set((int)arg_0_tmp_6_tmp_11_id,arg_0_tmp_6_tmp_11_elem);
            }

            Nan::DefineOwnProperty(arg_0_tmp_6_tmp, Nan::New<String>("AdditionalBIPs").ToLocalChecked(), arg_0_tmp_6_tmp_11);

            arg_0_tmp_6 = arg_0_tmp_6_tmp;
        }

        Nan::DefineOwnProperty(arg_0_tmp, Nan::New<String>("bitcoinLikeNetworkParameters").ToLocalChecked(), arg_0_tmp_6);
        Local<Value> arg_0_tmp_7;
        if(arg_0_optional.ethereumLikeNetworkParameters)
        {
            auto arg_0_tmp_7_optional = (arg_0_optional.ethereumLikeNetworkParameters).value();
            auto arg_0_tmp_7_tmp = Nan::New<Object>();
            auto arg_0_tmp_7_tmp_1 = Nan::New<String>(arg_0_tmp_7_optional.Identifier).ToLocalChecked();
            Nan::DefineOwnProperty(arg_0_tmp_7_tmp, Nan::New<String>("Identifier").ToLocalChecked(), arg_0_tmp_7_tmp_1);
            auto arg_0_tmp_7_tmp_2 = Nan::New<String>(arg_0_tmp_7_optional.MessagePrefix).ToLocalChecked();
            Nan::DefineOwnProperty(arg_0_tmp_7_tmp, Nan::New<String>("MessagePrefix").ToLocalChecked(), arg_0_tmp_7_tmp_2);
            auto arg_0_tmp_7_tmp_3 = Nan::New<String>(arg_0_tmp_7_optional.ChainID).ToLocalChecked();
            Nan::DefineOwnProperty(arg_0_tmp_7_tmp, Nan::New<String>("ChainID").ToLocalChecked(), arg_0_tmp_7_tmp_3);
            Local<Array> arg_0_tmp_7_tmp_4 = Nan::New<Array>();
            for(size_t arg_0_tmp_7_tmp_4_id = 0; arg_0_tmp_7_tmp_4_id < arg_0_tmp_7_optional.XPUBVersion.size(); arg_0_tmp_7_tmp_4_id++)
            {
                auto arg_0_tmp_7_tmp_4_elem = Nan::New<Uint32>(arg_0_tmp_7_optional.XPUBVersion[arg_0_tmp_7_tmp_4_id]);
                arg_0_tmp_7_tmp_4->Set((int)arg_0_tmp_7_tmp_4_id,arg_0_tmp_7_tmp_4_elem);
            }

            Nan::DefineOwnProperty(arg_0_tmp_7_tmp, Nan::New<String>("XPUBVersion").ToLocalChecked(), arg_0_tmp_7_tmp_4);
            Local<Array> arg_0_tmp_7_tmp_5 = Nan::New<Array>();
            for(size_t arg_0_tmp_7_tmp_5_id = 0; arg_0_tmp_7_tmp_5_id < arg_0_tmp_7_optional.AdditionalEIPs.size(); arg_0_tmp_7_tmp_5_id++)
            {
                auto arg_0_tmp_7_tmp_5_elem = Nan::New<String>(arg_0_tmp_7_optional.AdditionalEIPs[arg_0_tmp_7_tmp_5_id]).ToLocalChecked();
                arg_0_tmp_7_tmp_5->Set((int)arg_0_tmp_7_tmp_5_id,arg_0_tmp_7_tmp_5_elem);
            }

            Nan::DefineOwnProperty(arg_0_tmp_7_tmp, Nan::New<String>("AdditionalEIPs").ToLocalChecked(), arg_0_tmp_7_tmp_5);
            auto arg_0_tmp_7_tmp_6 = Nan::New<Number>(arg_0_tmp_7_optional.TimestampDelay);
            Nan::DefineOwnProperty(arg_0_tmp_7_tmp, Nan::New<String>("TimestampDelay").ToLocalChecked(), arg_0_tmp_7_tmp_6);

            arg_0_tmp_7 = arg_0_tmp_7_tmp;
        }

        Nan::DefineOwnProperty(arg_0_tmp, Nan::New<String>("ethereumLikeNetworkParameters").ToLocalChecked(), arg_0_tmp_7);

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

NAN_METHOD(NJSCurrencyCallback::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSCurrencyCallback function can only be called as constructor (use New)");
    }

    auto resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    auto node_instance = std::make_shared<NJSCurrencyCallback>(resolver);
    djinni::js::ObjectWrapper<NJSCurrencyCallback>::Wrap(node_instance, info.This());
    info.GetReturnValue().Set(info.This());
}

void NJSCurrencyCallback::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSCurrencyCallback::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSCurrencyCallback").ToLocalChecked());

    //Add template to target
    target->Set(Nan::New<String>("NJSCurrencyCallback").ToLocalChecked(), func_template->GetFunction());
}
