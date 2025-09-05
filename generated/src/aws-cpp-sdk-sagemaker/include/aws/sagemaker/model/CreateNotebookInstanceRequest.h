/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InstanceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/IPAddressType.h>
#include <aws/sagemaker/model/DirectInternetAccess.h>
#include <aws/sagemaker/model/RootAccess.h>
#include <aws/sagemaker/model/InstanceMetadataServiceConfiguration.h>
#include <aws/sagemaker/model/Tag.h>
#include <aws/sagemaker/model/NotebookInstanceAcceleratorType.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateNotebookInstanceRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateNotebookInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNotebookInstance"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the new notebook instance.</p>
     */
    inline const Aws::String& GetNotebookInstanceName() const { return m_notebookInstanceName; }
    inline bool NotebookInstanceNameHasBeenSet() const { return m_notebookInstanceNameHasBeenSet; }
    template<typename NotebookInstanceNameT = Aws::String>
    void SetNotebookInstanceName(NotebookInstanceNameT&& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = std::forward<NotebookInstanceNameT>(value); }
    template<typename NotebookInstanceNameT = Aws::String>
    CreateNotebookInstanceRequest& WithNotebookInstanceName(NotebookInstanceNameT&& value) { SetNotebookInstanceName(std::forward<NotebookInstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of ML compute instance to launch for the notebook instance.</p>
     */
    inline InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline CreateNotebookInstanceRequest& WithInstanceType(InstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet in a VPC to which you would like to have a connectivity
     * from your ML compute instance. </p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    CreateNotebookInstanceRequest& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC security group IDs, in the form sg-xxxxxxxx. The security groups must
     * be for the same VPC as specified in the subnet. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    CreateNotebookInstanceRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    CreateNotebookInstanceRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address type for the notebook instance. Specify <code>ipv4</code> for
     * IPv4-only connectivity or <code>dualstack</code> for both IPv4 and IPv6
     * connectivity. When you specify <code>dualstack</code>, the subnet must support
     * IPv6 CIDR blocks. If not specified, defaults to <code>ipv4</code>.</p>
     */
    inline IPAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IPAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline CreateNotebookInstanceRequest& WithIpAddressType(IPAddressType value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> When you send any requests to Amazon Web Services resources from the
     * notebook instance, SageMaker AI assumes this role to perform tasks on your
     * behalf. You must grant this role necessary permissions so SageMaker AI can
     * perform these tasks. The policy must allow the SageMaker AI service principal
     * (sagemaker.amazonaws.com) permissions to assume this role. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">SageMaker
     * AI Roles</a>. </p>  <p>To be able to pass this role to SageMaker AI, the
     * caller of this API must have the <code>iam:PassRole</code> permission.</p>
     * 
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateNotebookInstanceRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a Amazon Web Services Key Management
     * Service key that SageMaker AI uses to encrypt data on the storage volume
     * attached to your notebook instance. The KMS key you provide must be enabled. For
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/enabling-keys.html">Enabling
     * and Disabling Keys</a> in the <i>Amazon Web Services Key Management Service
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateNotebookInstanceRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateNotebookInstanceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateNotebookInstanceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of a lifecycle configuration to associate with the notebook
     * instance. For information about lifestyle configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a>.</p>
     */
    inline const Aws::String& GetLifecycleConfigName() const { return m_lifecycleConfigName; }
    inline bool LifecycleConfigNameHasBeenSet() const { return m_lifecycleConfigNameHasBeenSet; }
    template<typename LifecycleConfigNameT = Aws::String>
    void SetLifecycleConfigName(LifecycleConfigNameT&& value) { m_lifecycleConfigNameHasBeenSet = true; m_lifecycleConfigName = std::forward<LifecycleConfigNameT>(value); }
    template<typename LifecycleConfigNameT = Aws::String>
    CreateNotebookInstanceRequest& WithLifecycleConfigName(LifecycleConfigNameT&& value) { SetLifecycleConfigName(std::forward<LifecycleConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets whether SageMaker AI provides internet access to the notebook instance.
     * If you set this to <code>Disabled</code> this notebook instance is able to
     * access resources only in your VPC, and is not be able to connect to SageMaker AI
     * training and endpoint services unless you configure a NAT Gateway in your
     * VPC.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/appendix-additional-considerations.html#appendix-notebook-and-internet-access">Notebook
     * Instances Are Internet-Enabled by Default</a>. You can set the value of this
     * parameter to <code>Disabled</code> only if you set a value for the
     * <code>SubnetId</code> parameter.</p>
     */
    inline DirectInternetAccess GetDirectInternetAccess() const { return m_directInternetAccess; }
    inline bool DirectInternetAccessHasBeenSet() const { return m_directInternetAccessHasBeenSet; }
    inline void SetDirectInternetAccess(DirectInternetAccess value) { m_directInternetAccessHasBeenSet = true; m_directInternetAccess = value; }
    inline CreateNotebookInstanceRequest& WithDirectInternetAccess(DirectInternetAccess value) { SetDirectInternetAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in GB, of the ML storage volume to attach to the notebook instance.
     * The default value is 5 GB.</p>
     */
    inline int GetVolumeSizeInGB() const { return m_volumeSizeInGB; }
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }
    inline CreateNotebookInstanceRequest& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is no longer supported. Elastic Inference (EI) is no longer
     * available.</p> <p>This parameter was used to specify a list of EI instance types
     * to associate with this notebook instance.</p>
     */
    inline const Aws::Vector<NotebookInstanceAcceleratorType>& GetAcceleratorTypes() const { return m_acceleratorTypes; }
    inline bool AcceleratorTypesHasBeenSet() const { return m_acceleratorTypesHasBeenSet; }
    template<typename AcceleratorTypesT = Aws::Vector<NotebookInstanceAcceleratorType>>
    void SetAcceleratorTypes(AcceleratorTypesT&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = std::forward<AcceleratorTypesT>(value); }
    template<typename AcceleratorTypesT = Aws::Vector<NotebookInstanceAcceleratorType>>
    CreateNotebookInstanceRequest& WithAcceleratorTypes(AcceleratorTypesT&& value) { SetAcceleratorTypes(std::forward<AcceleratorTypesT>(value)); return *this;}
    inline CreateNotebookInstanceRequest& AddAcceleratorTypes(NotebookInstanceAcceleratorType value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A Git repository to associate with the notebook instance as its default code
     * repository. This can be either the name of a Git repository stored as a resource
     * in your account, or the URL of a Git repository in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">Amazon
     * Web Services CodeCommit</a> or in any other Git repository. When you open a
     * notebook instance, it opens in the directory that contains this repository. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with SageMaker AI Notebook Instances</a>.</p>
     */
    inline const Aws::String& GetDefaultCodeRepository() const { return m_defaultCodeRepository; }
    inline bool DefaultCodeRepositoryHasBeenSet() const { return m_defaultCodeRepositoryHasBeenSet; }
    template<typename DefaultCodeRepositoryT = Aws::String>
    void SetDefaultCodeRepository(DefaultCodeRepositoryT&& value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository = std::forward<DefaultCodeRepositoryT>(value); }
    template<typename DefaultCodeRepositoryT = Aws::String>
    CreateNotebookInstanceRequest& WithDefaultCodeRepository(DefaultCodeRepositoryT&& value) { SetDefaultCodeRepository(std::forward<DefaultCodeRepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of up to three Git repositories to associate with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">Amazon
     * Web Services CodeCommit</a> or in any other Git repository. These repositories
     * are cloned at the same level as the default repository of your notebook
     * instance. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with SageMaker AI Notebook Instances</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalCodeRepositories() const { return m_additionalCodeRepositories; }
    inline bool AdditionalCodeRepositoriesHasBeenSet() const { return m_additionalCodeRepositoriesHasBeenSet; }
    template<typename AdditionalCodeRepositoriesT = Aws::Vector<Aws::String>>
    void SetAdditionalCodeRepositories(AdditionalCodeRepositoriesT&& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories = std::forward<AdditionalCodeRepositoriesT>(value); }
    template<typename AdditionalCodeRepositoriesT = Aws::Vector<Aws::String>>
    CreateNotebookInstanceRequest& WithAdditionalCodeRepositories(AdditionalCodeRepositoriesT&& value) { SetAdditionalCodeRepositories(std::forward<AdditionalCodeRepositoriesT>(value)); return *this;}
    template<typename AdditionalCodeRepositoriesT = Aws::String>
    CreateNotebookInstanceRequest& AddAdditionalCodeRepositories(AdditionalCodeRepositoriesT&& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.emplace_back(std::forward<AdditionalCodeRepositoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether root access is enabled or disabled for users of the notebook
     * instance. The default value is <code>Enabled</code>.</p>  <p>Lifecycle
     * configurations need root access to be able to set up a notebook instance.
     * Because of this, lifecycle configurations associated with a notebook instance
     * always run with root access even if you disable root access for users.</p>
     * 
     */
    inline RootAccess GetRootAccess() const { return m_rootAccess; }
    inline bool RootAccessHasBeenSet() const { return m_rootAccessHasBeenSet; }
    inline void SetRootAccess(RootAccess value) { m_rootAccessHasBeenSet = true; m_rootAccess = value; }
    inline CreateNotebookInstanceRequest& WithRootAccess(RootAccess value) { SetRootAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform identifier of the notebook instance runtime environment.</p>
     */
    inline const Aws::String& GetPlatformIdentifier() const { return m_platformIdentifier; }
    inline bool PlatformIdentifierHasBeenSet() const { return m_platformIdentifierHasBeenSet; }
    template<typename PlatformIdentifierT = Aws::String>
    void SetPlatformIdentifier(PlatformIdentifierT&& value) { m_platformIdentifierHasBeenSet = true; m_platformIdentifier = std::forward<PlatformIdentifierT>(value); }
    template<typename PlatformIdentifierT = Aws::String>
    CreateNotebookInstanceRequest& WithPlatformIdentifier(PlatformIdentifierT&& value) { SetPlatformIdentifier(std::forward<PlatformIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information on the IMDS configuration of the notebook instance</p>
     */
    inline const InstanceMetadataServiceConfiguration& GetInstanceMetadataServiceConfiguration() const { return m_instanceMetadataServiceConfiguration; }
    inline bool InstanceMetadataServiceConfigurationHasBeenSet() const { return m_instanceMetadataServiceConfigurationHasBeenSet; }
    template<typename InstanceMetadataServiceConfigurationT = InstanceMetadataServiceConfiguration>
    void SetInstanceMetadataServiceConfiguration(InstanceMetadataServiceConfigurationT&& value) { m_instanceMetadataServiceConfigurationHasBeenSet = true; m_instanceMetadataServiceConfiguration = std::forward<InstanceMetadataServiceConfigurationT>(value); }
    template<typename InstanceMetadataServiceConfigurationT = InstanceMetadataServiceConfiguration>
    CreateNotebookInstanceRequest& WithInstanceMetadataServiceConfiguration(InstanceMetadataServiceConfigurationT&& value) { SetInstanceMetadataServiceConfiguration(std::forward<InstanceMetadataServiceConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_notebookInstanceName;
    bool m_notebookInstanceNameHasBeenSet = false;

    InstanceType m_instanceType{InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    IPAddressType m_ipAddressType{IPAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_lifecycleConfigName;
    bool m_lifecycleConfigNameHasBeenSet = false;

    DirectInternetAccess m_directInternetAccess{DirectInternetAccess::NOT_SET};
    bool m_directInternetAccessHasBeenSet = false;

    int m_volumeSizeInGB{0};
    bool m_volumeSizeInGBHasBeenSet = false;

    Aws::Vector<NotebookInstanceAcceleratorType> m_acceleratorTypes;
    bool m_acceleratorTypesHasBeenSet = false;

    Aws::String m_defaultCodeRepository;
    bool m_defaultCodeRepositoryHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalCodeRepositories;
    bool m_additionalCodeRepositoriesHasBeenSet = false;

    RootAccess m_rootAccess{RootAccess::NOT_SET};
    bool m_rootAccessHasBeenSet = false;

    Aws::String m_platformIdentifier;
    bool m_platformIdentifierHasBeenSet = false;

    InstanceMetadataServiceConfiguration m_instanceMetadataServiceConfiguration;
    bool m_instanceMetadataServiceConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
