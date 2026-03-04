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
 * <p>Specifies when and how long an alarm mute rule is active.</p> <p>The schedule
 * uses either a cron expression for recurring mute windows or an at expression for
 * one-time mute windows. When the schedule activates, the mute rule mutes alarm
 * actions for the specified duration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/Schedule">AWS
 * API Reference</a></p>
 */
class Schedule {
 public:
  AWS_CLOUDWATCH_API Schedule() = default;
  AWS_CLOUDWATCH_API Schedule(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API Schedule& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The schedule expression that defines when the mute rule activates. The
   * expression must be between 1 and 256 characters in length.</p> <p>You can use
   * one of two expression formats:</p> <ul> <li> <p> <b>Cron expressions</b> - For
   * recurring mute windows. Format: <code>cron(Minutes Hours Day-of-month Month
   * Day-of-week)</code> </p> <p>Examples:</p> <ul> <li> <p> <code>cron(0 2 * *
   * *)</code> - Activates daily at 2:00 AM</p> </li> <li> <p> <code>cron(0 2 * *
   * SUN)</code> - Activates every Sunday at 2:00 AM for weekly system
   * maintenance</p> </li> <li> <p> <code>cron(0 1 1 * *)</code> - Activates on the
   * first day of each month at 1:00 AM for monthly database maintenance</p> </li>
   * <li> <p> <code>cron(0 18 * * FRI)</code> - Activates every Friday at 6:00 PM</p>
   * </li> <li> <p> <code>cron(0 23 * * *)</code> - Activates every day at 11:00 PM
   * during nightly backup operations</p> </li> </ul> <p>The characters
   * <code>*</code>, <code>-</code>, and <code>,</code> are supported in all fields.
   * English names can be used for the month (JAN-DEC) and day of week (SUN-SAT)
   * fields.</p> </li> <li> <p> <b>At expressions</b> - For one-time mute windows.
   * Format: <code>at(yyyy-MM-ddThh:mm)</code> </p> <p>Examples:</p> <ul> <li> <p>
   * <code>at(2024-05-10T14:00)</code> - Activates once on May 10, 2024 at 2:00 PM
   * during an active incident response session</p> </li> <li> <p>
   * <code>at(2024-12-23T00:00)</code> - Activates once on December 23, 2024 at
   * midnight during annual company shutdown</p> </li> </ul> </li> </ul>
   */
  inline const Aws::String& GetExpression() const { return m_expression; }
  inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
  template <typename ExpressionT = Aws::String>
  void SetExpression(ExpressionT&& value) {
    m_expressionHasBeenSet = true;
    m_expression = std::forward<ExpressionT>(value);
  }
  template <typename ExpressionT = Aws::String>
  Schedule& WithExpression(ExpressionT&& value) {
    SetExpression(std::forward<ExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The length of time that alarms remain muted when the schedule activates. The
   * duration must be between 1 and 50 characters in length.</p> <p>Specify the
   * duration using ISO 8601 duration format with a minimum of 1 minute
   * (<code>PT1M</code>) and maximum of 15 days (<code>P15D</code>).</p>
   * <p>Examples:</p> <ul> <li> <p> <code>PT4H</code> - 4 hours for weekly system
   * maintenance</p> </li> <li> <p> <code>P2DT12H</code> - 2 days and 12 hours for
   * weekend muting from Friday 6:00 PM to Monday 6:00 AM</p> </li> <li> <p>
   * <code>PT6H</code> - 6 hours for monthly database maintenance</p> </li> <li> <p>
   * <code>PT2H</code> - 2 hours for nightly backup operations</p> </li> <li> <p>
   * <code>P7D</code> - 7 days for annual company shutdown</p> </li> </ul> <p>The
   * duration begins when the schedule expression time is reached. For recurring
   * schedules, the duration applies to each occurrence.</p>
   */
  inline const Aws::String& GetDuration() const { return m_duration; }
  inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
  template <typename DurationT = Aws::String>
  void SetDuration(DurationT&& value) {
    m_durationHasBeenSet = true;
    m_duration = std::forward<DurationT>(value);
  }
  template <typename DurationT = Aws::String>
  Schedule& WithDuration(DurationT&& value) {
    SetDuration(std::forward<DurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time zone to use when evaluating the schedule expression. The time zone
   * must be between 1 and 50 characters in length.</p> <p>Specify the time zone
   * using standard timezone identifiers (for example, <code>America/New_York</code>,
   * <code>Europe/London</code>, or <code>Asia/Tokyo</code>).</p> <p>If you don't
   * specify a time zone, UTC is used by default. The time zone affects how cron and
   * at expressions are interpreted, as well as start and expire dates you
   * specify</p> <p>Examples:</p> <ul> <li> <p> <code>America/New_York</code> -
   * Eastern Time (US)</p> </li> <li> <p> <code>America/Los_Angeles</code> - Pacific
   * Time (US)</p> </li> <li> <p> <code>Europe/London</code> - British Time</p> </li>
   * <li> <p> <code>Asia/Tokyo</code> - Japan Standard Time</p> </li> <li> <p>
   * <code>UTC</code> - Coordinated Universal Time</p> </li> </ul>
   */
  inline const Aws::String& GetTimezone() const { return m_timezone; }
  inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
  template <typename TimezoneT = Aws::String>
  void SetTimezone(TimezoneT&& value) {
    m_timezoneHasBeenSet = true;
    m_timezone = std::forward<TimezoneT>(value);
  }
  template <typename TimezoneT = Aws::String>
  Schedule& WithTimezone(TimezoneT&& value) {
    SetTimezone(std::forward<TimezoneT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_expression;

  Aws::String m_duration;

  Aws::String m_timezone;
  bool m_expressionHasBeenSet = false;
  bool m_durationHasBeenSet = false;
  bool m_timezoneHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
