/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/sagemaker/model/ClusterOrchestrator.h>
#include <aws/sagemaker/model/ClusterNodeRecovery.h>
#include <aws/sagemaker/model/ClusterInstanceGroupSpecification.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateClusterRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCluster"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name for the new SageMaker HyperPod cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline CreateClusterRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline CreateClusterRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline CreateClusterRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance groups to be created in the SageMaker HyperPod cluster.</p>
     */
    inline const Aws::Vector<ClusterInstanceGroupSpecification>& GetInstanceGroups() const{ return m_instanceGroups; }
    inline bool InstanceGroupsHasBeenSet() const { return m_instanceGroupsHasBeenSet; }
    inline void SetInstanceGroups(const Aws::Vector<ClusterInstanceGroupSpecification>& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = value; }
    inline void SetInstanceGroups(Aws::Vector<ClusterInstanceGroupSpecification>&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = std::move(value); }
    inline CreateClusterRequest& WithInstanceGroups(const Aws::Vector<ClusterInstanceGroupSpecification>& value) { SetInstanceGroups(value); return *this;}
    inline CreateClusterRequest& WithInstanceGroups(Aws::Vector<ClusterInstanceGroupSpecification>&& value) { SetInstanceGroups(std::move(value)); return *this;}
    inline CreateClusterRequest& AddInstanceGroups(const ClusterInstanceGroupSpecification& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(value); return *this; }
    inline CreateClusterRequest& AddInstanceGroups(ClusterInstanceGroupSpecification&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Virtual Private Cloud (VPC) that is associated with the
     * Amazon SageMaker HyperPod cluster. You can control access to and from your
     * resources by configuring your VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/infrastructure-give-access.html">Give
     * SageMaker access to resources in your Amazon VPC</a>.</p>  <p> If you
     * configure your VPC with IPv6 support and specify subnets with IPv6 addressing
     * enabled in your VPC configuration, the cluster automatically uses IPv6
     * addressing for network communication.</p> <p> For information about adding IPv6
     * support for your VPC, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-migrate-ipv6.html">IPv6
     * support for your VPC</a>.</p> <p> For information about creating a new VPC for
     * use with IPv6, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/create-vpc.html">Create a
     * VPC</a>.</p> 
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline CreateClusterRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline CreateClusterRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom tags for managing the SageMaker HyperPod cluster as an Amazon Web
     * Services resource. You can add tags to your cluster in the same way you add them
     * in other Amazon Web Services services that support tagging. To learn more about
     * tagging Amazon Web Services resources in general, see <a
     * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/tagging.html">Tagging
     * Amazon Web Services Resources User Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateClusterRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateClusterRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateClusterRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateClusterRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of orchestrator to use for the SageMaker HyperPod cluster.
     * Currently, the only supported value is <code>"eks"</code>, which is to use an
     * Amazon Elastic Kubernetes Service (EKS) cluster as the orchestrator.</p>
     */
    inline const ClusterOrchestrator& GetOrchestrator() const{ return m_orchestrator; }
    inline bool OrchestratorHasBeenSet() const { return m_orchestratorHasBeenSet; }
    inline void SetOrchestrator(const ClusterOrchestrator& value) { m_orchestratorHasBeenSet = true; m_orchestrator = value; }
    inline void SetOrchestrator(ClusterOrchestrator&& value) { m_orchestratorHasBeenSet = true; m_orchestrator = std::move(value); }
    inline CreateClusterRequest& WithOrchestrator(const ClusterOrchestrator& value) { SetOrchestrator(value); return *this;}
    inline CreateClusterRequest& WithOrchestrator(ClusterOrchestrator&& value) { SetOrchestrator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node recovery mode for the SageMaker HyperPod cluster. When set to
     * <code>Automatic</code>, SageMaker HyperPod will automatically reboot or replace
     * faulty nodes when issues are detected. When set to <code>None</code>, cluster
     * administrators will need to manually manage any faulty cluster instances.</p>
     */
    inline const ClusterNodeRecovery& GetNodeRecovery() const{ return m_nodeRecovery; }
    inline bool NodeRecoveryHasBeenSet() const { return m_nodeRecoveryHasBeenSet; }
    inline void SetNodeRecovery(const ClusterNodeRecovery& value) { m_nodeRecoveryHasBeenSet = true; m_nodeRecovery = value; }
    inline void SetNodeRecovery(ClusterNodeRecovery&& value) { m_nodeRecoveryHasBeenSet = true; m_nodeRecovery = std::move(value); }
    inline CreateClusterRequest& WithNodeRecovery(const ClusterNodeRecovery& value) { SetNodeRecovery(value); return *this;}
    inline CreateClusterRequest& WithNodeRecovery(ClusterNodeRecovery&& value) { SetNodeRecovery(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::Vector<ClusterInstanceGroupSpecification> m_instanceGroups;
    bool m_instanceGroupsHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ClusterOrchestrator m_orchestrator;
    bool m_orchestratorHasBeenSet = false;

    ClusterNodeRecovery m_nodeRecovery;
    bool m_nodeRecoveryHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
