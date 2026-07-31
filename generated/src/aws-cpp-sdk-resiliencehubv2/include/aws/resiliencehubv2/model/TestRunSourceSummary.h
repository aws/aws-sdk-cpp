/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/TestRunObservabilityAlarmSummary.h>
#include <aws/resiliencehubv2/model/TestRunSuccessCriteriaAlarmSummary.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>A monitoring-source snapshot captured for a test run. Exactly one member is
 * set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/TestRunSourceSummary">AWS
 * API Reference</a></p>
 */
class TestRunSourceSummary {
 public:
  AWS_RESILIENCEHUBV2_API TestRunSourceSummary() = default;
  AWS_RESILIENCEHUBV2_API TestRunSourceSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API TestRunSourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A success criteria alarm snapshot captured for the test run.</p>
   */
  inline const TestRunSuccessCriteriaAlarmSummary& GetSuccessCriteriaAlarm() const { return m_successCriteriaAlarm; }
  inline bool SuccessCriteriaAlarmHasBeenSet() const { return m_successCriteriaAlarmHasBeenSet; }
  template <typename SuccessCriteriaAlarmT = TestRunSuccessCriteriaAlarmSummary>
  void SetSuccessCriteriaAlarm(SuccessCriteriaAlarmT&& value) {
    m_successCriteriaAlarmHasBeenSet = true;
    m_successCriteriaAlarm = std::forward<SuccessCriteriaAlarmT>(value);
  }
  template <typename SuccessCriteriaAlarmT = TestRunSuccessCriteriaAlarmSummary>
  TestRunSourceSummary& WithSuccessCriteriaAlarm(SuccessCriteriaAlarmT&& value) {
    SetSuccessCriteriaAlarm(std::forward<SuccessCriteriaAlarmT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An observability alarm snapshot captured for the test run.</p>
   */
  inline const TestRunObservabilityAlarmSummary& GetObservabilityAlarm() const { return m_observabilityAlarm; }
  inline bool ObservabilityAlarmHasBeenSet() const { return m_observabilityAlarmHasBeenSet; }
  template <typename ObservabilityAlarmT = TestRunObservabilityAlarmSummary>
  void SetObservabilityAlarm(ObservabilityAlarmT&& value) {
    m_observabilityAlarmHasBeenSet = true;
    m_observabilityAlarm = std::forward<ObservabilityAlarmT>(value);
  }
  template <typename ObservabilityAlarmT = TestRunObservabilityAlarmSummary>
  TestRunSourceSummary& WithObservabilityAlarm(ObservabilityAlarmT&& value) {
    SetObservabilityAlarm(std::forward<ObservabilityAlarmT>(value));
    return *this;
  }
  ///@}
 private:
  TestRunSuccessCriteriaAlarmSummary m_successCriteriaAlarm;

  TestRunObservabilityAlarmSummary m_observabilityAlarm;
  bool m_successCriteriaAlarmHasBeenSet = false;
  bool m_observabilityAlarmHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
