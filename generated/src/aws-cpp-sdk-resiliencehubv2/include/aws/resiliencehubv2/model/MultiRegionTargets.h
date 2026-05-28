/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/MultiRegionDisasterRecoveryApproach.h>

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
 * <p>Defines the multi-Region disaster recovery targets for a resilience
 * policy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/MultiRegionTargets">AWS
 * API Reference</a></p>
 */
class MultiRegionTargets {
 public:
  AWS_RESILIENCEHUBV2_API MultiRegionTargets() = default;
  AWS_RESILIENCEHUBV2_API MultiRegionTargets(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API MultiRegionTargets& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The recovery time objective (RTO) target for multi-Region, in minutes.</p>
   */
  inline int GetRtoInMinutes() const { return m_rtoInMinutes; }
  inline bool RtoInMinutesHasBeenSet() const { return m_rtoInMinutesHasBeenSet; }
  inline void SetRtoInMinutes(int value) {
    m_rtoInMinutesHasBeenSet = true;
    m_rtoInMinutes = value;
  }
  inline MultiRegionTargets& WithRtoInMinutes(int value) {
    SetRtoInMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recovery point objective (RPO) target for multi-Region, in minutes.</p>
   */
  inline int GetRpoInMinutes() const { return m_rpoInMinutes; }
  inline bool RpoInMinutesHasBeenSet() const { return m_rpoInMinutesHasBeenSet; }
  inline void SetRpoInMinutes(int value) {
    m_rpoInMinutesHasBeenSet = true;
    m_rpoInMinutes = value;
  }
  inline MultiRegionTargets& WithRpoInMinutes(int value) {
    SetRpoInMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The disaster recovery approach for multi-Region.</p>
   */
  inline MultiRegionDisasterRecoveryApproach GetDisasterRecoveryApproach() const { return m_disasterRecoveryApproach; }
  inline bool DisasterRecoveryApproachHasBeenSet() const { return m_disasterRecoveryApproachHasBeenSet; }
  inline void SetDisasterRecoveryApproach(MultiRegionDisasterRecoveryApproach value) {
    m_disasterRecoveryApproachHasBeenSet = true;
    m_disasterRecoveryApproach = value;
  }
  inline MultiRegionTargets& WithDisasterRecoveryApproach(MultiRegionDisasterRecoveryApproach value) {
    SetDisasterRecoveryApproach(value);
    return *this;
  }
  ///@}
 private:
  int m_rtoInMinutes{0};

  int m_rpoInMinutes{0};

  MultiRegionDisasterRecoveryApproach m_disasterRecoveryApproach{MultiRegionDisasterRecoveryApproach::NOT_SET};
  bool m_rtoInMinutesHasBeenSet = false;
  bool m_rpoInMinutesHasBeenSet = false;
  bool m_disasterRecoveryApproachHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
