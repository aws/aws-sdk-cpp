/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/BlueGreenUpdatePolicy.h>
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
   * <p>The deployment configuration for an endpoint, which contains the desired
   * deployment strategy and rollback configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeploymentConfig">AWS
   * API Reference</a></p>
   */
  class DeploymentConfig
  {
  public:
    AWS_SAGEMAKER_API DeploymentConfig();
    AWS_SAGEMAKER_API DeploymentConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DeploymentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Update policy for a blue/green deployment. If this update policy is
     * specified, SageMaker creates a new fleet during the deployment while maintaining
     * the old fleet. SageMaker flips traffic to the new fleet according to the
     * specified traffic routing configuration. Only one update policy should be used
     * in the deployment configuration. If no update policy is specified, SageMaker
     * uses a blue/green deployment strategy with all at once traffic shifting by
     * default.</p>
     */
    inline const BlueGreenUpdatePolicy& GetBlueGreenUpdatePolicy() const{ return m_blueGreenUpdatePolicy; }

    /**
     * <p>Update policy for a blue/green deployment. If this update policy is
     * specified, SageMaker creates a new fleet during the deployment while maintaining
     * the old fleet. SageMaker flips traffic to the new fleet according to the
     * specified traffic routing configuration. Only one update policy should be used
     * in the deployment configuration. If no update policy is specified, SageMaker
     * uses a blue/green deployment strategy with all at once traffic shifting by
     * default.</p>
     */
    inline bool BlueGreenUpdatePolicyHasBeenSet() const { return m_blueGreenUpdatePolicyHasBeenSet; }

    /**
     * <p>Update policy for a blue/green deployment. If this update policy is
     * specified, SageMaker creates a new fleet during the deployment while maintaining
     * the old fleet. SageMaker flips traffic to the new fleet according to the
     * specified traffic routing configuration. Only one update policy should be used
     * in the deployment configuration. If no update policy is specified, SageMaker
     * uses a blue/green deployment strategy with all at once traffic shifting by
     * default.</p>
     */
    inline void SetBlueGreenUpdatePolicy(const BlueGreenUpdatePolicy& value) { m_blueGreenUpdatePolicyHasBeenSet = true; m_blueGreenUpdatePolicy = value; }

    /**
     * <p>Update policy for a blue/green deployment. If this update policy is
     * specified, SageMaker creates a new fleet during the deployment while maintaining
     * the old fleet. SageMaker flips traffic to the new fleet according to the
     * specified traffic routing configuration. Only one update policy should be used
     * in the deployment configuration. If no update policy is specified, SageMaker
     * uses a blue/green deployment strategy with all at once traffic shifting by
     * default.</p>
     */
    inline void SetBlueGreenUpdatePolicy(BlueGreenUpdatePolicy&& value) { m_blueGreenUpdatePolicyHasBeenSet = true; m_blueGreenUpdatePolicy = std::move(value); }

    /**
     * <p>Update policy for a blue/green deployment. If this update policy is
     * specified, SageMaker creates a new fleet during the deployment while maintaining
     * the old fleet. SageMaker flips traffic to the new fleet according to the
     * specified traffic routing configuration. Only one update policy should be used
     * in the deployment configuration. If no update policy is specified, SageMaker
     * uses a blue/green deployment strategy with all at once traffic shifting by
     * default.</p>
     */
    inline DeploymentConfig& WithBlueGreenUpdatePolicy(const BlueGreenUpdatePolicy& value) { SetBlueGreenUpdatePolicy(value); return *this;}

    /**
     * <p>Update policy for a blue/green deployment. If this update policy is
     * specified, SageMaker creates a new fleet during the deployment while maintaining
     * the old fleet. SageMaker flips traffic to the new fleet according to the
     * specified traffic routing configuration. Only one update policy should be used
     * in the deployment configuration. If no update policy is specified, SageMaker
     * uses a blue/green deployment strategy with all at once traffic shifting by
     * default.</p>
     */
    inline DeploymentConfig& WithBlueGreenUpdatePolicy(BlueGreenUpdatePolicy&& value) { SetBlueGreenUpdatePolicy(std::move(value)); return *this;}


    /**
     * <p>Automatic rollback configuration for handling endpoint deployment failures
     * and recovery.</p>
     */
    inline const AutoRollbackConfig& GetAutoRollbackConfiguration() const{ return m_autoRollbackConfiguration; }

    /**
     * <p>Automatic rollback configuration for handling endpoint deployment failures
     * and recovery.</p>
     */
    inline bool AutoRollbackConfigurationHasBeenSet() const { return m_autoRollbackConfigurationHasBeenSet; }

    /**
     * <p>Automatic rollback configuration for handling endpoint deployment failures
     * and recovery.</p>
     */
    inline void SetAutoRollbackConfiguration(const AutoRollbackConfig& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = value; }

    /**
     * <p>Automatic rollback configuration for handling endpoint deployment failures
     * and recovery.</p>
     */
    inline void SetAutoRollbackConfiguration(AutoRollbackConfig&& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = std::move(value); }

    /**
     * <p>Automatic rollback configuration for handling endpoint deployment failures
     * and recovery.</p>
     */
    inline DeploymentConfig& WithAutoRollbackConfiguration(const AutoRollbackConfig& value) { SetAutoRollbackConfiguration(value); return *this;}

    /**
     * <p>Automatic rollback configuration for handling endpoint deployment failures
     * and recovery.</p>
     */
    inline DeploymentConfig& WithAutoRollbackConfiguration(AutoRollbackConfig&& value) { SetAutoRollbackConfiguration(std::move(value)); return *this;}

  private:

    BlueGreenUpdatePolicy m_blueGreenUpdatePolicy;
    bool m_blueGreenUpdatePolicyHasBeenSet = false;

    AutoRollbackConfig m_autoRollbackConfiguration;
    bool m_autoRollbackConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
