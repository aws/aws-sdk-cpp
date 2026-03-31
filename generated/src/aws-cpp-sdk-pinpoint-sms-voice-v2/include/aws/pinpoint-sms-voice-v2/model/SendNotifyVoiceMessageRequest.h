/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/VoiceId.h>

#include <utility>

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 */
class SendNotifyVoiceMessageRequest : public PinpointSMSVoiceV2Request {
 public:
  AWS_PINPOINTSMSVOICEV2_API SendNotifyVoiceMessageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SendNotifyVoiceMessage"; }

  AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

  AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the notify configuration to use for sending the
   * message. This can be either the NotifyConfigurationId or
   * NotifyConfigurationArn.</p>
   */
  inline const Aws::String& GetNotifyConfigurationId() const { return m_notifyConfigurationId; }
  inline bool NotifyConfigurationIdHasBeenSet() const { return m_notifyConfigurationIdHasBeenSet; }
  template <typename NotifyConfigurationIdT = Aws::String>
  void SetNotifyConfigurationId(NotifyConfigurationIdT&& value) {
    m_notifyConfigurationIdHasBeenSet = true;
    m_notifyConfigurationId = std::forward<NotifyConfigurationIdT>(value);
  }
  template <typename NotifyConfigurationIdT = Aws::String>
  SendNotifyVoiceMessageRequest& WithNotifyConfigurationId(NotifyConfigurationIdT&& value) {
    SetNotifyConfigurationId(std::forward<NotifyConfigurationIdT>(value));
    return *this;
  }
  ///@}

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
  SendNotifyVoiceMessageRequest& WithDestinationPhoneNumber(DestinationPhoneNumberT&& value) {
    SetDestinationPhoneNumber(std::forward<DestinationPhoneNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the template to use for the message.</p>
   */
  inline const Aws::String& GetTemplateId() const { return m_templateId; }
  inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
  template <typename TemplateIdT = Aws::String>
  void SetTemplateId(TemplateIdT&& value) {
    m_templateIdHasBeenSet = true;
    m_templateId = std::forward<TemplateIdT>(value);
  }
  template <typename TemplateIdT = Aws::String>
  SendNotifyVoiceMessageRequest& WithTemplateId(TemplateIdT&& value) {
    SetTemplateId(std::forward<TemplateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of template variable names and their values. All variable values are
   * passed as strings regardless of the declared variable type. For example, pass
   * <code>INTEGER</code> values as <code>"42"</code> and <code>BOOLEAN</code> values
   * as <code>"true"</code> or <code>"false"</code>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTemplateVariables() const { return m_templateVariables; }
  inline bool TemplateVariablesHasBeenSet() const { return m_templateVariablesHasBeenSet; }
  template <typename TemplateVariablesT = Aws::Map<Aws::String, Aws::String>>
  void SetTemplateVariables(TemplateVariablesT&& value) {
    m_templateVariablesHasBeenSet = true;
    m_templateVariables = std::forward<TemplateVariablesT>(value);
  }
  template <typename TemplateVariablesT = Aws::Map<Aws::String, Aws::String>>
  SendNotifyVoiceMessageRequest& WithTemplateVariables(TemplateVariablesT&& value) {
    SetTemplateVariables(std::forward<TemplateVariablesT>(value));
    return *this;
  }
  template <typename TemplateVariablesKeyT = Aws::String, typename TemplateVariablesValueT = Aws::String>
  SendNotifyVoiceMessageRequest& AddTemplateVariables(TemplateVariablesKeyT&& key, TemplateVariablesValueT&& value) {
    m_templateVariablesHasBeenSet = true;
    m_templateVariables.emplace(std::forward<TemplateVariablesKeyT>(key), std::forward<TemplateVariablesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The voice ID to use for the voice message.</p>
   */
  inline VoiceId GetVoiceId() const { return m_voiceId; }
  inline bool VoiceIdHasBeenSet() const { return m_voiceIdHasBeenSet; }
  inline void SetVoiceId(VoiceId value) {
    m_voiceIdHasBeenSet = true;
    m_voiceId = value;
  }
  inline SendNotifyVoiceMessageRequest& WithVoiceId(VoiceId value) {
    SetVoiceId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How long the voice message is valid for, in seconds. By default this is 72
   * hours.</p>
   */
  inline int GetTimeToLive() const { return m_timeToLive; }
  inline bool TimeToLiveHasBeenSet() const { return m_timeToLiveHasBeenSet; }
  inline void SetTimeToLive(int value) {
    m_timeToLiveHasBeenSet = true;
    m_timeToLive = value;
  }
  inline SendNotifyVoiceMessageRequest& WithTimeToLive(int value) {
    SetTimeToLive(value);
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
  SendNotifyVoiceMessageRequest& WithContext(ContextT&& value) {
    SetContext(std::forward<ContextT>(value));
    return *this;
  }
  template <typename ContextKeyT = Aws::String, typename ContextValueT = Aws::String>
  SendNotifyVoiceMessageRequest& AddContext(ContextKeyT&& key, ContextValueT&& value) {
    m_contextHasBeenSet = true;
    m_context.emplace(std::forward<ContextKeyT>(key), std::forward<ContextValueT>(value));
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
  SendNotifyVoiceMessageRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) {
    SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value));
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
  inline SendNotifyVoiceMessageRequest& WithDryRun(bool value) {
    SetDryRun(value);
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
  inline SendNotifyVoiceMessageRequest& WithMessageFeedbackEnabled(bool value) {
    SetMessageFeedbackEnabled(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_notifyConfigurationId;

  Aws::String m_destinationPhoneNumber;

  Aws::String m_templateId;

  Aws::Map<Aws::String, Aws::String> m_templateVariables;

  VoiceId m_voiceId{VoiceId::NOT_SET};

  int m_timeToLive{0};

  Aws::Map<Aws::String, Aws::String> m_context;

  Aws::String m_configurationSetName;

  bool m_dryRun{false};

  bool m_messageFeedbackEnabled{false};
  bool m_notifyConfigurationIdHasBeenSet = false;
  bool m_destinationPhoneNumberHasBeenSet = false;
  bool m_templateIdHasBeenSet = false;
  bool m_templateVariablesHasBeenSet = false;
  bool m_voiceIdHasBeenSet = false;
  bool m_timeToLiveHasBeenSet = false;
  bool m_contextHasBeenSet = false;
  bool m_configurationSetNameHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
  bool m_messageFeedbackEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
