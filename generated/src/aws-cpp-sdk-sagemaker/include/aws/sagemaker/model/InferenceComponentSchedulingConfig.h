/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/InferenceComponentAvailabilityZoneBalance.h>
#include <aws/sagemaker/model/InferenceComponentPlacementStrategy.h>

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
 * <p>The scheduling configuration that determines how inference component copies
 * are placed across available instances when copies are added or
 * removed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceComponentSchedulingConfig">AWS
 * API Reference</a></p>
 */
class InferenceComponentSchedulingConfig {
 public:
  AWS_SAGEMAKER_API InferenceComponentSchedulingConfig() = default;
  AWS_SAGEMAKER_API InferenceComponentSchedulingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API InferenceComponentSchedulingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The strategy for placing inference component copies across available
   * instances. If you also set <code>AvailabilityZoneBalance</code>, this strategy
   * applies to placement within each Availability Zone.</p> <dl> <dt>SPREAD</dt>
   * <dd> <p>Distributes copies evenly across available instances for better
   * resilience.</p> </dd> <dt>BINPACK</dt> <dd> <p>Packs copies onto fewer instances
   * to optimize resource utilization.</p> </dd> </dl>
   */
  inline InferenceComponentPlacementStrategy GetPlacementStrategy() const { return m_placementStrategy; }
  inline bool PlacementStrategyHasBeenSet() const { return m_placementStrategyHasBeenSet; }
  inline void SetPlacementStrategy(InferenceComponentPlacementStrategy value) {
    m_placementStrategyHasBeenSet = true;
    m_placementStrategy = value;
  }
  inline InferenceComponentSchedulingConfig& WithPlacementStrategy(InferenceComponentPlacementStrategy value) {
    SetPlacementStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for balancing inference component copies across Availability
   * Zones.</p>
   */
  inline const InferenceComponentAvailabilityZoneBalance& GetAvailabilityZoneBalance() const { return m_availabilityZoneBalance; }
  inline bool AvailabilityZoneBalanceHasBeenSet() const { return m_availabilityZoneBalanceHasBeenSet; }
  template <typename AvailabilityZoneBalanceT = InferenceComponentAvailabilityZoneBalance>
  void SetAvailabilityZoneBalance(AvailabilityZoneBalanceT&& value) {
    m_availabilityZoneBalanceHasBeenSet = true;
    m_availabilityZoneBalance = std::forward<AvailabilityZoneBalanceT>(value);
  }
  template <typename AvailabilityZoneBalanceT = InferenceComponentAvailabilityZoneBalance>
  InferenceComponentSchedulingConfig& WithAvailabilityZoneBalance(AvailabilityZoneBalanceT&& value) {
    SetAvailabilityZoneBalance(std::forward<AvailabilityZoneBalanceT>(value));
    return *this;
  }
  ///@}
 private:
  InferenceComponentPlacementStrategy m_placementStrategy{InferenceComponentPlacementStrategy::NOT_SET};

  InferenceComponentAvailabilityZoneBalance m_availabilityZoneBalance;
  bool m_placementStrategyHasBeenSet = false;
  bool m_availabilityZoneBalanceHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
