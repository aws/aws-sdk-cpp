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
    AWS_SAGEMAKER_API ComputeQuotaConfig();
    AWS_SAGEMAKER_API ComputeQuotaConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ComputeQuotaConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allocate compute resources by instance types.</p>
     */
    inline const Aws::Vector<ComputeQuotaResourceConfig>& GetComputeQuotaResources() const{ return m_computeQuotaResources; }
    inline bool ComputeQuotaResourcesHasBeenSet() const { return m_computeQuotaResourcesHasBeenSet; }
    inline void SetComputeQuotaResources(const Aws::Vector<ComputeQuotaResourceConfig>& value) { m_computeQuotaResourcesHasBeenSet = true; m_computeQuotaResources = value; }
    inline void SetComputeQuotaResources(Aws::Vector<ComputeQuotaResourceConfig>&& value) { m_computeQuotaResourcesHasBeenSet = true; m_computeQuotaResources = std::move(value); }
    inline ComputeQuotaConfig& WithComputeQuotaResources(const Aws::Vector<ComputeQuotaResourceConfig>& value) { SetComputeQuotaResources(value); return *this;}
    inline ComputeQuotaConfig& WithComputeQuotaResources(Aws::Vector<ComputeQuotaResourceConfig>&& value) { SetComputeQuotaResources(std::move(value)); return *this;}
    inline ComputeQuotaConfig& AddComputeQuotaResources(const ComputeQuotaResourceConfig& value) { m_computeQuotaResourcesHasBeenSet = true; m_computeQuotaResources.push_back(value); return *this; }
    inline ComputeQuotaConfig& AddComputeQuotaResources(ComputeQuotaResourceConfig&& value) { m_computeQuotaResourcesHasBeenSet = true; m_computeQuotaResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Resource sharing configuration. This defines how an entity can lend and
     * borrow idle compute with other entities within the cluster.</p>
     */
    inline const ResourceSharingConfig& GetResourceSharingConfig() const{ return m_resourceSharingConfig; }
    inline bool ResourceSharingConfigHasBeenSet() const { return m_resourceSharingConfigHasBeenSet; }
    inline void SetResourceSharingConfig(const ResourceSharingConfig& value) { m_resourceSharingConfigHasBeenSet = true; m_resourceSharingConfig = value; }
    inline void SetResourceSharingConfig(ResourceSharingConfig&& value) { m_resourceSharingConfigHasBeenSet = true; m_resourceSharingConfig = std::move(value); }
    inline ComputeQuotaConfig& WithResourceSharingConfig(const ResourceSharingConfig& value) { SetResourceSharingConfig(value); return *this;}
    inline ComputeQuotaConfig& WithResourceSharingConfig(ResourceSharingConfig&& value) { SetResourceSharingConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows workloads from within an entity to preempt same-team workloads. When
     * set to <code>LowerPriority</code>, the entity's lower priority tasks are
     * preempted by their own higher priority tasks.</p> <p>Default is
     * <code>LowerPriority</code>.</p>
     */
    inline const PreemptTeamTasks& GetPreemptTeamTasks() const{ return m_preemptTeamTasks; }
    inline bool PreemptTeamTasksHasBeenSet() const { return m_preemptTeamTasksHasBeenSet; }
    inline void SetPreemptTeamTasks(const PreemptTeamTasks& value) { m_preemptTeamTasksHasBeenSet = true; m_preemptTeamTasks = value; }
    inline void SetPreemptTeamTasks(PreemptTeamTasks&& value) { m_preemptTeamTasksHasBeenSet = true; m_preemptTeamTasks = std::move(value); }
    inline ComputeQuotaConfig& WithPreemptTeamTasks(const PreemptTeamTasks& value) { SetPreemptTeamTasks(value); return *this;}
    inline ComputeQuotaConfig& WithPreemptTeamTasks(PreemptTeamTasks&& value) { SetPreemptTeamTasks(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ComputeQuotaResourceConfig> m_computeQuotaResources;
    bool m_computeQuotaResourcesHasBeenSet = false;

    ResourceSharingConfig m_resourceSharingConfig;
    bool m_resourceSharingConfigHasBeenSet = false;

    PreemptTeamTasks m_preemptTeamTasks;
    bool m_preemptTeamTasksHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
