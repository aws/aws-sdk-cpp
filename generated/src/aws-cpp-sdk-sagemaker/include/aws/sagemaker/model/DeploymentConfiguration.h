/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/RollingDeploymentPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AlarmDetails.h>
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
   * <p>The configuration to use when updating the AMI versions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeploymentConfiguration">AWS
   * API Reference</a></p>
   */
  class DeploymentConfiguration
  {
  public:
    AWS_SAGEMAKER_API DeploymentConfiguration() = default;
    AWS_SAGEMAKER_API DeploymentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DeploymentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The policy that SageMaker uses when updating the AMI versions of the cluster.
     * </p>
     */
    inline const RollingDeploymentPolicy& GetRollingUpdatePolicy() const { return m_rollingUpdatePolicy; }
    inline bool RollingUpdatePolicyHasBeenSet() const { return m_rollingUpdatePolicyHasBeenSet; }
    template<typename RollingUpdatePolicyT = RollingDeploymentPolicy>
    void SetRollingUpdatePolicy(RollingUpdatePolicyT&& value) { m_rollingUpdatePolicyHasBeenSet = true; m_rollingUpdatePolicy = std::forward<RollingUpdatePolicyT>(value); }
    template<typename RollingUpdatePolicyT = RollingDeploymentPolicy>
    DeploymentConfiguration& WithRollingUpdatePolicy(RollingUpdatePolicyT&& value) { SetRollingUpdatePolicy(std::forward<RollingUpdatePolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration in seconds that SageMaker waits before updating more instances
     * in the cluster.</p>
     */
    inline int GetWaitIntervalInSeconds() const { return m_waitIntervalInSeconds; }
    inline bool WaitIntervalInSecondsHasBeenSet() const { return m_waitIntervalInSecondsHasBeenSet; }
    inline void SetWaitIntervalInSeconds(int value) { m_waitIntervalInSecondsHasBeenSet = true; m_waitIntervalInSeconds = value; }
    inline DeploymentConfiguration& WithWaitIntervalInSeconds(int value) { SetWaitIntervalInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that contains the alarms that SageMaker monitors to know whether to
     * roll back the AMI update.</p>
     */
    inline const Aws::Vector<AlarmDetails>& GetAutoRollbackConfiguration() const { return m_autoRollbackConfiguration; }
    inline bool AutoRollbackConfigurationHasBeenSet() const { return m_autoRollbackConfigurationHasBeenSet; }
    template<typename AutoRollbackConfigurationT = Aws::Vector<AlarmDetails>>
    void SetAutoRollbackConfiguration(AutoRollbackConfigurationT&& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration = std::forward<AutoRollbackConfigurationT>(value); }
    template<typename AutoRollbackConfigurationT = Aws::Vector<AlarmDetails>>
    DeploymentConfiguration& WithAutoRollbackConfiguration(AutoRollbackConfigurationT&& value) { SetAutoRollbackConfiguration(std::forward<AutoRollbackConfigurationT>(value)); return *this;}
    template<typename AutoRollbackConfigurationT = AlarmDetails>
    DeploymentConfiguration& AddAutoRollbackConfiguration(AutoRollbackConfigurationT&& value) { m_autoRollbackConfigurationHasBeenSet = true; m_autoRollbackConfiguration.emplace_back(std::forward<AutoRollbackConfigurationT>(value)); return *this; }
    ///@}
  private:

    RollingDeploymentPolicy m_rollingUpdatePolicy;
    bool m_rollingUpdatePolicyHasBeenSet = false;

    int m_waitIntervalInSeconds{0};
    bool m_waitIntervalInSecondsHasBeenSet = false;

    Aws::Vector<AlarmDetails> m_autoRollbackConfiguration;
    bool m_autoRollbackConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
