/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberStatus.h>
#include <aws/pinpoint-sms-voice-v2/model/MessageType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/RequestableNumberType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberCapability.h>
#include <aws/pinpoint-sms-voice-v2/model/Tag.h>
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
  class RequestPhoneNumberResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API RequestPhoneNumberResult();
    AWS_PINPOINTSMSVOICEV2_API RequestPhoneNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API RequestPhoneNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the requested phone number.</p>
     */
    inline const Aws::String& GetPhoneNumberArn() const{ return m_phoneNumberArn; }
    inline void SetPhoneNumberArn(const Aws::String& value) { m_phoneNumberArn = value; }
    inline void SetPhoneNumberArn(Aws::String&& value) { m_phoneNumberArn = std::move(value); }
    inline void SetPhoneNumberArn(const char* value) { m_phoneNumberArn.assign(value); }
    inline RequestPhoneNumberResult& WithPhoneNumberArn(const Aws::String& value) { SetPhoneNumberArn(value); return *this;}
    inline RequestPhoneNumberResult& WithPhoneNumberArn(Aws::String&& value) { SetPhoneNumberArn(std::move(value)); return *this;}
    inline RequestPhoneNumberResult& WithPhoneNumberArn(const char* value) { SetPhoneNumberArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the new phone number.</p>
     */
    inline const Aws::String& GetPhoneNumberId() const{ return m_phoneNumberId; }
    inline void SetPhoneNumberId(const Aws::String& value) { m_phoneNumberId = value; }
    inline void SetPhoneNumberId(Aws::String&& value) { m_phoneNumberId = std::move(value); }
    inline void SetPhoneNumberId(const char* value) { m_phoneNumberId.assign(value); }
    inline RequestPhoneNumberResult& WithPhoneNumberId(const Aws::String& value) { SetPhoneNumberId(value); return *this;}
    inline RequestPhoneNumberResult& WithPhoneNumberId(Aws::String&& value) { SetPhoneNumberId(std::move(value)); return *this;}
    inline RequestPhoneNumberResult& WithPhoneNumberId(const char* value) { SetPhoneNumberId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new phone number that was requested.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumber = value; }
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumber = std::move(value); }
    inline void SetPhoneNumber(const char* value) { m_phoneNumber.assign(value); }
    inline RequestPhoneNumberResult& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}
    inline RequestPhoneNumberResult& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}
    inline RequestPhoneNumberResult& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the request.</p>
     */
    inline const NumberStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const NumberStatus& value) { m_status = value; }
    inline void SetStatus(NumberStatus&& value) { m_status = std::move(value); }
    inline RequestPhoneNumberResult& WithStatus(const NumberStatus& value) { SetStatus(value); return *this;}
    inline RequestPhoneNumberResult& WithStatus(NumberStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline const Aws::String& GetIsoCountryCode() const{ return m_isoCountryCode; }
    inline void SetIsoCountryCode(const Aws::String& value) { m_isoCountryCode = value; }
    inline void SetIsoCountryCode(Aws::String&& value) { m_isoCountryCode = std::move(value); }
    inline void SetIsoCountryCode(const char* value) { m_isoCountryCode.assign(value); }
    inline RequestPhoneNumberResult& WithIsoCountryCode(const Aws::String& value) { SetIsoCountryCode(value); return *this;}
    inline RequestPhoneNumberResult& WithIsoCountryCode(Aws::String&& value) { SetIsoCountryCode(std::move(value)); return *this;}
    inline RequestPhoneNumberResult& WithIsoCountryCode(const char* value) { SetIsoCountryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline const MessageType& GetMessageType() const{ return m_messageType; }
    inline void SetMessageType(const MessageType& value) { m_messageType = value; }
    inline void SetMessageType(MessageType&& value) { m_messageType = std::move(value); }
    inline RequestPhoneNumberResult& WithMessageType(const MessageType& value) { SetMessageType(value); return *this;}
    inline RequestPhoneNumberResult& WithMessageType(MessageType&& value) { SetMessageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the phone number will be used for text messages, voice messages
     * or both. </p>
     */
    inline const Aws::Vector<NumberCapability>& GetNumberCapabilities() const{ return m_numberCapabilities; }
    inline void SetNumberCapabilities(const Aws::Vector<NumberCapability>& value) { m_numberCapabilities = value; }
    inline void SetNumberCapabilities(Aws::Vector<NumberCapability>&& value) { m_numberCapabilities = std::move(value); }
    inline RequestPhoneNumberResult& WithNumberCapabilities(const Aws::Vector<NumberCapability>& value) { SetNumberCapabilities(value); return *this;}
    inline RequestPhoneNumberResult& WithNumberCapabilities(Aws::Vector<NumberCapability>&& value) { SetNumberCapabilities(std::move(value)); return *this;}
    inline RequestPhoneNumberResult& AddNumberCapabilities(const NumberCapability& value) { m_numberCapabilities.push_back(value); return *this; }
    inline RequestPhoneNumberResult& AddNumberCapabilities(NumberCapability&& value) { m_numberCapabilities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of number that was released.</p>
     */
    inline const RequestableNumberType& GetNumberType() const{ return m_numberType; }
    inline void SetNumberType(const RequestableNumberType& value) { m_numberType = value; }
    inline void SetNumberType(RequestableNumberType&& value) { m_numberType = std::move(value); }
    inline RequestPhoneNumberResult& WithNumberType(const RequestableNumberType& value) { SetNumberType(value); return *this;}
    inline RequestPhoneNumberResult& WithNumberType(RequestableNumberType&& value) { SetNumberType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monthly price, in US dollars, to lease the phone number.</p>
     */
    inline const Aws::String& GetMonthlyLeasingPrice() const{ return m_monthlyLeasingPrice; }
    inline void SetMonthlyLeasingPrice(const Aws::String& value) { m_monthlyLeasingPrice = value; }
    inline void SetMonthlyLeasingPrice(Aws::String&& value) { m_monthlyLeasingPrice = std::move(value); }
    inline void SetMonthlyLeasingPrice(const char* value) { m_monthlyLeasingPrice.assign(value); }
    inline RequestPhoneNumberResult& WithMonthlyLeasingPrice(const Aws::String& value) { SetMonthlyLeasingPrice(value); return *this;}
    inline RequestPhoneNumberResult& WithMonthlyLeasingPrice(Aws::String&& value) { SetMonthlyLeasingPrice(std::move(value)); return *this;}
    inline RequestPhoneNumberResult& WithMonthlyLeasingPrice(const char* value) { SetMonthlyLeasingPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default this is set to false. When set to true you can receive incoming
     * text messages from your end recipients.</p>
     */
    inline bool GetTwoWayEnabled() const{ return m_twoWayEnabled; }
    inline void SetTwoWayEnabled(bool value) { m_twoWayEnabled = value; }
    inline RequestPhoneNumberResult& WithTwoWayEnabled(bool value) { SetTwoWayEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN used to identify the two way channel.</p>
     */
    inline const Aws::String& GetTwoWayChannelArn() const{ return m_twoWayChannelArn; }
    inline void SetTwoWayChannelArn(const Aws::String& value) { m_twoWayChannelArn = value; }
    inline void SetTwoWayChannelArn(Aws::String&& value) { m_twoWayChannelArn = std::move(value); }
    inline void SetTwoWayChannelArn(const char* value) { m_twoWayChannelArn.assign(value); }
    inline RequestPhoneNumberResult& WithTwoWayChannelArn(const Aws::String& value) { SetTwoWayChannelArn(value); return *this;}
    inline RequestPhoneNumberResult& WithTwoWayChannelArn(Aws::String&& value) { SetTwoWayChannelArn(std::move(value)); return *this;}
    inline RequestPhoneNumberResult& WithTwoWayChannelArn(const char* value) { SetTwoWayChannelArn(value); return *this;}
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
    inline RequestPhoneNumberResult& WithTwoWayChannelRole(const Aws::String& value) { SetTwoWayChannelRole(value); return *this;}
    inline RequestPhoneNumberResult& WithTwoWayChannelRole(Aws::String&& value) { SetTwoWayChannelRole(std::move(value)); return *this;}
    inline RequestPhoneNumberResult& WithTwoWayChannelRole(const char* value) { SetTwoWayChannelRole(value); return *this;}
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
    inline RequestPhoneNumberResult& WithSelfManagedOptOutsEnabled(bool value) { SetSelfManagedOptOutsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the OptOutList that is associated with the requested phone
     * number.</p>
     */
    inline const Aws::String& GetOptOutListName() const{ return m_optOutListName; }
    inline void SetOptOutListName(const Aws::String& value) { m_optOutListName = value; }
    inline void SetOptOutListName(Aws::String&& value) { m_optOutListName = std::move(value); }
    inline void SetOptOutListName(const char* value) { m_optOutListName.assign(value); }
    inline RequestPhoneNumberResult& WithOptOutListName(const Aws::String& value) { SetOptOutListName(value); return *this;}
    inline RequestPhoneNumberResult& WithOptOutListName(Aws::String&& value) { SetOptOutListName(std::move(value)); return *this;}
    inline RequestPhoneNumberResult& WithOptOutListName(const char* value) { SetOptOutListName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default this is set to false. When set to true the phone number can't be
     * deleted. </p>
     */
    inline bool GetDeletionProtectionEnabled() const{ return m_deletionProtectionEnabled; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabled = value; }
    inline RequestPhoneNumberResult& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the pool associated with the phone number </p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }
    inline void SetPoolId(const Aws::String& value) { m_poolId = value; }
    inline void SetPoolId(Aws::String&& value) { m_poolId = std::move(value); }
    inline void SetPoolId(const char* value) { m_poolId.assign(value); }
    inline RequestPhoneNumberResult& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}
    inline RequestPhoneNumberResult& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}
    inline RequestPhoneNumberResult& WithPoolId(const char* value) { SetPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline const Aws::String& GetRegistrationId() const{ return m_registrationId; }
    inline void SetRegistrationId(const Aws::String& value) { m_registrationId = value; }
    inline void SetRegistrationId(Aws::String&& value) { m_registrationId = std::move(value); }
    inline void SetRegistrationId(const char* value) { m_registrationId.assign(value); }
    inline RequestPhoneNumberResult& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}
    inline RequestPhoneNumberResult& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}
    inline RequestPhoneNumberResult& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key and value pair tags that are associated with the phone
     * number.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline RequestPhoneNumberResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline RequestPhoneNumberResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline RequestPhoneNumberResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline RequestPhoneNumberResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time when the phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline RequestPhoneNumberResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline RequestPhoneNumberResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RequestPhoneNumberResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RequestPhoneNumberResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RequestPhoneNumberResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_phoneNumberArn;

    Aws::String m_phoneNumberId;

    Aws::String m_phoneNumber;

    NumberStatus m_status;

    Aws::String m_isoCountryCode;

    MessageType m_messageType;

    Aws::Vector<NumberCapability> m_numberCapabilities;

    RequestableNumberType m_numberType;

    Aws::String m_monthlyLeasingPrice;

    bool m_twoWayEnabled;

    Aws::String m_twoWayChannelArn;

    Aws::String m_twoWayChannelRole;

    bool m_selfManagedOptOutsEnabled;

    Aws::String m_optOutListName;

    bool m_deletionProtectionEnabled;

    Aws::String m_poolId;

    Aws::String m_registrationId;

    Aws::Vector<Tag> m_tags;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
