/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/SlidingWindow.h>
#include <aws/monitoring/model/WallClockWindow.h>

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
 * <p>The evaluation window that an alarm uses to select the range of metric data
 * that it evaluates each time it runs. This is a union type. Set exactly one of
 * its members, <code>SlidingWindow</code> or <code>WallClockWindow</code>. If you
 * don't set <code>EvaluationWindow</code>, the alarm uses a
 * <code>SlidingWindow</code> by default.</p> <p>For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/alarm-evaluation-window.html">Alarm
 * evaluation windows</a> in the <i>CloudWatch User Guide</i>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/EvaluationWindow">AWS
 * API Reference</a></p>
 */
class EvaluationWindow {
 public:
  AWS_CLOUDWATCH_API EvaluationWindow() = default;
  AWS_CLOUDWATCH_API EvaluationWindow(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API EvaluationWindow& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>A wall clock window, which aligns the evaluated range to fixed clock
   * boundaries that match the alarm's period, such as the top of the hour, midnight,
   * or the start of the calendar week.</p>
   */
  inline const WallClockWindow& GetWallClockWindow() const { return m_wallClockWindow; }
  inline bool WallClockWindowHasBeenSet() const { return m_wallClockWindowHasBeenSet; }
  template <typename WallClockWindowT = WallClockWindow>
  void SetWallClockWindow(WallClockWindowT&& value) {
    m_wallClockWindowHasBeenSet = true;
    m_wallClockWindow = std::forward<WallClockWindowT>(value);
  }
  template <typename WallClockWindowT = WallClockWindow>
  EvaluationWindow& WithWallClockWindow(WallClockWindowT&& value) {
    SetWallClockWindow(std::forward<WallClockWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A sliding window, which advances each time the alarm is evaluated, forming a
   * rolling time window. This is the default evaluation window.</p>
   */
  inline const SlidingWindow& GetSlidingWindow() const { return m_slidingWindow; }
  inline bool SlidingWindowHasBeenSet() const { return m_slidingWindowHasBeenSet; }
  template <typename SlidingWindowT = SlidingWindow>
  void SetSlidingWindow(SlidingWindowT&& value) {
    m_slidingWindowHasBeenSet = true;
    m_slidingWindow = std::forward<SlidingWindowT>(value);
  }
  template <typename SlidingWindowT = SlidingWindow>
  EvaluationWindow& WithSlidingWindow(SlidingWindowT&& value) {
    SetSlidingWindow(std::forward<SlidingWindowT>(value));
    return *this;
  }
  ///@}
 private:
  WallClockWindow m_wallClockWindow;

  SlidingWindow m_slidingWindow;
  bool m_wallClockWindowHasBeenSet = false;
  bool m_slidingWindowHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
