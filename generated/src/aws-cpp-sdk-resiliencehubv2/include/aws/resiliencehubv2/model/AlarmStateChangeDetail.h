/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/AlarmState.h>

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
 * <p>Details about a CloudWatch alarm state change observed during a test
 * run.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/AlarmStateChangeDetail">AWS
 * API Reference</a></p>
 */
class AlarmStateChangeDetail {
 public:
  AWS_RESILIENCEHUBV2_API AlarmStateChangeDetail() = default;
  AWS_RESILIENCEHUBV2_API AlarmStateChangeDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API AlarmStateChangeDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The state the alarm transitioned to.</p>
   */
  inline AlarmState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(AlarmState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline AlarmStateChangeDetail& WithState(AlarmState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state the alarm transitioned from. Absent on the initial event, which
   * records the alarm's state when collection began.</p>
   */
  inline AlarmState GetPreviousState() const { return m_previousState; }
  inline bool PreviousStateHasBeenSet() const { return m_previousStateHasBeenSet; }
  inline void SetPreviousState(AlarmState value) {
    m_previousStateHasBeenSet = true;
    m_previousState = value;
  }
  inline AlarmStateChangeDetail& WithPreviousState(AlarmState value) {
    SetPreviousState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable explanation of the state change, as reported by
   * CloudWatch.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  AlarmStateChangeDetail& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}
 private:
  AlarmState m_state{AlarmState::NOT_SET};

  AlarmState m_previousState{AlarmState::NOT_SET};

  Aws::String m_reason;
  bool m_stateHasBeenSet = false;
  bool m_previousStateHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
