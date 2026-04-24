/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyConfigurationStatus.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyConfigurationTier.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyConfigurationUseCase.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberCapability.h>
#include <aws/pinpoint-sms-voice-v2/model/TierUpgradeStatus.h>

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
 * <p>The information for a notify configuration in an Amazon Web Services
 * account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/NotifyConfigurationInformation">AWS
 * API Reference</a></p>
 */
class NotifyConfigurationInformation {
 public:
  AWS_PINPOINTSMSVOICEV2_API NotifyConfigurationInformation() = default;
  AWS_PINPOINTSMSVOICEV2_API NotifyConfigurationInformation(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API NotifyConfigurationInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the notify configuration.</p>
   */
  inline const Aws::String& GetNotifyConfigurationArn() const { return m_notifyConfigurationArn; }
  inline bool NotifyConfigurationArnHasBeenSet() const { return m_notifyConfigurationArnHasBeenSet; }
  template <typename NotifyConfigurationArnT = Aws::String>
  void SetNotifyConfigurationArn(NotifyConfigurationArnT&& value) {
    m_notifyConfigurationArnHasBeenSet = true;
    m_notifyConfigurationArn = std::forward<NotifyConfigurationArnT>(value);
  }
  template <typename NotifyConfigurationArnT = Aws::String>
  NotifyConfigurationInformation& WithNotifyConfigurationArn(NotifyConfigurationArnT&& value) {
    SetNotifyConfigurationArn(std::forward<NotifyConfigurationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the notify configuration.</p>
   */
  inline const Aws::String& GetNotifyConfigurationId() const { return m_notifyConfigurationId; }
  inline bool NotifyConfigurationIdHasBeenSet() const { return m_notifyConfigurationIdHasBeenSet; }
  template <typename NotifyConfigurationIdT = Aws::String>
  void SetNotifyConfigurationId(NotifyConfigurationIdT&& value) {
    m_notifyConfigurationIdHasBeenSet = true;
    m_notifyConfigurationId = std::forward<NotifyConfigurationIdT>(value);
  }
  template <typename NotifyConfigurationIdT = Aws::String>
  NotifyConfigurationInformation& WithNotifyConfigurationId(NotifyConfigurationIdT&& value) {
    SetNotifyConfigurationId(std::forward<NotifyConfigurationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name associated with the notify configuration.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  NotifyConfigurationInformation& WithDisplayName(DisplayNameT&& value) {
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
  inline NotifyConfigurationInformation& WithUseCase(NotifyConfigurationUseCase value) {
    SetUseCase(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default template identifier associated with the notify configuration.</p>
   */
  inline const Aws::String& GetDefaultTemplateId() const { return m_defaultTemplateId; }
  inline bool DefaultTemplateIdHasBeenSet() const { return m_defaultTemplateIdHasBeenSet; }
  template <typename DefaultTemplateIdT = Aws::String>
  void SetDefaultTemplateId(DefaultTemplateIdT&& value) {
    m_defaultTemplateIdHasBeenSet = true;
    m_defaultTemplateId = std::forward<DefaultTemplateIdT>(value);
  }
  template <typename DefaultTemplateIdT = Aws::String>
  NotifyConfigurationInformation& WithDefaultTemplateId(DefaultTemplateIdT&& value) {
    SetDefaultTemplateId(std::forward<DefaultTemplateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the pool associated with the notify configuration.</p>
   */
  inline const Aws::String& GetPoolId() const { return m_poolId; }
  inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
  template <typename PoolIdT = Aws::String>
  void SetPoolId(PoolIdT&& value) {
    m_poolIdHasBeenSet = true;
    m_poolId = std::forward<PoolIdT>(value);
  }
  template <typename PoolIdT = Aws::String>
  NotifyConfigurationInformation& WithPoolId(PoolIdT&& value) {
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
  NotifyConfigurationInformation& WithEnabledCountries(EnabledCountriesT&& value) {
    SetEnabledCountries(std::forward<EnabledCountriesT>(value));
    return *this;
  }
  template <typename EnabledCountriesT = Aws::String>
  NotifyConfigurationInformation& AddEnabledCountries(EnabledCountriesT&& value) {
    m_enabledCountriesHasBeenSet = true;
    m_enabledCountries.emplace_back(std::forward<EnabledCountriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of channels enabled for the notify configuration. Supported values
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
  NotifyConfigurationInformation& WithEnabledChannels(EnabledChannelsT&& value) {
    SetEnabledChannels(std::forward<EnabledChannelsT>(value));
    return *this;
  }
  inline NotifyConfigurationInformation& AddEnabledChannels(NumberCapability value) {
    m_enabledChannelsHasBeenSet = true;
    m_enabledChannels.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tier of the notify configuration.</p>
   */
  inline NotifyConfigurationTier GetTier() const { return m_tier; }
  inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
  inline void SetTier(NotifyConfigurationTier value) {
    m_tierHasBeenSet = true;
    m_tier = value;
  }
  inline NotifyConfigurationInformation& WithTier(NotifyConfigurationTier value) {
    SetTier(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tier upgrade status of the notify configuration.</p>
   */
  inline TierUpgradeStatus GetTierUpgradeStatus() const { return m_tierUpgradeStatus; }
  inline bool TierUpgradeStatusHasBeenSet() const { return m_tierUpgradeStatusHasBeenSet; }
  inline void SetTierUpgradeStatus(TierUpgradeStatus value) {
    m_tierUpgradeStatusHasBeenSet = true;
    m_tierUpgradeStatus = value;
  }
  inline NotifyConfigurationInformation& WithTierUpgradeStatus(TierUpgradeStatus value) {
    SetTierUpgradeStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the notify configuration.</p>
   */
  inline NotifyConfigurationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(NotifyConfigurationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline NotifyConfigurationInformation& WithStatus(NotifyConfigurationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason the notify configuration was rejected, if applicable.</p>
   */
  inline const Aws::String& GetRejectionReason() const { return m_rejectionReason; }
  inline bool RejectionReasonHasBeenSet() const { return m_rejectionReasonHasBeenSet; }
  template <typename RejectionReasonT = Aws::String>
  void SetRejectionReason(RejectionReasonT&& value) {
    m_rejectionReasonHasBeenSet = true;
    m_rejectionReason = std::forward<RejectionReasonT>(value);
  }
  template <typename RejectionReasonT = Aws::String>
  NotifyConfigurationInformation& WithRejectionReason(RejectionReasonT&& value) {
    SetRejectionReason(std::forward<RejectionReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When set to true deletion protection is enabled. By default this is set to
   * false. </p>
   */
  inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
  inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
  inline void SetDeletionProtectionEnabled(bool value) {
    m_deletionProtectionEnabledHasBeenSet = true;
    m_deletionProtectionEnabled = value;
  }
  inline NotifyConfigurationInformation& WithDeletionProtectionEnabled(bool value) {
    SetDeletionProtectionEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the notify configuration was created, in <a
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
  NotifyConfigurationInformation& WithCreatedTimestamp(CreatedTimestampT&& value) {
    SetCreatedTimestamp(std::forward<CreatedTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_notifyConfigurationArn;

  Aws::String m_notifyConfigurationId;

  Aws::String m_displayName;

  NotifyConfigurationUseCase m_useCase{NotifyConfigurationUseCase::NOT_SET};

  Aws::String m_defaultTemplateId;

  Aws::String m_poolId;

  Aws::Vector<Aws::String> m_enabledCountries;

  Aws::Vector<NumberCapability> m_enabledChannels;

  NotifyConfigurationTier m_tier{NotifyConfigurationTier::NOT_SET};

  TierUpgradeStatus m_tierUpgradeStatus{TierUpgradeStatus::NOT_SET};

  NotifyConfigurationStatus m_status{NotifyConfigurationStatus::NOT_SET};

  Aws::String m_rejectionReason;

  bool m_deletionProtectionEnabled{false};

  Aws::Utils::DateTime m_createdTimestamp{};
  bool m_notifyConfigurationArnHasBeenSet = false;
  bool m_notifyConfigurationIdHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_useCaseHasBeenSet = false;
  bool m_defaultTemplateIdHasBeenSet = false;
  bool m_poolIdHasBeenSet = false;
  bool m_enabledCountriesHasBeenSet = false;
  bool m_enabledChannelsHasBeenSet = false;
  bool m_tierHasBeenSet = false;
  bool m_tierUpgradeStatusHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_rejectionReasonHasBeenSet = false;
  bool m_deletionProtectionEnabledHasBeenSet = false;
  bool m_createdTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
