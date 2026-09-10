/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/AlarmStateChangeDetail.h>
#include <aws/resiliencehubv2/model/TestRunSourceEventError.h>

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
 * <p>The payload of a test run source event. Exactly one member is
 * set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/TestRunSourceEventDetail">AWS
 * API Reference</a></p>
 */
class TestRunSourceEventDetail {
 public:
  AWS_RESILIENCEHUBV2_API TestRunSourceEventDetail() = default;
  AWS_RESILIENCEHUBV2_API TestRunSourceEventDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API TestRunSourceEventDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A CloudWatch alarm state change.</p>
   */
  inline const AlarmStateChangeDetail& GetAlarmStateChange() const { return m_alarmStateChange; }
  inline bool AlarmStateChangeHasBeenSet() const { return m_alarmStateChangeHasBeenSet; }
  template <typename AlarmStateChangeT = AlarmStateChangeDetail>
  void SetAlarmStateChange(AlarmStateChangeT&& value) {
    m_alarmStateChangeHasBeenSet = true;
    m_alarmStateChange = std::forward<AlarmStateChangeT>(value);
  }
  template <typename AlarmStateChangeT = AlarmStateChangeDetail>
  TestRunSourceEventDetail& WithAlarmStateChange(AlarmStateChangeT&& value) {
    SetAlarmStateChange(std::forward<AlarmStateChangeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An error that prevented event collection from the source.</p>
   */
  inline const TestRunSourceEventError& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = TestRunSourceEventError>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = TestRunSourceEventError>
  TestRunSourceEventDetail& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}
 private:
  AlarmStateChangeDetail m_alarmStateChange;

  TestRunSourceEventError m_error;
  bool m_alarmStateChangeHasBeenSet = false;
  bool m_errorHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
