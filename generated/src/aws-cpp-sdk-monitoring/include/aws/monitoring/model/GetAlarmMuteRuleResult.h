/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/AlarmMuteRuleStatus.h>
#include <aws/monitoring/model/MuteTargets.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/Rule.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatch {
namespace Model {
class GetAlarmMuteRuleResult {
 public:
  AWS_CLOUDWATCH_API GetAlarmMuteRuleResult() = default;
  AWS_CLOUDWATCH_API GetAlarmMuteRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_CLOUDWATCH_API GetAlarmMuteRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The name of the alarm mute rule.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetAlarmMuteRuleResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the alarm mute rule.</p>
   */
  inline const Aws::String& GetAlarmMuteRuleArn() const { return m_alarmMuteRuleArn; }
  template <typename AlarmMuteRuleArnT = Aws::String>
  void SetAlarmMuteRuleArn(AlarmMuteRuleArnT&& value) {
    m_alarmMuteRuleArnHasBeenSet = true;
    m_alarmMuteRuleArn = std::forward<AlarmMuteRuleArnT>(value);
  }
  template <typename AlarmMuteRuleArnT = Aws::String>
  GetAlarmMuteRuleResult& WithAlarmMuteRuleArn(AlarmMuteRuleArnT&& value) {
    SetAlarmMuteRuleArn(std::forward<AlarmMuteRuleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the alarm mute rule.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetAlarmMuteRuleResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that defines when and how long alarms are muted.</p>
   */
  inline const Rule& GetRule() const { return m_rule; }
  template <typename RuleT = Rule>
  void SetRule(RuleT&& value) {
    m_ruleHasBeenSet = true;
    m_rule = std::forward<RuleT>(value);
  }
  template <typename RuleT = Rule>
  GetAlarmMuteRuleResult& WithRule(RuleT&& value) {
    SetRule(std::forward<RuleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies which alarms this rule applies to.</p>
   */
  inline const MuteTargets& GetMuteTargets() const { return m_muteTargets; }
  template <typename MuteTargetsT = MuteTargets>
  void SetMuteTargets(MuteTargetsT&& value) {
    m_muteTargetsHasBeenSet = true;
    m_muteTargets = std::forward<MuteTargetsT>(value);
  }
  template <typename MuteTargetsT = MuteTargets>
  GetAlarmMuteRuleResult& WithMuteTargets(MuteTargetsT&& value) {
    SetMuteTargets(std::forward<MuteTargetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the mute rule becomes active. If not set, the rule is
   * active immediately.</p>
   */
  inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
  template <typename StartDateT = Aws::Utils::DateTime>
  void SetStartDate(StartDateT&& value) {
    m_startDateHasBeenSet = true;
    m_startDate = std::forward<StartDateT>(value);
  }
  template <typename StartDateT = Aws::Utils::DateTime>
  GetAlarmMuteRuleResult& WithStartDate(StartDateT&& value) {
    SetStartDate(std::forward<StartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the mute rule expires and is no longer evaluated.</p>
   */
  inline const Aws::Utils::DateTime& GetExpireDate() const { return m_expireDate; }
  template <typename ExpireDateT = Aws::Utils::DateTime>
  void SetExpireDate(ExpireDateT&& value) {
    m_expireDateHasBeenSet = true;
    m_expireDate = std::forward<ExpireDateT>(value);
  }
  template <typename ExpireDateT = Aws::Utils::DateTime>
  GetAlarmMuteRuleResult& WithExpireDate(ExpireDateT&& value) {
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
  inline void SetStatus(AlarmMuteRuleStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetAlarmMuteRuleResult& WithStatus(AlarmMuteRuleStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the mute rule was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
  template <typename LastUpdatedTimestampT = Aws::Utils::DateTime>
  void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) {
    m_lastUpdatedTimestampHasBeenSet = true;
    m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value);
  }
  template <typename LastUpdatedTimestampT = Aws::Utils::DateTime>
  GetAlarmMuteRuleResult& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) {
    SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the mute rule is one-time or recurring. Valid values are
   * <code>ONE_TIME</code> or <code>RECURRING</code>.</p>
   */
  inline const Aws::String& GetMuteType() const { return m_muteType; }
  template <typename MuteTypeT = Aws::String>
  void SetMuteType(MuteTypeT&& value) {
    m_muteTypeHasBeenSet = true;
    m_muteType = std::forward<MuteTypeT>(value);
  }
  template <typename MuteTypeT = Aws::String>
  GetAlarmMuteRuleResult& WithMuteType(MuteTypeT&& value) {
    SetMuteType(std::forward<MuteTypeT>(value));
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
  GetAlarmMuteRuleResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  GetAlarmMuteRuleResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_name;

  Aws::String m_alarmMuteRuleArn;

  Aws::String m_description;

  Rule m_rule;

  MuteTargets m_muteTargets;

  Aws::Utils::DateTime m_startDate{};

  Aws::Utils::DateTime m_expireDate{};

  AlarmMuteRuleStatus m_status{AlarmMuteRuleStatus::NOT_SET};

  Aws::Utils::DateTime m_lastUpdatedTimestamp{};

  Aws::String m_muteType;

  Aws::String m_requestId;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nameHasBeenSet = false;
  bool m_alarmMuteRuleArnHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_ruleHasBeenSet = false;
  bool m_muteTargetsHasBeenSet = false;
  bool m_startDateHasBeenSet = false;
  bool m_expireDateHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_lastUpdatedTimestampHasBeenSet = false;
  bool m_muteTypeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
