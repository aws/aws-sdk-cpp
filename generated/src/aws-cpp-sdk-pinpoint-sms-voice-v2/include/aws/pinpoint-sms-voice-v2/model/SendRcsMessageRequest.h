/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsFallbackConfiguration.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsMessageContent.h>

#include <utility>

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 */
class SendRcsMessageRequest : public PinpointSMSVoiceV2Request {
 public:
  AWS_PINPOINTSMSVOICEV2_API SendRcsMessageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SendRcsMessage"; }

  AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

  AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The destination phone number in E.164 format.</p>
   */
  inline const Aws::String& GetDestinationPhoneNumber() const { return m_destinationPhoneNumber; }
  inline bool DestinationPhoneNumberHasBeenSet() const { return m_destinationPhoneNumberHasBeenSet; }
  template <typename DestinationPhoneNumberT = Aws::String>
  void SetDestinationPhoneNumber(DestinationPhoneNumberT&& value) {
    m_destinationPhoneNumberHasBeenSet = true;
    m_destinationPhoneNumber = std::forward<DestinationPhoneNumberT>(value);
  }
  template <typename DestinationPhoneNumberT = Aws::String>
  SendRcsMessageRequest& WithDestinationPhoneNumber(DestinationPhoneNumberT&& value) {
    SetDestinationPhoneNumber(std::forward<DestinationPhoneNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The origination identity of the message. This can be either the RcsAgentId,
   * RcsAgentArn, PoolId, or PoolArn.</p>
   */
  inline const Aws::String& GetOriginationIdentity() const { return m_originationIdentity; }
  inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }
  template <typename OriginationIdentityT = Aws::String>
  void SetOriginationIdentity(OriginationIdentityT&& value) {
    m_originationIdentityHasBeenSet = true;
    m_originationIdentity = std::forward<OriginationIdentityT>(value);
  }
  template <typename OriginationIdentityT = Aws::String>
  SendRcsMessageRequest& WithOriginationIdentity(OriginationIdentityT&& value) {
    SetOriginationIdentity(std::forward<OriginationIdentityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content of the RCS message. Contains the message content (text, file,
   * rich card, or carousel) and optional message-level suggested actions.</p>
   */
  inline const RcsMessageContent& GetRcsMessageContent() const { return m_rcsMessageContent; }
  inline bool RcsMessageContentHasBeenSet() const { return m_rcsMessageContentHasBeenSet; }
  template <typename RcsMessageContentT = RcsMessageContent>
  void SetRcsMessageContent(RcsMessageContentT&& value) {
    m_rcsMessageContentHasBeenSet = true;
    m_rcsMessageContent = std::forward<RcsMessageContentT>(value);
  }
  template <typename RcsMessageContentT = RcsMessageContent>
  SendRcsMessageRequest& WithRcsMessageContent(RcsMessageContentT&& value) {
    SetRcsMessageContent(std::forward<RcsMessageContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration in seconds that the RCS message is valid for delivery. If the
   * message cannot be delivered within this duration, it is considered expired.
   * Valid values are 1 to 172800 (48 hours). If a FallbackConfiguration is provided,
   * the fallback is triggered when the duration expires without delivery
   * confirmation.</p>
   */
  inline int GetTimeToLive() const { return m_timeToLive; }
  inline bool TimeToLiveHasBeenSet() const { return m_timeToLiveHasBeenSet; }
  inline void SetTimeToLive(int value) {
    m_timeToLiveHasBeenSet = true;
    m_timeToLive = value;
  }
  inline SendRcsMessageRequest& WithTimeToLive(int value) {
    SetTimeToLive(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The traffic type of the RCS message. Valid values are AUTHENTICATION,
   * TRANSACTION, PROMOTION, SERVICE_REQUEST, and ACKNOWLEDGEMENT. This field is
   * reserved for future use.</p>
   */
  inline const Aws::String& GetMessageTrafficType() const { return m_messageTrafficType; }
  inline bool MessageTrafficTypeHasBeenSet() const { return m_messageTrafficTypeHasBeenSet; }
  template <typename MessageTrafficTypeT = Aws::String>
  void SetMessageTrafficType(MessageTrafficTypeT&& value) {
    m_messageTrafficTypeHasBeenSet = true;
    m_messageTrafficType = std::forward<MessageTrafficTypeT>(value);
  }
  template <typename MessageTrafficTypeT = Aws::String>
  SendRcsMessageRequest& WithMessageTrafficType(MessageTrafficTypeT&& value) {
    SetMessageTrafficType(std::forward<MessageTrafficTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for SMS or MMS fallback when RCS delivery fails. If provided,
   * the service sends a fallback message via the specified channel when the RCS
   * message fails or the TimeToLive expires.</p>
   */
  inline const RcsFallbackConfiguration& GetFallbackConfiguration() const { return m_fallbackConfiguration; }
  inline bool FallbackConfigurationHasBeenSet() const { return m_fallbackConfigurationHasBeenSet; }
  template <typename FallbackConfigurationT = RcsFallbackConfiguration>
  void SetFallbackConfiguration(FallbackConfigurationT&& value) {
    m_fallbackConfigurationHasBeenSet = true;
    m_fallbackConfiguration = std::forward<FallbackConfigurationT>(value);
  }
  template <typename FallbackConfigurationT = RcsFallbackConfiguration>
  SendRcsMessageRequest& WithFallbackConfiguration(FallbackConfigurationT&& value) {
    SetFallbackConfiguration(std::forward<FallbackConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the protect configuration to use.</p>
   */
  inline const Aws::String& GetProtectConfigurationId() const { return m_protectConfigurationId; }
  inline bool ProtectConfigurationIdHasBeenSet() const { return m_protectConfigurationIdHasBeenSet; }
  template <typename ProtectConfigurationIdT = Aws::String>
  void SetProtectConfigurationId(ProtectConfigurationIdT&& value) {
    m_protectConfigurationIdHasBeenSet = true;
    m_protectConfigurationId = std::forward<ProtectConfigurationIdT>(value);
  }
  template <typename ProtectConfigurationIdT = Aws::String>
  SendRcsMessageRequest& WithProtectConfigurationId(ProtectConfigurationIdT&& value) {
    SetProtectConfigurationId(std::forward<ProtectConfigurationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the configuration set to use. This can be either the
   * ConfigurationSetName or ConfigurationSetArn.</p>
   */
  inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
  inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
  template <typename ConfigurationSetNameT = Aws::String>
  void SetConfigurationSetName(ConfigurationSetNameT&& value) {
    m_configurationSetNameHasBeenSet = true;
    m_configurationSetName = std::forward<ConfigurationSetNameT>(value);
  }
  template <typename ConfigurationSetNameT = Aws::String>
  SendRcsMessageRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) {
    SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum amount that you want to spend, in US dollars, per each RCS
   * message.</p>
   */
  inline const Aws::String& GetMaxPrice() const { return m_maxPrice; }
  inline bool MaxPriceHasBeenSet() const { return m_maxPriceHasBeenSet; }
  template <typename MaxPriceT = Aws::String>
  void SetMaxPrice(MaxPriceT&& value) {
    m_maxPriceHasBeenSet = true;
    m_maxPrice = std::forward<MaxPriceT>(value);
  }
  template <typename MaxPriceT = Aws::String>
  SendRcsMessageRequest& WithMaxPrice(MaxPriceT&& value) {
    SetMaxPrice(std::forward<MaxPriceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When set to true, the message is checked and validated, but isn't sent to the
   * end recipient.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline SendRcsMessageRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>You can specify custom data in this field. If you do, that data is logged to
   * the event destination.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetContext() const { return m_context; }
  inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
  template <typename ContextT = Aws::Map<Aws::String, Aws::String>>
  void SetContext(ContextT&& value) {
    m_contextHasBeenSet = true;
    m_context = std::forward<ContextT>(value);
  }
  template <typename ContextT = Aws::Map<Aws::String, Aws::String>>
  SendRcsMessageRequest& WithContext(ContextT&& value) {
    SetContext(std::forward<ContextT>(value));
    return *this;
  }
  template <typename ContextKeyT = Aws::String, typename ContextValueT = Aws::String>
  SendRcsMessageRequest& AddContext(ContextKeyT&& key, ContextValueT&& value) {
    m_contextHasBeenSet = true;
    m_context.emplace(std::forward<ContextKeyT>(key), std::forward<ContextValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Set to true to enable message feedback for the message. When a user receives
   * the message you need to update the message status using
   * <a>PutMessageFeedback</a>.</p>
   */
  inline bool GetMessageFeedbackEnabled() const { return m_messageFeedbackEnabled; }
  inline bool MessageFeedbackEnabledHasBeenSet() const { return m_messageFeedbackEnabledHasBeenSet; }
  inline void SetMessageFeedbackEnabled(bool value) {
    m_messageFeedbackEnabledHasBeenSet = true;
    m_messageFeedbackEnabled = value;
  }
  inline SendRcsMessageRequest& WithMessageFeedbackEnabled(bool value) {
    SetMessageFeedbackEnabled(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_destinationPhoneNumber;

  Aws::String m_originationIdentity;

  RcsMessageContent m_rcsMessageContent;

  int m_timeToLive{0};

  Aws::String m_messageTrafficType;

  RcsFallbackConfiguration m_fallbackConfiguration;

  Aws::String m_protectConfigurationId;

  Aws::String m_configurationSetName;

  Aws::String m_maxPrice;

  bool m_dryRun{false};

  Aws::Map<Aws::String, Aws::String> m_context;

  bool m_messageFeedbackEnabled{false};
  bool m_destinationPhoneNumberHasBeenSet = false;
  bool m_originationIdentityHasBeenSet = false;
  bool m_rcsMessageContentHasBeenSet = false;
  bool m_timeToLiveHasBeenSet = false;
  bool m_messageTrafficTypeHasBeenSet = false;
  bool m_fallbackConfigurationHasBeenSet = false;
  bool m_protectConfigurationIdHasBeenSet = false;
  bool m_configurationSetNameHasBeenSet = false;
  bool m_maxPriceHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
  bool m_contextHasBeenSet = false;
  bool m_messageFeedbackEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
