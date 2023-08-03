/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TargetTrackingScalingPolicyConfiguration.h>
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
   * <p>An object containing a recommended scaling policy.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ScalingPolicy">AWS
   * API Reference</a></p>
   */
  class ScalingPolicy
  {
  public:
    AWS_SAGEMAKER_API ScalingPolicy();
    AWS_SAGEMAKER_API ScalingPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ScalingPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A target tracking scaling policy. Includes support for predefined or
     * customized metrics.</p>
     */
    inline const TargetTrackingScalingPolicyConfiguration& GetTargetTracking() const{ return m_targetTracking; }

    /**
     * <p>A target tracking scaling policy. Includes support for predefined or
     * customized metrics.</p>
     */
    inline bool TargetTrackingHasBeenSet() const { return m_targetTrackingHasBeenSet; }

    /**
     * <p>A target tracking scaling policy. Includes support for predefined or
     * customized metrics.</p>
     */
    inline void SetTargetTracking(const TargetTrackingScalingPolicyConfiguration& value) { m_targetTrackingHasBeenSet = true; m_targetTracking = value; }

    /**
     * <p>A target tracking scaling policy. Includes support for predefined or
     * customized metrics.</p>
     */
    inline void SetTargetTracking(TargetTrackingScalingPolicyConfiguration&& value) { m_targetTrackingHasBeenSet = true; m_targetTracking = std::move(value); }

    /**
     * <p>A target tracking scaling policy. Includes support for predefined or
     * customized metrics.</p>
     */
    inline ScalingPolicy& WithTargetTracking(const TargetTrackingScalingPolicyConfiguration& value) { SetTargetTracking(value); return *this;}

    /**
     * <p>A target tracking scaling policy. Includes support for predefined or
     * customized metrics.</p>
     */
    inline ScalingPolicy& WithTargetTracking(TargetTrackingScalingPolicyConfiguration&& value) { SetTargetTracking(std::move(value)); return *this;}

  private:

    TargetTrackingScalingPolicyConfiguration m_targetTracking;
    bool m_targetTrackingHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
