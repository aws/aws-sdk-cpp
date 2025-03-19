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
    AWS_SAGEMAKER_API InferenceComponentDeploymentConfig() = default;
    AWS_SAGEMAKER_API InferenceComponentDeploymentConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceComponentDeploymentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies a rolling deployment strategy for updating a SageMaker AI
     * endpoint.</p>
     */
    inline const InferenceComponentRollingUpdatePolicy& GetRollingUpdatePolicy() const { return m_rollingUpdatePolicy; }
    inline bool RollingUpdatePolicyHasBeenSet() const { return m_rollingUpdatePolicyHasBeenSet; }
    template<typename RollingUpdatePolicyT = InferenceComponentRollingUpdatePolicy>
    void SetRollingUpdatePolicy(RollingUpdatePolicyT&& value) { m_rollingUpdatePolicyHasBeenSet = true; m_rollingUpdatePolicy = std::forward<RollingUpdatePolicyT>(value); }
    template<typename RollingUpdatePolicyT = InferenceComponentRollingUpdatePolicy>
    InferenceComponentDeploymentConfig& WithRollingUpdatePolicy(RollingUpdatePolicyT&& value) { SetRollingUpdatePolicy(std::forward<RollingUpdatePolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AutoRollbackConfig& GetAutoRollbackConfiguration() const { return m_autoRollbackConfiguration; }
    inline bool AutoRollbackConfigurationHasBeenSet() const { return m_autoRollbackConfigurationHasBeenSet; }
    template<typename AutoRollbackConfigurationT = AutoRollbackConfig>
    void SetAutoRollbackConfiguration(AutoRollbackConfigurationT&& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = std::forward<AutoRollbackConfigurationT>(value); }
    template<typename AutoRollbackConfigurationT = AutoRollbackConfig>
    InferenceComponentDeploymentConfig& WithAutoRollbackConfiguration(AutoRollbackConfigurationT&& value) { SetAutoRollbackConfiguration(std::forward<AutoRollbackConfigurationT>(value)); return *this;}
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
