/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterDrainPolicy.h>
#include <aws/sagemaker/model/ClusterPatchSchedule.h>
#include <aws/sagemaker/model/ClusterPatchingStrategy.h>
#include <aws/sagemaker/model/DeploymentConfiguration.h>

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
 * <p>The configuration for automatic patching of the instance group. When
 * configured, the system automatically applies security patch AMI updates to the
 * instance group.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterAutoPatchConfig">AWS
 * API Reference</a></p>
 */
class ClusterAutoPatchConfig {
 public:
  AWS_SAGEMAKER_API ClusterAutoPatchConfig() = default;
  AWS_SAGEMAKER_API ClusterAutoPatchConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterAutoPatchConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The strategy for applying patches to instances in the group.</p> <ul> <li>
   * <p> <code>WhenIdle</code>: Cordons all instances and patches each instance as it
   * becomes idle (no running jobs). Each instance is uncordoned immediately after
   * patching and becomes available for new jobs. If instances do not become idle,
   * they remain on the previous AMI version. You can then use UpdateClusterSoftware
   * with the desired ImageReleaseVersion to manually update the remaining
   * instances.</p> </li> <li> <p> <code>WhenAllIdle</code>: Cordons all instances
   * and waits for all to become idle before patching. All instances are uncordoned
   * after patching completes. If not all instances become idle, no patching occurs
   * and all instances remain on the previous AMI version.</p> </li> <li> <p>
   * <code>DrainFirst</code>: Designed for workloads that never become idle, such as
   * inference. Cordons instances, evicts the running pods, and then patches each
   * instance in batches. Each instance is uncordoned after patching. Use
   * <code>DrainPolicy</code> to control how long to wait for pods to drain and what
   * happens if the drain times out. Requires <code>MaximumBatchSize</code> in
   * <code>DeploymentConfig</code>. Available only for clusters that use Amazon EKS
   * as the orchestrator.</p> </li> </ul>
   */
  inline ClusterPatchingStrategy GetPatchingStrategy() const { return m_patchingStrategy; }
  inline bool PatchingStrategyHasBeenSet() const { return m_patchingStrategyHasBeenSet; }
  inline void SetPatchingStrategy(ClusterPatchingStrategy value) {
    m_patchingStrategyHasBeenSet = true;
    m_patchingStrategy = value;
  }
  inline ClusterAutoPatchConfig& WithPatchingStrategy(ClusterPatchingStrategy value) {
    SetPatchingStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schedule for automatic patching, including the next patch date.</p>
   */
  inline const ClusterPatchSchedule& GetPatchSchedule() const { return m_patchSchedule; }
  inline bool PatchScheduleHasBeenSet() const { return m_patchScheduleHasBeenSet; }
  template <typename PatchScheduleT = ClusterPatchSchedule>
  void SetPatchSchedule(PatchScheduleT&& value) {
    m_patchScheduleHasBeenSet = true;
    m_patchSchedule = std::forward<PatchScheduleT>(value);
  }
  template <typename PatchScheduleT = ClusterPatchSchedule>
  ClusterAutoPatchConfig& WithPatchSchedule(PatchScheduleT&& value) {
    SetPatchSchedule(std::forward<PatchScheduleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The deployment configuration for rolling patch updates, including rollback
   * settings and batch sizes. Only applicable when using a rolling patching
   * strategy.</p>
   */
  inline const DeploymentConfiguration& GetDeploymentConfig() const { return m_deploymentConfig; }
  inline bool DeploymentConfigHasBeenSet() const { return m_deploymentConfigHasBeenSet; }
  template <typename DeploymentConfigT = DeploymentConfiguration>
  void SetDeploymentConfig(DeploymentConfigT&& value) {
    m_deploymentConfigHasBeenSet = true;
    m_deploymentConfig = std::forward<DeploymentConfigT>(value);
  }
  template <typename DeploymentConfigT = DeploymentConfiguration>
  ClusterAutoPatchConfig& WithDeploymentConfig(DeploymentConfigT&& value) {
    SetDeploymentConfig(std::forward<DeploymentConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time, in seconds, that automatic patching waits for instances to
   * become idle after a scheduled patch starts. Automatic patching uncordons
   * instances that don't become idle within this window, and they remain on the
   * previous AMI version. Valid values are from 3600 (1 hour) to 2160000 (25 days).
   * The default is 86400 (24 hours). This setting applies only to the
   * <code>WhenIdle</code> and <code>WhenAllIdle</code> strategies.</p>
   */
  inline int GetIdleWaitWindowInSeconds() const { return m_idleWaitWindowInSeconds; }
  inline bool IdleWaitWindowInSecondsHasBeenSet() const { return m_idleWaitWindowInSecondsHasBeenSet; }
  inline void SetIdleWaitWindowInSeconds(int value) {
    m_idleWaitWindowInSecondsHasBeenSet = true;
    m_idleWaitWindowInSeconds = value;
  }
  inline ClusterAutoPatchConfig& WithIdleWaitWindowInSeconds(int value) {
    SetIdleWaitWindowInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The policy that controls how pods are evicted from an instance before it is
   * patched. Valid only when <code>PatchingStrategy</code> is
   * <code>DrainFirst</code>.</p>
   */
  inline const ClusterDrainPolicy& GetDrainPolicy() const { return m_drainPolicy; }
  inline bool DrainPolicyHasBeenSet() const { return m_drainPolicyHasBeenSet; }
  template <typename DrainPolicyT = ClusterDrainPolicy>
  void SetDrainPolicy(DrainPolicyT&& value) {
    m_drainPolicyHasBeenSet = true;
    m_drainPolicy = std::forward<DrainPolicyT>(value);
  }
  template <typename DrainPolicyT = ClusterDrainPolicy>
  ClusterAutoPatchConfig& WithDrainPolicy(DrainPolicyT&& value) {
    SetDrainPolicy(std::forward<DrainPolicyT>(value));
    return *this;
  }
  ///@}
 private:
  ClusterPatchingStrategy m_patchingStrategy{ClusterPatchingStrategy::NOT_SET};

  ClusterPatchSchedule m_patchSchedule;

  DeploymentConfiguration m_deploymentConfig;

  int m_idleWaitWindowInSeconds{0};

  ClusterDrainPolicy m_drainPolicy;
  bool m_patchingStrategyHasBeenSet = false;
  bool m_patchScheduleHasBeenSet = false;
  bool m_deploymentConfigHasBeenSet = false;
  bool m_idleWaitWindowInSecondsHasBeenSet = false;
  bool m_drainPolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
