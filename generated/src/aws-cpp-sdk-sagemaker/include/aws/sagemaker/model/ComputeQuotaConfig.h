/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ResourceSharingConfig.h>
#include <aws/sagemaker/model/PreemptTeamTasks.h>
#include <aws/sagemaker/model/ComputeQuotaResourceConfig.h>
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
   * <p>Configuration of the compute allocation definition for an entity. This
   * includes the resource sharing option and the setting to preempt low priority
   * tasks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ComputeQuotaConfig">AWS
   * API Reference</a></p>
   */
  class ComputeQuotaConfig
  {
  public:
    AWS_SAGEMAKER_API ComputeQuotaConfig() = default;
    AWS_SAGEMAKER_API ComputeQuotaConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ComputeQuotaConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allocate compute resources by instance types.</p>
     */
    inline const Aws::Vector<ComputeQuotaResourceConfig>& GetComputeQuotaResources() const { return m_computeQuotaResources; }
    inline bool ComputeQuotaResourcesHasBeenSet() const { return m_computeQuotaResourcesHasBeenSet; }
    template<typename ComputeQuotaResourcesT = Aws::Vector<ComputeQuotaResourceConfig>>
    void SetComputeQuotaResources(ComputeQuotaResourcesT&& value) { m_computeQuotaResourcesHasBeenSet = true; m_computeQuotaResources = std::forward<ComputeQuotaResourcesT>(value); }
    template<typename ComputeQuotaResourcesT = Aws::Vector<ComputeQuotaResourceConfig>>
    ComputeQuotaConfig& WithComputeQuotaResources(ComputeQuotaResourcesT&& value) { SetComputeQuotaResources(std::forward<ComputeQuotaResourcesT>(value)); return *this;}
    template<typename ComputeQuotaResourcesT = ComputeQuotaResourceConfig>
    ComputeQuotaConfig& AddComputeQuotaResources(ComputeQuotaResourcesT&& value) { m_computeQuotaResourcesHasBeenSet = true; m_computeQuotaResources.emplace_back(std::forward<ComputeQuotaResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Resource sharing configuration. This defines how an entity can lend and
     * borrow idle compute with other entities within the cluster.</p>
     */
    inline const ResourceSharingConfig& GetResourceSharingConfig() const { return m_resourceSharingConfig; }
    inline bool ResourceSharingConfigHasBeenSet() const { return m_resourceSharingConfigHasBeenSet; }
    template<typename ResourceSharingConfigT = ResourceSharingConfig>
    void SetResourceSharingConfig(ResourceSharingConfigT&& value) { m_resourceSharingConfigHasBeenSet = true; m_resourceSharingConfig = std::forward<ResourceSharingConfigT>(value); }
    template<typename ResourceSharingConfigT = ResourceSharingConfig>
    ComputeQuotaConfig& WithResourceSharingConfig(ResourceSharingConfigT&& value) { SetResourceSharingConfig(std::forward<ResourceSharingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows workloads from within an entity to preempt same-team workloads. When
     * set to <code>LowerPriority</code>, the entity's lower priority tasks are
     * preempted by their own higher priority tasks.</p> <p>Default is
     * <code>LowerPriority</code>.</p>
     */
    inline PreemptTeamTasks GetPreemptTeamTasks() const { return m_preemptTeamTasks; }
    inline bool PreemptTeamTasksHasBeenSet() const { return m_preemptTeamTasksHasBeenSet; }
    inline void SetPreemptTeamTasks(PreemptTeamTasks value) { m_preemptTeamTasksHasBeenSet = true; m_preemptTeamTasks = value; }
    inline ComputeQuotaConfig& WithPreemptTeamTasks(PreemptTeamTasks value) { SetPreemptTeamTasks(value); return *this;}
    ///@}
  private:

    Aws::Vector<ComputeQuotaResourceConfig> m_computeQuotaResources;
    bool m_computeQuotaResourcesHasBeenSet = false;

    ResourceSharingConfig m_resourceSharingConfig;
    bool m_resourceSharingConfigHasBeenSet = false;

    PreemptTeamTasks m_preemptTeamTasks{PreemptTeamTasks::NOT_SET};
    bool m_preemptTeamTasksHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
