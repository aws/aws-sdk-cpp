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
 * <p>An evaluation window that aligns the evaluated range to fixed clock
 * boundaries that match the alarm's period, such as the top of the hour, midnight,
 * or the start of the calendar week, optionally in a specific time zone.</p>
 * <p>When you use a wall clock window, the alarm's period must be 1 minute (60
 * seconds), 5 minutes (300 seconds), 1 hour (3,600 seconds), 1 day (86,400
 * seconds), or 1 week (604,800 seconds). Other period values aren't supported with
 * a wall clock window.</p> <p>Choose a wall clock window when your monitoring is
 * tied to a business or calendar period, such as daily reports, batch jobs, or
 * backups, or when you want alarm evaluations to match the periods shown on a
 * metric dashboard.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/WallClockWindow">AWS
 * API Reference</a></p>
 */
class WallClockWindow {
 public:
  AWS_CLOUDWATCH_API WallClockWindow() = default;
  AWS_CLOUDWATCH_API WallClockWindow(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API WallClockWindow& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The time zone to use when the alarm aligns the evaluation window to clock
   * boundaries. You can specify an IANA time zone name (for example,
   * <code>America/New_York</code>), a fixed UTC offset (for example,
   * <code>+05:30</code>), or an offset-prefixed identifier (for example,
   * <code>UTC+05:30</code>). The offset must be aligned to a multiple of 5 minutes.
   * If you don't specify a time zone, CloudWatch uses <code>UTC</code>.</p> <p>The
   * time zone affects window alignment for all periods, including periods of one
   * hour or shorter.</p>
   */
  inline const Aws::String& GetTimezone() const { return m_timezone; }
  inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
  template <typename TimezoneT = Aws::String>
  void SetTimezone(TimezoneT&& value) {
    m_timezoneHasBeenSet = true;
    m_timezone = std::forward<TimezoneT>(value);
  }
  template <typename TimezoneT = Aws::String>
  WallClockWindow& WithTimezone(TimezoneT&& value) {
    SetTimezone(std::forward<TimezoneT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_timezone;
  bool m_timezoneHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
