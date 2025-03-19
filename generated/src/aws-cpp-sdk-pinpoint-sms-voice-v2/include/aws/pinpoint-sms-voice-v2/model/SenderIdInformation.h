/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/MessageType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>The information for all SenderIds in an Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SenderIdInformation">AWS
   * API Reference</a></p>
   */
  class SenderIdInformation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SenderIdInformation() = default;
    AWS_PINPOINTSMSVOICEV2_API SenderIdInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API SenderIdInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with the SenderId.</p>
     */
    inline const Aws::String& GetSenderIdArn() const { return m_senderIdArn; }
    inline bool SenderIdArnHasBeenSet() const { return m_senderIdArnHasBeenSet; }
    template<typename SenderIdArnT = Aws::String>
    void SetSenderIdArn(SenderIdArnT&& value) { m_senderIdArnHasBeenSet = true; m_senderIdArn = std::forward<SenderIdArnT>(value); }
    template<typename SenderIdArnT = Aws::String>
    SenderIdInformation& WithSenderIdArn(SenderIdArnT&& value) { SetSenderIdArn(std::forward<SenderIdArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alphanumeric sender ID in a specific country that you'd like to
     * describe.</p>
     */
    inline const Aws::String& GetSenderId() const { return m_senderId; }
    inline bool SenderIdHasBeenSet() const { return m_senderIdHasBeenSet; }
    template<typename SenderIdT = Aws::String>
    void SetSenderId(SenderIdT&& value) { m_senderIdHasBeenSet = true; m_senderId = std::forward<SenderIdT>(value); }
    template<typename SenderIdT = Aws::String>
    SenderIdInformation& WithSenderId(SenderIdT&& value) { SetSenderId(std::forward<SenderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region. </p>
     */
    inline const Aws::String& GetIsoCountryCode() const { return m_isoCountryCode; }
    inline bool IsoCountryCodeHasBeenSet() const { return m_isoCountryCodeHasBeenSet; }
    template<typename IsoCountryCodeT = Aws::String>
    void SetIsoCountryCode(IsoCountryCodeT&& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = std::forward<IsoCountryCodeT>(value); }
    template<typename IsoCountryCodeT = Aws::String>
    SenderIdInformation& WithIsoCountryCode(IsoCountryCodeT&& value) { SetIsoCountryCode(std::forward<IsoCountryCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of message. Valid values are TRANSACTIONAL for messages that are
     * critical or time-sensitive and PROMOTIONAL for messages that aren't critical or
     * time-sensitive.</p>
     */
    inline const Aws::Vector<MessageType>& GetMessageTypes() const { return m_messageTypes; }
    inline bool MessageTypesHasBeenSet() const { return m_messageTypesHasBeenSet; }
    template<typename MessageTypesT = Aws::Vector<MessageType>>
    void SetMessageTypes(MessageTypesT&& value) { m_messageTypesHasBeenSet = true; m_messageTypes = std::forward<MessageTypesT>(value); }
    template<typename MessageTypesT = Aws::Vector<MessageType>>
    SenderIdInformation& WithMessageTypes(MessageTypesT&& value) { SetMessageTypes(std::forward<MessageTypesT>(value)); return *this;}
    inline SenderIdInformation& AddMessageTypes(MessageType value) { m_messageTypesHasBeenSet = true; m_messageTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The monthly leasing price, in US dollars.</p>
     */
    inline const Aws::String& GetMonthlyLeasingPrice() const { return m_monthlyLeasingPrice; }
    inline bool MonthlyLeasingPriceHasBeenSet() const { return m_monthlyLeasingPriceHasBeenSet; }
    template<typename MonthlyLeasingPriceT = Aws::String>
    void SetMonthlyLeasingPrice(MonthlyLeasingPriceT&& value) { m_monthlyLeasingPriceHasBeenSet = true; m_monthlyLeasingPrice = std::forward<MonthlyLeasingPriceT>(value); }
    template<typename MonthlyLeasingPriceT = Aws::String>
    SenderIdInformation& WithMonthlyLeasingPrice(MonthlyLeasingPriceT&& value) { SetMonthlyLeasingPrice(std::forward<MonthlyLeasingPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default this is set to false. When set to true the sender ID can't be
     * deleted.</p>
     */
    inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
    inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabledHasBeenSet = true; m_deletionProtectionEnabled = value; }
    inline SenderIdInformation& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if the sender ID is registered.</p>
     */
    inline bool GetRegistered() const { return m_registered; }
    inline bool RegisteredHasBeenSet() const { return m_registeredHasBeenSet; }
    inline void SetRegistered(bool value) { m_registeredHasBeenSet = true; m_registered = value; }
    inline SenderIdInformation& WithRegistered(bool value) { SetRegistered(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline const Aws::String& GetRegistrationId() const { return m_registrationId; }
    inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
    template<typename RegistrationIdT = Aws::String>
    void SetRegistrationId(RegistrationIdT&& value) { m_registrationIdHasBeenSet = true; m_registrationId = std::forward<RegistrationIdT>(value); }
    template<typename RegistrationIdT = Aws::String>
    SenderIdInformation& WithRegistrationId(RegistrationIdT&& value) { SetRegistrationId(std::forward<RegistrationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_senderIdArn;
    bool m_senderIdArnHasBeenSet = false;

    Aws::String m_senderId;
    bool m_senderIdHasBeenSet = false;

    Aws::String m_isoCountryCode;
    bool m_isoCountryCodeHasBeenSet = false;

    Aws::Vector<MessageType> m_messageTypes;
    bool m_messageTypesHasBeenSet = false;

    Aws::String m_monthlyLeasingPrice;
    bool m_monthlyLeasingPriceHasBeenSet = false;

    bool m_deletionProtectionEnabled{false};
    bool m_deletionProtectionEnabledHasBeenSet = false;

    bool m_registered{false};
    bool m_registeredHasBeenSet = false;

    Aws::String m_registrationId;
    bool m_registrationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
