/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/ObservabilityAlarmSummary.h>
#include <aws/resiliencehubv2/model/SuccessCriteriaAlarmSummary.h>

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
 * <p>A configured monitoring source returned by ListTestSources. Exactly one
 * member is set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/TestSourceSummary">AWS
 * API Reference</a></p>
 */
class TestSourceSummary {
 public:
  AWS_RESILIENCEHUBV2_API TestSourceSummary() = default;
  AWS_RESILIENCEHUBV2_API TestSourceSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API TestSourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A configured success criteria alarm.</p>
   */
  inline const SuccessCriteriaAlarmSummary& GetSuccessCriteriaAlarm() const { return m_successCriteriaAlarm; }
  inline bool SuccessCriteriaAlarmHasBeenSet() const { return m_successCriteriaAlarmHasBeenSet; }
  template <typename SuccessCriteriaAlarmT = SuccessCriteriaAlarmSummary>
  void SetSuccessCriteriaAlarm(SuccessCriteriaAlarmT&& value) {
    m_successCriteriaAlarmHasBeenSet = true;
    m_successCriteriaAlarm = std::forward<SuccessCriteriaAlarmT>(value);
  }
  template <typename SuccessCriteriaAlarmT = SuccessCriteriaAlarmSummary>
  TestSourceSummary& WithSuccessCriteriaAlarm(SuccessCriteriaAlarmT&& value) {
    SetSuccessCriteriaAlarm(std::forward<SuccessCriteriaAlarmT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A configured observability alarm.</p>
   */
  inline const ObservabilityAlarmSummary& GetObservabilityAlarm() const { return m_observabilityAlarm; }
  inline bool ObservabilityAlarmHasBeenSet() const { return m_observabilityAlarmHasBeenSet; }
  template <typename ObservabilityAlarmT = ObservabilityAlarmSummary>
  void SetObservabilityAlarm(ObservabilityAlarmT&& value) {
    m_observabilityAlarmHasBeenSet = true;
    m_observabilityAlarm = std::forward<ObservabilityAlarmT>(value);
  }
  template <typename ObservabilityAlarmT = ObservabilityAlarmSummary>
  TestSourceSummary& WithObservabilityAlarm(ObservabilityAlarmT&& value) {
    SetObservabilityAlarm(std::forward<ObservabilityAlarmT>(value));
    return *this;
  }
  ///@}
 private:
  SuccessCriteriaAlarmSummary m_successCriteriaAlarm;

  ObservabilityAlarmSummary m_observabilityAlarm;
  bool m_successCriteriaAlarmHasBeenSet = false;
  bool m_observabilityAlarmHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
