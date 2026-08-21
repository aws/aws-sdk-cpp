/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatch {
namespace Model {

/**
 * <p>The configuration settings that define the warm-up behavior for an alarm. Use
 * these settings to delay alarm evaluation after you create or update the alarm,
 * which reduces alarm noise while a new resource or service starts publishing
 * data.</p> <p>During the warm-up period, the alarm stays in
 * <code>INSUFFICIENT_DATA</code> and does not perform alarm actions.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/WarmUpConfiguration">AWS
 * API Reference</a></p>
 */
class WarmUpConfiguration {
 public:
  AWS_CLOUDWATCH_API WarmUpConfiguration() = default;
  AWS_CLOUDWATCH_API WarmUpConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API WarmUpConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The length of the warm-up period, in minutes. After you create or update the
   * alarm, the alarm stays in <code>INSUFFICIENT_DATA</code> for this duration.
   * During this time, the alarm does not perform alarm actions.</p> <p>You can
   * change this value at any time, including after the warm-up period ends. If you
   * change it after the warm-up period ends, the new value does not restart the
   * warm-up period.</p>
   */
  inline int64_t GetWarmUpPeriodDurationInMinutes() const { return m_warmUpPeriodDurationInMinutes; }
  inline bool WarmUpPeriodDurationInMinutesHasBeenSet() const { return m_warmUpPeriodDurationInMinutesHasBeenSet; }
  inline void SetWarmUpPeriodDurationInMinutes(int64_t value) {
    m_warmUpPeriodDurationInMinutesHasBeenSet = true;
    m_warmUpPeriodDurationInMinutes = value;
  }
  inline WarmUpConfiguration& WithWarmUpPeriodDurationInMinutes(int64_t value) {
    SetWarmUpPeriodDurationInMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the alarm waits for the full warm-up period before it
   * starts to evaluate. The default is <code>false</code>. If <code>true</code>, the
   * alarm waits the entire <code>WarmUpPeriodDurationInMinutes</code> before it
   * starts to evaluate, even if metric data arrives earlier. If <code>false</code>,
   * the alarm ends the warm-up period early. Evaluation begins as soon as the alarm
   * has enough metric data to fill its evaluation window.</p>
   */
  inline bool GetOnlyStartEvaluatingAfterWarmUpPeriodEnds() const { return m_onlyStartEvaluatingAfterWarmUpPeriodEnds; }
  inline bool OnlyStartEvaluatingAfterWarmUpPeriodEndsHasBeenSet() const { return m_onlyStartEvaluatingAfterWarmUpPeriodEndsHasBeenSet; }
  inline void SetOnlyStartEvaluatingAfterWarmUpPeriodEnds(bool value) {
    m_onlyStartEvaluatingAfterWarmUpPeriodEndsHasBeenSet = true;
    m_onlyStartEvaluatingAfterWarmUpPeriodEnds = value;
  }
  inline WarmUpConfiguration& WithOnlyStartEvaluatingAfterWarmUpPeriodEnds(bool value) {
    SetOnlyStartEvaluatingAfterWarmUpPeriodEnds(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_warmUpPeriodDurationInMinutes{0};

  bool m_onlyStartEvaluatingAfterWarmUpPeriodEnds{false};
  bool m_warmUpPeriodDurationInMinutesHasBeenSet = false;
  bool m_onlyStartEvaluatingAfterWarmUpPeriodEndsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
