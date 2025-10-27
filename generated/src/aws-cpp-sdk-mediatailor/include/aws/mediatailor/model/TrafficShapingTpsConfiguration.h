/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaTailor {
namespace Model {

/**
 * <p>The configuration for TPS-based traffic shaping. This approach limits
 * requests to the ad decision server (ADS) based on transactions per second and
 * concurrent users, providing more intuitive capacity management compared to
 * time-window based traffic shaping.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/TrafficShapingTpsConfiguration">AWS
 * API Reference</a></p>
 */
class TrafficShapingTpsConfiguration {
 public:
  AWS_MEDIATAILOR_API TrafficShapingTpsConfiguration() = default;
  AWS_MEDIATAILOR_API TrafficShapingTpsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API TrafficShapingTpsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum number of transactions per second (TPS) that your ad decision
   * server (ADS) can handle. MediaTailor uses this value along with concurrent users
   * and headroom multiplier to calculate optimal traffic distribution and prevent
   * ADS overload.</p>
   */
  inline int GetPeakTps() const { return m_peakTps; }
  inline bool PeakTpsHasBeenSet() const { return m_peakTpsHasBeenSet; }
  inline void SetPeakTps(int value) {
    m_peakTpsHasBeenSet = true;
    m_peakTps = value;
  }
  inline TrafficShapingTpsConfiguration& WithPeakTps(int value) {
    SetPeakTps(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expected peak number of concurrent viewers for your content. MediaTailor
   * uses this value along with peak TPS to determine how to distribute prefetch
   * requests across the available capacity without exceeding your ADS limits.</p>
   */
  inline int GetPeakConcurrentUsers() const { return m_peakConcurrentUsers; }
  inline bool PeakConcurrentUsersHasBeenSet() const { return m_peakConcurrentUsersHasBeenSet; }
  inline void SetPeakConcurrentUsers(int value) {
    m_peakConcurrentUsersHasBeenSet = true;
    m_peakConcurrentUsers = value;
  }
  inline TrafficShapingTpsConfiguration& WithPeakConcurrentUsers(int value) {
    SetPeakConcurrentUsers(value);
    return *this;
  }
  ///@}
 private:
  int m_peakTps{0};
  bool m_peakTpsHasBeenSet = false;

  int m_peakConcurrentUsers{0};
  bool m_peakConcurrentUsersHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
