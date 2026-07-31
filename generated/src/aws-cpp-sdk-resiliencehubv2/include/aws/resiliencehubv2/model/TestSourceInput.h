/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/ObservabilityAlarmInput.h>
#include <aws/resiliencehubv2/model/SuccessCriteriaAlarmInput.h>

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
 * <p>Identifies a monitoring source to add to or remove from a test. Exactly one
 * member is set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/TestSourceInput">AWS
 * API Reference</a></p>
 */
class TestSourceInput {
 public:
  AWS_RESILIENCEHUBV2_API TestSourceInput() = default;
  AWS_RESILIENCEHUBV2_API TestSourceInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API TestSourceInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A success criteria alarm that determines whether the test passes or
   * fails.</p>
   */
  inline const SuccessCriteriaAlarmInput& GetSuccessCriteriaAlarm() const { return m_successCriteriaAlarm; }
  inline bool SuccessCriteriaAlarmHasBeenSet() const { return m_successCriteriaAlarmHasBeenSet; }
  template <typename SuccessCriteriaAlarmT = SuccessCriteriaAlarmInput>
  void SetSuccessCriteriaAlarm(SuccessCriteriaAlarmT&& value) {
    m_successCriteriaAlarmHasBeenSet = true;
    m_successCriteriaAlarm = std::forward<SuccessCriteriaAlarmT>(value);
  }
  template <typename SuccessCriteriaAlarmT = SuccessCriteriaAlarmInput>
  TestSourceInput& WithSuccessCriteriaAlarm(SuccessCriteriaAlarmT&& value) {
    SetSuccessCriteriaAlarm(std::forward<SuccessCriteriaAlarmT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An observability alarm included for visibility only.</p>
   */
  inline const ObservabilityAlarmInput& GetObservabilityAlarm() const { return m_observabilityAlarm; }
  inline bool ObservabilityAlarmHasBeenSet() const { return m_observabilityAlarmHasBeenSet; }
  template <typename ObservabilityAlarmT = ObservabilityAlarmInput>
  void SetObservabilityAlarm(ObservabilityAlarmT&& value) {
    m_observabilityAlarmHasBeenSet = true;
    m_observabilityAlarm = std::forward<ObservabilityAlarmT>(value);
  }
  template <typename ObservabilityAlarmT = ObservabilityAlarmInput>
  TestSourceInput& WithObservabilityAlarm(ObservabilityAlarmT&& value) {
    SetObservabilityAlarm(std::forward<ObservabilityAlarmT>(value));
    return *this;
  }
  ///@}
 private:
  SuccessCriteriaAlarmInput m_successCriteriaAlarm;

  ObservabilityAlarmInput m_observabilityAlarm;
  bool m_successCriteriaAlarmHasBeenSet = false;
  bool m_observabilityAlarmHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
