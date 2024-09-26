/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/PCSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pcs/model/CustomLaunchTemplate.h>
#include <aws/pcs/model/PurchaseOption.h>
#include <aws/pcs/model/SpotOptions.h>
#include <aws/pcs/model/ScalingConfigurationRequest.h>
#include <aws/pcs/model/UpdateComputeNodeGroupSlurmConfigurationRequest.h>
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
  class UpdateComputeNodeGroupRequest : public PCSRequest
  {
  public:
    AWS_PCS_API UpdateComputeNodeGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateComputeNodeGroup"; }

    AWS_PCS_API Aws::String SerializePayload() const override;

    AWS_PCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name or ID of the cluster of the compute node group.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline UpdateComputeNodeGroupRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline UpdateComputeNodeGroupRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline UpdateComputeNodeGroupRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ID of the compute node group.</p>
     */
    inline const Aws::String& GetComputeNodeGroupIdentifier() const{ return m_computeNodeGroupIdentifier; }
    inline bool ComputeNodeGroupIdentifierHasBeenSet() const { return m_computeNodeGroupIdentifierHasBeenSet; }
    inline void SetComputeNodeGroupIdentifier(const Aws::String& value) { m_computeNodeGroupIdentifierHasBeenSet = true; m_computeNodeGroupIdentifier = value; }
    inline void SetComputeNodeGroupIdentifier(Aws::String&& value) { m_computeNodeGroupIdentifierHasBeenSet = true; m_computeNodeGroupIdentifier = std::move(value); }
    inline void SetComputeNodeGroupIdentifier(const char* value) { m_computeNodeGroupIdentifierHasBeenSet = true; m_computeNodeGroupIdentifier.assign(value); }
    inline UpdateComputeNodeGroupRequest& WithComputeNodeGroupIdentifier(const Aws::String& value) { SetComputeNodeGroupIdentifier(value); return *this;}
    inline UpdateComputeNodeGroupRequest& WithComputeNodeGroupIdentifier(Aws::String&& value) { SetComputeNodeGroupIdentifier(std::move(value)); return *this;}
    inline UpdateComputeNodeGroupRequest& WithComputeNodeGroupIdentifier(const char* value) { SetComputeNodeGroupIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Machine Image (AMI) that Amazon Web Services PCS uses to
     * launch instances. If not provided, Amazon Web Services PCS uses the AMI ID
     * specified in the custom launch template.</p>
     */
    inline const Aws::String& GetAmiId() const{ return m_amiId; }
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }
    inline void SetAmiId(const Aws::String& value) { m_amiIdHasBeenSet = true; m_amiId = value; }
    inline void SetAmiId(Aws::String&& value) { m_amiIdHasBeenSet = true; m_amiId = std::move(value); }
    inline void SetAmiId(const char* value) { m_amiIdHasBeenSet = true; m_amiId.assign(value); }
    inline UpdateComputeNodeGroupRequest& WithAmiId(const Aws::String& value) { SetAmiId(value); return *this;}
    inline UpdateComputeNodeGroupRequest& WithAmiId(Aws::String&& value) { SetAmiId(std::move(value)); return *this;}
    inline UpdateComputeNodeGroupRequest& WithAmiId(const char* value) { SetAmiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of subnet IDs where the compute node group provisions instances. The
     * subnets must be in the same VPC as the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline UpdateComputeNodeGroupRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline UpdateComputeNodeGroupRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline UpdateComputeNodeGroupRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline UpdateComputeNodeGroupRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline UpdateComputeNodeGroupRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const CustomLaunchTemplate& GetCustomLaunchTemplate() const{ return m_customLaunchTemplate; }
    inline bool CustomLaunchTemplateHasBeenSet() const { return m_customLaunchTemplateHasBeenSet; }
    inline void SetCustomLaunchTemplate(const CustomLaunchTemplate& value) { m_customLaunchTemplateHasBeenSet = true; m_customLaunchTemplate = value; }
    inline void SetCustomLaunchTemplate(CustomLaunchTemplate&& value) { m_customLaunchTemplateHasBeenSet = true; m_customLaunchTemplate = std::move(value); }
    inline UpdateComputeNodeGroupRequest& WithCustomLaunchTemplate(const CustomLaunchTemplate& value) { SetCustomLaunchTemplate(value); return *this;}
    inline UpdateComputeNodeGroupRequest& WithCustomLaunchTemplate(CustomLaunchTemplate&& value) { SetCustomLaunchTemplate(std::move(value)); return *this;}
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
    inline UpdateComputeNodeGroupRequest& WithPurchaseOption(const PurchaseOption& value) { SetPurchaseOption(value); return *this;}
    inline UpdateComputeNodeGroupRequest& WithPurchaseOption(PurchaseOption&& value) { SetPurchaseOption(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const SpotOptions& GetSpotOptions() const{ return m_spotOptions; }
    inline bool SpotOptionsHasBeenSet() const { return m_spotOptionsHasBeenSet; }
    inline void SetSpotOptions(const SpotOptions& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = value; }
    inline void SetSpotOptions(SpotOptions&& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = std::move(value); }
    inline UpdateComputeNodeGroupRequest& WithSpotOptions(const SpotOptions& value) { SetSpotOptions(value); return *this;}
    inline UpdateComputeNodeGroupRequest& WithSpotOptions(SpotOptions&& value) { SetSpotOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the boundaries of the compute node group auto scaling.</p>
     */
    inline const ScalingConfigurationRequest& GetScalingConfiguration() const{ return m_scalingConfiguration; }
    inline bool ScalingConfigurationHasBeenSet() const { return m_scalingConfigurationHasBeenSet; }
    inline void SetScalingConfiguration(const ScalingConfigurationRequest& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = value; }
    inline void SetScalingConfiguration(ScalingConfigurationRequest&& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = std::move(value); }
    inline UpdateComputeNodeGroupRequest& WithScalingConfiguration(const ScalingConfigurationRequest& value) { SetScalingConfiguration(value); return *this;}
    inline UpdateComputeNodeGroupRequest& WithScalingConfiguration(ScalingConfigurationRequest&& value) { SetScalingConfiguration(std::move(value)); return *this;}
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
    inline UpdateComputeNodeGroupRequest& WithIamInstanceProfileArn(const Aws::String& value) { SetIamInstanceProfileArn(value); return *this;}
    inline UpdateComputeNodeGroupRequest& WithIamInstanceProfileArn(Aws::String&& value) { SetIamInstanceProfileArn(std::move(value)); return *this;}
    inline UpdateComputeNodeGroupRequest& WithIamInstanceProfileArn(const char* value) { SetIamInstanceProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional options related to the Slurm scheduler.</p>
     */
    inline const UpdateComputeNodeGroupSlurmConfigurationRequest& GetSlurmConfiguration() const{ return m_slurmConfiguration; }
    inline bool SlurmConfigurationHasBeenSet() const { return m_slurmConfigurationHasBeenSet; }
    inline void SetSlurmConfiguration(const UpdateComputeNodeGroupSlurmConfigurationRequest& value) { m_slurmConfigurationHasBeenSet = true; m_slurmConfiguration = value; }
    inline void SetSlurmConfiguration(UpdateComputeNodeGroupSlurmConfigurationRequest&& value) { m_slurmConfigurationHasBeenSet = true; m_slurmConfiguration = std::move(value); }
    inline UpdateComputeNodeGroupRequest& WithSlurmConfiguration(const UpdateComputeNodeGroupSlurmConfigurationRequest& value) { SetSlurmConfiguration(value); return *this;}
    inline UpdateComputeNodeGroupRequest& WithSlurmConfiguration(UpdateComputeNodeGroupSlurmConfigurationRequest&& value) { SetSlurmConfiguration(std::move(value)); return *this;}
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
    inline UpdateComputeNodeGroupRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateComputeNodeGroupRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateComputeNodeGroupRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_computeNodeGroupIdentifier;
    bool m_computeNodeGroupIdentifierHasBeenSet = false;

    Aws::String m_amiId;
    bool m_amiIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    CustomLaunchTemplate m_customLaunchTemplate;
    bool m_customLaunchTemplateHasBeenSet = false;

    PurchaseOption m_purchaseOption;
    bool m_purchaseOptionHasBeenSet = false;

    SpotOptions m_spotOptions;
    bool m_spotOptionsHasBeenSet = false;

    ScalingConfigurationRequest m_scalingConfiguration;
    bool m_scalingConfigurationHasBeenSet = false;

    Aws::String m_iamInstanceProfileArn;
    bool m_iamInstanceProfileArnHasBeenSet = false;

    UpdateComputeNodeGroupSlurmConfigurationRequest m_slurmConfiguration;
    bool m_slurmConfigurationHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
