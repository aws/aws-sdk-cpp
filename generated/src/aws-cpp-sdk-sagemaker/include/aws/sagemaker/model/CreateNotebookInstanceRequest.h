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
    AWS_SAGEMAKER_API CreateNotebookInstanceRequest();

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
    inline const Aws::String& GetNotebookInstanceName() const{ return m_notebookInstanceName; }
    inline bool NotebookInstanceNameHasBeenSet() const { return m_notebookInstanceNameHasBeenSet; }
    inline void SetNotebookInstanceName(const Aws::String& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = value; }
    inline void SetNotebookInstanceName(Aws::String&& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = std::move(value); }
    inline void SetNotebookInstanceName(const char* value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName.assign(value); }
    inline CreateNotebookInstanceRequest& WithNotebookInstanceName(const Aws::String& value) { SetNotebookInstanceName(value); return *this;}
    inline CreateNotebookInstanceRequest& WithNotebookInstanceName(Aws::String&& value) { SetNotebookInstanceName(std::move(value)); return *this;}
    inline CreateNotebookInstanceRequest& WithNotebookInstanceName(const char* value) { SetNotebookInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of ML compute instance to launch for the notebook instance.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline CreateNotebookInstanceRequest& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}
    inline CreateNotebookInstanceRequest& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet in a VPC to which you would like to have a connectivity
     * from your ML compute instance. </p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline CreateNotebookInstanceRequest& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline CreateNotebookInstanceRequest& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline CreateNotebookInstanceRequest& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC security group IDs, in the form sg-xxxxxxxx. The security groups must
     * be for the same VPC as specified in the subnet. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline CreateNotebookInstanceRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline CreateNotebookInstanceRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline CreateNotebookInstanceRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline CreateNotebookInstanceRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline CreateNotebookInstanceRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
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
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateNotebookInstanceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateNotebookInstanceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateNotebookInstanceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline CreateNotebookInstanceRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CreateNotebookInstanceRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CreateNotebookInstanceRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateNotebookInstanceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateNotebookInstanceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateNotebookInstanceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateNotebookInstanceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of a lifecycle configuration to associate with the notebook
     * instance. For information about lifestyle configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a>.</p>
     */
    inline const Aws::String& GetLifecycleConfigName() const{ return m_lifecycleConfigName; }
    inline bool LifecycleConfigNameHasBeenSet() const { return m_lifecycleConfigNameHasBeenSet; }
    inline void SetLifecycleConfigName(const Aws::String& value) { m_lifecycleConfigNameHasBeenSet = true; m_lifecycleConfigName = value; }
    inline void SetLifecycleConfigName(Aws::String&& value) { m_lifecycleConfigNameHasBeenSet = true; m_lifecycleConfigName = std::move(value); }
    inline void SetLifecycleConfigName(const char* value) { m_lifecycleConfigNameHasBeenSet = true; m_lifecycleConfigName.assign(value); }
    inline CreateNotebookInstanceRequest& WithLifecycleConfigName(const Aws::String& value) { SetLifecycleConfigName(value); return *this;}
    inline CreateNotebookInstanceRequest& WithLifecycleConfigName(Aws::String&& value) { SetLifecycleConfigName(std::move(value)); return *this;}
    inline CreateNotebookInstanceRequest& WithLifecycleConfigName(const char* value) { SetLifecycleConfigName(value); return *this;}
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
    inline const DirectInternetAccess& GetDirectInternetAccess() const{ return m_directInternetAccess; }
    inline bool DirectInternetAccessHasBeenSet() const { return m_directInternetAccessHasBeenSet; }
    inline void SetDirectInternetAccess(const DirectInternetAccess& value) { m_directInternetAccessHasBeenSet = true; m_directInternetAccess = value; }
    inline void SetDirectInternetAccess(DirectInternetAccess&& value) { m_directInternetAccessHasBeenSet = true; m_directInternetAccess = std::move(value); }
    inline CreateNotebookInstanceRequest& WithDirectInternetAccess(const DirectInternetAccess& value) { SetDirectInternetAccess(value); return *this;}
    inline CreateNotebookInstanceRequest& WithDirectInternetAccess(DirectInternetAccess&& value) { SetDirectInternetAccess(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in GB, of the ML storage volume to attach to the notebook instance.
     * The default value is 5 GB.</p>
     */
    inline int GetVolumeSizeInGB() const{ return m_volumeSizeInGB; }
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
    inline const Aws::Vector<NotebookInstanceAcceleratorType>& GetAcceleratorTypes() const{ return m_acceleratorTypes; }
    inline bool AcceleratorTypesHasBeenSet() const { return m_acceleratorTypesHasBeenSet; }
    inline void SetAcceleratorTypes(const Aws::Vector<NotebookInstanceAcceleratorType>& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = value; }
    inline void SetAcceleratorTypes(Aws::Vector<NotebookInstanceAcceleratorType>&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = std::move(value); }
    inline CreateNotebookInstanceRequest& WithAcceleratorTypes(const Aws::Vector<NotebookInstanceAcceleratorType>& value) { SetAcceleratorTypes(value); return *this;}
    inline CreateNotebookInstanceRequest& WithAcceleratorTypes(Aws::Vector<NotebookInstanceAcceleratorType>&& value) { SetAcceleratorTypes(std::move(value)); return *this;}
    inline CreateNotebookInstanceRequest& AddAcceleratorTypes(const NotebookInstanceAcceleratorType& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(value); return *this; }
    inline CreateNotebookInstanceRequest& AddAcceleratorTypes(NotebookInstanceAcceleratorType&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(std::move(value)); return *this; }
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
    inline const Aws::String& GetDefaultCodeRepository() const{ return m_defaultCodeRepository; }
    inline bool DefaultCodeRepositoryHasBeenSet() const { return m_defaultCodeRepositoryHasBeenSet; }
    inline void SetDefaultCodeRepository(const Aws::String& value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository = value; }
    inline void SetDefaultCodeRepository(Aws::String&& value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository = std::move(value); }
    inline void SetDefaultCodeRepository(const char* value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository.assign(value); }
    inline CreateNotebookInstanceRequest& WithDefaultCodeRepository(const Aws::String& value) { SetDefaultCodeRepository(value); return *this;}
    inline CreateNotebookInstanceRequest& WithDefaultCodeRepository(Aws::String&& value) { SetDefaultCodeRepository(std::move(value)); return *this;}
    inline CreateNotebookInstanceRequest& WithDefaultCodeRepository(const char* value) { SetDefaultCodeRepository(value); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetAdditionalCodeRepositories() const{ return m_additionalCodeRepositories; }
    inline bool AdditionalCodeRepositoriesHasBeenSet() const { return m_additionalCodeRepositoriesHasBeenSet; }
    inline void SetAdditionalCodeRepositories(const Aws::Vector<Aws::String>& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories = value; }
    inline void SetAdditionalCodeRepositories(Aws::Vector<Aws::String>&& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories = std::move(value); }
    inline CreateNotebookInstanceRequest& WithAdditionalCodeRepositories(const Aws::Vector<Aws::String>& value) { SetAdditionalCodeRepositories(value); return *this;}
    inline CreateNotebookInstanceRequest& WithAdditionalCodeRepositories(Aws::Vector<Aws::String>&& value) { SetAdditionalCodeRepositories(std::move(value)); return *this;}
    inline CreateNotebookInstanceRequest& AddAdditionalCodeRepositories(const Aws::String& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.push_back(value); return *this; }
    inline CreateNotebookInstanceRequest& AddAdditionalCodeRepositories(Aws::String&& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.push_back(std::move(value)); return *this; }
    inline CreateNotebookInstanceRequest& AddAdditionalCodeRepositories(const char* value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.push_back(value); return *this; }
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
    inline const RootAccess& GetRootAccess() const{ return m_rootAccess; }
    inline bool RootAccessHasBeenSet() const { return m_rootAccessHasBeenSet; }
    inline void SetRootAccess(const RootAccess& value) { m_rootAccessHasBeenSet = true; m_rootAccess = value; }
    inline void SetRootAccess(RootAccess&& value) { m_rootAccessHasBeenSet = true; m_rootAccess = std::move(value); }
    inline CreateNotebookInstanceRequest& WithRootAccess(const RootAccess& value) { SetRootAccess(value); return *this;}
    inline CreateNotebookInstanceRequest& WithRootAccess(RootAccess&& value) { SetRootAccess(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform identifier of the notebook instance runtime environment.</p>
     */
    inline const Aws::String& GetPlatformIdentifier() const{ return m_platformIdentifier; }
    inline bool PlatformIdentifierHasBeenSet() const { return m_platformIdentifierHasBeenSet; }
    inline void SetPlatformIdentifier(const Aws::String& value) { m_platformIdentifierHasBeenSet = true; m_platformIdentifier = value; }
    inline void SetPlatformIdentifier(Aws::String&& value) { m_platformIdentifierHasBeenSet = true; m_platformIdentifier = std::move(value); }
    inline void SetPlatformIdentifier(const char* value) { m_platformIdentifierHasBeenSet = true; m_platformIdentifier.assign(value); }
    inline CreateNotebookInstanceRequest& WithPlatformIdentifier(const Aws::String& value) { SetPlatformIdentifier(value); return *this;}
    inline CreateNotebookInstanceRequest& WithPlatformIdentifier(Aws::String&& value) { SetPlatformIdentifier(std::move(value)); return *this;}
    inline CreateNotebookInstanceRequest& WithPlatformIdentifier(const char* value) { SetPlatformIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information on the IMDS configuration of the notebook instance</p>
     */
    inline const InstanceMetadataServiceConfiguration& GetInstanceMetadataServiceConfiguration() const{ return m_instanceMetadataServiceConfiguration; }
    inline bool InstanceMetadataServiceConfigurationHasBeenSet() const { return m_instanceMetadataServiceConfigurationHasBeenSet; }
    inline void SetInstanceMetadataServiceConfiguration(const InstanceMetadataServiceConfiguration& value) { m_instanceMetadataServiceConfigurationHasBeenSet = true; m_instanceMetadataServiceConfiguration = value; }
    inline void SetInstanceMetadataServiceConfiguration(InstanceMetadataServiceConfiguration&& value) { m_instanceMetadataServiceConfigurationHasBeenSet = true; m_instanceMetadataServiceConfiguration = std::move(value); }
    inline CreateNotebookInstanceRequest& WithInstanceMetadataServiceConfiguration(const InstanceMetadataServiceConfiguration& value) { SetInstanceMetadataServiceConfiguration(value); return *this;}
    inline CreateNotebookInstanceRequest& WithInstanceMetadataServiceConfiguration(InstanceMetadataServiceConfiguration&& value) { SetInstanceMetadataServiceConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_notebookInstanceName;
    bool m_notebookInstanceNameHasBeenSet = false;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_lifecycleConfigName;
    bool m_lifecycleConfigNameHasBeenSet = false;

    DirectInternetAccess m_directInternetAccess;
    bool m_directInternetAccessHasBeenSet = false;

    int m_volumeSizeInGB;
    bool m_volumeSizeInGBHasBeenSet = false;

    Aws::Vector<NotebookInstanceAcceleratorType> m_acceleratorTypes;
    bool m_acceleratorTypesHasBeenSet = false;

    Aws::String m_defaultCodeRepository;
    bool m_defaultCodeRepositoryHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalCodeRepositories;
    bool m_additionalCodeRepositoriesHasBeenSet = false;

    RootAccess m_rootAccess;
    bool m_rootAccessHasBeenSet = false;

    Aws::String m_platformIdentifier;
    bool m_platformIdentifierHasBeenSet = false;

    InstanceMetadataServiceConfiguration m_instanceMetadataServiceConfiguration;
    bool m_instanceMetadataServiceConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
