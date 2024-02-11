/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ScalingPolicy.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>An object with the recommended values for you to specify when creating an
   * autoscaling policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DynamicScalingConfiguration">AWS
   * API Reference</a></p>
   */
  class DynamicScalingConfiguration
  {
  public:
    AWS_SAGEMAKER_API DynamicScalingConfiguration();
    AWS_SAGEMAKER_API DynamicScalingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DynamicScalingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The recommended minimum capacity to specify for your autoscaling policy.</p>
     */
    inline int GetMinCapacity() const{ return m_minCapacity; }

    /**
     * <p>The recommended minimum capacity to specify for your autoscaling policy.</p>
     */
    inline bool MinCapacityHasBeenSet() const { return m_minCapacityHasBeenSet; }

    /**
     * <p>The recommended minimum capacity to specify for your autoscaling policy.</p>
     */
    inline void SetMinCapacity(int value) { m_minCapacityHasBeenSet = true; m_minCapacity = value; }

    /**
     * <p>The recommended minimum capacity to specify for your autoscaling policy.</p>
     */
    inline DynamicScalingConfiguration& WithMinCapacity(int value) { SetMinCapacity(value); return *this;}


    /**
     * <p>The recommended maximum capacity to specify for your autoscaling policy.</p>
     */
    inline int GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The recommended maximum capacity to specify for your autoscaling policy.</p>
     */
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }

    /**
     * <p>The recommended maximum capacity to specify for your autoscaling policy.</p>
     */
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>The recommended maximum capacity to specify for your autoscaling policy.</p>
     */
    inline DynamicScalingConfiguration& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}


    /**
     * <p>The recommended scale in cooldown time for your autoscaling policy.</p>
     */
    inline int GetScaleInCooldown() const{ return m_scaleInCooldown; }

    /**
     * <p>The recommended scale in cooldown time for your autoscaling policy.</p>
     */
    inline bool ScaleInCooldownHasBeenSet() const { return m_scaleInCooldownHasBeenSet; }

    /**
     * <p>The recommended scale in cooldown time for your autoscaling policy.</p>
     */
    inline void SetScaleInCooldown(int value) { m_scaleInCooldownHasBeenSet = true; m_scaleInCooldown = value; }

    /**
     * <p>The recommended scale in cooldown time for your autoscaling policy.</p>
     */
    inline DynamicScalingConfiguration& WithScaleInCooldown(int value) { SetScaleInCooldown(value); return *this;}


    /**
     * <p>The recommended scale out cooldown time for your autoscaling policy.</p>
     */
    inline int GetScaleOutCooldown() const{ return m_scaleOutCooldown; }

    /**
     * <p>The recommended scale out cooldown time for your autoscaling policy.</p>
     */
    inline bool ScaleOutCooldownHasBeenSet() const { return m_scaleOutCooldownHasBeenSet; }

    /**
     * <p>The recommended scale out cooldown time for your autoscaling policy.</p>
     */
    inline void SetScaleOutCooldown(int value) { m_scaleOutCooldownHasBeenSet = true; m_scaleOutCooldown = value; }

    /**
     * <p>The recommended scale out cooldown time for your autoscaling policy.</p>
     */
    inline DynamicScalingConfiguration& WithScaleOutCooldown(int value) { SetScaleOutCooldown(value); return *this;}


    /**
     * <p>An object of the scaling policies for each metric.</p>
     */
    inline const Aws::Vector<ScalingPolicy>& GetScalingPolicies() const{ return m_scalingPolicies; }

    /**
     * <p>An object of the scaling policies for each metric.</p>
     */
    inline bool ScalingPoliciesHasBeenSet() const { return m_scalingPoliciesHasBeenSet; }

    /**
     * <p>An object of the scaling policies for each metric.</p>
     */
    inline void SetScalingPolicies(const Aws::Vector<ScalingPolicy>& value) { m_scalingPoliciesHasBeenSet = true; m_scalingPolicies = value; }

    /**
     * <p>An object of the scaling policies for each metric.</p>
     */
    inline void SetScalingPolicies(Aws::Vector<ScalingPolicy>&& value) { m_scalingPoliciesHasBeenSet = true; m_scalingPolicies = std::move(value); }

    /**
     * <p>An object of the scaling policies for each metric.</p>
     */
    inline DynamicScalingConfiguration& WithScalingPolicies(const Aws::Vector<ScalingPolicy>& value) { SetScalingPolicies(value); return *this;}

    /**
     * <p>An object of the scaling policies for each metric.</p>
     */
    inline DynamicScalingConfiguration& WithScalingPolicies(Aws::Vector<ScalingPolicy>&& value) { SetScalingPolicies(std::move(value)); return *this;}

    /**
     * <p>An object of the scaling policies for each metric.</p>
     */
    inline DynamicScalingConfiguration& AddScalingPolicies(const ScalingPolicy& value) { m_scalingPoliciesHasBeenSet = true; m_scalingPolicies.push_back(value); return *this; }

    /**
     * <p>An object of the scaling policies for each metric.</p>
     */
    inline DynamicScalingConfiguration& AddScalingPolicies(ScalingPolicy&& value) { m_scalingPoliciesHasBeenSet = true; m_scalingPolicies.push_back(std::move(value)); return *this; }

  private:

    int m_minCapacity;
    bool m_minCapacityHasBeenSet = false;

    int m_maxCapacity;
    bool m_maxCapacityHasBeenSet = false;

    int m_scaleInCooldown;
    bool m_scaleInCooldownHasBeenSet = false;

    int m_scaleOutCooldown;
    bool m_scaleOutCooldownHasBeenSet = false;

    Aws::Vector<ScalingPolicy> m_scalingPolicies;
    bool m_scalingPoliciesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
