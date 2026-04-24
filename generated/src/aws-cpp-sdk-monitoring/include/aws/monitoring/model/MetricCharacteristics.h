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
 * <p>This object includes parameters that you can use to provide information to
 * CloudWatch to help it build more accurate anomaly detection
 * models.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/MetricCharacteristics">AWS
 * API Reference</a></p>
 */
class MetricCharacteristics {
 public:
  AWS_CLOUDWATCH_API MetricCharacteristics() = default;
  AWS_CLOUDWATCH_API MetricCharacteristics(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API MetricCharacteristics& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Set this parameter to <code>true</code> if values for this metric
   * consistently include spikes that should not be considered to be anomalies. With
   * this set to <code>true</code>, CloudWatch will expect to see spikes that
   * occurred consistently during the model training period, and won't flag future
   * similar spikes as anomalies.</p>
   */
  inline bool GetPeriodicSpikes() const { return m_periodicSpikes; }
  inline bool PeriodicSpikesHasBeenSet() const { return m_periodicSpikesHasBeenSet; }
  inline void SetPeriodicSpikes(bool value) {
    m_periodicSpikesHasBeenSet = true;
    m_periodicSpikes = value;
  }
  inline MetricCharacteristics& WithPeriodicSpikes(bool value) {
    SetPeriodicSpikes(value);
    return *this;
  }
  ///@}
 private:
  bool m_periodicSpikes{false};
  bool m_periodicSpikesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
