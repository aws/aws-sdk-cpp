/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>

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
 * <p>Contains the schedule expression and time-range offsets that define when a
 * scheduled query runs and what time range each execution covers.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ScheduleConfiguration">AWS
 * API Reference</a></p>
 */
class ScheduleConfiguration {
 public:
  AWS_CLOUDWATCH_API ScheduleConfiguration() = default;
  AWS_CLOUDWATCH_API ScheduleConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API ScheduleConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The schedule expression that defines how often the underlying CloudWatch Logs
   * scheduled query runs. Specify a <code>rate()</code> expression, for example
   * <code>rate(5 minutes)</code>.</p>
   */
  inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
  inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
  template <typename ScheduleExpressionT = Aws::String>
  void SetScheduleExpression(ScheduleExpressionT&& value) {
    m_scheduleExpressionHasBeenSet = true;
    m_scheduleExpression = std::forward<ScheduleExpressionT>(value);
  }
  template <typename ScheduleExpressionT = Aws::String>
  ScheduleConfiguration& WithScheduleExpression(ScheduleExpressionT&& value) {
    SetScheduleExpression(std::forward<ScheduleExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The offset, in seconds, before the scheduled execution time at which the
   * query time range begins. For example, an offset of 360 (6 minutes) on a query
   * running at 12:05:00 starts the query time range at 11:59:00.</p>
   */
  inline long long GetStartTimeOffset() const { return m_startTimeOffset; }
  inline bool StartTimeOffsetHasBeenSet() const { return m_startTimeOffsetHasBeenSet; }
  inline void SetStartTimeOffset(long long value) {
    m_startTimeOffsetHasBeenSet = true;
    m_startTimeOffset = value;
  }
  inline ScheduleConfiguration& WithStartTimeOffset(long long value) {
    SetStartTimeOffset(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The offset, in seconds, before the scheduled execution time at which the
   * query time range ends. Must be non-negative and less than
   * <code>StartTimeOffset</code>. The default is 0.</p>
   */
  inline long long GetEndTimeOffset() const { return m_endTimeOffset; }
  inline bool EndTimeOffsetHasBeenSet() const { return m_endTimeOffsetHasBeenSet; }
  inline void SetEndTimeOffset(long long value) {
    m_endTimeOffsetHasBeenSet = true;
    m_endTimeOffset = value;
  }
  inline ScheduleConfiguration& WithEndTimeOffset(long long value) {
    SetEndTimeOffset(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_scheduleExpression;

  long long m_startTimeOffset{0};

  long long m_endTimeOffset{0};
  bool m_scheduleExpressionHasBeenSet = false;
  bool m_startTimeOffsetHasBeenSet = false;
  bool m_endTimeOffsetHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
