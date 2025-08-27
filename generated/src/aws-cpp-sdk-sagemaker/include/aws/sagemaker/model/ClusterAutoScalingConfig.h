/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterAutoScalingMode.h>
#include <aws/sagemaker/model/ClusterAutoScalerType.h>
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
   * <p>Specifies the autoscaling configuration for a HyperPod cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterAutoScalingConfig">AWS
   * API Reference</a></p>
   */
  class ClusterAutoScalingConfig
  {
  public:
    AWS_SAGEMAKER_API ClusterAutoScalingConfig() = default;
    AWS_SAGEMAKER_API ClusterAutoScalingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterAutoScalingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes whether autoscaling is enabled or disabled for the cluster. Valid
     * values are <code>Enable</code> and <code>Disable</code>.</p>
     */
    inline ClusterAutoScalingMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(ClusterAutoScalingMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline ClusterAutoScalingConfig& WithMode(ClusterAutoScalingMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of autoscaler to use. Currently supported value is
     * <code>Karpenter</code>.</p>
     */
    inline ClusterAutoScalerType GetAutoScalerType() const { return m_autoScalerType; }
    inline bool AutoScalerTypeHasBeenSet() const { return m_autoScalerTypeHasBeenSet; }
    inline void SetAutoScalerType(ClusterAutoScalerType value) { m_autoScalerTypeHasBeenSet = true; m_autoScalerType = value; }
    inline ClusterAutoScalingConfig& WithAutoScalerType(ClusterAutoScalerType value) { SetAutoScalerType(value); return *this;}
    ///@}
  private:

    ClusterAutoScalingMode m_mode{ClusterAutoScalingMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    ClusterAutoScalerType m_autoScalerType{ClusterAutoScalerType::NOT_SET};
    bool m_autoScalerTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
