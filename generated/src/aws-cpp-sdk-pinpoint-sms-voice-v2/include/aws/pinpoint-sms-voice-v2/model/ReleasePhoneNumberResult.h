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


    ///@{
    /**
     * <p>The PhoneNumberArn of the phone number that was released.</p>
     */
    inline const Aws::String& GetPhoneNumberArn() const{ return m_phoneNumberArn; }
    inline void SetPhoneNumberArn(const Aws::String& value) { m_phoneNumberArn = value; }
    inline void SetPhoneNumberArn(Aws::String&& value) { m_phoneNumberArn = std::move(value); }
    inline void SetPhoneNumberArn(const char* value) { m_phoneNumberArn.assign(value); }
    inline ReleasePhoneNumberResult& WithPhoneNumberArn(const Aws::String& value) { SetPhoneNumberArn(value); return *this;}
    inline ReleasePhoneNumberResult& WithPhoneNumberArn(Aws::String&& value) { SetPhoneNumberArn(std::move(value)); return *this;}
    inline ReleasePhoneNumberResult& WithPhoneNumberArn(const char* value) { SetPhoneNumberArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PhoneNumberId of the phone number that was released.</p>
     */
    inline const Aws::String& GetPhoneNumberId() const{ return m_phoneNumberId; }
    inline void SetPhoneNumberId(const Aws::String& value) { m_phoneNumberId = value; }
    inline void SetPhoneNumberId(Aws::String&& value) { m_phoneNumberId = std::move(value); }
    inline void SetPhoneNumberId(const char* value) { m_phoneNumberId.assign(value); }
    inline ReleasePhoneNumberResult& WithPhoneNumberId(const Aws::String& value) { SetPhoneNumberId(value); return *this;}
    inline ReleasePhoneNumberResult& WithPhoneNumberId(Aws::String&& value) { SetPhoneNumberId(std::move(value)); return *this;}
    inline ReleasePhoneNumberResult& WithPhoneNumberId(const char* value) { SetPhoneNumberId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number that was released.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumber = value; }
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumber = std::move(value); }
    inline void SetPhoneNumber(const char* value) { m_phoneNumber.assign(value); }
    inline ReleasePhoneNumberResult& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}
    inline ReleasePhoneNumberResult& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}
    inline ReleasePhoneNumberResult& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the request.</p>
     */
    inline const NumberStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const NumberStatus& value) { m_status = value; }
    inline void SetStatus(NumberStatus&& value) { m_status = std::move(value); }
    inline ReleasePhoneNumberResult& WithStatus(const NumberStatus& value) { SetStatus(value); return *this;}
    inline ReleasePhoneNumberResult& WithStatus(NumberStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline const Aws::String& GetIsoCountryCode() const{ return m_isoCountryCode; }
    inline void SetIsoCountryCode(const Aws::String& value) { m_isoCountryCode = value; }
    inline void SetIsoCountryCode(Aws::String&& value) { m_isoCountryCode = std::move(value); }
    inline void SetIsoCountryCode(const char* value) { m_isoCountryCode.assign(value); }
    inline ReleasePhoneNumberResult& WithIsoCountryCode(const Aws::String& value) { SetIsoCountryCode(value); return *this;}
    inline ReleasePhoneNumberResult& WithIsoCountryCode(Aws::String&& value) { SetIsoCountryCode(std::move(value)); return *this;}
    inline ReleasePhoneNumberResult& WithIsoCountryCode(const char* value) { SetIsoCountryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message type that was associated with the phone number.</p>
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }
    inline void SetMessageType(const MessageType& value) { m_messageType = value; }
    inline void SetMessageType(MessageType&& value) { m_messageType = std::move(value); }
    inline ReleasePhoneNumberResult& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}
    inline ReleasePhoneNumberResult& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the number could be used for text messages, voice, or both.</p>
     */
    inline const Aws::Vector<NumberCapability>& GetNumberCapabilities() const{ return m_numberCapabilities; }
    inline void SetNumberCapabilities(const Aws::Vector<NumberCapability>& value) { m_numberCapabilities = value; }
    inline void SetNumberCapabilities(Aws::Vector<NumberCapability>&& value) { m_numberCapabilities = std::move(value); }
    inline ReleasePhoneNumberResult& WithNumberCapabilities(const Aws::Vector<NumberCapability>& value) { SetNumberCapabilities(value); return *this;}
    inline ReleasePhoneNumberResult& WithNumberCapabilities(Aws::Vector<NumberCapability>&& value) { SetNumberCapabilities(std::move(value)); return *this;}
    inline ReleasePhoneNumberResult& AddNumberCapabilities(const NumberCapability& value) { m_numberCapabilities.push_back(value); return *this; }
    inline ReleasePhoneNumberResult& AddNumberCapabilities(NumberCapability&& value) { m_numberCapabilities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of number that was released.</p>
     */
    inline const NumberType& GetNumberType() const{ return m_numberType; }
    inline void SetNumberType(const NumberType& value) { m_numberType = value; }
    inline void SetNumberType(NumberType&& value) { m_numberType = std::move(value); }
    inline ReleasePhoneNumberResult& WithNumberType(const NumberType& value) { SetNumberType(value); return *this;}
    inline ReleasePhoneNumberResult& WithNumberType(NumberType&& value) { SetNumberType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monthly price of the phone number, in US dollars.</p>
     */
    inline const Aws::String& GetMonthlyLeasingPrice() const{ return m_monthlyLeasingPrice; }
    inline void SetMonthlyLeasingPrice(const Aws::String& value) { m_monthlyLeasingPrice = value; }
    inline void SetMonthlyLeasingPrice(Aws::String&& value) { m_monthlyLeasingPrice = std::move(value); }
    inline void SetMonthlyLeasingPrice(const char* value) { m_monthlyLeasingPrice.assign(value); }
    inline ReleasePhoneNumberResult& WithMonthlyLeasingPrice(const Aws::String& value) { SetMonthlyLeasingPrice(value); return *this;}
    inline ReleasePhoneNumberResult& WithMonthlyLeasingPrice(Aws::String&& value) { SetMonthlyLeasingPrice(std::move(value)); return *this;}
    inline ReleasePhoneNumberResult& WithMonthlyLeasingPrice(const char* value) { SetMonthlyLeasingPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default this is set to false. When set to true you can receive incoming
     * text messages from your end recipients.</p>
     */
    inline bool GetTwoWayEnabled() const{ return m_twoWayEnabled; }
    inline void SetTwoWayEnabled(bool value) { m_twoWayEnabled = value; }
    inline ReleasePhoneNumberResult& WithTwoWayEnabled(bool value) { SetTwoWayEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the TwoWayChannel.</p>
     */
    inline const Aws::String& GetTwoWayChannelArn() const{ return m_twoWayChannelArn; }
    inline void SetTwoWayChannelArn(const Aws::String& value) { m_twoWayChannelArn = value; }
    inline void SetTwoWayChannelArn(Aws::String&& value) { m_twoWayChannelArn = std::move(value); }
    inline void SetTwoWayChannelArn(const char* value) { m_twoWayChannelArn.assign(value); }
    inline ReleasePhoneNumberResult& WithTwoWayChannelArn(const Aws::String& value) { SetTwoWayChannelArn(value); return *this;}
    inline ReleasePhoneNumberResult& WithTwoWayChannelArn(Aws::String&& value) { SetTwoWayChannelArn(std::move(value)); return *this;}
    inline ReleasePhoneNumberResult& WithTwoWayChannelArn(const char* value) { SetTwoWayChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional IAM Role Arn for a service to assume, to be able to post inbound
     * SMS messages.</p>
     */
    inline const Aws::String& GetTwoWayChannelRole() const{ return m_twoWayChannelRole; }
    inline void SetTwoWayChannelRole(const Aws::String& value) { m_twoWayChannelRole = value; }
    inline void SetTwoWayChannelRole(Aws::String&& value) { m_twoWayChannelRole = std::move(value); }
    inline void SetTwoWayChannelRole(const char* value) { m_twoWayChannelRole.assign(value); }
    inline ReleasePhoneNumberResult& WithTwoWayChannelRole(const Aws::String& value) { SetTwoWayChannelRole(value); return *this;}
    inline ReleasePhoneNumberResult& WithTwoWayChannelRole(Aws::String&& value) { SetTwoWayChannelRole(std::move(value)); return *this;}
    inline ReleasePhoneNumberResult& WithTwoWayChannelRole(const char* value) { SetTwoWayChannelRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default this is set to false. When an end recipient sends a message that
     * begins with HELP or STOP to one of your dedicated numbers, AWS End User
     * Messaging SMS and Voice automatically replies with a customizable message and
     * adds the end recipient to the OptOutList. When set to true you're responsible
     * for responding to HELP and STOP requests. You're also responsible for tracking
     * and honoring opt-out requests.</p>
     */
    inline bool GetSelfManagedOptOutsEnabled() const{ return m_selfManagedOptOutsEnabled; }
    inline void SetSelfManagedOptOutsEnabled(bool value) { m_selfManagedOptOutsEnabled = value; }
    inline ReleasePhoneNumberResult& WithSelfManagedOptOutsEnabled(bool value) { SetSelfManagedOptOutsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the OptOutList that was associated with the phone number.</p>
     */
    inline const Aws::String& GetOptOutListName() const{ return m_optOutListName; }
    inline void SetOptOutListName(const Aws::String& value) { m_optOutListName = value; }
    inline void SetOptOutListName(Aws::String&& value) { m_optOutListName = std::move(value); }
    inline void SetOptOutListName(const char* value) { m_optOutListName.assign(value); }
    inline ReleasePhoneNumberResult& WithOptOutListName(const Aws::String& value) { SetOptOutListName(value); return *this;}
    inline ReleasePhoneNumberResult& WithOptOutListName(Aws::String&& value) { SetOptOutListName(std::move(value)); return *this;}
    inline ReleasePhoneNumberResult& WithOptOutListName(const char* value) { SetOptOutListName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline const Aws::String& GetRegistrationId() const{ return m_registrationId; }
    inline void SetRegistrationId(const Aws::String& value) { m_registrationId = value; }
    inline void SetRegistrationId(Aws::String&& value) { m_registrationId = std::move(value); }
    inline void SetRegistrationId(const char* value) { m_registrationId.assign(value); }
    inline ReleasePhoneNumberResult& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}
    inline ReleasePhoneNumberResult& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}
    inline ReleasePhoneNumberResult& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline ReleasePhoneNumberResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline ReleasePhoneNumberResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ReleasePhoneNumberResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ReleasePhoneNumberResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ReleasePhoneNumberResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    Aws::String m_twoWayChannelRole;

    bool m_selfManagedOptOutsEnabled;

    Aws::String m_optOutListName;

    Aws::String m_registrationId;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
