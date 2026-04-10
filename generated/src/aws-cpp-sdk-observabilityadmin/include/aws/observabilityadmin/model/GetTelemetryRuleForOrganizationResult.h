/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/RegionStatus.h>
#include <aws/observabilityadmin/model/TelemetryRule.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {
class GetTelemetryRuleForOrganizationResult {
 public:
  AWS_OBSERVABILITYADMIN_API GetTelemetryRuleForOrganizationResult() = default;
  AWS_OBSERVABILITYADMIN_API GetTelemetryRuleForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OBSERVABILITYADMIN_API GetTelemetryRuleForOrganizationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The name of the organization telemetry rule. </p>
   */
  inline const Aws::String& GetRuleName() const { return m_ruleName; }
  template <typename RuleNameT = Aws::String>
  void SetRuleName(RuleNameT&& value) {
    m_ruleNameHasBeenSet = true;
    m_ruleName = std::forward<RuleNameT>(value);
  }
  template <typename RuleNameT = Aws::String>
  GetTelemetryRuleForOrganizationResult& WithRuleName(RuleNameT&& value) {
    SetRuleName(std::forward<RuleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the organization telemetry rule. </p>
   */
  inline const Aws::String& GetRuleArn() const { return m_ruleArn; }
  template <typename RuleArnT = Aws::String>
  void SetRuleArn(RuleArnT&& value) {
    m_ruleArnHasBeenSet = true;
    m_ruleArn = std::forward<RuleArnT>(value);
  }
  template <typename RuleArnT = Aws::String>
  GetTelemetryRuleForOrganizationResult& WithRuleArn(RuleArnT&& value) {
    SetRuleArn(std::forward<RuleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp when the organization telemetry rule was created. </p>
   */
  inline long long GetCreatedTimeStamp() const { return m_createdTimeStamp; }
  inline void SetCreatedTimeStamp(long long value) {
    m_createdTimeStampHasBeenSet = true;
    m_createdTimeStamp = value;
  }
  inline GetTelemetryRuleForOrganizationResult& WithCreatedTimeStamp(long long value) {
    SetCreatedTimeStamp(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp when the organization telemetry rule was last updated. </p>
   */
  inline long long GetLastUpdateTimeStamp() const { return m_lastUpdateTimeStamp; }
  inline void SetLastUpdateTimeStamp(long long value) {
    m_lastUpdateTimeStampHasBeenSet = true;
    m_lastUpdateTimeStamp = value;
  }
  inline GetTelemetryRuleForOrganizationResult& WithLastUpdateTimeStamp(long long value) {
    SetLastUpdateTimeStamp(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The configuration details of the organization telemetry rule. </p>
   */
  inline const TelemetryRule& GetTelemetryRule() const { return m_telemetryRule; }
  template <typename TelemetryRuleT = TelemetryRule>
  void SetTelemetryRule(TelemetryRuleT&& value) {
    m_telemetryRuleHasBeenSet = true;
    m_telemetryRule = std::forward<TelemetryRuleT>(value);
  }
  template <typename TelemetryRuleT = TelemetryRule>
  GetTelemetryRuleForOrganizationResult& WithTelemetryRule(TelemetryRuleT&& value) {
    SetTelemetryRule(std::forward<TelemetryRuleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Web Services Region where the organization telemetry rule was
   * originally created. For replicated rules in spoke regions, this indicates the
   * region that manages the rule. For rules created without multi-region scope, this
   * field is not present. </p>
   */
  inline const Aws::String& GetHomeRegion() const { return m_homeRegion; }
  template <typename HomeRegionT = Aws::String>
  void SetHomeRegion(HomeRegionT&& value) {
    m_homeRegionHasBeenSet = true;
    m_homeRegion = std::forward<HomeRegionT>(value);
  }
  template <typename HomeRegionT = Aws::String>
  GetTelemetryRuleForOrganizationResult& WithHomeRegion(HomeRegionT&& value) {
    SetHomeRegion(std::forward<HomeRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Indicates whether this organization telemetry rule is a replica that was
   * created in this region through multi-region fan-out from the home region.
   * Replicated rules cannot be directly updated or deleted in the spoke region. To
   * modify a replicated rule, make changes in the home region. </p>
   */
  inline bool GetIsReplicated() const { return m_isReplicated; }
  inline void SetIsReplicated(bool value) {
    m_isReplicatedHasBeenSet = true;
    m_isReplicated = value;
  }
  inline GetTelemetryRuleForOrganizationResult& WithIsReplicated(bool value) {
    SetIsReplicated(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A list of per-region replication statuses for the organization telemetry
   * rule. Each entry indicates the replication status of the rule in a specific
   * spoke region. This field is only present for rules created with multi-region
   * scope. </p>
   */
  inline const Aws::Vector<RegionStatus>& GetRegionStatuses() const { return m_regionStatuses; }
  template <typename RegionStatusesT = Aws::Vector<RegionStatus>>
  void SetRegionStatuses(RegionStatusesT&& value) {
    m_regionStatusesHasBeenSet = true;
    m_regionStatuses = std::forward<RegionStatusesT>(value);
  }
  template <typename RegionStatusesT = Aws::Vector<RegionStatus>>
  GetTelemetryRuleForOrganizationResult& WithRegionStatuses(RegionStatusesT&& value) {
    SetRegionStatuses(std::forward<RegionStatusesT>(value));
    return *this;
  }
  template <typename RegionStatusesT = RegionStatus>
  GetTelemetryRuleForOrganizationResult& AddRegionStatuses(RegionStatusesT&& value) {
    m_regionStatusesHasBeenSet = true;
    m_regionStatuses.emplace_back(std::forward<RegionStatusesT>(value));
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
  GetTelemetryRuleForOrganizationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_ruleName;

  Aws::String m_ruleArn;

  long long m_createdTimeStamp{0};

  long long m_lastUpdateTimeStamp{0};

  TelemetryRule m_telemetryRule;

  Aws::String m_homeRegion;

  bool m_isReplicated{false};

  Aws::Vector<RegionStatus> m_regionStatuses;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_ruleNameHasBeenSet = false;
  bool m_ruleArnHasBeenSet = false;
  bool m_createdTimeStampHasBeenSet = false;
  bool m_lastUpdateTimeStampHasBeenSet = false;
  bool m_telemetryRuleHasBeenSet = false;
  bool m_homeRegionHasBeenSet = false;
  bool m_isReplicatedHasBeenSet = false;
  bool m_regionStatusesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
