/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyConfigurationTier.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyTemplateStatus.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyTemplateType.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberCapability.h>
#include <aws/pinpoint-sms-voice-v2/model/TemplateVariableMetadata.h>
#include <aws/pinpoint-sms-voice-v2/model/VoiceId.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 * <p>The information for a system-managed notify template in an Amazon Web
 * Services account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/NotifyTemplateInformation">AWS
 * API Reference</a></p>
 */
class NotifyTemplateInformation {
 public:
  AWS_PINPOINTSMSVOICEV2_API NotifyTemplateInformation() = default;
  AWS_PINPOINTSMSVOICEV2_API NotifyTemplateInformation(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API NotifyTemplateInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the template.</p>
   */
  inline const Aws::String& GetTemplateId() const { return m_templateId; }
  inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
  template <typename TemplateIdT = Aws::String>
  void SetTemplateId(TemplateIdT&& value) {
    m_templateIdHasBeenSet = true;
    m_templateId = std::forward<TemplateIdT>(value);
  }
  template <typename TemplateIdT = Aws::String>
  NotifyTemplateInformation& WithTemplateId(TemplateIdT&& value) {
    SetTemplateId(std::forward<TemplateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the template.</p>
   */
  inline int GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  inline void SetVersion(int value) {
    m_versionHasBeenSet = true;
    m_version = value;
  }
  inline NotifyTemplateInformation& WithVersion(int value) {
    SetVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the template.</p>
   */
  inline NotifyTemplateType GetTemplateType() const { return m_templateType; }
  inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
  inline void SetTemplateType(NotifyTemplateType value) {
    m_templateTypeHasBeenSet = true;
    m_templateType = value;
  }
  inline NotifyTemplateInformation& WithTemplateType(NotifyTemplateType value) {
    SetTemplateType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The channels for the template. Supported values are <code>SMS</code> and
   * <code>VOICE</code>.</p>
   */
  inline const Aws::Vector<NumberCapability>& GetChannels() const { return m_channels; }
  inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
  template <typename ChannelsT = Aws::Vector<NumberCapability>>
  void SetChannels(ChannelsT&& value) {
    m_channelsHasBeenSet = true;
    m_channels = std::forward<ChannelsT>(value);
  }
  template <typename ChannelsT = Aws::Vector<NumberCapability>>
  NotifyTemplateInformation& WithChannels(ChannelsT&& value) {
    SetChannels(std::forward<ChannelsT>(value));
    return *this;
  }
  inline NotifyTemplateInformation& AddChannels(NumberCapability value) {
    m_channelsHasBeenSet = true;
    m_channels.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tier access level for the template.</p>
   */
  inline const Aws::Vector<NotifyConfigurationTier>& GetTierAccess() const { return m_tierAccess; }
  inline bool TierAccessHasBeenSet() const { return m_tierAccessHasBeenSet; }
  template <typename TierAccessT = Aws::Vector<NotifyConfigurationTier>>
  void SetTierAccess(TierAccessT&& value) {
    m_tierAccessHasBeenSet = true;
    m_tierAccess = std::forward<TierAccessT>(value);
  }
  template <typename TierAccessT = Aws::Vector<NotifyConfigurationTier>>
  NotifyTemplateInformation& WithTierAccess(TierAccessT&& value) {
    SetTierAccess(std::forward<TierAccessT>(value));
    return *this;
  }
  inline NotifyTemplateInformation& AddTierAccess(NotifyConfigurationTier value) {
    m_tierAccessHasBeenSet = true;
    m_tierAccess.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the template.</p>
   */
  inline NotifyTemplateStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(NotifyTemplateStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline NotifyTemplateInformation& WithStatus(NotifyTemplateStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of supported country codes for the template.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSupportedCountries() const { return m_supportedCountries; }
  inline bool SupportedCountriesHasBeenSet() const { return m_supportedCountriesHasBeenSet; }
  template <typename SupportedCountriesT = Aws::Vector<Aws::String>>
  void SetSupportedCountries(SupportedCountriesT&& value) {
    m_supportedCountriesHasBeenSet = true;
    m_supportedCountries = std::forward<SupportedCountriesT>(value);
  }
  template <typename SupportedCountriesT = Aws::Vector<Aws::String>>
  NotifyTemplateInformation& WithSupportedCountries(SupportedCountriesT&& value) {
    SetSupportedCountries(std::forward<SupportedCountriesT>(value));
    return *this;
  }
  template <typename SupportedCountriesT = Aws::String>
  NotifyTemplateInformation& AddSupportedCountries(SupportedCountriesT&& value) {
    m_supportedCountriesHasBeenSet = true;
    m_supportedCountries.emplace_back(std::forward<SupportedCountriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The language code for the template.</p>
   */
  inline const Aws::String& GetLanguageCode() const { return m_languageCode; }
  inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
  template <typename LanguageCodeT = Aws::String>
  void SetLanguageCode(LanguageCodeT&& value) {
    m_languageCodeHasBeenSet = true;
    m_languageCode = std::forward<LanguageCodeT>(value);
  }
  template <typename LanguageCodeT = Aws::String>
  NotifyTemplateInformation& WithLanguageCode(LanguageCodeT&& value) {
    SetLanguageCode(std::forward<LanguageCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content of the template.</p>
   */
  inline const Aws::String& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::String>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::String>
  NotifyTemplateInformation& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of template variable metadata for the template.</p>
   */
  inline const Aws::Map<Aws::String, TemplateVariableMetadata>& GetVariables() const { return m_variables; }
  inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
  template <typename VariablesT = Aws::Map<Aws::String, TemplateVariableMetadata>>
  void SetVariables(VariablesT&& value) {
    m_variablesHasBeenSet = true;
    m_variables = std::forward<VariablesT>(value);
  }
  template <typename VariablesT = Aws::Map<Aws::String, TemplateVariableMetadata>>
  NotifyTemplateInformation& WithVariables(VariablesT&& value) {
    SetVariables(std::forward<VariablesT>(value));
    return *this;
  }
  template <typename VariablesKeyT = Aws::String, typename VariablesValueT = TemplateVariableMetadata>
  NotifyTemplateInformation& AddVariables(VariablesKeyT&& key, VariablesValueT&& value) {
    m_variablesHasBeenSet = true;
    m_variables.emplace(std::forward<VariablesKeyT>(key), std::forward<VariablesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of supported voice IDs for voice templates.</p>
   */
  inline const Aws::Vector<VoiceId>& GetSupportedVoiceIds() const { return m_supportedVoiceIds; }
  inline bool SupportedVoiceIdsHasBeenSet() const { return m_supportedVoiceIdsHasBeenSet; }
  template <typename SupportedVoiceIdsT = Aws::Vector<VoiceId>>
  void SetSupportedVoiceIds(SupportedVoiceIdsT&& value) {
    m_supportedVoiceIdsHasBeenSet = true;
    m_supportedVoiceIds = std::forward<SupportedVoiceIdsT>(value);
  }
  template <typename SupportedVoiceIdsT = Aws::Vector<VoiceId>>
  NotifyTemplateInformation& WithSupportedVoiceIds(SupportedVoiceIdsT&& value) {
    SetSupportedVoiceIds(std::forward<SupportedVoiceIdsT>(value));
    return *this;
  }
  inline NotifyTemplateInformation& AddSupportedVoiceIds(VoiceId value) {
    m_supportedVoiceIdsHasBeenSet = true;
    m_supportedVoiceIds.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the notify template was created, in <a
   * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
  inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
  template <typename CreatedTimestampT = Aws::Utils::DateTime>
  void SetCreatedTimestamp(CreatedTimestampT&& value) {
    m_createdTimestampHasBeenSet = true;
    m_createdTimestamp = std::forward<CreatedTimestampT>(value);
  }
  template <typename CreatedTimestampT = Aws::Utils::DateTime>
  NotifyTemplateInformation& WithCreatedTimestamp(CreatedTimestampT&& value) {
    SetCreatedTimestamp(std::forward<CreatedTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_templateId;

  int m_version{0};

  NotifyTemplateType m_templateType{NotifyTemplateType::NOT_SET};

  Aws::Vector<NumberCapability> m_channels;

  Aws::Vector<NotifyConfigurationTier> m_tierAccess;

  NotifyTemplateStatus m_status{NotifyTemplateStatus::NOT_SET};

  Aws::Vector<Aws::String> m_supportedCountries;

  Aws::String m_languageCode;

  Aws::String m_content;

  Aws::Map<Aws::String, TemplateVariableMetadata> m_variables;

  Aws::Vector<VoiceId> m_supportedVoiceIds;

  Aws::Utils::DateTime m_createdTimestamp{};
  bool m_templateIdHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_templateTypeHasBeenSet = false;
  bool m_channelsHasBeenSet = false;
  bool m_tierAccessHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_supportedCountriesHasBeenSet = false;
  bool m_languageCodeHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_variablesHasBeenSet = false;
  bool m_supportedVoiceIdsHasBeenSet = false;
  bool m_createdTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
