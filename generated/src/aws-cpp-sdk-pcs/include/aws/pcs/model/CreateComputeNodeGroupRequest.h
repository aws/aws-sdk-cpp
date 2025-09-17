/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/PCSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pcs/model/PurchaseOption.h>
#include <aws/pcs/model/CustomLaunchTemplate.h>
#include <aws/pcs/model/ScalingConfigurationRequest.h>
#include <aws/pcs/model/SpotOptions.h>
#include <aws/pcs/model/ComputeNodeGroupSlurmConfigurationRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pcs/model/InstanceConfig.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PCS
{
namespace Model
{

  /**
   */
  class CreateComputeNodeGroupRequest : public PCSRequest
  {
  public:
    AWS_PCS_API CreateComputeNodeGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateComputeNodeGroup"; }

    AWS_PCS_API Aws::String SerializePayload() const override;

    AWS_PCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name or ID of the cluster to create a compute node group in.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    CreateComputeNodeGroupRequest& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name to identify the cluster. Example: <code>MyCluster</code> </p>
     */
    inline const Aws::String& GetComputeNodeGroupName() const { return m_computeNodeGroupName; }
    inline bool ComputeNodeGroupNameHasBeenSet() const { return m_computeNodeGroupNameHasBeenSet; }
    template<typename ComputeNodeGroupNameT = Aws::String>
    void SetComputeNodeGroupName(ComputeNodeGroupNameT&& value) { m_computeNodeGroupNameHasBeenSet = true; m_computeNodeGroupName = std::forward<ComputeNodeGroupNameT>(value); }
    template<typename ComputeNodeGroupNameT = Aws::String>
    CreateComputeNodeGroupRequest& WithComputeNodeGroupName(ComputeNodeGroupNameT&& value) { SetComputeNodeGroupName(std::forward<ComputeNodeGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Amazon Machine Image (AMI) that PCS uses to launch compute
     * nodes (Amazon EC2 instances). If you don't provide this value, PCS uses the AMI
     * ID specified in the custom launch template.</p>
     */
    inline const Aws::String& GetAmiId() const { return m_amiId; }
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }
    template<typename AmiIdT = Aws::String>
    void SetAmiId(AmiIdT&& value) { m_amiIdHasBeenSet = true; m_amiId = std::forward<AmiIdT>(value); }
    template<typename AmiIdT = Aws::String>
    CreateComputeNodeGroupRequest& WithAmiId(AmiIdT&& value) { SetAmiId(std::forward<AmiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of subnet IDs where the compute node group launches instances.
     * Subnets must be in the same VPC as the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    CreateComputeNodeGroupRequest& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    CreateComputeNodeGroupRequest& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies how EC2 instances are purchased on your behalf. PCS supports
     * On-Demand Instances, Spot Instances, and Amazon EC2 Capacity Blocks for ML. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-purchasing-options.html">Amazon
     * EC2 billing and purchasing options</a> in the <i>Amazon Elastic Compute Cloud
     * User Guide</i>. For more information about PCS support for Capacity Blocks, see
     * <a
     * href="https://docs.aws.amazon.com/pcs/latest/userguide/capacity-blocks.html">Using
     * Amazon EC2 Capacity Blocks for ML with PCS</a> in the <i>PCS User Guide</i>. If
     * you don't provide this option, it defaults to On-Demand.</p>
     */
    inline PurchaseOption GetPurchaseOption() const { return m_purchaseOption; }
    inline bool PurchaseOptionHasBeenSet() const { return m_purchaseOptionHasBeenSet; }
    inline void SetPurchaseOption(PurchaseOption value) { m_purchaseOptionHasBeenSet = true; m_purchaseOption = value; }
    inline CreateComputeNodeGroupRequest& WithPurchaseOption(PurchaseOption value) { SetPurchaseOption(value); return *this;}
    ///@}

    ///@{
    
    inline const CustomLaunchTemplate& GetCustomLaunchTemplate() const { return m_customLaunchTemplate; }
    inline bool CustomLaunchTemplateHasBeenSet() const { return m_customLaunchTemplateHasBeenSet; }
    template<typename CustomLaunchTemplateT = CustomLaunchTemplate>
    void SetCustomLaunchTemplate(CustomLaunchTemplateT&& value) { m_customLaunchTemplateHasBeenSet = true; m_customLaunchTemplate = std::forward<CustomLaunchTemplateT>(value); }
    template<typename CustomLaunchTemplateT = CustomLaunchTemplate>
    CreateComputeNodeGroupRequest& WithCustomLaunchTemplate(CustomLaunchTemplateT&& value) { SetCustomLaunchTemplate(std::forward<CustomLaunchTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM instance profile used to pass an
     * IAM role when launching EC2 instances. The role contained in your instance
     * profile must have the <code>pcs:RegisterComputeNodeGroupInstance</code>
     * permission and the role name must start with <code>AWSPCS</code> or must have
     * the path <code>/aws-pcs/</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/pcs/latest/userguide/security-instance-profiles.html">IAM
     * instance profiles for PCS</a> in the <i>PCS User Guide</i>.</p>
     */
    inline const Aws::String& GetIamInstanceProfileArn() const { return m_iamInstanceProfileArn; }
    inline bool IamInstanceProfileArnHasBeenSet() const { return m_iamInstanceProfileArnHasBeenSet; }
    template<typename IamInstanceProfileArnT = Aws::String>
    void SetIamInstanceProfileArn(IamInstanceProfileArnT&& value) { m_iamInstanceProfileArnHasBeenSet = true; m_iamInstanceProfileArn = std::forward<IamInstanceProfileArnT>(value); }
    template<typename IamInstanceProfileArnT = Aws::String>
    CreateComputeNodeGroupRequest& WithIamInstanceProfileArn(IamInstanceProfileArnT&& value) { SetIamInstanceProfileArn(std::forward<IamInstanceProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the boundaries of the compute node group auto scaling.</p>
     */
    inline const ScalingConfigurationRequest& GetScalingConfiguration() const { return m_scalingConfiguration; }
    inline bool ScalingConfigurationHasBeenSet() const { return m_scalingConfigurationHasBeenSet; }
    template<typename ScalingConfigurationT = ScalingConfigurationRequest>
    void SetScalingConfiguration(ScalingConfigurationT&& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = std::forward<ScalingConfigurationT>(value); }
    template<typename ScalingConfigurationT = ScalingConfigurationRequest>
    CreateComputeNodeGroupRequest& WithScalingConfiguration(ScalingConfigurationT&& value) { SetScalingConfiguration(std::forward<ScalingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of EC2 instance configurations that PCS can provision in the compute
     * node group.</p>
     */
    inline const Aws::Vector<InstanceConfig>& GetInstanceConfigs() const { return m_instanceConfigs; }
    inline bool InstanceConfigsHasBeenSet() const { return m_instanceConfigsHasBeenSet; }
    template<typename InstanceConfigsT = Aws::Vector<InstanceConfig>>
    void SetInstanceConfigs(InstanceConfigsT&& value) { m_instanceConfigsHasBeenSet = true; m_instanceConfigs = std::forward<InstanceConfigsT>(value); }
    template<typename InstanceConfigsT = Aws::Vector<InstanceConfig>>
    CreateComputeNodeGroupRequest& WithInstanceConfigs(InstanceConfigsT&& value) { SetInstanceConfigs(std::forward<InstanceConfigsT>(value)); return *this;}
    template<typename InstanceConfigsT = InstanceConfig>
    CreateComputeNodeGroupRequest& AddInstanceConfigs(InstanceConfigsT&& value) { m_instanceConfigsHasBeenSet = true; m_instanceConfigs.emplace_back(std::forward<InstanceConfigsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const SpotOptions& GetSpotOptions() const { return m_spotOptions; }
    inline bool SpotOptionsHasBeenSet() const { return m_spotOptionsHasBeenSet; }
    template<typename SpotOptionsT = SpotOptions>
    void SetSpotOptions(SpotOptionsT&& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = std::forward<SpotOptionsT>(value); }
    template<typename SpotOptionsT = SpotOptions>
    CreateComputeNodeGroupRequest& WithSpotOptions(SpotOptionsT&& value) { SetSpotOptions(std::forward<SpotOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional options related to the Slurm scheduler.</p>
     */
    inline const ComputeNodeGroupSlurmConfigurationRequest& GetSlurmConfiguration() const { return m_slurmConfiguration; }
    inline bool SlurmConfigurationHasBeenSet() const { return m_slurmConfigurationHasBeenSet; }
    template<typename SlurmConfigurationT = ComputeNodeGroupSlurmConfigurationRequest>
    void SetSlurmConfiguration(SlurmConfigurationT&& value) { m_slurmConfigurationHasBeenSet = true; m_slurmConfiguration = std::forward<SlurmConfigurationT>(value); }
    template<typename SlurmConfigurationT = ComputeNodeGroupSlurmConfigurationRequest>
    CreateComputeNodeGroupRequest& WithSlurmConfiguration(SlurmConfigurationT&& value) { SetSlurmConfiguration(std::forward<SlurmConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, the subsequent retries with the same client token return the
     * result from the original successful request and they have no additional effect.
     * If you don't specify a client token, the CLI and SDK automatically generate 1
     * for you.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateComputeNodeGroupRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>1 or more tags added to the resource. Each tag consists of a tag key and tag
     * value. The tag value is optional and can be an empty string.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateComputeNodeGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateComputeNodeGroupRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_computeNodeGroupName;
    bool m_computeNodeGroupNameHasBeenSet = false;

    Aws::String m_amiId;
    bool m_amiIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    PurchaseOption m_purchaseOption{PurchaseOption::NOT_SET};
    bool m_purchaseOptionHasBeenSet = false;

    CustomLaunchTemplate m_customLaunchTemplate;
    bool m_customLaunchTemplateHasBeenSet = false;

    Aws::String m_iamInstanceProfileArn;
    bool m_iamInstanceProfileArnHasBeenSet = false;

    ScalingConfigurationRequest m_scalingConfiguration;
    bool m_scalingConfigurationHasBeenSet = false;

    Aws::Vector<InstanceConfig> m_instanceConfigs;
    bool m_instanceConfigsHasBeenSet = false;

    SpotOptions m_spotOptions;
    bool m_spotOptionsHasBeenSet = false;

    ComputeNodeGroupSlurmConfigurationRequest m_slurmConfiguration;
    bool m_slurmConfigurationHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
