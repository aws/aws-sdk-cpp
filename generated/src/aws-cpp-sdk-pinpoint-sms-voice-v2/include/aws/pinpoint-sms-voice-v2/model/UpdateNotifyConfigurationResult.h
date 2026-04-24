/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
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
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PinpointSMSVoiceV2 {
namespace Model {
class UpdateNotifyConfigurationResult {
 public:
  AWS_PINPOINTSMSVOICEV2_API UpdateNotifyConfigurationResult() = default;
  AWS_PINPOINTSMSVOICEV2_API UpdateNotifyConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PINPOINTSMSVOICEV2_API UpdateNotifyConfigurationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the notify configuration.</p>
   */
  inline const Aws::String& GetNotifyConfigurationArn() const { return m_notifyConfigurationArn; }
  template <typename NotifyConfigurationArnT = Aws::String>
  void SetNotifyConfigurationArn(NotifyConfigurationArnT&& value) {
    m_notifyConfigurationArnHasBeenSet = true;
    m_notifyConfigurationArn = std::forward<NotifyConfigurationArnT>(value);
  }
  template <typename NotifyConfigurationArnT = Aws::String>
  UpdateNotifyConfigurationResult& WithNotifyConfigurationArn(NotifyConfigurationArnT&& value) {
    SetNotifyConfigurationArn(std::forward<NotifyConfigurationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the notify configuration.</p>
   */
  inline const Aws::String& GetNotifyConfigurationId() const { return m_notifyConfigurationId; }
  template <typename NotifyConfigurationIdT = Aws::String>
  void SetNotifyConfigurationId(NotifyConfigurationIdT&& value) {
    m_notifyConfigurationIdHasBeenSet = true;
    m_notifyConfigurationId = std::forward<NotifyConfigurationIdT>(value);
  }
  template <typename NotifyConfigurationIdT = Aws::String>
  UpdateNotifyConfigurationResult& WithNotifyConfigurationId(NotifyConfigurationIdT&& value) {
    SetNotifyConfigurationId(std::forward<NotifyConfigurationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name associated with the notify configuration.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  UpdateNotifyConfigurationResult& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The use case for the notify configuration.</p>
   */
  inline NotifyConfigurationUseCase GetUseCase() const { return m_useCase; }
  inline void SetUseCase(NotifyConfigurationUseCase value) {
    m_useCaseHasBeenSet = true;
    m_useCase = value;
  }
  inline UpdateNotifyConfigurationResult& WithUseCase(NotifyConfigurationUseCase value) {
    SetUseCase(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default template identifier associated with the notify configuration.</p>
   */
  inline const Aws::String& GetDefaultTemplateId() const { return m_defaultTemplateId; }
  template <typename DefaultTemplateIdT = Aws::String>
  void SetDefaultTemplateId(DefaultTemplateIdT&& value) {
    m_defaultTemplateIdHasBeenSet = true;
    m_defaultTemplateId = std::forward<DefaultTemplateIdT>(value);
  }
  template <typename DefaultTemplateIdT = Aws::String>
  UpdateNotifyConfigurationResult& WithDefaultTemplateId(DefaultTemplateIdT&& value) {
    SetDefaultTemplateId(std::forward<DefaultTemplateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the pool associated with the notify configuration.</p>
   */
  inline const Aws::String& GetPoolId() const { return m_poolId; }
  template <typename PoolIdT = Aws::String>
  void SetPoolId(PoolIdT&& value) {
    m_poolIdHasBeenSet = true;
    m_poolId = std::forward<PoolIdT>(value);
  }
  template <typename PoolIdT = Aws::String>
  UpdateNotifyConfigurationResult& WithPoolId(PoolIdT&& value) {
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
  template <typename EnabledCountriesT = Aws::Vector<Aws::String>>
  void SetEnabledCountries(EnabledCountriesT&& value) {
    m_enabledCountriesHasBeenSet = true;
    m_enabledCountries = std::forward<EnabledCountriesT>(value);
  }
  template <typename EnabledCountriesT = Aws::Vector<Aws::String>>
  UpdateNotifyConfigurationResult& WithEnabledCountries(EnabledCountriesT&& value) {
    SetEnabledCountries(std::forward<EnabledCountriesT>(value));
    return *this;
  }
  template <typename EnabledCountriesT = Aws::String>
  UpdateNotifyConfigurationResult& AddEnabledCountries(EnabledCountriesT&& value) {
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
  template <typename EnabledChannelsT = Aws::Vector<NumberCapability>>
  void SetEnabledChannels(EnabledChannelsT&& value) {
    m_enabledChannelsHasBeenSet = true;
    m_enabledChannels = std::forward<EnabledChannelsT>(value);
  }
  template <typename EnabledChannelsT = Aws::Vector<NumberCapability>>
  UpdateNotifyConfigurationResult& WithEnabledChannels(EnabledChannelsT&& value) {
    SetEnabledChannels(std::forward<EnabledChannelsT>(value));
    return *this;
  }
  inline UpdateNotifyConfigurationResult& AddEnabledChannels(NumberCapability value) {
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
  inline void SetTier(NotifyConfigurationTier value) {
    m_tierHasBeenSet = true;
    m_tier = value;
  }
  inline UpdateNotifyConfigurationResult& WithTier(NotifyConfigurationTier value) {
    SetTier(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tier upgrade status of the notify configuration.</p>
   */
  inline TierUpgradeStatus GetTierUpgradeStatus() const { return m_tierUpgradeStatus; }
  inline void SetTierUpgradeStatus(TierUpgradeStatus value) {
    m_tierUpgradeStatusHasBeenSet = true;
    m_tierUpgradeStatus = value;
  }
  inline UpdateNotifyConfigurationResult& WithTierUpgradeStatus(TierUpgradeStatus value) {
    SetTierUpgradeStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the notify configuration.</p>
   */
  inline NotifyConfigurationStatus GetStatus() const { return m_status; }
  inline void SetStatus(NotifyConfigurationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateNotifyConfigurationResult& WithStatus(NotifyConfigurationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason the notify configuration was rejected, if applicable.</p>
   */
  inline const Aws::String& GetRejectionReason() const { return m_rejectionReason; }
  template <typename RejectionReasonT = Aws::String>
  void SetRejectionReason(RejectionReasonT&& value) {
    m_rejectionReasonHasBeenSet = true;
    m_rejectionReason = std::forward<RejectionReasonT>(value);
  }
  template <typename RejectionReasonT = Aws::String>
  UpdateNotifyConfigurationResult& WithRejectionReason(RejectionReasonT&& value) {
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
  inline void SetDeletionProtectionEnabled(bool value) {
    m_deletionProtectionEnabledHasBeenSet = true;
    m_deletionProtectionEnabled = value;
  }
  inline UpdateNotifyConfigurationResult& WithDeletionProtectionEnabled(bool value) {
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
  template <typename CreatedTimestampT = Aws::Utils::DateTime>
  void SetCreatedTimestamp(CreatedTimestampT&& value) {
    m_createdTimestampHasBeenSet = true;
    m_createdTimestamp = std::forward<CreatedTimestampT>(value);
  }
  template <typename CreatedTimestampT = Aws::Utils::DateTime>
  UpdateNotifyConfigurationResult& WithCreatedTimestamp(CreatedTimestampT&& value) {
    SetCreatedTimestamp(std::forward<CreatedTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  UpdateNotifyConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

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

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
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
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
