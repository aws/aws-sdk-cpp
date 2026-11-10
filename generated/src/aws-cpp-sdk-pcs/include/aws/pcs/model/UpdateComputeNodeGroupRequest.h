/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pcs/PCSRequest.h>
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/CustomLaunchTemplate.h>
#include <aws/pcs/model/LaunchTemplateMode.h>
#include <aws/pcs/model/PurchaseOption.h>
#include <aws/pcs/model/ScalingConfigurationRequest.h>
#include <aws/pcs/model/SpotOptions.h>
#include <aws/pcs/model/UpdateComputeNodeGroupSlurmConfigurationRequest.h>
#include <aws/pcs/model/UpdateNodeLifecycleActionsRequest.h>

#include <utility>

namespace Aws {
namespace PCS {
namespace Model {

/**
 */
class UpdateComputeNodeGroupRequest : public PCSRequest {
 public:
  AWS_PCS_API UpdateComputeNodeGroupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateComputeNodeGroup"; }

  AWS_PCS_API Aws::String SerializePayload() const override;

  AWS_PCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Machine Image (AMI) that PCS uses to launch instances.
   * This value overrides the AMI ID in the custom launch template. Specify an empty
   * string (<code>""</code>) to remove the AMI ID from the compute node group and
   * use the AMI ID specified in the custom launch template. Omit this value to leave
   * the current setting unchanged.</p>
   */
  inline const Aws::String& GetAmiId() const { return m_amiId; }
  inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }
  template <typename AmiIdT = Aws::String>
  void SetAmiId(AmiIdT&& value) {
    m_amiIdHasBeenSet = true;
    m_amiId = std::forward<AmiIdT>(value);
  }
  template <typename AmiIdT = Aws::String>
  UpdateComputeNodeGroupRequest& WithAmiId(AmiIdT&& value) {
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
   * network interfaces. Specify an empty list (<code>[]</code>) to remove the
   * security groups from the compute node group and use the security groups in the
   * custom launch template. Omit this value to leave the current setting
   * unchanged.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
  inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  void SetSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds = std::forward<SecurityGroupIdsT>(value);
  }
  template <typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
  UpdateComputeNodeGroupRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) {
    SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  template <typename SecurityGroupIdsT = Aws::String>
  UpdateComputeNodeGroupRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) {
    m_securityGroupIdsHasBeenSet = true;
    m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the EC2 key pair to configure directly on the compute node group.
   * The key pair must exist in your account and Amazon Web Services Region. PCS uses
   * this key pair instead of the key pair in the custom launch template. Specify an
   * empty string (<code>""</code>) to remove the key pair from the compute node
   * group and use the key pair in the custom launch template. Omit this value to
   * leave the current setting unchanged. You must have permission for
   * <code>ec2:DescribeKeyPairs</code> to specify a key pair. If you delete the key
   * pair later, future instance launches can fail.</p>
   */
  inline const Aws::String& GetSshKeyName() const { return m_sshKeyName; }
  inline bool SshKeyNameHasBeenSet() const { return m_sshKeyNameHasBeenSet; }
  template <typename SshKeyNameT = Aws::String>
  void SetSshKeyName(SshKeyNameT&& value) {
    m_sshKeyNameHasBeenSet = true;
    m_sshKeyName = std::forward<SshKeyNameT>(value);
  }
  template <typename SshKeyNameT = Aws::String>
  UpdateComputeNodeGroupRequest& WithSshKeyName(SshKeyNameT&& value) {
    SetSshKeyName(std::forward<SshKeyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name or ID of the cluster of the compute node group.</p>
   */
  inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
  inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
  template <typename ClusterIdentifierT = Aws::String>
  void SetClusterIdentifier(ClusterIdentifierT&& value) {
    m_clusterIdentifierHasBeenSet = true;
    m_clusterIdentifier = std::forward<ClusterIdentifierT>(value);
  }
  template <typename ClusterIdentifierT = Aws::String>
  UpdateComputeNodeGroupRequest& WithClusterIdentifier(ClusterIdentifierT&& value) {
    SetClusterIdentifier(std::forward<ClusterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name or ID of the compute node group.</p>
   */
  inline const Aws::String& GetComputeNodeGroupIdentifier() const { return m_computeNodeGroupIdentifier; }
  inline bool ComputeNodeGroupIdentifierHasBeenSet() const { return m_computeNodeGroupIdentifierHasBeenSet; }
  template <typename ComputeNodeGroupIdentifierT = Aws::String>
  void SetComputeNodeGroupIdentifier(ComputeNodeGroupIdentifierT&& value) {
    m_computeNodeGroupIdentifierHasBeenSet = true;
    m_computeNodeGroupIdentifier = std::forward<ComputeNodeGroupIdentifierT>(value);
  }
  template <typename ComputeNodeGroupIdentifierT = Aws::String>
  UpdateComputeNodeGroupRequest& WithComputeNodeGroupIdentifier(ComputeNodeGroupIdentifierT&& value) {
    SetComputeNodeGroupIdentifier(std::forward<ComputeNodeGroupIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of subnet IDs where the compute node group provisions instances. The
   * subnets must be in the same VPC as the cluster.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
  inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  void SetSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds = std::forward<SubnetIdsT>(value);
  }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  UpdateComputeNodeGroupRequest& WithSubnetIds(SubnetIdsT&& value) {
    SetSubnetIds(std::forward<SubnetIdsT>(value));
    return *this;
  }
  template <typename SubnetIdsT = Aws::String>
  UpdateComputeNodeGroupRequest& AddSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the compute node group uses a custom launch template or a
   * launch template that PCS manages. Omit this value to keep the current mode.</p>
   * <p>Valid values:</p> <ul> <li> <p> <code>CUSTOM</code> – Use a custom launch
   * template. To switch from <code>MANAGED</code>, also provide
   * <code>customLaunchTemplate</code>. If the compute node group already uses
   * <code>CUSTOM</code> and you omit <code>customLaunchTemplate</code>, the existing
   * launch template is unchanged.</p> </li> <li> <p> <code>MANAGED</code> – Use a
   * launch template created and managed by PCS. Omit
   * <code>customLaunchTemplate</code>. Switching to this mode removes the custom
   * launch template association but doesn't delete the launch template.</p> </li>
   * </ul> <p>When switching to <code>MANAGED</code>, the compute node group must
   * have <code>amiId</code> and <code>securityGroupIds</code> configured. You can
   * set these values in the same request.</p>
   */
  inline LaunchTemplateMode GetLaunchTemplateMode() const { return m_launchTemplateMode; }
  inline bool LaunchTemplateModeHasBeenSet() const { return m_launchTemplateModeHasBeenSet; }
  inline void SetLaunchTemplateMode(LaunchTemplateMode value) {
    m_launchTemplateModeHasBeenSet = true;
    m_launchTemplateMode = value;
  }
  inline UpdateComputeNodeGroupRequest& WithLaunchTemplateMode(LaunchTemplateMode value) {
    SetLaunchTemplateMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The custom Amazon EC2 launch template to associate with the compute node
   * group. To set or change the custom launch template, specify <code>id</code> and
   * <code>version</code>. If you provide this value and omit
   * <code>launchTemplateMode</code>, the compute node group must already use
   * <code>CUSTOM</code> mode. To switch from <code>MANAGED</code> to
   * <code>CUSTOM</code>, specify <code>launchTemplateMode</code> as
   * <code>CUSTOM</code> and provide this value. If the compute node group already
   * uses <code>CUSTOM</code>, omit this value while also omitting
   * <code>launchTemplateMode</code>, or while specifying <code>CUSTOM</code>, to
   * keep the existing custom launch template. For more information, see <a
   * href="https://docs.aws.amazon.com/pcs/latest/userguide/working-with_cng_instance-settings-migrate.html">Migrating
   * a compute node group from a custom launch template</a> in the <i>PCS User
   * Guide</i>.</p>
   */
  inline const CustomLaunchTemplate& GetCustomLaunchTemplate() const { return m_customLaunchTemplate; }
  inline bool CustomLaunchTemplateHasBeenSet() const { return m_customLaunchTemplateHasBeenSet; }
  template <typename CustomLaunchTemplateT = CustomLaunchTemplate>
  void SetCustomLaunchTemplate(CustomLaunchTemplateT&& value) {
    m_customLaunchTemplateHasBeenSet = true;
    m_customLaunchTemplate = std::forward<CustomLaunchTemplateT>(value);
  }
  template <typename CustomLaunchTemplateT = CustomLaunchTemplate>
  UpdateComputeNodeGroupRequest& WithCustomLaunchTemplate(CustomLaunchTemplateT&& value) {
    SetCustomLaunchTemplate(std::forward<CustomLaunchTemplateT>(value));
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
  inline UpdateComputeNodeGroupRequest& WithPurchaseOption(PurchaseOption value) {
    SetPurchaseOption(value);
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
  UpdateComputeNodeGroupRequest& WithSpotOptions(SpotOptionsT&& value) {
    SetSpotOptions(std::forward<SpotOptionsT>(value));
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
  UpdateComputeNodeGroupRequest& WithScalingConfiguration(ScalingConfigurationT&& value) {
    SetScalingConfiguration(std::forward<ScalingConfigurationT>(value));
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
  UpdateComputeNodeGroupRequest& WithIamInstanceProfileArn(IamInstanceProfileArnT&& value) {
    SetIamInstanceProfileArn(std::forward<IamInstanceProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional options related to the Slurm scheduler.</p>
   */
  inline const UpdateComputeNodeGroupSlurmConfigurationRequest& GetSlurmConfiguration() const { return m_slurmConfiguration; }
  inline bool SlurmConfigurationHasBeenSet() const { return m_slurmConfigurationHasBeenSet; }
  template <typename SlurmConfigurationT = UpdateComputeNodeGroupSlurmConfigurationRequest>
  void SetSlurmConfiguration(SlurmConfigurationT&& value) {
    m_slurmConfigurationHasBeenSet = true;
    m_slurmConfiguration = std::forward<SlurmConfigurationT>(value);
  }
  template <typename SlurmConfigurationT = UpdateComputeNodeGroupSlurmConfigurationRequest>
  UpdateComputeNodeGroupRequest& WithSlurmConfiguration(SlurmConfigurationT&& value) {
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
  inline const UpdateNodeLifecycleActionsRequest& GetNodeLifecycleActions() const { return m_nodeLifecycleActions; }
  inline bool NodeLifecycleActionsHasBeenSet() const { return m_nodeLifecycleActionsHasBeenSet; }
  template <typename NodeLifecycleActionsT = UpdateNodeLifecycleActionsRequest>
  void SetNodeLifecycleActions(NodeLifecycleActionsT&& value) {
    m_nodeLifecycleActionsHasBeenSet = true;
    m_nodeLifecycleActions = std::forward<NodeLifecycleActionsT>(value);
  }
  template <typename NodeLifecycleActionsT = UpdateNodeLifecycleActionsRequest>
  UpdateComputeNodeGroupRequest& WithNodeLifecycleActions(NodeLifecycleActionsT&& value) {
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
  UpdateComputeNodeGroupRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_amiId;

  Aws::Vector<Aws::String> m_securityGroupIds;

  Aws::String m_sshKeyName;

  Aws::String m_clusterIdentifier;

  Aws::String m_computeNodeGroupIdentifier;

  Aws::Vector<Aws::String> m_subnetIds;

  LaunchTemplateMode m_launchTemplateMode{LaunchTemplateMode::NOT_SET};

  CustomLaunchTemplate m_customLaunchTemplate;

  PurchaseOption m_purchaseOption{PurchaseOption::NOT_SET};

  SpotOptions m_spotOptions;

  ScalingConfigurationRequest m_scalingConfiguration;

  Aws::String m_iamInstanceProfileArn;

  UpdateComputeNodeGroupSlurmConfigurationRequest m_slurmConfiguration;

  UpdateNodeLifecycleActionsRequest m_nodeLifecycleActions;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_amiIdHasBeenSet = false;
  bool m_securityGroupIdsHasBeenSet = false;
  bool m_sshKeyNameHasBeenSet = false;
  bool m_clusterIdentifierHasBeenSet = false;
  bool m_computeNodeGroupIdentifierHasBeenSet = false;
  bool m_subnetIdsHasBeenSet = false;
  bool m_launchTemplateModeHasBeenSet = false;
  bool m_customLaunchTemplateHasBeenSet = false;
  bool m_purchaseOptionHasBeenSet = false;
  bool m_spotOptionsHasBeenSet = false;
  bool m_scalingConfigurationHasBeenSet = false;
  bool m_iamInstanceProfileArnHasBeenSet = false;
  bool m_slurmConfigurationHasBeenSet = false;
  bool m_nodeLifecycleActionsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
