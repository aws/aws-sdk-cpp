/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberCapability.h>

#include <utility>

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 */
class UpdateNotifyConfigurationRequest : public PinpointSMSVoiceV2Request {
 public:
  AWS_PINPOINTSMSVOICEV2_API UpdateNotifyConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateNotifyConfiguration"; }

  AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

  AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The identifier of the notify configuration to update. The
   * NotifyConfigurationId can be found using the <a>DescribeNotifyConfigurations</a>
   * operation.</p>
   */
  inline const Aws::String& GetNotifyConfigurationId() const { return m_notifyConfigurationId; }
  inline bool NotifyConfigurationIdHasBeenSet() const { return m_notifyConfigurationIdHasBeenSet; }
  template <typename NotifyConfigurationIdT = Aws::String>
  void SetNotifyConfigurationId(NotifyConfigurationIdT&& value) {
    m_notifyConfigurationIdHasBeenSet = true;
    m_notifyConfigurationId = std::forward<NotifyConfigurationIdT>(value);
  }
  template <typename NotifyConfigurationIdT = Aws::String>
  UpdateNotifyConfigurationRequest& WithNotifyConfigurationId(NotifyConfigurationIdT&& value) {
    SetNotifyConfigurationId(std::forward<NotifyConfigurationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The template ID to set as the default, or the special value
   * UNSET_DEFAULT_TEMPLATE to clear the current default template.</p>
   */
  inline const Aws::String& GetDefaultTemplateId() const { return m_defaultTemplateId; }
  inline bool DefaultTemplateIdHasBeenSet() const { return m_defaultTemplateIdHasBeenSet; }
  template <typename DefaultTemplateIdT = Aws::String>
  void SetDefaultTemplateId(DefaultTemplateIdT&& value) {
    m_defaultTemplateIdHasBeenSet = true;
    m_defaultTemplateId = std::forward<DefaultTemplateIdT>(value);
  }
  template <typename DefaultTemplateIdT = Aws::String>
  UpdateNotifyConfigurationRequest& WithDefaultTemplateId(DefaultTemplateIdT&& value) {
    SetDefaultTemplateId(std::forward<DefaultTemplateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pool ID or ARN to associate, or the special value
   * UNSET_DEFAULT_POOL_FOR_NOTIFY to clear the current default pool.</p>
   */
  inline const Aws::String& GetPoolId() const { return m_poolId; }
  inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
  template <typename PoolIdT = Aws::String>
  void SetPoolId(PoolIdT&& value) {
    m_poolIdHasBeenSet = true;
    m_poolId = std::forward<PoolIdT>(value);
  }
  template <typename PoolIdT = Aws::String>
  UpdateNotifyConfigurationRequest& WithPoolId(PoolIdT&& value) {
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
  UpdateNotifyConfigurationRequest& WithEnabledCountries(EnabledCountriesT&& value) {
    SetEnabledCountries(std::forward<EnabledCountriesT>(value));
    return *this;
  }
  template <typename EnabledCountriesT = Aws::String>
  UpdateNotifyConfigurationRequest& AddEnabledCountries(EnabledCountriesT&& value) {
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
  UpdateNotifyConfigurationRequest& WithEnabledChannels(EnabledChannelsT&& value) {
    SetEnabledChannels(std::forward<EnabledChannelsT>(value));
    return *this;
  }
  inline UpdateNotifyConfigurationRequest& AddEnabledChannels(NumberCapability value) {
    m_enabledChannelsHasBeenSet = true;
    m_enabledChannels.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When set to true the notify configuration can't be deleted.</p>
   */
  inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
  inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
  inline void SetDeletionProtectionEnabled(bool value) {
    m_deletionProtectionEnabledHasBeenSet = true;
    m_deletionProtectionEnabled = value;
  }
  inline UpdateNotifyConfigurationRequest& WithDeletionProtectionEnabled(bool value) {
    SetDeletionProtectionEnabled(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_notifyConfigurationId;

  Aws::String m_defaultTemplateId;

  Aws::String m_poolId;

  Aws::Vector<Aws::String> m_enabledCountries;

  Aws::Vector<NumberCapability> m_enabledChannels;

  bool m_deletionProtectionEnabled{false};
  bool m_notifyConfigurationIdHasBeenSet = false;
  bool m_defaultTemplateIdHasBeenSet = false;
  bool m_poolIdHasBeenSet = false;
  bool m_enabledCountriesHasBeenSet = false;
  bool m_enabledChannelsHasBeenSet = false;
  bool m_deletionProtectionEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
