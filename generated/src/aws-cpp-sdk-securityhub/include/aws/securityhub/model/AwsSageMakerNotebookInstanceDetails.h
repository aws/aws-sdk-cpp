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
    AWS_SECURITYHUB_API AwsSageMakerNotebookInstanceDetails() = default;
    AWS_SECURITYHUB_API AwsSageMakerNotebookInstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsSageMakerNotebookInstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A list of Amazon Elastic Inference instance types to associate with the
     * notebook instance. Currently, only one instance type can be associated with a
     * notebook instance. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAcceleratorTypes() const { return m_acceleratorTypes; }
    inline bool AcceleratorTypesHasBeenSet() const { return m_acceleratorTypesHasBeenSet; }
    template<typename AcceleratorTypesT = Aws::Vector<Aws::String>>
    void SetAcceleratorTypes(AcceleratorTypesT&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = std::forward<AcceleratorTypesT>(value); }
    template<typename AcceleratorTypesT = Aws::Vector<Aws::String>>
    AwsSageMakerNotebookInstanceDetails& WithAcceleratorTypes(AcceleratorTypesT&& value) { SetAcceleratorTypes(std::forward<AcceleratorTypesT>(value)); return *this;}
    template<typename AcceleratorTypesT = Aws::String>
    AwsSageMakerNotebookInstanceDetails& AddAcceleratorTypes(AcceleratorTypesT&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.emplace_back(std::forward<AcceleratorTypesT>(value)); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetAdditionalCodeRepositories() const { return m_additionalCodeRepositories; }
    inline bool AdditionalCodeRepositoriesHasBeenSet() const { return m_additionalCodeRepositoriesHasBeenSet; }
    template<typename AdditionalCodeRepositoriesT = Aws::Vector<Aws::String>>
    void SetAdditionalCodeRepositories(AdditionalCodeRepositoriesT&& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories = std::forward<AdditionalCodeRepositoriesT>(value); }
    template<typename AdditionalCodeRepositoriesT = Aws::Vector<Aws::String>>
    AwsSageMakerNotebookInstanceDetails& WithAdditionalCodeRepositories(AdditionalCodeRepositoriesT&& value) { SetAdditionalCodeRepositories(std::forward<AdditionalCodeRepositoriesT>(value)); return *this;}
    template<typename AdditionalCodeRepositoriesT = Aws::String>
    AwsSageMakerNotebookInstanceDetails& AddAdditionalCodeRepositories(AdditionalCodeRepositoriesT&& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.emplace_back(std::forward<AdditionalCodeRepositoriesT>(value)); return *this; }
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
    inline const Aws::String& GetDefaultCodeRepository() const { return m_defaultCodeRepository; }
    inline bool DefaultCodeRepositoryHasBeenSet() const { return m_defaultCodeRepositoryHasBeenSet; }
    template<typename DefaultCodeRepositoryT = Aws::String>
    void SetDefaultCodeRepository(DefaultCodeRepositoryT&& value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository = std::forward<DefaultCodeRepositoryT>(value); }
    template<typename DefaultCodeRepositoryT = Aws::String>
    AwsSageMakerNotebookInstanceDetails& WithDefaultCodeRepository(DefaultCodeRepositoryT&& value) { SetDefaultCodeRepository(std::forward<DefaultCodeRepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Sets whether SageMaker AI provides internet access to the notebook instance.
     * If you set this to <code>Disabled</code>, this notebook instance is able to
     * access resources only in your VPC, and is not be able to connect to SageMaker AI
     * training and endpoint services unless you configure a Network Address
     * Translation (NAT) Gateway in your VPC. </p>
     */
    inline const Aws::String& GetDirectInternetAccess() const { return m_directInternetAccess; }
    inline bool DirectInternetAccessHasBeenSet() const { return m_directInternetAccessHasBeenSet; }
    template<typename DirectInternetAccessT = Aws::String>
    void SetDirectInternetAccess(DirectInternetAccessT&& value) { m_directInternetAccessHasBeenSet = true; m_directInternetAccess = std::forward<DirectInternetAccessT>(value); }
    template<typename DirectInternetAccessT = Aws::String>
    AwsSageMakerNotebookInstanceDetails& WithDirectInternetAccess(DirectInternetAccessT&& value) { SetDirectInternetAccess(std::forward<DirectInternetAccessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If status of the instance is <code>Failed</code>, the reason it failed. </p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    AwsSageMakerNotebookInstanceDetails& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information on the IMDS configuration of the notebook instance. </p>
     */
    inline const AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails& GetInstanceMetadataServiceConfiguration() const { return m_instanceMetadataServiceConfiguration; }
    inline bool InstanceMetadataServiceConfigurationHasBeenSet() const { return m_instanceMetadataServiceConfigurationHasBeenSet; }
    template<typename InstanceMetadataServiceConfigurationT = AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails>
    void SetInstanceMetadataServiceConfiguration(InstanceMetadataServiceConfigurationT&& value) { m_instanceMetadataServiceConfigurationHasBeenSet = true; m_instanceMetadataServiceConfiguration = std::forward<InstanceMetadataServiceConfigurationT>(value); }
    template<typename InstanceMetadataServiceConfigurationT = AwsSageMakerNotebookInstanceMetadataServiceConfigurationDetails>
    AwsSageMakerNotebookInstanceDetails& WithInstanceMetadataServiceConfiguration(InstanceMetadataServiceConfigurationT&& value) { SetInstanceMetadataServiceConfiguration(std::forward<InstanceMetadataServiceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of machine learning (ML) compute instance to launch for the
     * notebook instance. </p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    AwsSageMakerNotebookInstanceDetails& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
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
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    AwsSageMakerNotebookInstanceDetails& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The network interface ID that SageMaker AI created when the instance was
     * created. </p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    AwsSageMakerNotebookInstanceDetails& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline const Aws::String& GetNotebookInstanceArn() const { return m_notebookInstanceArn; }
    inline bool NotebookInstanceArnHasBeenSet() const { return m_notebookInstanceArnHasBeenSet; }
    template<typename NotebookInstanceArnT = Aws::String>
    void SetNotebookInstanceArn(NotebookInstanceArnT&& value) { m_notebookInstanceArnHasBeenSet = true; m_notebookInstanceArn = std::forward<NotebookInstanceArnT>(value); }
    template<typename NotebookInstanceArnT = Aws::String>
    AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceArn(NotebookInstanceArnT&& value) { SetNotebookInstanceArn(std::forward<NotebookInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of a notebook instance lifecycle configuration. </p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigName() const { return m_notebookInstanceLifecycleConfigName; }
    inline bool NotebookInstanceLifecycleConfigNameHasBeenSet() const { return m_notebookInstanceLifecycleConfigNameHasBeenSet; }
    template<typename NotebookInstanceLifecycleConfigNameT = Aws::String>
    void SetNotebookInstanceLifecycleConfigName(NotebookInstanceLifecycleConfigNameT&& value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName = std::forward<NotebookInstanceLifecycleConfigNameT>(value); }
    template<typename NotebookInstanceLifecycleConfigNameT = Aws::String>
    AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceLifecycleConfigName(NotebookInstanceLifecycleConfigNameT&& value) { SetNotebookInstanceLifecycleConfigName(std::forward<NotebookInstanceLifecycleConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the new notebook instance. </p>
     */
    inline const Aws::String& GetNotebookInstanceName() const { return m_notebookInstanceName; }
    inline bool NotebookInstanceNameHasBeenSet() const { return m_notebookInstanceNameHasBeenSet; }
    template<typename NotebookInstanceNameT = Aws::String>
    void SetNotebookInstanceName(NotebookInstanceNameT&& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = std::forward<NotebookInstanceNameT>(value); }
    template<typename NotebookInstanceNameT = Aws::String>
    AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceName(NotebookInstanceNameT&& value) { SetNotebookInstanceName(std::forward<NotebookInstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the notebook instance. </p>
     */
    inline const Aws::String& GetNotebookInstanceStatus() const { return m_notebookInstanceStatus; }
    inline bool NotebookInstanceStatusHasBeenSet() const { return m_notebookInstanceStatusHasBeenSet; }
    template<typename NotebookInstanceStatusT = Aws::String>
    void SetNotebookInstanceStatus(NotebookInstanceStatusT&& value) { m_notebookInstanceStatusHasBeenSet = true; m_notebookInstanceStatus = std::forward<NotebookInstanceStatusT>(value); }
    template<typename NotebookInstanceStatusT = Aws::String>
    AwsSageMakerNotebookInstanceDetails& WithNotebookInstanceStatus(NotebookInstanceStatusT&& value) { SetNotebookInstanceStatus(std::forward<NotebookInstanceStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The platform identifier of the notebook instance runtime environment. </p>
     */
    inline const Aws::String& GetPlatformIdentifier() const { return m_platformIdentifier; }
    inline bool PlatformIdentifierHasBeenSet() const { return m_platformIdentifierHasBeenSet; }
    template<typename PlatformIdentifierT = Aws::String>
    void SetPlatformIdentifier(PlatformIdentifierT&& value) { m_platformIdentifierHasBeenSet = true; m_platformIdentifier = std::forward<PlatformIdentifierT>(value); }
    template<typename PlatformIdentifierT = Aws::String>
    AwsSageMakerNotebookInstanceDetails& WithPlatformIdentifier(PlatformIdentifierT&& value) { SetPlatformIdentifier(std::forward<PlatformIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    AwsSageMakerNotebookInstanceDetails& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Whether root access is enabled or disabled for users of the notebook
     * instance. </p>
     */
    inline const Aws::String& GetRootAccess() const { return m_rootAccess; }
    inline bool RootAccessHasBeenSet() const { return m_rootAccessHasBeenSet; }
    template<typename RootAccessT = Aws::String>
    void SetRootAccess(RootAccessT&& value) { m_rootAccessHasBeenSet = true; m_rootAccess = std::forward<RootAccessT>(value); }
    template<typename RootAccessT = Aws::String>
    AwsSageMakerNotebookInstanceDetails& WithRootAccess(RootAccessT&& value) { SetRootAccess(std::forward<RootAccessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The VPC security group IDs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    AwsSageMakerNotebookInstanceDetails& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    AwsSageMakerNotebookInstanceDetails& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The ID of the VPC subnet to which you have a connectivity from your ML
     * compute instance. </p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    AwsSageMakerNotebookInstanceDetails& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URL that you use to connect to the Jupyter notebook that is running in
     * your notebook instance. </p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    AwsSageMakerNotebookInstanceDetails& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The size, in GB, of the ML storage volume to attach to the notebook
     * instance. </p>
     */
    inline int GetVolumeSizeInGB() const { return m_volumeSizeInGB; }
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

    int m_volumeSizeInGB{0};
    bool m_volumeSizeInGBHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
