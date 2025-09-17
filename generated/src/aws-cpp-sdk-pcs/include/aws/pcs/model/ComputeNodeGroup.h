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
    AWS_PCS_API ComputeNodeGroup() = default;
    AWS_PCS_API ComputeNodeGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API ComputeNodeGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name that identifies the compute node group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ComputeNodeGroup& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The generated unique ID of the compute node group.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ComputeNodeGroup& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) of the compute node group.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ComputeNodeGroup& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the cluster of the compute node group.</p>
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    ComputeNodeGroup& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ComputeNodeGroup& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    ComputeNodeGroup& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning status of the compute node group.</p>  <p>The
     * provisioning status doesn't indicate the overall health of the compute node
     * group.</p>   <p>The resource enters the
     * <code>SUSPENDING</code> and <code>SUSPENDED</code> states when the scheduler is
     * beyond end of life and we have suspended the cluster. When in these states, you
     * can't use the cluster. The cluster controller is down and all compute instances
     * are terminated. The resources still count toward your service quotas. You can
     * delete a resource if its status is <code>SUSPENDED</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/pcs/latest/userguide/slurm-versions_faq.html">Frequently
     * asked questions about Slurm versions in PCS</a> in the <i>PCS User
     * Guide</i>.</p> 
     */
    inline ComputeNodeGroupStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ComputeNodeGroupStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ComputeNodeGroup& WithStatus(ComputeNodeGroupStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Machine Image (AMI) that PCS uses to launch instances.
     * If not provided, PCS uses the AMI ID specified in the custom launch
     * template.</p>
     */
    inline const Aws::String& GetAmiId() const { return m_amiId; }
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }
    template<typename AmiIdT = Aws::String>
    void SetAmiId(AmiIdT&& value) { m_amiIdHasBeenSet = true; m_amiId = std::forward<AmiIdT>(value); }
    template<typename AmiIdT = Aws::String>
    ComputeNodeGroup& WithAmiId(AmiIdT&& value) { SetAmiId(std::forward<AmiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of subnet IDs where instances are provisioned by the compute node
     * group. The subnets must be in the same VPC as the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    ComputeNodeGroup& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    ComputeNodeGroup& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
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
    inline ComputeNodeGroup& WithPurchaseOption(PurchaseOption value) { SetPurchaseOption(value); return *this;}
    ///@}

    ///@{
    
    inline const CustomLaunchTemplate& GetCustomLaunchTemplate() const { return m_customLaunchTemplate; }
    inline bool CustomLaunchTemplateHasBeenSet() const { return m_customLaunchTemplateHasBeenSet; }
    template<typename CustomLaunchTemplateT = CustomLaunchTemplate>
    void SetCustomLaunchTemplate(CustomLaunchTemplateT&& value) { m_customLaunchTemplateHasBeenSet = true; m_customLaunchTemplate = std::forward<CustomLaunchTemplateT>(value); }
    template<typename CustomLaunchTemplateT = CustomLaunchTemplate>
    ComputeNodeGroup& WithCustomLaunchTemplate(CustomLaunchTemplateT&& value) { SetCustomLaunchTemplate(std::forward<CustomLaunchTemplateT>(value)); return *this;}
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
    ComputeNodeGroup& WithIamInstanceProfileArn(IamInstanceProfileArnT&& value) { SetIamInstanceProfileArn(std::forward<IamInstanceProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ScalingConfiguration& GetScalingConfiguration() const { return m_scalingConfiguration; }
    inline bool ScalingConfigurationHasBeenSet() const { return m_scalingConfigurationHasBeenSet; }
    template<typename ScalingConfigurationT = ScalingConfiguration>
    void SetScalingConfiguration(ScalingConfigurationT&& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = std::forward<ScalingConfigurationT>(value); }
    template<typename ScalingConfigurationT = ScalingConfiguration>
    ComputeNodeGroup& WithScalingConfiguration(ScalingConfigurationT&& value) { SetScalingConfiguration(std::forward<ScalingConfigurationT>(value)); return *this;}
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
    ComputeNodeGroup& WithInstanceConfigs(InstanceConfigsT&& value) { SetInstanceConfigs(std::forward<InstanceConfigsT>(value)); return *this;}
    template<typename InstanceConfigsT = InstanceConfig>
    ComputeNodeGroup& AddInstanceConfigs(InstanceConfigsT&& value) { m_instanceConfigsHasBeenSet = true; m_instanceConfigs.emplace_back(std::forward<InstanceConfigsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const SpotOptions& GetSpotOptions() const { return m_spotOptions; }
    inline bool SpotOptionsHasBeenSet() const { return m_spotOptionsHasBeenSet; }
    template<typename SpotOptionsT = SpotOptions>
    void SetSpotOptions(SpotOptionsT&& value) { m_spotOptionsHasBeenSet = true; m_spotOptions = std::forward<SpotOptionsT>(value); }
    template<typename SpotOptionsT = SpotOptions>
    ComputeNodeGroup& WithSpotOptions(SpotOptionsT&& value) { SetSpotOptions(std::forward<SpotOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ComputeNodeGroupSlurmConfiguration& GetSlurmConfiguration() const { return m_slurmConfiguration; }
    inline bool SlurmConfigurationHasBeenSet() const { return m_slurmConfigurationHasBeenSet; }
    template<typename SlurmConfigurationT = ComputeNodeGroupSlurmConfiguration>
    void SetSlurmConfiguration(SlurmConfigurationT&& value) { m_slurmConfigurationHasBeenSet = true; m_slurmConfiguration = std::forward<SlurmConfigurationT>(value); }
    template<typename SlurmConfigurationT = ComputeNodeGroupSlurmConfiguration>
    ComputeNodeGroup& WithSlurmConfiguration(SlurmConfigurationT&& value) { SetSlurmConfiguration(std::forward<SlurmConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of errors that occurred during compute node group provisioning.</p>
     */
    inline const Aws::Vector<ErrorInfo>& GetErrorInfo() const { return m_errorInfo; }
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }
    template<typename ErrorInfoT = Aws::Vector<ErrorInfo>>
    void SetErrorInfo(ErrorInfoT&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::forward<ErrorInfoT>(value); }
    template<typename ErrorInfoT = Aws::Vector<ErrorInfo>>
    ComputeNodeGroup& WithErrorInfo(ErrorInfoT&& value) { SetErrorInfo(std::forward<ErrorInfoT>(value)); return *this;}
    template<typename ErrorInfoT = ErrorInfo>
    ComputeNodeGroup& AddErrorInfo(ErrorInfoT&& value) { m_errorInfoHasBeenSet = true; m_errorInfo.emplace_back(std::forward<ErrorInfoT>(value)); return *this; }
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

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    ComputeNodeGroupStatus m_status{ComputeNodeGroupStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

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
