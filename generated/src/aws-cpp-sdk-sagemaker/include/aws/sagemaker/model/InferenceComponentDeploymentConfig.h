/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/InferenceComponentRollingUpdatePolicy.h>
#include <aws/sagemaker/model/AutoRollbackConfig.h>
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
   * <p>The deployment configuration for an endpoint that hosts inference components.
   * The configuration includes the desired deployment strategy and rollback
   * settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceComponentDeploymentConfig">AWS
   * API Reference</a></p>
   */
  class InferenceComponentDeploymentConfig
  {
  public:
    AWS_SAGEMAKER_API InferenceComponentDeploymentConfig();
    AWS_SAGEMAKER_API InferenceComponentDeploymentConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceComponentDeploymentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies a rolling deployment strategy for updating a SageMaker AI
     * endpoint.</p>
     */
    inline const InferenceComponentRollingUpdatePolicy& GetRollingUpdatePolicy() const{ return m_rollingUpdatePolicy; }
    inline bool RollingUpdatePolicyHasBeenSet() const { return m_rollingUpdatePolicyHasBeenSet; }
    inline void SetRollingUpdatePolicy(const InferenceComponentRollingUpdatePolicy& value) { m_rollingUpdatePolicyHasBeenSet = true; m_rollingUpdatePolicy = value; }
    inline void SetRollingUpdatePolicy(InferenceComponentRollingUpdatePolicy&& value) { m_rollingUpdatePolicyHasBeenSet = true; m_rollingUpdatePolicy = std::move(value); }
    inline InferenceComponentDeploymentConfig& WithRollingUpdatePolicy(const InferenceComponentRollingUpdatePolicy& value) { SetRollingUpdatePolicy(value); return *this;}
    inline InferenceComponentDeploymentConfig& WithRollingUpdatePolicy(InferenceComponentRollingUpdatePolicy&& value) { SetRollingUpdatePolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const AutoRollbackConfig& GetAutoRollbackConfiguration() const{ return m_autoRollbackConfiguration; }
    inline bool AutoRollbackConfigurationHasBeenSet() const { return m_autoRollbackConfigurationHasBeenSet; }
    inline void SetAutoRollbackConfiguration(const AutoRollbackConfig& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = value; }
    inline void SetAutoRollbackConfiguration(AutoRollbackConfig&& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = std::move(value); }
    inline InferenceComponentDeploymentConfig& WithAutoRollbackConfiguration(const AutoRollbackConfig& value) { SetAutoRollbackConfiguration(value); return *this;}
    inline InferenceComponentDeploymentConfig& WithAutoRollbackConfiguration(AutoRollbackConfig&& value) { SetAutoRollbackConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    InferenceComponentRollingUpdatePolicy m_rollingUpdatePolicy;
    bool m_rollingUpdatePolicyHasBeenSet = false;

    AutoRollbackConfig m_autoRollbackConfiguration;
    bool m_autoRollbackConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
