/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides details about an Amazon SageMaker AI notebook instance.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsSageMakerNotebookInstanceDetails">AWS
   * API Reference</a></p>
   */
  class AwsSageMakerNotebookInstanceDetails
  {
  public:
    AWS_SECURITYHUB_API AwsSageMakerNotebookInstanceDetails();
    AWS_SECURITYHUB_API AwsSageMakerNotebookInstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsSageMakerNotebookInstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A list of Amazon Elastic Inference instance types to associate with the
     * notebook instance. Currently, only one instance type can be associated with a
     * notebook instance. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAcceleratorTypes() const{ return m_acceleratorTypes; }
    inline bool AcceleratorTypesHasBeenSet() const { return m_acceleratorTypesHasBeenSet; }
    inline void SetAcceleratorTypes(const Aws::Vector<Aws::String>& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = value; }
    inline void SetAcceleratorTypes(Aws::Vector<Aws::String>&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = std::move(value); }
    inline AwsSageMakerNotebookInstanceDetails& WithAcceleratorTypes(const Aws::Vector<Aws::String>& value) { SetAcceleratorTypes(value); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithAcceleratorTypes(Aws::Vector<Aws::String>&& value) { SetAcceleratorTypes(std::move(value)); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& AddAcceleratorTypes(const Aws::String& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(value); return *this; }
    inline AwsSageMakerNotebookInstanceDetails& AddAcceleratorTypes(Aws::String&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(std::move(value)); return *this; }
    inline AwsSageMakerNotebookInstanceDetails& AddAcceleratorTypes(const char* value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of up to three Git repositories associated with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">CodeCommit</a>
     * or in any other Git repository. These repositories are cloned at the same level
     * as the default repository of your notebook instance. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git repositories with SageMaker AI notebook instances</a> in the <i>Amazon
     * SageMaker AI Developer Guide</i>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalCodeRepositories() const{ return m_additionalCodeRepositories; }
    inline bool AdditionalCodeRepositoriesHasBeenSet() const { return m_additionalCodeRepositoriesHasBeenSet; }
    inline void SetAdditionalCodeRepositories(const Aws::Vector<Aws::String>& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories = value; }
    inline void SetAdditionalCodeRepositories(Aws::Vector<Aws::String>&& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories = std::move(value); }
    inline AwsSageMakerNotebookInstanceDetails& WithAdditionalCodeRepositories(const Aws::Vector<Aws::String>& value) { SetAdditionalCodeRepositories(value); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithAdditionalCodeRepositories(Aws::Vector<Aws::String>&& value) { SetAdditionalCodeRepositories(std::move(value)); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& AddAdditionalCodeRepositories(const Aws::String& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.push_back(value); return *this; }
    inline AwsSageMakerNotebookInstanceDetails& AddAdditionalCodeRepositories(Aws::String&& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.push_back(std::move(value)); return *this; }
    inline AwsSageMakerNotebookInstanceDetails& AddAdditionalCodeRepositories(const char* value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The Git repository associated with the notebook instance as its default code
     * repository. This can be either the name of a Git repository stored as a resource
     * in your account, or the URL of a Git repository in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">CodeCommit</a>
     * or in any other Git repository. When you open a notebook instance, it opens in
     * the directory that contains this repository. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git repositories with SageMaker AI notebook instances</a> in the <i>Amazon
     * SageMaker AI Developer Guide</i>. </p>
     */
    inline const Aws::String& GetDefaultCodeRepository() const{ return m_defaultCodeRepository; }
    inline bool DefaultCodeRepositoryHasBeenSet() const { return m_defaultCodeRepositoryHasBeenSet; }
    inline void SetDefaultCodeRepository(const Aws::String& value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository = value; }
    inline void SetDefaultCodeRepository(Aws::String&& value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository = std::move(value); }
    inline void SetDefaultCodeRepository(const char* value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository.assign(value); }
    inline AwsSageMakerNotebookInstanceDetails& WithDefaultCodeRepository(const Aws::String& value) { SetDefaultCodeRepository(value); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithDefaultCodeRepository(Aws::String&& value) { SetDefaultCodeRepository(std::move(value)); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithDefaultCodeRepository(const char* value) { SetDefaultCodeRepository(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Sets whether SageMaker AI provides internet access to the notebook instance.
     * If you set this to <code>Disabled</code>, this notebook instance is able to
     * access resources only in your VPC, and is not be able to connect to SageMaker AI
     * training and endpoint services unless you configure a Network Address
     * Translation (NAT) Gateway in your VPC. </p>
     */
    inline const Aws::String& GetDirectInternetAccess() const{ return m_directInternetAccess; }
    inline bool DirectInternetAccessHasBeenSet() const { return m_directInternetAccessHasBeenSet; }
    inline void SetDirectInternetAccess(const Aws::String& value) { m_directInternetAccessHasBeenSet = true; m_directInternetAccess = value; }
    inline void SetDirectInternetAccess(Aws::String&& value) { m_directInternetAccessHasBeenSet = true; m_directInternetAccess = std::move(value); }
    inline void SetDirectInternetAccess(const char* value) { m_directInternetAccessHasBeenSet = true; m_directInternetAccess.assign(value); }
    inline AwsSageMakerNotebookInstanceDetails& WithDirectInternetAccess(const Aws::String& value) { SetDirectInternetAccess(value); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithDirectInternetAccess(Aws::String&& value) { SetDirectInternetAccess(std::move(value)); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithDirectInternetAccess(const char* value) { SetDirectInternetAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If status of the instance is <code>Failed</code>, the reason it failed. </p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline AwsSageMakerNotebookInstanceDetails& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information on the IMDS configuration of the notebook instance. </p>
     */
    inline const AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails& GetInstanceMetadataServiceConfiguration() const{ return m_instanceMetadataServiceConfiguration; }
    inline bool InstanceMetadataServiceConfigurationHasBeenSet() const { return m_instanceMetadataServiceConfigurationHasBeenSet; }
    inline void SetInstanceMetadataServiceConfiguration(const AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails& value) { m_instanceMetadataServiceConfigurationHasBeenSet = true; m_instanceMetadataServiceConfiguration = value; }
    inline void SetInstanceMetadataServiceConfiguration(AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails&& value) { m_instanceMetadataServiceConfigurationHasBeenSet = true; m_instanceMetadataServiceConfiguration = std::move(value); }
    inline AwsSageMakerNotebookInstanceDetails& WithInstanceMetadataServiceConfiguration(const AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails& value) { SetInstanceMetadataServiceConfiguration(value); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithInstanceMetadataServiceConfiguration(AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails&& value) { SetInstanceMetadataServiceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of machine learning (ML) compute instance to launch for the
     * notebook instance. </p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline AwsSageMakerNotebookInstanceDetails& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of an Key Management Service (KMS) key that
     * SageMaker AI uses to encrypt data on the storage volume attached to your
     * notebook instance. The KMS key you provide must be enabled. For information, see
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/enabling-keys.html">Enabling
     * and disabling keys</a> in the <i>Key Management Service Developer Guide</i>.
     * </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline AwsSageMakerNotebookInstanceDetails& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The network interface ID that SageMaker AI created when the instance was
     * created. </p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }
    inline AwsSageMakerNotebookInstanceDetails& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline const Aws::String& GetNotebookInstanceArn() const{ return m_notebookInstanceArn; }
    inline bool NotebookInstanceArnHasBeenSet() const { return m_notebookInstanceArnHasBeenSet; }
    inline void SetNotebookInstanceArn(const Aws::String& value) { m_notebookInstanceArnHasBeenSet = true; m_notebookInstanceArn = value; }
    inline void SetNotebookInstanceArn(Aws::String&& value) { m_notebookInstanceArnHasBeenSet = true; m_notebookInstanceArn = std::move(value); }
    inline void SetNotebookInstanceArn(const char* value) { m_notebookInstanceArnHasBeenSet = true; m_notebookInstanceArn.assign(value); }
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceArn(const Aws::String& value) { SetNotebookInstanceArn(value); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceArn(Aws::String&& value) { SetNotebookInstanceArn(std::move(value)); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceArn(const char* value) { SetNotebookInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of a notebook instance lifecycle configuration. </p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigName() const{ return m_notebookInstanceLifecycleConfigName; }
    inline bool NotebookInstanceLifecycleConfigNameHasBeenSet() const { return m_notebookInstanceLifecycleConfigNameHasBeenSet; }
    inline void SetNotebookInstanceLifecycleConfigName(const Aws::String& value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName = value; }
    inline void SetNotebookInstanceLifecycleConfigName(Aws::String&& value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName = std::move(value); }
    inline void SetNotebookInstanceLifecycleConfigName(const char* value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName.assign(value); }
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceLifecycleConfigName(const Aws::String& value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceLifecycleConfigName(Aws::String&& value) { SetNotebookInstanceLifecycleConfigName(std::move(value)); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceLifecycleConfigName(const char* value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the new notebook instance. </p>
     */
    inline const Aws::String& GetNotebookInstanceName() const{ return m_notebookInstanceName; }
    inline bool NotebookInstanceNameHasBeenSet() const { return m_notebookInstanceNameHasBeenSet; }
    inline void SetNotebookInstanceName(const Aws::String& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = value; }
    inline void SetNotebookInstanceName(Aws::String&& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = std::move(value); }
    inline void SetNotebookInstanceName(const char* value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName.assign(value); }
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceName(const Aws::String& value) { SetNotebookInstanceName(value); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceName(Aws::String&& value) { SetNotebookInstanceName(std::move(value)); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceName(const char* value) { SetNotebookInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the notebook instance. </p>
     */
    inline const Aws::String& GetNotebookInstanceStatus() const{ return m_notebookInstanceStatus; }
    inline bool NotebookInstanceStatusHasBeenSet() const { return m_notebookInstanceStatusHasBeenSet; }
    inline void SetNotebookInstanceStatus(const Aws::String& value) { m_notebookInstanceStatusHasBeenSet = true; m_notebookInstanceStatus = value; }
    inline void SetNotebookInstanceStatus(Aws::String&& value) { m_notebookInstanceStatusHasBeenSet = true; m_notebookInstanceStatus = std::move(value); }
    inline void SetNotebookInstanceStatus(const char* value) { m_notebookInstanceStatusHasBeenSet = true; m_notebookInstanceStatus.assign(value); }
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceStatus(const Aws::String& value) { SetNotebookInstanceStatus(value); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceStatus(Aws::String&& value) { SetNotebookInstanceStatus(std::move(value)); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceStatus(const char* value) { SetNotebookInstanceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The platform identifier of the notebook instance runtime environment. </p>
     */
    inline const Aws::String& GetPlatformIdentifier() const{ return m_platformIdentifier; }
    inline bool PlatformIdentifierHasBeenSet() const { return m_platformIdentifierHasBeenSet; }
    inline void SetPlatformIdentifier(const Aws::String& value) { m_platformIdentifierHasBeenSet = true; m_platformIdentifier = value; }
    inline void SetPlatformIdentifier(Aws::String&& value) { m_platformIdentifierHasBeenSet = true; m_platformIdentifier = std::move(value); }
    inline void SetPlatformIdentifier(const char* value) { m_platformIdentifierHasBeenSet = true; m_platformIdentifier.assign(value); }
    inline AwsSageMakerNotebookInstanceDetails& WithPlatformIdentifier(const Aws::String& value) { SetPlatformIdentifier(value); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithPlatformIdentifier(Aws::String&& value) { SetPlatformIdentifier(std::move(value)); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithPlatformIdentifier(const char* value) { SetPlatformIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline AwsSageMakerNotebookInstanceDetails& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Whether root access is enabled or disabled for users of the notebook
     * instance. </p>
     */
    inline const Aws::String& GetRootAccess() const{ return m_rootAccess; }
    inline bool RootAccessHasBeenSet() const { return m_rootAccessHasBeenSet; }
    inline void SetRootAccess(const Aws::String& value) { m_rootAccessHasBeenSet = true; m_rootAccess = value; }
    inline void SetRootAccess(Aws::String&& value) { m_rootAccessHasBeenSet = true; m_rootAccess = std::move(value); }
    inline void SetRootAccess(const char* value) { m_rootAccessHasBeenSet = true; m_rootAccess.assign(value); }
    inline AwsSageMakerNotebookInstanceDetails& WithRootAccess(const Aws::String& value) { SetRootAccess(value); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithRootAccess(Aws::String&& value) { SetRootAccess(std::move(value)); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithRootAccess(const char* value) { SetRootAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The VPC security group IDs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline AwsSageMakerNotebookInstanceDetails& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline AwsSageMakerNotebookInstanceDetails& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    inline AwsSageMakerNotebookInstanceDetails& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The ID of the VPC subnet to which you have a connectivity from your ML
     * compute instance. </p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline AwsSageMakerNotebookInstanceDetails& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URL that you use to connect to the Jupyter notebook that is running in
     * your notebook instance. </p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline AwsSageMakerNotebookInstanceDetails& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline AwsSageMakerNotebookInstanceDetails& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The size, in GB, of the ML storage volume to attach to the notebook
     * instance. </p>
     */
    inline int GetVolumeSizeInGB() const{ return m_volumeSizeInGB; }
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }
    inline AwsSageMakerNotebookInstanceDetails& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_acceleratorTypes;
    bool m_acceleratorTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalCodeRepositories;
    bool m_additionalCodeRepositoriesHasBeenSet = false;

    Aws::String m_defaultCodeRepository;
    bool m_defaultCodeRepositoryHasBeenSet = false;

    Aws::String m_directInternetAccess;
    bool m_directInternetAccessHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails m_instanceMetadataServiceConfiguration;
    bool m_instanceMetadataServiceConfigurationHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_notebookInstanceArn;
    bool m_notebookInstanceArnHasBeenSet = false;

    Aws::String m_notebookInstanceLifecycleConfigName;
    bool m_notebookInstanceLifecycleConfigNameHasBeenSet = false;

    Aws::String m_notebookInstanceName;
    bool m_notebookInstanceNameHasBeenSet = false;

    Aws::String m_notebookInstanceStatus;
    bool m_notebookInstanceStatusHasBeenSet = false;

    Aws::String m_platformIdentifier;
    bool m_platformIdentifierHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_rootAccess;
    bool m_rootAccessHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    int m_volumeSizeInGB;
    bool m_volumeSizeInGBHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
