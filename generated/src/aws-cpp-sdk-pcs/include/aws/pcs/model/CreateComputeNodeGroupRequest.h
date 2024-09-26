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
    AWS_PCS_API CreateComputeNodeGroupRequest();

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
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline CreateComputeNodeGroupRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline CreateComputeNodeGroupRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline CreateComputeNodeGroupRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name to identify the cluster. Example: <code>MyCluster</code> </p>
     */
    inline const Aws::String& GetComputeNodeGroupName() const{ return m_computeNodeGroupName; }
    inline bool ComputeNodeGroupNameHasBeenSet() const { return m_computeNodeGroupNameHasBeenSet; }
    inline void SetComputeNodeGroupName(const Aws::String& value) { m_computeNodeGroupNameHasBeenSet = true; m_computeNodeGroupName = value; }
    inline void SetComputeNodeGroupName(Aws::String&& value) { m_computeNodeGroupNameHasBeenSet = true; m_computeNodeGroupName = std::move(value); }
    inline void SetComputeNodeGroupName(const char* value) { m_computeNodeGroupNameHasBeenSet = true; m_computeNodeGroupName.assign(value); }
    inline CreateComputeNodeGroupRequest& WithComputeNodeGroupName(const Aws::String& value) { SetComputeNodeGroupName(value); return *this;}
    inline CreateComputeNodeGroupRequest& WithComputeNodeGroupName(Aws::String&& value) { SetComputeNodeGroupName(std::move(value)); return *this;}
    inline CreateComputeNodeGroupRequest& WithComputeNodeGroupName(const char* value) { SetComputeNodeGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Amazon Machine Image (AMI) that Amazon Web Services PCS uses
     * to launch compute nodes (Amazon EC2 instances). If you don't provide this value,
     * Amazon Web Services PCS uses the AMI ID specified in the custom launch
     * template.</p>
     */
    inline const Aws::String& GetAmiId() const{ return m_amiId; }
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }
    inline void SetAmiId(const Aws::String& value) { m_amiIdHasBeenSet = true; m_amiId = value; }
    inline void SetAmiId(Aws::String&& value) { m_amiIdHasBeenSet = true; m_amiId = std::move(value); }
    inline void SetAmiId(const char* value) { m_amiIdHasBeenSet = true; m_amiId.assign(value); }
    inline CreateComputeNodeGroupRequest& WithAmiId(const Aws::String& value) { SetAmiId(value); return *this;}
    inline CreateComputeNodeGroupRequest& WithAmiId(Aws::String&& value) { SetAmiId(std::move(value)); return *this;}
    inline CreateComputeNodeGroupRequest& WithAmiId(const char* value) { SetAmiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of subnet IDs where the compute node group launches instances.
     * Subnets must be in the same VPC as the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline CreateComputeNodeGroupRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline CreateComputeNodeGroupRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline CreateComputeNodeGroupRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline CreateComputeNodeGroupRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline CreateComputeNodeGroupRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies how EC2 instances are purchased on your behalf. Amazon Web Services
     * PCS supports On-Demand and Spot instances. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-purchasing-options.html">Instance
     * purchasing options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. If
     * you don't provide this option, it defaults to On-Demand.</p>
     */
    inline const PurchaseOption& GetPurchaseOption() const{ return m_purchaseOption; }
    inline bool PurchaseOptionHasBeenSet() const { return m_purchaseOptionHasBeenSet; }
    inline void SetPurchaseOption(const PurchaseOption& value) { m_purchaseOptionHasBeenSet = true; m_purchaseOption = value; }
    inline void SetPurchaseOption(PurchaseOption&& value) { m_purchaseOptionHasBeenSet = true; m_purchaseOption = std::move(value); }
    inline CreateComputeNodeGroupRequest& WithPurchaseOption(const PurchaseOption& value) { SetPurchaseOption(value); return *this;}
    inline CreateComputeNodeGroupRequest& WithPurchaseOption(PurchaseOption&& value) { SetPurchaseOption(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CustomLaunchTemplate& GetCustomLaunchTemplate() const{ return m_customLaunchTemplate; }
    inline bool CustomLaunchTemplateHasBeenSet() const { return m_customLaunchTemplateHasBeenSet; }
    inline void SetCustomLaunchTemplate(const CustomLaunchTemplate& value) { m_customLaunchTemplateHasBeenSet = true; m_customLaunchTemplate = value; }
    inline void SetCustomLaunchTemplate(CustomLaunchTemplate&& value) { m_customLaunchTemplateHasBeenSet = true; m_customLaunchTemplate = std::move(value); }
    inline CreateComputeNodeGroupRequest& WithCustomLaunchTemplate(const CustomLaunchTemplate& value) { SetCustomLaunchTemplate(value); return *this;}
    inline CreateComputeNodeGroupRequest& WithCustomLaunchTemplate(CustomLaunchTemplate&& value) { SetCustomLaunchTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM instance profile used to pass an
     * IAM role when launching EC2 instances. The role contained in your instance
     * profile must have the <code>pcs:RegisterComputeNodeGroupInstance</code>
     * permission. The resource identifier of the ARN must start with
     * <code>AWSPCS</code> or it must have <code>/aws-pcs/</code> in its path.</p> <p
     * class="title"> <b>Examples</b> </p> <ul> <li> <p>
     * <code>arn:aws:iam::111122223333:instance-profile/AWSPCS-example-role-1</code>
     * </p> </li> <li> <p>
     * <code>arn:aws:iam::111122223333:instance-profile/aws-pcs/example-role-2</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetIamInstanceProfileArn() const{ return m_iamInstanceProfileArn; }
    inline bool IamInstanceProfileArnHasBeenSet() const { return m_iamInstanceProfileArnHasBeenSet; }
    inline void SetIamInstanceProfileArn(const Aws::String& value) { m_iamInstanceProfileArnHasBeenSet = true; m_iamInstanceProfileArn = value; }
    inline void SetIamInstanceProfileArn(Aws::String&& value) { m_iamInstanceProfileArnHasBeenSet = true; m_iamInstanceProfileArn = std::move(value); }
    inline void SetIamInstanceProfileArn(const char* value) { m_iamInstanceProfileArnHasBeenSet = true; m_iamInstanceProfileArn.assign(value); }
    inline CreateComputeNodeGroupRequest& WithIamInstanceProfileArn(const Aws::String& value) { SetIamInstanceProfileArn(value); return *this;}
    inline CreateComputeNodeGroupRequest& WithIamInstanceProfileArn(Aws::String&& value) { SetIamInstanceProfileArn(std::move(value)); return *this;}
    inline CreateComputeNodeGroupRequest& WithIamInstanceProfileArn(const char* value) { SetIamInstanceProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the boundaries of the compute node group auto scaling.</p>
     */
    inline const ScalingConfigurationRequest& GetScalingConfiguration() const{ return m_scalingConfiguration; }
    inline bool ScalingConfigurationHasBeenSet() const { return m_scalingConfigurationHasBeenSet; }
    inline void SetScalingConfiguration(const ScalingConfigurationRequest& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = value; }
    inline void SetScalingConfiguration(ScalingConfigurationRequest&& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = std::move(value); }
    inline CreateComputeNodeGroupRequest& WithScalingConfiguration(const ScalingConfigurationRequest& value) { SetScalingConfiguration(value); return *this;}
    inline CreateComputeNodeGroupRequest& WithScalingConfiguration(ScalingConfigurationRequest&& value) { SetScalingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of EC2 instance configurations that Amazon Web Services PCS can
     * provision in the compute node group.</p>
     */
    inline const Aws::Vector<InstanceConfig>& GetInstanceConfigs() const{ return m_instanceConfigs; }
    inline bool InstanceConfigsHasBeenSet() const { return m_instanceConfigsHasBeenSet; }
    inline void SetInstanceConfigs(const Aws::Vector<InstanceConfig>& value) { m_instanceConfigsHasBeenSet = true; m_instanceConfigs = value; }
    inline void SetInstanceConfigs(Aws::Vector<InstanceConfig>&& value) { m_instanceConfigsHasBeenSet = true; m_instanceConfigs = std::move(value); }
    inline CreateComputeNodeGroupRequest& WithInstanceConfigs(const Aws::Vector<InstanceConfig>& value) { SetInstanceConfigs(value); return *this;}
    inline CreateComputeNodeGroupRequest& WithInstanceConfigs(Aws::Vector<InstanceConfig>&& value) { SetInstanceConfigs(std::move(value)); return *this;}
    inline CreateComputeNodeGroupRequest& AddInstanceConfigs(const InstanceConfig& value) { m_instanceConfigsHasBeenSet = true; m_instanceConfigs.push_back(value); return *this; }
    inline CreateComputeNodeGroupRequest& AddInstanceConfigs(InstanceConfig&& value) { m_instanceConfigsHasBeenSet = true; m_instanceConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const SpotOptions& GetSpotOptions() const{ return m_spotOptions; }
    inline bool SpotOptionsHasBeenSet() const { return m_spotOptionsHasBeenSet; }
    inline void SetSpotOptions(const SpotOptions& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = value; }
    inline void SetSpotOptions(SpotOptions&& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = std::move(value); }
    inline CreateComputeNodeGroupRequest& WithSpotOptions(const SpotOptions& value) { SetSpotOptions(value); return *this;}
    inline CreateComputeNodeGroupRequest& WithSpotOptions(SpotOptions&& value) { SetSpotOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional options related to the Slurm scheduler.</p>
     */
    inline const ComputeNodeGroupSlurmConfigurationRequest& GetSlurmConfiguration() const{ return m_slurmConfiguration; }
    inline bool SlurmConfigurationHasBeenSet() const { return m_slurmConfigurationHasBeenSet; }
    inline void SetSlurmConfiguration(const ComputeNodeGroupSlurmConfigurationRequest& value) { m_slurmConfigurationHasBeenSet = true; m_slurmConfiguration = value; }
    inline void SetSlurmConfiguration(ComputeNodeGroupSlurmConfigurationRequest&& value) { m_slurmConfigurationHasBeenSet = true; m_slurmConfiguration = std::move(value); }
    inline CreateComputeNodeGroupRequest& WithSlurmConfiguration(const ComputeNodeGroupSlurmConfigurationRequest& value) { SetSlurmConfiguration(value); return *this;}
    inline CreateComputeNodeGroupRequest& WithSlurmConfiguration(ComputeNodeGroupSlurmConfigurationRequest&& value) { SetSlurmConfiguration(std::move(value)); return *this;}
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
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateComputeNodeGroupRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateComputeNodeGroupRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateComputeNodeGroupRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>1 or more tags added to the resource. Each tag consists of a tag key and tag
     * value. The tag value is optional and can be an empty string.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateComputeNodeGroupRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateComputeNodeGroupRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateComputeNodeGroupRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateComputeNodeGroupRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateComputeNodeGroupRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateComputeNodeGroupRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateComputeNodeGroupRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateComputeNodeGroupRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateComputeNodeGroupRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
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

    PurchaseOption m_purchaseOption;
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

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
