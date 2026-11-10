/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pcs/PCSRequest.h>
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/ComputeNodeGroupSlurmConfigurationRequest.h>
#include <aws/pcs/model/CustomLaunchTemplate.h>
#include <aws/pcs/model/InstanceConfig.h>
#include <aws/pcs/model/LaunchTemplateMode.h>
#include <aws/pcs/model/NodeLifecycleActionsRequest.h>
#include <aws/pcs/model/PurchaseOption.h>
#include <aws/pcs/model/ScalingConfigurationRequest.h>
#include <aws/pcs/model/SpotOptions.h>

#include <utility>

namespace Aws {
namespace PCS {
namespace Model {

/**
 */
class CreateComputeNodeGroupRequest : public PCSRequest {
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
   * <p> The ID of the Amazon Machine Image (AMI) that PCS uses to launch compute
   * nodes (Amazon EC2 instances). This value overrides the AMI ID in the custom
   * launch template. If you don't provide this value, PCS uses the AMI ID specified
   * in the custom launch template. You must provide this value if
   * <code>launchTemplateMode</code> is <code>MANAGED</code>.</p>
   */
  inline const Aws::String& GetAmiId() const { return m_amiId; }
  inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }
  template <typename AmiIdT = Aws::String>
  void SetAmiId(AmiIdT&& value) {
    m_amiIdHasBeenSet = true;
    m_amiId = std::forward<AmiIdT>(value);
  }
  template <typename AmiIdT = Aws::String>
  CreateComputeNodeGroupRequest& WithAmiId(AmiIdT&& value) {
    SetAmiId(std::forward<AmiIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the EC2 security groups to configure directly on the compute node
   * group. The security groups must be in the same VPC as the cluster. PCS uses
   * these security groups instead of the security groups in the custom launch
   * template. You can't specify this value if the custom launch template defines
   * network interfaces. If you don't provide this value, PCS uses the security
   * groups in the custom launch template. You must provide this value if
   * <code>launchTemplateMode</code> is <code>MANAGED</code>. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/pcs/latest/userguide/working-with_cng_instance-settings.html">Configuring
   * instance settings for compute node groups in PCS</a> in the <i>PCS User
   * Guide</i>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
  inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  void SetSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds = std::forward<SecurityGroupIdsT>(value);
  }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  CreateComputeNodeGroupRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) {
    SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  template <typename SecurityGroupIdsT = Aws::String>
  CreateComputeNodeGroupRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the EC2 key pair to configure directly on the compute node group.
   * The key pair must exist in your account and Amazon Web Services Region. PCS uses
   * this key pair instead of the key pair in the custom launch template. If you
   * don't provide this value, PCS uses the key pair in the custom launch template,
   * if one is specified. You must have permission for
   * <code>ec2:DescribeKeyPairs</code>. If you delete the key pair later, future
   * instance launches can fail. For more information, see <a
   * href="https://docs.aws.amazon.com/pcs/latest/userguide/working-with_cng_instance-settings.html">Configuring
   * instance settings for compute node groups in PCS</a> in the <i>PCS User
   * Guide</i>.</p>
   */
  inline const Aws::String& GetSshKeyName() const { return m_sshKeyName; }
  inline bool SshKeyNameHasBeenSet() const { return m_sshKeyNameHasBeenSet; }
  template <typename SshKeyNameT = Aws::String>
  void SetSshKeyName(SshKeyNameT&& value) {
    m_sshKeyNameHasBeenSet = true;
    m_sshKeyName = std::forward<SshKeyNameT>(value);
  }
  template <typename SshKeyNameT = Aws::String>
  CreateComputeNodeGroupRequest& WithSshKeyName(SshKeyNameT&& value) {
    SetSshKeyName(std::forward<SshKeyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name or ID of the cluster to create a compute node group in.</p>
   */
  inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
  inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
  template <typename ClusterIdentifierT = Aws::String>
  void SetClusterIdentifier(ClusterIdentifierT&& value) {
    m_clusterIdentifierHasBeenSet = true;
    m_clusterIdentifier = std::forward<ClusterIdentifierT>(value);
  }
  template <typename ClusterIdentifierT = Aws::String>
  CreateComputeNodeGroupRequest& WithClusterIdentifier(ClusterIdentifierT&& value) {
    SetClusterIdentifier(std::forward<ClusterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A name to identify the cluster. Example: <code>MyCluster</code> </p>
   */
  inline const Aws::String& GetComputeNodeGroupName() const { return m_computeNodeGroupName; }
  inline bool ComputeNodeGroupNameHasBeenSet() const { return m_computeNodeGroupNameHasBeenSet; }
  template <typename ComputeNodeGroupNameT = Aws::String>
  void SetComputeNodeGroupName(ComputeNodeGroupNameT&& value) {
    m_computeNodeGroupNameHasBeenSet = true;
    m_computeNodeGroupName = std::forward<ComputeNodeGroupNameT>(value);
  }
  template <typename ComputeNodeGroupNameT = Aws::String>
  CreateComputeNodeGroupRequest& WithComputeNodeGroupName(ComputeNodeGroupNameT&& value) {
    SetComputeNodeGroupName(std::forward<ComputeNodeGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of subnet IDs where the compute node group launches instances.
   * Subnets must be in the same VPC as the cluster.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
  inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  void SetSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds = std::forward<SubnetIdsT>(value);
  }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  CreateComputeNodeGroupRequest& WithSubnetIds(SubnetIdsT&& value) {
    SetSubnetIds(std::forward<SubnetIdsT>(value));
    return *this;
  }
  template <typename SubnetIdsT = Aws::String>
  CreateComputeNodeGroupRequest& AddSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies how EC2 instances are purchased on your behalf. PCS supports
   * On-Demand Instances, Spot Instances, Interruptible Capacity Reservations,
   * On-Demand Capacity Reservations, and Amazon EC2 Capacity Blocks for ML. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-purchasing-options.html">Amazon
   * EC2 billing and purchasing options</a> in the <i>Amazon Elastic Compute Cloud
   * User Guide</i>. For more information about PCS support for Capacity Blocks, see
   * <a
   * href="https://docs.aws.amazon.com/pcs/latest/userguide/capacity-blocks.html">Using
   * Amazon EC2 Capacity Blocks for ML with PCS</a> in the <i>PCS User Guide</i>. For
   * more information about PCS support for interruptible capacity reservations, see
   * <a
   * href="https://docs.aws.amazon.com/pcs/latest/userguide/capacity-reservations-iodcr.html">Using
   * I-ODCRs with PCS</a> in the <i>PCS User Guide</i>. Choose On-Demand if you plan
   * to use an On-Demand Capacity Reservation (ODCR). For more information, see <a
   * href="https://docs.aws.amazon.com/pcs/latest/userguide/capacity-reservations-odcr.html">Using
   * ODCRs with PCS</a>. If you don't provide this option, it defaults to
   * On-Demand.</p>
   */
  inline PurchaseOption GetPurchaseOption() const { return m_purchaseOption; }
  inline bool PurchaseOptionHasBeenSet() const { return m_purchaseOptionHasBeenSet; }
  inline void SetPurchaseOption(PurchaseOption value) {
    m_purchaseOptionHasBeenSet = true;
    m_purchaseOption = value;
  }
  inline CreateComputeNodeGroupRequest& WithPurchaseOption(PurchaseOption value) {
    SetPurchaseOption(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the compute node group uses a custom launch template or a
   * launch template that PCS manages. The default value is <code>CUSTOM</code>.</p>
   * <p>If the value is <code>CUSTOM</code>, provide
   * <code>customLaunchTemplate</code>. If the value is <code>MANAGED</code>, omit
   * <code>customLaunchTemplate</code> and provide <code>amiId</code> and
   * <code>securityGroupIds</code>.</p>
   */
  inline LaunchTemplateMode GetLaunchTemplateMode() const { return m_launchTemplateMode; }
  inline bool LaunchTemplateModeHasBeenSet() const { return m_launchTemplateModeHasBeenSet; }
  inline void SetLaunchTemplateMode(LaunchTemplateMode value) {
    m_launchTemplateModeHasBeenSet = true;
    m_launchTemplateMode = value;
  }
  inline CreateComputeNodeGroupRequest& WithLaunchTemplateMode(LaunchTemplateMode value) {
    SetLaunchTemplateMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The custom Amazon EC2 launch template to associate with the compute node
   * group. Specify the launch template <code>id</code> and <code>version</code> when
   * <code>launchTemplateMode</code> is <code>CUSTOM</code>. Don't specify this value
   * when <code>launchTemplateMode</code> is <code>MANAGED</code>.</p>
   */
  inline const CustomLaunchTemplate& GetCustomLaunchTemplate() const { return m_customLaunchTemplate; }
  inline bool CustomLaunchTemplateHasBeenSet() const { return m_customLaunchTemplateHasBeenSet; }
  template <typename CustomLaunchTemplateT = CustomLaunchTemplate>
  void SetCustomLaunchTemplate(CustomLaunchTemplateT&& value) {
    m_customLaunchTemplateHasBeenSet = true;
    m_customLaunchTemplate = std::forward<CustomLaunchTemplateT>(value);
  }
  template <typename CustomLaunchTemplateT = CustomLaunchTemplate>
  CreateComputeNodeGroupRequest& WithCustomLaunchTemplate(CustomLaunchTemplateT&& value) {
    SetCustomLaunchTemplate(std::forward<CustomLaunchTemplateT>(value));
    return *this;
  }
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
  template <typename IamInstanceProfileArnT = Aws::String>
  void SetIamInstanceProfileArn(IamInstanceProfileArnT&& value) {
    m_iamInstanceProfileArnHasBeenSet = true;
    m_iamInstanceProfileArn = std::forward<IamInstanceProfileArnT>(value);
  }
  template <typename IamInstanceProfileArnT = Aws::String>
  CreateComputeNodeGroupRequest& WithIamInstanceProfileArn(IamInstanceProfileArnT&& value) {
    SetIamInstanceProfileArn(std::forward<IamInstanceProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the boundaries of the compute node group auto scaling.</p>
   */
  inline const ScalingConfigurationRequest& GetScalingConfiguration() const { return m_scalingConfiguration; }
  inline bool ScalingConfigurationHasBeenSet() const { return m_scalingConfigurationHasBeenSet; }
  template <typename ScalingConfigurationT = ScalingConfigurationRequest>
  void SetScalingConfiguration(ScalingConfigurationT&& value) {
    m_scalingConfigurationHasBeenSet = true;
    m_scalingConfiguration = std::forward<ScalingConfigurationT>(value);
  }
  template <typename ScalingConfigurationT = ScalingConfigurationRequest>
  CreateComputeNodeGroupRequest& WithScalingConfiguration(ScalingConfigurationT&& value) {
    SetScalingConfiguration(std::forward<ScalingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of EC2 instance configurations that PCS can provision in the compute
   * node group.</p>
   */
  inline const Aws::Vector<InstanceConfig>& GetInstanceConfigs() const { return m_instanceConfigs; }
  inline bool InstanceConfigsHasBeenSet() const { return m_instanceConfigsHasBeenSet; }
  template <typename InstanceConfigsT = Aws::Vector<InstanceConfig>>
  void SetInstanceConfigs(InstanceConfigsT&& value) {
    m_instanceConfigsHasBeenSet = true;
    m_instanceConfigs = std::forward<InstanceConfigsT>(value);
  }
  template <typename InstanceConfigsT = Aws::Vector<InstanceConfig>>
  CreateComputeNodeGroupRequest& WithInstanceConfigs(InstanceConfigsT&& value) {
    SetInstanceConfigs(std::forward<InstanceConfigsT>(value));
    return *this;
  }
  template <typename InstanceConfigsT = InstanceConfig>
  CreateComputeNodeGroupRequest& AddInstanceConfigs(InstanceConfigsT&& value) {
    m_instanceConfigsHasBeenSet = true;
    m_instanceConfigs.emplace_back(std::forward<InstanceConfigsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const SpotOptions& GetSpotOptions() const { return m_spotOptions; }
  inline bool SpotOptionsHasBeenSet() const { return m_spotOptionsHasBeenSet; }
  template <typename SpotOptionsT = SpotOptions>
  void SetSpotOptions(SpotOptionsT&& value) {
    m_spotOptionsHasBeenSet = true;
    m_spotOptions = std::forward<SpotOptionsT>(value);
  }
  template <typename SpotOptionsT = SpotOptions>
  CreateComputeNodeGroupRequest& WithSpotOptions(SpotOptionsT&& value) {
    SetSpotOptions(std::forward<SpotOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional options related to the Slurm scheduler.</p>
   */
  inline const ComputeNodeGroupSlurmConfigurationRequest& GetSlurmConfiguration() const { return m_slurmConfiguration; }
  inline bool SlurmConfigurationHasBeenSet() const { return m_slurmConfigurationHasBeenSet; }
  template <typename SlurmConfigurationT = ComputeNodeGroupSlurmConfigurationRequest>
  void SetSlurmConfiguration(SlurmConfigurationT&& value) {
    m_slurmConfigurationHasBeenSet = true;
    m_slurmConfiguration = std::forward<SlurmConfigurationT>(value);
  }
  template <typename SlurmConfigurationT = ComputeNodeGroupSlurmConfigurationRequest>
  CreateComputeNodeGroupRequest& WithSlurmConfiguration(SlurmConfigurationT&& value) {
    SetSlurmConfiguration(std::forward<SlurmConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle actions to run on compute nodes in the compute node group. Use
   * lifecycle actions to run custom scripts at defined stages of a compute node's
   * lifecycle, such as when a compute node finishes bootstrapping or becomes ready
   * to accept jobs.</p>
   */
  inline const NodeLifecycleActionsRequest& GetNodeLifecycleActions() const { return m_nodeLifecycleActions; }
  inline bool NodeLifecycleActionsHasBeenSet() const { return m_nodeLifecycleActionsHasBeenSet; }
  template <typename NodeLifecycleActionsT = NodeLifecycleActionsRequest>
  void SetNodeLifecycleActions(NodeLifecycleActionsT&& value) {
    m_nodeLifecycleActionsHasBeenSet = true;
    m_nodeLifecycleActions = std::forward<NodeLifecycleActionsT>(value);
  }
  template <typename NodeLifecycleActionsT = NodeLifecycleActionsRequest>
  CreateComputeNodeGroupRequest& WithNodeLifecycleActions(NodeLifecycleActionsT&& value) {
    SetNodeLifecycleActions(std::forward<NodeLifecycleActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. Idempotency ensures that an API request completes
   * only once. With an idempotent request, if the original request completes
   * successfully, the subsequent retries with the same client token return the
   * result from the original successful request and they have no additional effect.
   * If you don't specify a client token, the CLI and SDK automatically generate one
   * for you.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateComputeNodeGroupRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>1 or more tags added to the resource. Each tag consists of a tag key and tag
   * value. The tag value is optional and can be an empty string.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateComputeNodeGroupRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateComputeNodeGroupRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_amiId;

  Aws::Vector<Aws::String> m_securityGroupIds;

  Aws::String m_sshKeyName;

  Aws::String m_clusterIdentifier;

  Aws::String m_computeNodeGroupName;

  Aws::Vector<Aws::String> m_subnetIds;

  PurchaseOption m_purchaseOption{PurchaseOption::NOT_SET};

  LaunchTemplateMode m_launchTemplateMode{LaunchTemplateMode::NOT_SET};

  CustomLaunchTemplate m_customLaunchTemplate;

  Aws::String m_iamInstanceProfileArn;

  ScalingConfigurationRequest m_scalingConfiguration;

  Aws::Vector<InstanceConfig> m_instanceConfigs;

  SpotOptions m_spotOptions;

  ComputeNodeGroupSlurmConfigurationRequest m_slurmConfiguration;

  NodeLifecycleActionsRequest m_nodeLifecycleActions;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_amiIdHasBeenSet = false;
  bool m_securityGroupIdsHasBeenSet = false;
  bool m_sshKeyNameHasBeenSet = false;
  bool m_clusterIdentifierHasBeenSet = false;
  bool m_computeNodeGroupNameHasBeenSet = false;
  bool m_subnetIdsHasBeenSet = false;
  bool m_purchaseOptionHasBeenSet = false;
  bool m_launchTemplateModeHasBeenSet = false;
  bool m_customLaunchTemplateHasBeenSet = false;
  bool m_iamInstanceProfileArnHasBeenSet = false;
  bool m_scalingConfigurationHasBeenSet = false;
  bool m_instanceConfigsHasBeenSet = false;
  bool m_spotOptionsHasBeenSet = false;
  bool m_slurmConfigurationHasBeenSet = false;
  bool m_nodeLifecycleActionsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
