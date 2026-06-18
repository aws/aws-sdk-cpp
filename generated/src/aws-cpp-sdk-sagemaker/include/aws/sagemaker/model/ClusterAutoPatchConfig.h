/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
   * <p>The strategy for applying patches to instances in the group.</p>
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
 private:
  ClusterPatchingStrategy m_patchingStrategy{ClusterPatchingStrategy::NOT_SET};

  ClusterPatchSchedule m_patchSchedule;

  DeploymentConfiguration m_deploymentConfig;
  bool m_patchingStrategyHasBeenSet = false;
  bool m_patchScheduleHasBeenSet = false;
  bool m_deploymentConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
