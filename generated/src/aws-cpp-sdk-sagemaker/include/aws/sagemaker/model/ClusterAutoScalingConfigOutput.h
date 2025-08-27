/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterAutoScalingMode.h>
#include <aws/sagemaker/model/ClusterAutoScalerType.h>
#include <aws/sagemaker/model/ClusterAutoScalingStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The autoscaling configuration and status information for a HyperPod
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterAutoScalingConfigOutput">AWS
   * API Reference</a></p>
   */
  class ClusterAutoScalingConfigOutput
  {
  public:
    AWS_SAGEMAKER_API ClusterAutoScalingConfigOutput() = default;
    AWS_SAGEMAKER_API ClusterAutoScalingConfigOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterAutoScalingConfigOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes whether autoscaling is enabled or disabled for the cluster.</p>
     */
    inline ClusterAutoScalingMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(ClusterAutoScalingMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline ClusterAutoScalingConfigOutput& WithMode(ClusterAutoScalingMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of autoscaler configured for the cluster.</p>
     */
    inline ClusterAutoScalerType GetAutoScalerType() const { return m_autoScalerType; }
    inline bool AutoScalerTypeHasBeenSet() const { return m_autoScalerTypeHasBeenSet; }
    inline void SetAutoScalerType(ClusterAutoScalerType value) { m_autoScalerTypeHasBeenSet = true; m_autoScalerType = value; }
    inline ClusterAutoScalingConfigOutput& WithAutoScalerType(ClusterAutoScalerType value) { SetAutoScalerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the autoscaling configuration. Valid values are
     * <code>InService</code>, <code>Failed</code>, <code>Creating</code>, and
     * <code>Deleting</code>.</p>
     */
    inline ClusterAutoScalingStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ClusterAutoScalingStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ClusterAutoScalingConfigOutput& WithStatus(ClusterAutoScalingStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the autoscaling status is <code>Failed</code>, this field contains a
     * message describing the failure.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    ClusterAutoScalingConfigOutput& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}
  private:

    ClusterAutoScalingMode m_mode{ClusterAutoScalingMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    ClusterAutoScalerType m_autoScalerType{ClusterAutoScalerType::NOT_SET};
    bool m_autoScalerTypeHasBeenSet = false;

    ClusterAutoScalingStatus m_status{ClusterAutoScalingStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
