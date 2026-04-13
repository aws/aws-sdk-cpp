/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p> Represents the status of a multi-region operation in a specific Amazon Web
 * Services Region. This structure is used to report per-region progress for both
 * telemetry evaluation and telemetry rule replication. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/RegionStatus">AWS
 * API Reference</a></p>
 */
class RegionStatus {
 public:
  AWS_OBSERVABILITYADMIN_API RegionStatus() = default;
  AWS_OBSERVABILITYADMIN_API RegionStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API RegionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The Amazon Web Services Region code (for example, <code>eu-west-1</code> or
   * <code>us-west-2</code>) that this status applies to. </p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  RegionStatus& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The status of the operation in this region. For telemetry evaluation, valid
   * values include <code>STARTING</code>, <code>RUNNING</code>, and
   * <code>FAILED_START</code>. For telemetry rules, valid values include
   * <code>PENDING</code>, <code>ACTIVE</code>, and <code>FAILED</code>. </p>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  RegionStatus& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The reason for a failure status in this region. This field is only populated
   * when <code>Status</code> indicates a failure. </p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  RegionStatus& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the telemetry rule in this spoke region.
   * This field is only present for telemetry rule region statuses and is populated
   * when the rule has been successfully created in the spoke region (status is
   * <code>ACTIVE</code>). </p>
   */
  inline const Aws::String& GetRuleArn() const { return m_ruleArn; }
  inline bool RuleArnHasBeenSet() const { return m_ruleArnHasBeenSet; }
  template <typename RuleArnT = Aws::String>
  void SetRuleArn(RuleArnT&& value) {
    m_ruleArnHasBeenSet = true;
    m_ruleArn = std::forward<RuleArnT>(value);
  }
  template <typename RuleArnT = Aws::String>
  RegionStatus& WithRuleArn(RuleArnT&& value) {
    SetRuleArn(std::forward<RuleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_region;

  Aws::String m_status;

  Aws::String m_failureReason;

  Aws::String m_ruleArn;
  bool m_regionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_ruleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
