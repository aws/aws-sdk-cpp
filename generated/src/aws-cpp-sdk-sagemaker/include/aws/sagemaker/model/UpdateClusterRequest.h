/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ClusterTieredStorageConfig.h>
#include <aws/sagemaker/model/ClusterNodeRecovery.h>
#include <aws/sagemaker/model/ClusterAutoScalingConfig.h>
#include <aws/sagemaker/model/ClusterInstanceGroupSpecification.h>
#include <aws/sagemaker/model/ClusterRestrictedInstanceGroupSpecification.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateClusterRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCluster"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specify the name of the SageMaker HyperPod cluster you want to update.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    UpdateClusterRequest& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the instance groups to update.</p>
     */
    inline const Aws::Vector<ClusterInstanceGroupSpecification>& GetInstanceGroups() const { return m_instanceGroups; }
    inline bool InstanceGroupsHasBeenSet() const { return m_instanceGroupsHasBeenSet; }
    template<typename InstanceGroupsT = Aws::Vector<ClusterInstanceGroupSpecification>>
    void SetInstanceGroups(InstanceGroupsT&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = std::forward<InstanceGroupsT>(value); }
    template<typename InstanceGroupsT = Aws::Vector<ClusterInstanceGroupSpecification>>
    UpdateClusterRequest& WithInstanceGroups(InstanceGroupsT&& value) { SetInstanceGroups(std::forward<InstanceGroupsT>(value)); return *this;}
    template<typename InstanceGroupsT = ClusterInstanceGroupSpecification>
    UpdateClusterRequest& AddInstanceGroups(InstanceGroupsT&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.emplace_back(std::forward<InstanceGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The specialized instance groups for training models like Amazon Nova to be
     * created in the SageMaker HyperPod cluster.</p>
     */
    inline const Aws::Vector<ClusterRestrictedInstanceGroupSpecification>& GetRestrictedInstanceGroups() const { return m_restrictedInstanceGroups; }
    inline bool RestrictedInstanceGroupsHasBeenSet() const { return m_restrictedInstanceGroupsHasBeenSet; }
    template<typename RestrictedInstanceGroupsT = Aws::Vector<ClusterRestrictedInstanceGroupSpecification>>
    void SetRestrictedInstanceGroups(RestrictedInstanceGroupsT&& value) { m_restrictedInstanceGroupsHasBeenSet = true; m_restrictedInstanceGroups = std::forward<RestrictedInstanceGroupsT>(value); }
    template<typename RestrictedInstanceGroupsT = Aws::Vector<ClusterRestrictedInstanceGroupSpecification>>
    UpdateClusterRequest& WithRestrictedInstanceGroups(RestrictedInstanceGroupsT&& value) { SetRestrictedInstanceGroups(std::forward<RestrictedInstanceGroupsT>(value)); return *this;}
    template<typename RestrictedInstanceGroupsT = ClusterRestrictedInstanceGroupSpecification>
    UpdateClusterRequest& AddRestrictedInstanceGroups(RestrictedInstanceGroupsT&& value) { m_restrictedInstanceGroupsHasBeenSet = true; m_restrictedInstanceGroups.emplace_back(std::forward<RestrictedInstanceGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Updates the configuration for managed tier checkpointing on the HyperPod
     * cluster. For example, you can enable or disable the feature and modify the
     * percentage of cluster memory allocated for checkpoint storage.</p>
     */
    inline const ClusterTieredStorageConfig& GetTieredStorageConfig() const { return m_tieredStorageConfig; }
    inline bool TieredStorageConfigHasBeenSet() const { return m_tieredStorageConfigHasBeenSet; }
    template<typename TieredStorageConfigT = ClusterTieredStorageConfig>
    void SetTieredStorageConfig(TieredStorageConfigT&& value) { m_tieredStorageConfigHasBeenSet = true; m_tieredStorageConfig = std::forward<TieredStorageConfigT>(value); }
    template<typename TieredStorageConfigT = ClusterTieredStorageConfig>
    UpdateClusterRequest& WithTieredStorageConfig(TieredStorageConfigT&& value) { SetTieredStorageConfig(std::forward<TieredStorageConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node recovery mode to be applied to the SageMaker HyperPod cluster.</p>
     */
    inline ClusterNodeRecovery GetNodeRecovery() const { return m_nodeRecovery; }
    inline bool NodeRecoveryHasBeenSet() const { return m_nodeRecoveryHasBeenSet; }
    inline void SetNodeRecovery(ClusterNodeRecovery value) { m_nodeRecoveryHasBeenSet = true; m_nodeRecovery = value; }
    inline UpdateClusterRequest& WithNodeRecovery(ClusterNodeRecovery value) { SetNodeRecovery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the names of the instance groups to delete. Use a single
     * <code>,</code> as the separator between multiple names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceGroupsToDelete() const { return m_instanceGroupsToDelete; }
    inline bool InstanceGroupsToDeleteHasBeenSet() const { return m_instanceGroupsToDeleteHasBeenSet; }
    template<typename InstanceGroupsToDeleteT = Aws::Vector<Aws::String>>
    void SetInstanceGroupsToDelete(InstanceGroupsToDeleteT&& value) { m_instanceGroupsToDeleteHasBeenSet = true; m_instanceGroupsToDelete = std::forward<InstanceGroupsToDeleteT>(value); }
    template<typename InstanceGroupsToDeleteT = Aws::Vector<Aws::String>>
    UpdateClusterRequest& WithInstanceGroupsToDelete(InstanceGroupsToDeleteT&& value) { SetInstanceGroupsToDelete(std::forward<InstanceGroupsToDeleteT>(value)); return *this;}
    template<typename InstanceGroupsToDeleteT = Aws::String>
    UpdateClusterRequest& AddInstanceGroupsToDelete(InstanceGroupsToDeleteT&& value) { m_instanceGroupsToDeleteHasBeenSet = true; m_instanceGroupsToDelete.emplace_back(std::forward<InstanceGroupsToDeleteT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that HyperPod assumes for
     * cluster autoscaling operations. Cannot be updated while autoscaling is
     * enabled.</p>
     */
    inline const Aws::String& GetClusterRole() const { return m_clusterRole; }
    inline bool ClusterRoleHasBeenSet() const { return m_clusterRoleHasBeenSet; }
    template<typename ClusterRoleT = Aws::String>
    void SetClusterRole(ClusterRoleT&& value) { m_clusterRoleHasBeenSet = true; m_clusterRole = std::forward<ClusterRoleT>(value); }
    template<typename ClusterRoleT = Aws::String>
    UpdateClusterRequest& WithClusterRole(ClusterRoleT&& value) { SetClusterRole(std::forward<ClusterRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the autoscaling configuration for the cluster. Use to enable or
     * disable automatic node scaling.</p>
     */
    inline const ClusterAutoScalingConfig& GetAutoScaling() const { return m_autoScaling; }
    inline bool AutoScalingHasBeenSet() const { return m_autoScalingHasBeenSet; }
    template<typename AutoScalingT = ClusterAutoScalingConfig>
    void SetAutoScaling(AutoScalingT&& value) { m_autoScalingHasBeenSet = true; m_autoScaling = std::forward<AutoScalingT>(value); }
    template<typename AutoScalingT = ClusterAutoScalingConfig>
    UpdateClusterRequest& WithAutoScaling(AutoScalingT&& value) { SetAutoScaling(std::forward<AutoScalingT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::Vector<ClusterInstanceGroupSpecification> m_instanceGroups;
    bool m_instanceGroupsHasBeenSet = false;

    Aws::Vector<ClusterRestrictedInstanceGroupSpecification> m_restrictedInstanceGroups;
    bool m_restrictedInstanceGroupsHasBeenSet = false;

    ClusterTieredStorageConfig m_tieredStorageConfig;
    bool m_tieredStorageConfigHasBeenSet = false;

    ClusterNodeRecovery m_nodeRecovery{ClusterNodeRecovery::NOT_SET};
    bool m_nodeRecoveryHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceGroupsToDelete;
    bool m_instanceGroupsToDeleteHasBeenSet = false;

    Aws::String m_clusterRole;
    bool m_clusterRoleHasBeenSet = false;

    ClusterAutoScalingConfig m_autoScaling;
    bool m_autoScalingHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
