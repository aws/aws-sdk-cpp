/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ClusterStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/sagemaker/model/ClusterOrchestrator.h>
#include <aws/sagemaker/model/ClusterTieredStorageConfig.h>
#include <aws/sagemaker/model/ClusterNodeRecovery.h>
#include <aws/sagemaker/model/ClusterNodeProvisioningMode.h>
#include <aws/sagemaker/model/ClusterAutoScalingConfigOutput.h>
#include <aws/sagemaker/model/ClusterInstanceGroupDetails.h>
#include <aws/sagemaker/model/ClusterRestrictedInstanceGroupDetails.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeClusterResult
  {
  public:
    AWS_SAGEMAKER_API DescribeClusterResult() = default;
    AWS_SAGEMAKER_API DescribeClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker HyperPod cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    DescribeClusterResult& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SageMaker HyperPod cluster.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    DescribeClusterResult& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the SageMaker HyperPod cluster.</p>
     */
    inline ClusterStatus GetClusterStatus() const { return m_clusterStatus; }
    inline void SetClusterStatus(ClusterStatus value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = value; }
    inline DescribeClusterResult& WithClusterStatus(ClusterStatus value) { SetClusterStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the SageMaker Cluster is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeClusterResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure message of the SageMaker HyperPod cluster.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    DescribeClusterResult& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance groups of the SageMaker HyperPod cluster.</p>
     */
    inline const Aws::Vector<ClusterInstanceGroupDetails>& GetInstanceGroups() const { return m_instanceGroups; }
    template<typename InstanceGroupsT = Aws::Vector<ClusterInstanceGroupDetails>>
    void SetInstanceGroups(InstanceGroupsT&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = std::forward<InstanceGroupsT>(value); }
    template<typename InstanceGroupsT = Aws::Vector<ClusterInstanceGroupDetails>>
    DescribeClusterResult& WithInstanceGroups(InstanceGroupsT&& value) { SetInstanceGroups(std::forward<InstanceGroupsT>(value)); return *this;}
    template<typename InstanceGroupsT = ClusterInstanceGroupDetails>
    DescribeClusterResult& AddInstanceGroups(InstanceGroupsT&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.emplace_back(std::forward<InstanceGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The specialized instance groups for training models like Amazon Nova to be
     * created in the SageMaker HyperPod cluster.</p>
     */
    inline const Aws::Vector<ClusterRestrictedInstanceGroupDetails>& GetRestrictedInstanceGroups() const { return m_restrictedInstanceGroups; }
    template<typename RestrictedInstanceGroupsT = Aws::Vector<ClusterRestrictedInstanceGroupDetails>>
    void SetRestrictedInstanceGroups(RestrictedInstanceGroupsT&& value) { m_restrictedInstanceGroupsHasBeenSet = true; m_restrictedInstanceGroups = std::forward<RestrictedInstanceGroupsT>(value); }
    template<typename RestrictedInstanceGroupsT = Aws::Vector<ClusterRestrictedInstanceGroupDetails>>
    DescribeClusterResult& WithRestrictedInstanceGroups(RestrictedInstanceGroupsT&& value) { SetRestrictedInstanceGroups(std::forward<RestrictedInstanceGroupsT>(value)); return *this;}
    template<typename RestrictedInstanceGroupsT = ClusterRestrictedInstanceGroupDetails>
    DescribeClusterResult& AddRestrictedInstanceGroups(RestrictedInstanceGroupsT&& value) { m_restrictedInstanceGroupsHasBeenSet = true; m_restrictedInstanceGroups.emplace_back(std::forward<RestrictedInstanceGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    DescribeClusterResult& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of orchestrator used for the SageMaker HyperPod cluster. </p>
     */
    inline const ClusterOrchestrator& GetOrchestrator() const { return m_orchestrator; }
    template<typename OrchestratorT = ClusterOrchestrator>
    void SetOrchestrator(OrchestratorT&& value) { m_orchestratorHasBeenSet = true; m_orchestrator = std::forward<OrchestratorT>(value); }
    template<typename OrchestratorT = ClusterOrchestrator>
    DescribeClusterResult& WithOrchestrator(OrchestratorT&& value) { SetOrchestrator(std::forward<OrchestratorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current configuration for managed tier checkpointing on the HyperPod
     * cluster. For example, this shows whether the feature is enabled and the
     * percentage of cluster memory allocated for checkpoint storage.</p>
     */
    inline const ClusterTieredStorageConfig& GetTieredStorageConfig() const { return m_tieredStorageConfig; }
    template<typename TieredStorageConfigT = ClusterTieredStorageConfig>
    void SetTieredStorageConfig(TieredStorageConfigT&& value) { m_tieredStorageConfigHasBeenSet = true; m_tieredStorageConfig = std::forward<TieredStorageConfigT>(value); }
    template<typename TieredStorageConfigT = ClusterTieredStorageConfig>
    DescribeClusterResult& WithTieredStorageConfig(TieredStorageConfigT&& value) { SetTieredStorageConfig(std::forward<TieredStorageConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node recovery mode configured for the SageMaker HyperPod cluster.</p>
     */
    inline ClusterNodeRecovery GetNodeRecovery() const { return m_nodeRecovery; }
    inline void SetNodeRecovery(ClusterNodeRecovery value) { m_nodeRecoveryHasBeenSet = true; m_nodeRecovery = value; }
    inline DescribeClusterResult& WithNodeRecovery(ClusterNodeRecovery value) { SetNodeRecovery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode used for provisioning nodes in the cluster.</p>
     */
    inline ClusterNodeProvisioningMode GetNodeProvisioningMode() const { return m_nodeProvisioningMode; }
    inline void SetNodeProvisioningMode(ClusterNodeProvisioningMode value) { m_nodeProvisioningModeHasBeenSet = true; m_nodeProvisioningMode = value; }
    inline DescribeClusterResult& WithNodeProvisioningMode(ClusterNodeProvisioningMode value) { SetNodeProvisioningMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that HyperPod uses for cluster
     * autoscaling operations.</p>
     */
    inline const Aws::String& GetClusterRole() const { return m_clusterRole; }
    template<typename ClusterRoleT = Aws::String>
    void SetClusterRole(ClusterRoleT&& value) { m_clusterRoleHasBeenSet = true; m_clusterRole = std::forward<ClusterRoleT>(value); }
    template<typename ClusterRoleT = Aws::String>
    DescribeClusterResult& WithClusterRole(ClusterRoleT&& value) { SetClusterRole(std::forward<ClusterRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current autoscaling configuration and status for the autoscaler.</p>
     */
    inline const ClusterAutoScalingConfigOutput& GetAutoScaling() const { return m_autoScaling; }
    template<typename AutoScalingT = ClusterAutoScalingConfigOutput>
    void SetAutoScaling(AutoScalingT&& value) { m_autoScalingHasBeenSet = true; m_autoScaling = std::forward<AutoScalingT>(value); }
    template<typename AutoScalingT = ClusterAutoScalingConfigOutput>
    DescribeClusterResult& WithAutoScaling(AutoScalingT&& value) { SetAutoScaling(std::forward<AutoScalingT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeClusterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    ClusterStatus m_clusterStatus{ClusterStatus::NOT_SET};
    bool m_clusterStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    Aws::Vector<ClusterInstanceGroupDetails> m_instanceGroups;
    bool m_instanceGroupsHasBeenSet = false;

    Aws::Vector<ClusterRestrictedInstanceGroupDetails> m_restrictedInstanceGroups;
    bool m_restrictedInstanceGroupsHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    ClusterOrchestrator m_orchestrator;
    bool m_orchestratorHasBeenSet = false;

    ClusterTieredStorageConfig m_tieredStorageConfig;
    bool m_tieredStorageConfigHasBeenSet = false;

    ClusterNodeRecovery m_nodeRecovery{ClusterNodeRecovery::NOT_SET};
    bool m_nodeRecoveryHasBeenSet = false;

    ClusterNodeProvisioningMode m_nodeProvisioningMode{ClusterNodeProvisioningMode::NOT_SET};
    bool m_nodeProvisioningModeHasBeenSet = false;

    Aws::String m_clusterRole;
    bool m_clusterRoleHasBeenSet = false;

    ClusterAutoScalingConfigOutput m_autoScaling;
    bool m_autoScalingHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
