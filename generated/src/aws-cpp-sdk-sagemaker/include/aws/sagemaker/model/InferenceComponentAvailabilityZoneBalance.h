/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AvailabilityZoneBalanceEnforcementMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>Configuration for balancing inference component copies across Availability
 * Zones.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceComponentAvailabilityZoneBalance">AWS
 * API Reference</a></p>
 */
class InferenceComponentAvailabilityZoneBalance {
 public:
  AWS_SAGEMAKER_API InferenceComponentAvailabilityZoneBalance() = default;
  AWS_SAGEMAKER_API InferenceComponentAvailabilityZoneBalance(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API InferenceComponentAvailabilityZoneBalance& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Determines how strictly the Availability Zone balance constraint is
   * enforced.</p> <dl> <dt>PERMISSIVE</dt> <dd> <p>The endpoint attempts to balance
   * copies across Availability Zones but proceeds with scheduling even if balance
   * can't be achieved due to available capacity or instance distribution across
   * Availability Zones.</p> </dd> </dl>
   */
  inline AvailabilityZoneBalanceEnforcementMode GetEnforcementMode() const { return m_enforcementMode; }
  inline bool EnforcementModeHasBeenSet() const { return m_enforcementModeHasBeenSet; }
  inline void SetEnforcementMode(AvailabilityZoneBalanceEnforcementMode value) {
    m_enforcementModeHasBeenSet = true;
    m_enforcementMode = value;
  }
  inline InferenceComponentAvailabilityZoneBalance& WithEnforcementMode(AvailabilityZoneBalanceEnforcementMode value) {
    SetEnforcementMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum allowed difference in the number of inference component copies
   * between any two Availability Zones. This parameter applies only when the
   * endpoint has instances across two or more Availability Zones. A copy placement
   * is allowed if it reduces imbalance or the resulting imbalance is within this
   * value.</p> <p>Default value: <code>0</code>.</p>
   */
  inline int GetMaxImbalance() const { return m_maxImbalance; }
  inline bool MaxImbalanceHasBeenSet() const { return m_maxImbalanceHasBeenSet; }
  inline void SetMaxImbalance(int value) {
    m_maxImbalanceHasBeenSet = true;
    m_maxImbalance = value;
  }
  inline InferenceComponentAvailabilityZoneBalance& WithMaxImbalance(int value) {
    SetMaxImbalance(value);
    return *this;
  }
  ///@}
 private:
  AvailabilityZoneBalanceEnforcementMode m_enforcementMode{AvailabilityZoneBalanceEnforcementMode::NOT_SET};

  int m_maxImbalance{0};
  bool m_enforcementModeHasBeenSet = false;
  bool m_maxImbalanceHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
