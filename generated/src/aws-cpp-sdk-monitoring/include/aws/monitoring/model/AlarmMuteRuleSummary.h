/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/AlarmMuteRuleStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatch {
namespace Model {

/**
 * <p>Summary information about an alarm mute rule, including its name, status, and
 * configuration details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/AlarmMuteRuleSummary">AWS
 * API Reference</a></p>
 */
class AlarmMuteRuleSummary {
 public:
  AWS_CLOUDWATCH_API AlarmMuteRuleSummary() = default;
  AWS_CLOUDWATCH_API AlarmMuteRuleSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API AlarmMuteRuleSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the alarm mute rule.</p>
   */
  inline const Aws::String& GetAlarmMuteRuleArn() const { return m_alarmMuteRuleArn; }
  inline bool AlarmMuteRuleArnHasBeenSet() const { return m_alarmMuteRuleArnHasBeenSet; }
  template <typename AlarmMuteRuleArnT = Aws::String>
  void SetAlarmMuteRuleArn(AlarmMuteRuleArnT&& value) {
    m_alarmMuteRuleArnHasBeenSet = true;
    m_alarmMuteRuleArn = std::forward<AlarmMuteRuleArnT>(value);
  }
  template <typename AlarmMuteRuleArnT = Aws::String>
  AlarmMuteRuleSummary& WithAlarmMuteRuleArn(AlarmMuteRuleArnT&& value) {
    SetAlarmMuteRuleArn(std::forward<AlarmMuteRuleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the mute rule expires and is no longer evaluated. This
   * field is only present if an expiration date was configured.</p>
   */
  inline const Aws::Utils::DateTime& GetExpireDate() const { return m_expireDate; }
  inline bool ExpireDateHasBeenSet() const { return m_expireDateHasBeenSet; }
  template <typename ExpireDateT = Aws::Utils::DateTime>
  void SetExpireDate(ExpireDateT&& value) {
    m_expireDateHasBeenSet = true;
    m_expireDate = std::forward<ExpireDateT>(value);
  }
  template <typename ExpireDateT = Aws::Utils::DateTime>
  AlarmMuteRuleSummary& WithExpireDate(ExpireDateT&& value) {
    SetExpireDate(std::forward<ExpireDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the alarm mute rule. Valid values are
   * <code>SCHEDULED</code>, <code>ACTIVE</code>, or <code>EXPIRED</code>.</p>
   */
  inline AlarmMuteRuleStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AlarmMuteRuleStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AlarmMuteRuleSummary& WithStatus(AlarmMuteRuleStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the mute rule is one-time or recurring. Valid values are
   * <code>ONE_TIME</code> or <code>RECURRING</code>.</p>
   */
  inline const Aws::String& GetMuteType() const { return m_muteType; }
  inline bool MuteTypeHasBeenSet() const { return m_muteTypeHasBeenSet; }
  template <typename MuteTypeT = Aws::String>
  void SetMuteType(MuteTypeT&& value) {
    m_muteTypeHasBeenSet = true;
    m_muteType = std::forward<MuteTypeT>(value);
  }
  template <typename MuteTypeT = Aws::String>
  AlarmMuteRuleSummary& WithMuteType(MuteTypeT&& value) {
    SetMuteType(std::forward<MuteTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the mute rule was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
  inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
  template <typename LastUpdatedTimestampT = Aws::Utils::DateTime>
  void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) {
    m_lastUpdatedTimestampHasBeenSet = true;
    m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value);
  }
  template <typename LastUpdatedTimestampT = Aws::Utils::DateTime>
  AlarmMuteRuleSummary& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) {
    SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_alarmMuteRuleArn;

  Aws::Utils::DateTime m_expireDate{};

  AlarmMuteRuleStatus m_status{AlarmMuteRuleStatus::NOT_SET};

  Aws::String m_muteType;

  Aws::Utils::DateTime m_lastUpdatedTimestamp{};
  bool m_alarmMuteRuleArnHasBeenSet = false;
  bool m_expireDateHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_muteTypeHasBeenSet = false;
  bool m_lastUpdatedTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
