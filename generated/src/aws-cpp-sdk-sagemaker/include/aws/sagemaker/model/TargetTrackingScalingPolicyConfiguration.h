/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/MetricSpecification.h>
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
   * <p>A target tracking scaling policy. Includes support for predefined or
   * customized metrics.</p> <p>When using the <a
   * href="https://docs.aws.amazon.com/autoscaling/application/APIReference/API_PutScalingPolicy.html">PutScalingPolicy</a>
   * API, this parameter is required when you are creating a policy with the policy
   * type <code>TargetTrackingScaling</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TargetTrackingScalingPolicyConfiguration">AWS
   * API Reference</a></p>
   */
  class TargetTrackingScalingPolicyConfiguration
  {
  public:
    AWS_SAGEMAKER_API TargetTrackingScalingPolicyConfiguration();
    AWS_SAGEMAKER_API TargetTrackingScalingPolicyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TargetTrackingScalingPolicyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object containing information about a metric.</p>
     */
    inline const MetricSpecification& GetMetricSpecification() const{ return m_metricSpecification; }

    /**
     * <p>An object containing information about a metric.</p>
     */
    inline bool MetricSpecificationHasBeenSet() const { return m_metricSpecificationHasBeenSet; }

    /**
     * <p>An object containing information about a metric.</p>
     */
    inline void SetMetricSpecification(const MetricSpecification& value) { m_metricSpecificationHasBeenSet = true; m_metricSpecification = value; }

    /**
     * <p>An object containing information about a metric.</p>
     */
    inline void SetMetricSpecification(MetricSpecification&& value) { m_metricSpecificationHasBeenSet = true; m_metricSpecification = std::move(value); }

    /**
     * <p>An object containing information about a metric.</p>
     */
    inline TargetTrackingScalingPolicyConfiguration& WithMetricSpecification(const MetricSpecification& value) { SetMetricSpecification(value); return *this;}

    /**
     * <p>An object containing information about a metric.</p>
     */
    inline TargetTrackingScalingPolicyConfiguration& WithMetricSpecification(MetricSpecification&& value) { SetMetricSpecification(std::move(value)); return *this;}


    /**
     * <p>The recommended target value to specify for the metric when creating a
     * scaling policy.</p>
     */
    inline double GetTargetValue() const{ return m_targetValue; }

    /**
     * <p>The recommended target value to specify for the metric when creating a
     * scaling policy.</p>
     */
    inline bool TargetValueHasBeenSet() const { return m_targetValueHasBeenSet; }

    /**
     * <p>The recommended target value to specify for the metric when creating a
     * scaling policy.</p>
     */
    inline void SetTargetValue(double value) { m_targetValueHasBeenSet = true; m_targetValue = value; }

    /**
     * <p>The recommended target value to specify for the metric when creating a
     * scaling policy.</p>
     */
    inline TargetTrackingScalingPolicyConfiguration& WithTargetValue(double value) { SetTargetValue(value); return *this;}

  private:

    MetricSpecification m_metricSpecification;
    bool m_metricSpecificationHasBeenSet = false;

    double m_targetValue;
    bool m_targetValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
