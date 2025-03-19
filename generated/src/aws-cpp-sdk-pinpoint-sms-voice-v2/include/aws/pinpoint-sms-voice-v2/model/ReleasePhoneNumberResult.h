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
    AWS_PINPOINTSMSVOICEV2_API ReleasePhoneNumberResult() = default;
    AWS_PINPOINTSMSVOICEV2_API ReleasePhoneNumberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API ReleasePhoneNumberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The PhoneNumberArn of the phone number that was released.</p>
     */
    inline const Aws::String& GetPhoneNumberArn() const { return m_phoneNumberArn; }
    template<typename PhoneNumberArnT = Aws::String>
    void SetPhoneNumberArn(PhoneNumberArnT&& value) { m_phoneNumberArnHasBeenSet = true; m_phoneNumberArn = std::forward<PhoneNumberArnT>(value); }
    template<typename PhoneNumberArnT = Aws::String>
    ReleasePhoneNumberResult& WithPhoneNumberArn(PhoneNumberArnT&& value) { SetPhoneNumberArn(std::forward<PhoneNumberArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PhoneNumberId of the phone number that was released.</p>
     */
    inline const Aws::String& GetPhoneNumberId() const { return m_phoneNumberId; }
    template<typename PhoneNumberIdT = Aws::String>
    void SetPhoneNumberId(PhoneNumberIdT&& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = std::forward<PhoneNumberIdT>(value); }
    template<typename PhoneNumberIdT = Aws::String>
    ReleasePhoneNumberResult& WithPhoneNumberId(PhoneNumberIdT&& value) { SetPhoneNumberId(std::forward<PhoneNumberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number that was released.</p>
     */
    inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
    template<typename PhoneNumberT = Aws::String>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::String>
    ReleasePhoneNumberResult& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the request.</p>
     */
    inline NumberStatus GetStatus() const { return m_status; }
    inline void SetStatus(NumberStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ReleasePhoneNumberResult& WithStatus(NumberStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline const Aws::String& GetIsoCountryCode() const { return m_isoCountryCode; }
    template<typename IsoCountryCodeT = Aws::String>
    void SetIsoCountryCode(IsoCountryCodeT&& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = std::forward<IsoCountryCodeT>(value); }
    template<typename IsoCountryCodeT = Aws::String>
    ReleasePhoneNumberResult& WithIsoCountryCode(IsoCountryCodeT&& value) { SetIsoCountryCode(std::forward<IsoCountryCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message type that was associated with the phone number.</p>
     */
    inline MessageType GetMessageType() const { return m_messageType; }
    inline void SetMessageType(MessageType value) { m_messageTypeHasBeenSet = true; m_messageType = value; }
    inline ReleasePhoneNumberResult& WithMessageType(MessageType value) { SetMessageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the number could be used for text messages, voice, or both.</p>
     */
    inline const Aws::Vector<NumberCapability>& GetNumberCapabilities() const { return m_numberCapabilities; }
    template<typename NumberCapabilitiesT = Aws::Vector<NumberCapability>>
    void SetNumberCapabilities(NumberCapabilitiesT&& value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities = std::forward<NumberCapabilitiesT>(value); }
    template<typename NumberCapabilitiesT = Aws::Vector<NumberCapability>>
    ReleasePhoneNumberResult& WithNumberCapabilities(NumberCapabilitiesT&& value) { SetNumberCapabilities(std::forward<NumberCapabilitiesT>(value)); return *this;}
    inline ReleasePhoneNumberResult& AddNumberCapabilities(NumberCapability value) { m_numberCapabilitiesHasBeenSet = true; m_numberCapabilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of number that was released.</p>
     */
    inline NumberType GetNumberType() const { return m_numberType; }
    inline void SetNumberType(NumberType value) { m_numberTypeHasBeenSet = true; m_numberType = value; }
    inline ReleasePhoneNumberResult& WithNumberType(NumberType value) { SetNumberType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monthly price of the phone number, in US dollars.</p>
     */
    inline const Aws::String& GetMonthlyLeasingPrice() const { return m_monthlyLeasingPrice; }
    template<typename MonthlyLeasingPriceT = Aws::String>
    void SetMonthlyLeasingPrice(MonthlyLeasingPriceT&& value) { m_monthlyLeasingPriceHasBeenSet = true; m_monthlyLeasingPrice = std::forward<MonthlyLeasingPriceT>(value); }
    template<typename MonthlyLeasingPriceT = Aws::String>
    ReleasePhoneNumberResult& WithMonthlyLeasingPrice(MonthlyLeasingPriceT&& value) { SetMonthlyLeasingPrice(std::forward<MonthlyLeasingPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default this is set to false. When set to true you can receive incoming
     * text messages from your end recipients.</p>
     */
    inline bool GetTwoWayEnabled() const { return m_twoWayEnabled; }
    inline void SetTwoWayEnabled(bool value) { m_twoWayEnabledHasBeenSet = true; m_twoWayEnabled = value; }
    inline ReleasePhoneNumberResult& WithTwoWayEnabled(bool value) { SetTwoWayEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the TwoWayChannel.</p>
     */
    inline const Aws::String& GetTwoWayChannelArn() const { return m_twoWayChannelArn; }
    template<typename TwoWayChannelArnT = Aws::String>
    void SetTwoWayChannelArn(TwoWayChannelArnT&& value) { m_twoWayChannelArnHasBeenSet = true; m_twoWayChannelArn = std::forward<TwoWayChannelArnT>(value); }
    template<typename TwoWayChannelArnT = Aws::String>
    ReleasePhoneNumberResult& WithTwoWayChannelArn(TwoWayChannelArnT&& value) { SetTwoWayChannelArn(std::forward<TwoWayChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional IAM Role Arn for a service to assume, to be able to post inbound
     * SMS messages.</p>
     */
    inline const Aws::String& GetTwoWayChannelRole() const { return m_twoWayChannelRole; }
    template<typename TwoWayChannelRoleT = Aws::String>
    void SetTwoWayChannelRole(TwoWayChannelRoleT&& value) { m_twoWayChannelRoleHasBeenSet = true; m_twoWayChannelRole = std::forward<TwoWayChannelRoleT>(value); }
    template<typename TwoWayChannelRoleT = Aws::String>
    ReleasePhoneNumberResult& WithTwoWayChannelRole(TwoWayChannelRoleT&& value) { SetTwoWayChannelRole(std::forward<TwoWayChannelRoleT>(value)); return *this;}
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
    inline bool GetSelfManagedOptOutsEnabled() const { return m_selfManagedOptOutsEnabled; }
    inline void SetSelfManagedOptOutsEnabled(bool value) { m_selfManagedOptOutsEnabledHasBeenSet = true; m_selfManagedOptOutsEnabled = value; }
    inline ReleasePhoneNumberResult& WithSelfManagedOptOutsEnabled(bool value) { SetSelfManagedOptOutsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the OptOutList that was associated with the phone number.</p>
     */
    inline const Aws::String& GetOptOutListName() const { return m_optOutListName; }
    template<typename OptOutListNameT = Aws::String>
    void SetOptOutListName(OptOutListNameT&& value) { m_optOutListNameHasBeenSet = true; m_optOutListName = std::forward<OptOutListNameT>(value); }
    template<typename OptOutListNameT = Aws::String>
    ReleasePhoneNumberResult& WithOptOutListName(OptOutListNameT&& value) { SetOptOutListName(std::forward<OptOutListNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline const Aws::String& GetRegistrationId() const { return m_registrationId; }
    template<typename RegistrationIdT = Aws::String>
    void SetRegistrationId(RegistrationIdT&& value) { m_registrationIdHasBeenSet = true; m_registrationId = std::forward<RegistrationIdT>(value); }
    template<typename RegistrationIdT = Aws::String>
    ReleasePhoneNumberResult& WithRegistrationId(RegistrationIdT&& value) { SetRegistrationId(std::forward<RegistrationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the phone number was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    ReleasePhoneNumberResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ReleasePhoneNumberResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_phoneNumberArn;
    bool m_phoneNumberArnHasBeenSet = false;

    Aws::String m_phoneNumberId;
    bool m_phoneNumberIdHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    NumberStatus m_status{NumberStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_isoCountryCode;
    bool m_isoCountryCodeHasBeenSet = false;

    MessageType m_messageType{MessageType::NOT_SET};
    bool m_messageTypeHasBeenSet = false;

    Aws::Vector<NumberCapability> m_numberCapabilities;
    bool m_numberCapabilitiesHasBeenSet = false;

    NumberType m_numberType{NumberType::NOT_SET};
    bool m_numberTypeHasBeenSet = false;

    Aws::String m_monthlyLeasingPrice;
    bool m_monthlyLeasingPriceHasBeenSet = false;

    bool m_twoWayEnabled{false};
    bool m_twoWayEnabledHasBeenSet = false;

    Aws::String m_twoWayChannelArn;
    bool m_twoWayChannelArnHasBeenSet = false;

    Aws::String m_twoWayChannelRole;
    bool m_twoWayChannelRoleHasBeenSet = false;

    bool m_selfManagedOptOutsEnabled{false};
    bool m_selfManagedOptOutsEnabledHasBeenSet = false;

    Aws::String m_optOutListName;
    bool m_optOutListNameHasBeenSet = false;

    Aws::String m_registrationId;
    bool m_registrationIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
