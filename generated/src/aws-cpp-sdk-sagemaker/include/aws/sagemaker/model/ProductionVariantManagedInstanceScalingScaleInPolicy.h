/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ManagedInstanceScalingScaleInStrategy.h>

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
 * <p>Configures the scale-in behavior for managed instance scaling.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProductionVariantManagedInstanceScalingScaleInPolicy">AWS
 * API Reference</a></p>
 */
class ProductionVariantManagedInstanceScalingScaleInPolicy {
 public:
  AWS_SAGEMAKER_API ProductionVariantManagedInstanceScalingScaleInPolicy() = default;
  AWS_SAGEMAKER_API ProductionVariantManagedInstanceScalingScaleInPolicy(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ProductionVariantManagedInstanceScalingScaleInPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The strategy for scaling in instances.</p> <dl> <dt>IDLE_RELEASE</dt> <dd>
   * <p>Releases instances that have no hosted inference component copies.</p> </dd>
   * <dt>CONSOLIDATION</dt> <dd> <p>Consolidates inference component copies onto
   * fewer instances to release more instances. Consolidation honors the scheduling
   * configuration of each inference component. For example, if an inference
   * component specifies Availability Zone balance, consolidation only proceeds when
   * the resulting distribution does not increase the imbalance.</p> </dd> </dl>
   */
  inline ManagedInstanceScalingScaleInStrategy GetStrategy() const { return m_strategy; }
  inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }
  inline void SetStrategy(ManagedInstanceScalingScaleInStrategy value) {
    m_strategyHasBeenSet = true;
    m_strategy = value;
  }
  inline ProductionVariantManagedInstanceScalingScaleInPolicy& WithStrategy(ManagedInstanceScalingScaleInStrategy value) {
    SetStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of instances that the endpoint can terminate at a time
   * during a consolidation scale-in operation.</p> <p>Default value:
   * <code>1</code>.</p>
   */
  inline int GetMaximumStepSize() const { return m_maximumStepSize; }
  inline bool MaximumStepSizeHasBeenSet() const { return m_maximumStepSizeHasBeenSet; }
  inline void SetMaximumStepSize(int value) {
    m_maximumStepSizeHasBeenSet = true;
    m_maximumStepSize = value;
  }
  inline ProductionVariantManagedInstanceScalingScaleInPolicy& WithMaximumStepSize(int value) {
    SetMaximumStepSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cooldown period, in minutes, after the last endpoint operation before the
   * endpoint evaluates consolidation scale-in opportunities.</p> <p>Default value:
   * <code>20</code>.</p>
   */
  inline int GetCooldownInMinutes() const { return m_cooldownInMinutes; }
  inline bool CooldownInMinutesHasBeenSet() const { return m_cooldownInMinutesHasBeenSet; }
  inline void SetCooldownInMinutes(int value) {
    m_cooldownInMinutesHasBeenSet = true;
    m_cooldownInMinutes = value;
  }
  inline ProductionVariantManagedInstanceScalingScaleInPolicy& WithCooldownInMinutes(int value) {
    SetCooldownInMinutes(value);
    return *this;
  }
  ///@}
 private:
  ManagedInstanceScalingScaleInStrategy m_strategy{ManagedInstanceScalingScaleInStrategy::NOT_SET};

  int m_maximumStepSize{0};

  int m_cooldownInMinutes{0};
  bool m_strategyHasBeenSet = false;
  bool m_maximumStepSizeHasBeenSet = false;
  bool m_cooldownInMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
