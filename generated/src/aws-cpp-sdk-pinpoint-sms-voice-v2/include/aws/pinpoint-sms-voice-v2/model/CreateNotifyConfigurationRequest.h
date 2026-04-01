/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyConfigurationUseCase.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberCapability.h>
#include <aws/pinpoint-sms-voice-v2/model/Tag.h>

#include <utility>

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 */
class CreateNotifyConfigurationRequest : public PinpointSMSVoiceV2Request {
 public:
  AWS_PINPOINTSMSVOICEV2_API CreateNotifyConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateNotifyConfiguration"; }

  AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

  AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The display name to associate with the notify configuration.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  CreateNotifyConfigurationRequest& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The use case for the notify configuration.</p>
   */
  inline NotifyConfigurationUseCase GetUseCase() const { return m_useCase; }
  inline bool UseCaseHasBeenSet() const { return m_useCaseHasBeenSet; }
  inline void SetUseCase(NotifyConfigurationUseCase value) {
    m_useCaseHasBeenSet = true;
    m_useCase = value;
  }
  inline CreateNotifyConfigurationRequest& WithUseCase(NotifyConfigurationUseCase value) {
    SetUseCase(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default template identifier to associate with the notify configuration.
   * If specified, this template is used when sending messages without an explicit
   * template identifier.</p>
   */
  inline const Aws::String& GetDefaultTemplateId() const { return m_defaultTemplateId; }
  inline bool DefaultTemplateIdHasBeenSet() const { return m_defaultTemplateIdHasBeenSet; }
  template <typename DefaultTemplateIdT = Aws::String>
  void SetDefaultTemplateId(DefaultTemplateIdT&& value) {
    m_defaultTemplateIdHasBeenSet = true;
    m_defaultTemplateId = std::forward<DefaultTemplateIdT>(value);
  }
  template <typename DefaultTemplateIdT = Aws::String>
  CreateNotifyConfigurationRequest& WithDefaultTemplateId(DefaultTemplateIdT&& value) {
    SetDefaultTemplateId(std::forward<DefaultTemplateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the pool to associate with the notify configuration.</p>
   */
  inline const Aws::String& GetPoolId() const { return m_poolId; }
  inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
  template <typename PoolIdT = Aws::String>
  void SetPoolId(PoolIdT&& value) {
    m_poolIdHasBeenSet = true;
    m_poolId = std::forward<PoolIdT>(value);
  }
  template <typename PoolIdT = Aws::String>
  CreateNotifyConfigurationRequest& WithPoolId(PoolIdT&& value) {
    SetPoolId(std::forward<PoolIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of two-character ISO country codes, in ISO 3166-1 alpha-2 format,
   * that are enabled for the notify configuration.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEnabledCountries() const { return m_enabledCountries; }
  inline bool EnabledCountriesHasBeenSet() const { return m_enabledCountriesHasBeenSet; }
  template <typename EnabledCountriesT = Aws::Vector<Aws::String>>
  void SetEnabledCountries(EnabledCountriesT&& value) {
    m_enabledCountriesHasBeenSet = true;
    m_enabledCountries = std::forward<EnabledCountriesT>(value);
  }
  template <typename EnabledCountriesT = Aws::Vector<Aws::String>>
  CreateNotifyConfigurationRequest& WithEnabledCountries(EnabledCountriesT&& value) {
    SetEnabledCountries(std::forward<EnabledCountriesT>(value));
    return *this;
  }
  template <typename EnabledCountriesT = Aws::String>
  CreateNotifyConfigurationRequest& AddEnabledCountries(EnabledCountriesT&& value) {
    m_enabledCountriesHasBeenSet = true;
    m_enabledCountries.emplace_back(std::forward<EnabledCountriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of channels to enable for the notify configuration. Supported values
   * include <code>SMS</code> and <code>VOICE</code>.</p>
   */
  inline const Aws::Vector<NumberCapability>& GetEnabledChannels() const { return m_enabledChannels; }
  inline bool EnabledChannelsHasBeenSet() const { return m_enabledChannelsHasBeenSet; }
  template <typename EnabledChannelsT = Aws::Vector<NumberCapability>>
  void SetEnabledChannels(EnabledChannelsT&& value) {
    m_enabledChannelsHasBeenSet = true;
    m_enabledChannels = std::forward<EnabledChannelsT>(value);
  }
  template <typename EnabledChannelsT = Aws::Vector<NumberCapability>>
  CreateNotifyConfigurationRequest& WithEnabledChannels(EnabledChannelsT&& value) {
    SetEnabledChannels(std::forward<EnabledChannelsT>(value));
    return *this;
  }
  inline CreateNotifyConfigurationRequest& AddEnabledChannels(NumberCapability value) {
    m_enabledChannelsHasBeenSet = true;
    m_enabledChannels.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>By default this is set to false. When set to true the notify configuration
   * can't be deleted. You can change this value using the
   * <a>UpdateNotifyConfiguration</a> action.</p>
   */
  inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
  inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
  inline void SetDeletionProtectionEnabled(bool value) {
    m_deletionProtectionEnabledHasBeenSet = true;
    m_deletionProtectionEnabled = value;
  }
  inline CreateNotifyConfigurationRequest& WithDeletionProtectionEnabled(bool value) {
    SetDeletionProtectionEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
   * of the request. If you don't specify a client token, a randomly generated token
   * is used for the request to ensure idempotency.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateNotifyConfigurationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of tags (key and value pairs) associated with the notify
   * configuration.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateNotifyConfigurationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateNotifyConfigurationRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_displayName;

  NotifyConfigurationUseCase m_useCase{NotifyConfigurationUseCase::NOT_SET};

  Aws::String m_defaultTemplateId;

  Aws::String m_poolId;

  Aws::Vector<Aws::String> m_enabledCountries;

  Aws::Vector<NumberCapability> m_enabledChannels;

  bool m_deletionProtectionEnabled{false};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Vector<Tag> m_tags;
  bool m_displayNameHasBeenSet = false;
  bool m_useCaseHasBeenSet = false;
  bool m_defaultTemplateIdHasBeenSet = false;
  bool m_poolIdHasBeenSet = false;
  bool m_enabledCountriesHasBeenSet = false;
  bool m_enabledChannelsHasBeenSet = false;
  bool m_deletionProtectionEnabledHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
