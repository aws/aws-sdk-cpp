/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pcs/model/ComputeNodeGroupStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pcs/model/PurchaseOption.h>
#include <aws/pcs/model/CustomLaunchTemplate.h>
#include <aws/pcs/model/ScalingConfiguration.h>
#include <aws/pcs/model/SpotOptions.h>
#include <aws/pcs/model/ComputeNodeGroupSlurmConfiguration.h>
#include <aws/pcs/model/InstanceConfig.h>
#include <aws/pcs/model/ErrorInfo.h>
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
namespace PCS
{
namespace Model
{

  /**
   * <p>A compute node group associated with a cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/ComputeNodeGroup">AWS
   * API Reference</a></p>
   */
  class ComputeNodeGroup
  {
  public:
    AWS_PCS_API ComputeNodeGroup();
    AWS_PCS_API ComputeNodeGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API ComputeNodeGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name that identifies the compute node group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ComputeNodeGroup& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ComputeNodeGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ComputeNodeGroup& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The generated unique ID of the compute node group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ComputeNodeGroup& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ComputeNodeGroup& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ComputeNodeGroup& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) of the compute node group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ComputeNodeGroup& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ComputeNodeGroup& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ComputeNodeGroup& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the cluster of the compute node group.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline ComputeNodeGroup& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline ComputeNodeGroup& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline ComputeNodeGroup& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ComputeNodeGroup& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ComputeNodeGroup& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }
    inline ComputeNodeGroup& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline ComputeNodeGroup& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning status of the compute node group.</p>  <p>The
     * provisioning status doesn't indicate the overall health of the compute node
     * group.</p> 
     */
    inline const ComputeNodeGroupStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ComputeNodeGroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ComputeNodeGroupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ComputeNodeGroup& WithStatus(const ComputeNodeGroupStatus& value) { SetStatus(value); return *this;}
    inline ComputeNodeGroup& WithStatus(ComputeNodeGroupStatus&& value) { SetStatus(std::move(value)); return *this;}
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
    inline ComputeNodeGroup& WithAmiId(const Aws::String& value) { SetAmiId(value); return *this;}
    inline ComputeNodeGroup& WithAmiId(Aws::String&& value) { SetAmiId(std::move(value)); return *this;}
    inline ComputeNodeGroup& WithAmiId(const char* value) { SetAmiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of subnet IDs where instances are provisioned by the compute node
     * group. The subnets must be in the same VPC as the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline ComputeNodeGroup& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline ComputeNodeGroup& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline ComputeNodeGroup& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline ComputeNodeGroup& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline ComputeNodeGroup& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
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
    inline ComputeNodeGroup& WithPurchaseOption(const PurchaseOption& value) { SetPurchaseOption(value); return *this;}
    inline ComputeNodeGroup& WithPurchaseOption(PurchaseOption&& value) { SetPurchaseOption(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CustomLaunchTemplate& GetCustomLaunchTemplate() const{ return m_customLaunchTemplate; }
    inline bool CustomLaunchTemplateHasBeenSet() const { return m_customLaunchTemplateHasBeenSet; }
    inline void SetCustomLaunchTemplate(const CustomLaunchTemplate& value) { m_customLaunchTemplateHasBeenSet = true; m_customLaunchTemplate = value; }
    inline void SetCustomLaunchTemplate(CustomLaunchTemplate&& value) { m_customLaunchTemplateHasBeenSet = true; m_customLaunchTemplate = std::move(value); }
    inline ComputeNodeGroup& WithCustomLaunchTemplate(const CustomLaunchTemplate& value) { SetCustomLaunchTemplate(value); return *this;}
    inline ComputeNodeGroup& WithCustomLaunchTemplate(CustomLaunchTemplate&& value) { SetCustomLaunchTemplate(std::move(value)); return *this;}
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
    inline ComputeNodeGroup& WithIamInstanceProfileArn(const Aws::String& value) { SetIamInstanceProfileArn(value); return *this;}
    inline ComputeNodeGroup& WithIamInstanceProfileArn(Aws::String&& value) { SetIamInstanceProfileArn(std::move(value)); return *this;}
    inline ComputeNodeGroup& WithIamInstanceProfileArn(const char* value) { SetIamInstanceProfileArn(value); return *this;}
    ///@}

    ///@{
    
    inline const ScalingConfiguration& GetScalingConfiguration() const{ return m_scalingConfiguration; }
    inline bool ScalingConfigurationHasBeenSet() const { return m_scalingConfigurationHasBeenSet; }
    inline void SetScalingConfiguration(const ScalingConfiguration& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = value; }
    inline void SetScalingConfiguration(ScalingConfiguration&& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = std::move(value); }
    inline ComputeNodeGroup& WithScalingConfiguration(const ScalingConfiguration& value) { SetScalingConfiguration(value); return *this;}
    inline ComputeNodeGroup& WithScalingConfiguration(ScalingConfiguration&& value) { SetScalingConfiguration(std::move(value)); return *this;}
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
    inline ComputeNodeGroup& WithInstanceConfigs(const Aws::Vector<InstanceConfig>& value) { SetInstanceConfigs(value); return *this;}
    inline ComputeNodeGroup& WithInstanceConfigs(Aws::Vector<InstanceConfig>&& value) { SetInstanceConfigs(std::move(value)); return *this;}
    inline ComputeNodeGroup& AddInstanceConfigs(const InstanceConfig& value) { m_instanceConfigsHasBeenSet = true; m_instanceConfigs.push_back(value); return *this; }
    inline ComputeNodeGroup& AddInstanceConfigs(InstanceConfig&& value) { m_instanceConfigsHasBeenSet = true; m_instanceConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const SpotOptions& GetSpotOptions() const{ return m_spotOptions; }
    inline bool SpotOptionsHasBeenSet() const { return m_spotOptionsHasBeenSet; }
    inline void SetSpotOptions(const SpotOptions& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = value; }
    inline void SetSpotOptions(SpotOptions&& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = std::move(value); }
    inline ComputeNodeGroup& WithSpotOptions(const SpotOptions& value) { SetSpotOptions(value); return *this;}
    inline ComputeNodeGroup& WithSpotOptions(SpotOptions&& value) { SetSpotOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ComputeNodeGroupSlurmConfiguration& GetSlurmConfiguration() const{ return m_slurmConfiguration; }
    inline bool SlurmConfigurationHasBeenSet() const { return m_slurmConfigurationHasBeenSet; }
    inline void SetSlurmConfiguration(const ComputeNodeGroupSlurmConfiguration& value) { m_slurmConfigurationHasBeenSet = true; m_slurmConfiguration = value; }
    inline void SetSlurmConfiguration(ComputeNodeGroupSlurmConfiguration&& value) { m_slurmConfigurationHasBeenSet = true; m_slurmConfiguration = std::move(value); }
    inline ComputeNodeGroup& WithSlurmConfiguration(const ComputeNodeGroupSlurmConfiguration& value) { SetSlurmConfiguration(value); return *this;}
    inline ComputeNodeGroup& WithSlurmConfiguration(ComputeNodeGroupSlurmConfiguration&& value) { SetSlurmConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of errors that occurred during compute node group provisioning.</p>
     */
    inline const Aws::Vector<ErrorInfo>& GetErrorInfo() const{ return m_errorInfo; }
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }
    inline void SetErrorInfo(const Aws::Vector<ErrorInfo>& value) { m_errorInfoHasBeenSet = true; m_errorInfo = value; }
    inline void SetErrorInfo(Aws::Vector<ErrorInfo>&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::move(value); }
    inline ComputeNodeGroup& WithErrorInfo(const Aws::Vector<ErrorInfo>& value) { SetErrorInfo(value); return *this;}
    inline ComputeNodeGroup& WithErrorInfo(Aws::Vector<ErrorInfo>&& value) { SetErrorInfo(std::move(value)); return *this;}
    inline ComputeNodeGroup& AddErrorInfo(const ErrorInfo& value) { m_errorInfoHasBeenSet = true; m_errorInfo.push_back(value); return *this; }
    inline ComputeNodeGroup& AddErrorInfo(ErrorInfo&& value) { m_errorInfoHasBeenSet = true; m_errorInfo.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;

    ComputeNodeGroupStatus m_status;
    bool m_statusHasBeenSet = false;

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

    ScalingConfiguration m_scalingConfiguration;
    bool m_scalingConfigurationHasBeenSet = false;

    Aws::Vector<InstanceConfig> m_instanceConfigs;
    bool m_instanceConfigsHasBeenSet = false;

    SpotOptions m_spotOptions;
    bool m_spotOptionsHasBeenSet = false;

    ComputeNodeGroupSlurmConfiguration m_slurmConfiguration;
    bool m_slurmConfigurationHasBeenSet = false;

    Aws::Vector<ErrorInfo> m_errorInfo;
    bool m_errorInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
