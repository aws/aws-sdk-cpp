﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberStatus.h>
#include <aws/pinpoint-sms-voice-v2/model/MessageType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberCapability.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class ReleasePhoneNumberResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API ReleasePhoneNumberResult();
    AWS_PINPOINTSMSVOICEV2_API ReleasePhoneNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API ReleasePhoneNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The PhoneNumberArn of the phone number that was released.</p>
     */
    inline const Aws::String& GetPhoneNumberArn() const{ return m_phoneNumberArn; }

    /**
     * <p>The PhoneNumberArn of the phone number that was released.</p>
     */
    inline void SetPhoneNumberArn(const Aws::String& value) { m_phoneNumberArn = value; }

    /**
     * <p>The PhoneNumberArn of the phone number that was released.</p>
     */
    inline void SetPhoneNumberArn(Aws::String&& value) { m_phoneNumberArn = std::move(value); }

    /**
     * <p>The PhoneNumberArn of the phone number that was released.</p>
     */
    inline void SetPhoneNumberArn(const char* value) { m_phoneNumberArn.assign(value); }

    /**
     * <p>The PhoneNumberArn of the phone number that was released.</p>
     */
    inline ReleasePhoneNumberResult& WithPhoneNumberArn(const Aws::String& value) { SetPhoneNumberArn(value); return *this;}

    /**
     * <p>The PhoneNumberArn of the phone number that was released.</p>
     */
    inline ReleasePhoneNumberResult& WithPhoneNumberArn(Aws::String&& value) { SetPhoneNumberArn(std::move(value)); return *this;}

    /**
     * <p>The PhoneNumberArn of the phone number that was released.</p>
     */
    inline ReleasePhoneNumberResult& WithPhoneNumberArn(const char* value) { SetPhoneNumberArn(value); return *this;}


    /**
     * <p>The PhoneNumberId of the phone number that was released.</p>
     */
    inline const Aws::String& GetPhoneNumberId() const{ return m_phoneNumberId; }

    /**
     * <p>The PhoneNumberId of the phone number that was released.</p>
     */
    inline void SetPhoneNumberId(const Aws::String& value) { m_phoneNumberId = value; }

    /**
     * <p>The PhoneNumberId of the phone number that was released.</p>
     */
    inline void SetPhoneNumberId(Aws::String&& value) { m_phoneNumberId = std::move(value); }

    /**
     * <p>The PhoneNumberId of the phone number that was released.</p>
     */
    inline void SetPhoneNumberId(const char* value) { m_phoneNumberId.assign(value); }

    /**
     * <p>The PhoneNumberId of the phone number that was released.</p>
     */
    inline ReleasePhoneNumberResult& WithPhoneNumberId(const Aws::String& value) { SetPhoneNumberId(value); return *this;}

    /**
     * <p>The PhoneNumberId of the phone number that was released.</p>
     */
    inline ReleasePhoneNumberResult& WithPhoneNumberId(Aws::String&& value) { SetPhoneNumberId(std::move(value)); return *this;}

    /**
     * <p>The PhoneNumberId of the phone number that was released.</p>
     */
    inline ReleasePhoneNumberResult& WithPhoneNumberId(const char* value) { SetPhoneNumberId(value); return *this;}


    /**
     * <p>The phone number that was released.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number that was released.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumber = value; }

    /**
     * <p>The phone number that was released.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number that was released.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumber.assign(value); }

    /**
     * <p>The phone number that was released.</p>
     */
    inline ReleasePhoneNumberResult& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number that was released.</p>
     */
    inline ReleasePhoneNumberResult& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number that was released.</p>
     */
    inline ReleasePhoneNumberResult& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    /**
     * <p>The current status of the request.</p>
     */
    inline const NumberStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the request.</p>
     */
    inline void SetStatus(const NumberStatus& value) { m_status = value; }

    /**
     * <p>The current status of the request.</p>
     */
    inline void SetStatus(NumberStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the request.</p>
     */
    inline ReleasePhoneNumberResult& WithStatus(const NumberStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the request.</p>
     */
    inline ReleasePhoneNumberResult& WithStatus(NumberStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline const Aws::String& GetIsoCountryCode() const{ return m_isoCountryCode; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline void SetIsoCountryCode(const Aws::String& value) { m_isoCountryCode = value; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline void SetIsoCountryCode(Aws::String&& value) { m_isoCountryCode = std::move(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline void SetIsoCountryCode(const char* value) { m_isoCountryCode.assign(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline ReleasePhoneNumberResult& WithIsoCountryCode(const Aws::String& value) { SetIsoCountryCode(value); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline ReleasePhoneNumberResult& WithIsoCountryCode(Aws::String&& value) { SetIsoCountryCode(std::move(value)); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline ReleasePhoneNumberResult& WithIsoCountryCode(const char* value) { SetIsoCountryCode(value); return *this;}


    /**
     * <p>The message type that was associated with the phone number.</p>
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }

    /**
     * <p>The message type that was associated with the phone number.</p>
     */
    inline void SetMessageType(const MessageType& value) { m_messageType = value; }

    /**
     * <p>The message type that was associated with the phone number.</p>
     */
    inline void SetMessageType(MessageType&& value) { m_messageType = std::move(value); }

    /**
     * <p>The message type that was associated with the phone number.</p>
     */
    inline ReleasePhoneNumberResult& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}

    /**
     * <p>The message type that was associated with the phone number.</p>
     */
    inline ReleasePhoneNumberResult& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}


    /**
     * <p>Specifies if the number could be used for text messages, voice, or both.</p>
     */
    inline const Aws::Vector<NumberCapability>& GetNumberCapabilities() const{ return m_numberCapabilities; }

    /**
     * <p>Specifies if the number could be used for text messages, voice, or both.</p>
     */
    inline void SetNumberCapabilities(const Aws::Vector<NumberCapability>& value) { m_numberCapabilities = value; }

    /**
     * <p>Specifies if the number could be used for text messages, voice, or both.</p>
     */
    inline void SetNumberCapabilities(Aws::Vector<NumberCapability>&& value) { m_numberCapabilities = std::move(value); }

    /**
     * <p>Specifies if the number could be used for text messages, voice, or both.</p>
     */
    inline ReleasePhoneNumberResult& WithNumberCapabilities(const Aws::Vector<NumberCapability>& value) { SetNumberCapabilities(value); return *this;}

    /**
     * <p>Specifies if the number could be used for text messages, voice, or both.</p>
     */
    inline ReleasePhoneNumberResult& WithNumberCapabilities(Aws::Vector<NumberCapability>&& value) { SetNumberCapabilities(std::move(value)); return *this;}

    /**
     * <p>Specifies if the number could be used for text messages, voice, or both.</p>
     */
    inline ReleasePhoneNumberResult& AddNumberCapabilities(const NumberCapability& value) { m_numberCapabilities.push_back(value); return *this; }

    /**
     * <p>Specifies if the number could be used for text messages, voice, or both.</p>
     */
    inline ReleasePhoneNumberResult& AddNumberCapabilities(NumberCapability&& value) { m_numberCapabilities.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of number that was released.</p>
     */
    inline const NumberType& GetNumberType() const{ return m_numberType; }

    /**
     * <p>The type of number that was released.</p>
     */
    inline void SetNumberType(const NumberType& value) { m_numberType = value; }

    /**
     * <p>The type of number that was released.</p>
     */
    inline void SetNumberType(NumberType&& value) { m_numberType = std::move(value); }

    /**
     * <p>The type of number that was released.</p>
     */
    inline ReleasePhoneNumberResult& WithNumberType(const NumberType& value) { SetNumberType(value); return *this;}

    /**
     * <p>The type of number that was released.</p>
     */
    inline ReleasePhoneNumberResult& WithNumberType(NumberType&& value) { SetNumberType(std::move(value)); return *this;}


    /**
     * <p>The monthly price of the phone number, in US dollars.</p>
     */
    inline const Aws::String& GetMonthlyLeasingPrice() const{ return m_monthlyLeasingPrice; }

    /**
     * <p>The monthly price of the phone number, in US dollars.</p>
     */
    inline void SetMonthlyLeasingPrice(const Aws::String& value) { m_monthlyLeasingPrice = value; }

    /**
     * <p>The monthly price of the phone number, in US dollars.</p>
     */
    inline void SetMonthlyLeasingPrice(Aws::String&& value) { m_monthlyLeasingPrice = std::move(value); }

    /**
     * <p>The monthly price of the phone number, in US dollars.</p>
     */
    inline void SetMonthlyLeasingPrice(const char* value) { m_monthlyLeasingPrice.assign(value); }

    /**
     * <p>The monthly price of the phone number, in US dollars.</p>
     */
    inline ReleasePhoneNumberResult& WithMonthlyLeasingPrice(const Aws::String& value) { SetMonthlyLeasingPrice(value); return *this;}

    /**
     * <p>The monthly price of the phone number, in US dollars.</p>
     */
    inline ReleasePhoneNumberResult& WithMonthlyLeasingPrice(Aws::String&& value) { SetMonthlyLeasingPrice(std::move(value)); return *this;}

    /**
     * <p>The monthly price of the phone number, in US dollars.</p>
     */
    inline ReleasePhoneNumberResult& WithMonthlyLeasingPrice(const char* value) { SetMonthlyLeasingPrice(value); return *this;}


    /**
     * <p>By default this is set to false. When set to true you can receive incoming
     * text messages from your end recipients.</p>
     */
    inline bool GetTwoWayEnabled() const{ return m_twoWayEnabled; }

    /**
     * <p>By default this is set to false. When set to true you can receive incoming
     * text messages from your end recipients.</p>
     */
    inline void SetTwoWayEnabled(bool value) { m_twoWayEnabled = value; }

    /**
     * <p>By default this is set to false. When set to true you can receive incoming
     * text messages from your end recipients.</p>
     */
    inline ReleasePhoneNumberResult& WithTwoWayEnabled(bool value) { SetTwoWayEnabled(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the TwoWayChannel.</p>
     */
    inline const Aws::String& GetTwoWayChannelArn() const{ return m_twoWayChannelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the TwoWayChannel.</p>
     */
    inline void SetTwoWayChannelArn(const Aws::String& value) { m_twoWayChannelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the TwoWayChannel.</p>
     */
    inline void SetTwoWayChannelArn(Aws::String&& value) { m_twoWayChannelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the TwoWayChannel.</p>
     */
    inline void SetTwoWayChannelArn(const char* value) { m_twoWayChannelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the TwoWayChannel.</p>
     */
    inline ReleasePhoneNumberResult& WithTwoWayChannelArn(const Aws::String& value) { SetTwoWayChannelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the TwoWayChannel.</p>
     */
    inline ReleasePhoneNumberResult& WithTwoWayChannelArn(Aws::String&& value) { SetTwoWayChannelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the TwoWayChannel.</p>
     */
    inline ReleasePhoneNumberResult& WithTwoWayChannelArn(const char* value) { SetTwoWayChannelArn(value); return *this;}


    /**
     * <p>By default this is set to false. When an end recipient sends a message that
     * begins with HELP or STOP to one of your dedicated numbers, Amazon Pinpoint
     * automatically replies with a customizable message and adds the end recipient to
     * the OptOutList. When set to true you're responsible for responding to HELP and
     * STOP requests. You're also responsible for tracking and honoring opt-out
     * requests.</p>
     */
    inline bool GetSelfManagedOptOutsEnabled() const{ return m_selfManagedOptOutsEnabled; }

    /**
     * <p>By default this is set to false. When an end recipient sends a message that
     * begins with HELP or STOP to one of your dedicated numbers, Amazon Pinpoint
     * automatically replies with a customizable message and adds the end recipient to
     * the OptOutList. When set to true you're responsible for responding to HELP and
     * STOP requests. You're also responsible for tracking and honoring opt-out
     * requests.</p>
     */
    inline void SetSelfManagedOptOutsEnabled(bool value) { m_selfManagedOptOutsEnabled = value; }

    /**
     * <p>By default this is set to false. When an end recipient sends a message that
     * begins with HELP or STOP to one of your dedicated numbers, Amazon Pinpoint
     * automatically replies with a customizable message and adds the end recipient to
     * the OptOutList. When set to true you're responsible for responding to HELP and
     * STOP requests. You're also responsible for tracking and honoring opt-out
     * requests.</p>
     */
    inline ReleasePhoneNumberResult& WithSelfManagedOptOutsEnabled(bool value) { SetSelfManagedOptOutsEnabled(value); return *this;}


    /**
     * <p>The name of the OptOutList that was associated with the phone number.</p>
     */
    inline const Aws::String& GetOptOutListName() const{ return m_optOutListName; }

    /**
     * <p>The name of the OptOutList that was associated with the phone number.</p>
     */
    inline void SetOptOutListName(const Aws::String& value) { m_optOutListName = value; }

    /**
     * <p>The name of the OptOutList that was associated with the phone number.</p>
     */
    inline void SetOptOutListName(Aws::String&& value) { m_optOutListName = std::move(value); }

    /**
     * <p>The name of the OptOutList that was associated with the phone number.</p>
     */
    inline void SetOptOutListName(const char* value) { m_optOutListName.assign(value); }

    /**
     * <p>The name of the OptOutList that was associated with the phone number.</p>
     */
    inline ReleasePhoneNumberResult& WithOptOutListName(const Aws::String& value) { SetOptOutListName(value); return *this;}

    /**
     * <p>The name of the OptOutList that was associated with the phone number.</p>
     */
    inline ReleasePhoneNumberResult& WithOptOutListName(Aws::String&& value) { SetOptOutListName(std::move(value)); return *this;}

    /**
     * <p>The name of the OptOutList that was associated with the phone number.</p>
     */
    inline ReleasePhoneNumberResult& WithOptOutListName(const char* value) { SetOptOutListName(value); return *this;}


    /**
     * <p>The time when the phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time when the phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p>The time when the phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p>The time when the phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline ReleasePhoneNumberResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time when the phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline ReleasePhoneNumberResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ReleasePhoneNumberResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ReleasePhoneNumberResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ReleasePhoneNumberResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_phoneNumberArn;

    Aws::String m_phoneNumberId;

    Aws::String m_phoneNumber;

    NumberStatus m_status;

    Aws::String m_isoCountryCode;

    MessageType m_messageType;

    Aws::Vector<NumberCapability> m_numberCapabilities;

    NumberType m_numberType;

    Aws::String m_monthlyLeasingPrice;

    bool m_twoWayEnabled;

    Aws::String m_twoWayChannelArn;

    bool m_selfManagedOptOutsEnabled;

    Aws::String m_optOutListName;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
