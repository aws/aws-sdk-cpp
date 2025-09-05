/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/NotebookInstanceStatus.h>
#include <aws/sagemaker/model/InstanceType.h>
#include <aws/sagemaker/model/IPAddressType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/DirectInternetAccess.h>
#include <aws/sagemaker/model/RootAccess.h>
#include <aws/sagemaker/model/InstanceMetadataServiceConfiguration.h>
#include <aws/sagemaker/model/NotebookInstanceAcceleratorType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeNotebookInstanceResult
  {
  public:
    AWS_SAGEMAKER_API DescribeNotebookInstanceResult() = default;
    AWS_SAGEMAKER_API DescribeNotebookInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeNotebookInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance.</p>
     */
    inline const Aws::String& GetNotebookInstanceArn() const { return m_notebookInstanceArn; }
    template<typename NotebookInstanceArnT = Aws::String>
    void SetNotebookInstanceArn(NotebookInstanceArnT&& value) { m_notebookInstanceArnHasBeenSet = true; m_notebookInstanceArn = std::forward<NotebookInstanceArnT>(value); }
    template<typename NotebookInstanceArnT = Aws::String>
    DescribeNotebookInstanceResult& WithNotebookInstanceArn(NotebookInstanceArnT&& value) { SetNotebookInstanceArn(std::forward<NotebookInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SageMaker AI notebook instance. </p>
     */
    inline const Aws::String& GetNotebookInstanceName() const { return m_notebookInstanceName; }
    template<typename NotebookInstanceNameT = Aws::String>
    void SetNotebookInstanceName(NotebookInstanceNameT&& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = std::forward<NotebookInstanceNameT>(value); }
    template<typename NotebookInstanceNameT = Aws::String>
    DescribeNotebookInstanceResult& WithNotebookInstanceName(NotebookInstanceNameT&& value) { SetNotebookInstanceName(std::forward<NotebookInstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the notebook instance.</p>
     */
    inline NotebookInstanceStatus GetNotebookInstanceStatus() const { return m_notebookInstanceStatus; }
    inline void SetNotebookInstanceStatus(NotebookInstanceStatus value) { m_notebookInstanceStatusHasBeenSet = true; m_notebookInstanceStatus = value; }
    inline DescribeNotebookInstanceResult& WithNotebookInstanceStatus(NotebookInstanceStatus value) { SetNotebookInstanceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If status is <code>Failed</code>, the reason it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeNotebookInstanceResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that you use to connect to the Jupyter notebook that is running in
     * your notebook instance. </p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    DescribeNotebookInstanceResult& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of ML compute instance running on the notebook instance.</p>
     */
    inline InstanceType GetInstanceType() const { return m_instanceType; }
    inline void SetInstanceType(InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline DescribeNotebookInstanceResult& WithInstanceType(InstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type configured for the notebook instance. Returns
     * <code>ipv4</code> for IPv4-only connectivity or <code>dualstack</code> for both
     * IPv4 and IPv6 connectivity.</p>
     */
    inline IPAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline void SetIpAddressType(IPAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline DescribeNotebookInstanceResult& WithIpAddressType(IPAddressType value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    DescribeNotebookInstanceResult& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the VPC security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    DescribeNotebookInstanceResult& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    DescribeNotebookInstanceResult& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeNotebookInstanceResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key ID SageMaker AI uses to encrypt data when
     * storing it on the ML storage volume attached to the instance. </p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    DescribeNotebookInstanceResult& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interface IDs that SageMaker AI created at the time of creating
     * the instance. </p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    DescribeNotebookInstanceResult& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp. Use this parameter to retrieve the time when the notebook
     * instance was last modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeNotebookInstanceResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp. Use this parameter to return the time when the notebook instance
     * was created</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeNotebookInstanceResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the name of a notebook instance lifecycle configuration.</p> <p>For
     * information about notebook instance lifestyle configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a> </p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigName() const { return m_notebookInstanceLifecycleConfigName; }
    template<typename NotebookInstanceLifecycleConfigNameT = Aws::String>
    void SetNotebookInstanceLifecycleConfigName(NotebookInstanceLifecycleConfigNameT&& value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName = std::forward<NotebookInstanceLifecycleConfigNameT>(value); }
    template<typename NotebookInstanceLifecycleConfigNameT = Aws::String>
    DescribeNotebookInstanceResult& WithNotebookInstanceLifecycleConfigName(NotebookInstanceLifecycleConfigNameT&& value) { SetNotebookInstanceLifecycleConfigName(std::forward<NotebookInstanceLifecycleConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether SageMaker AI provides internet access to the notebook
     * instance. If this value is set to <i>Disabled</i>, the notebook instance does
     * not have internet access, and cannot connect to SageMaker AI training and
     * endpoint services.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/appendix-additional-considerations.html#appendix-notebook-and-internet-access">Notebook
     * Instances Are Internet-Enabled by Default</a>.</p>
     */
    inline DirectInternetAccess GetDirectInternetAccess() const { return m_directInternetAccess; }
    inline void SetDirectInternetAccess(DirectInternetAccess value) { m_directInternetAccessHasBeenSet = true; m_directInternetAccess = value; }
    inline DescribeNotebookInstanceResult& WithDirectInternetAccess(DirectInternetAccess value) { SetDirectInternetAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in GB, of the ML storage volume attached to the notebook
     * instance.</p>
     */
    inline int GetVolumeSizeInGB() const { return m_volumeSizeInGB; }
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }
    inline DescribeNotebookInstanceResult& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is no longer supported. Elastic Inference (EI) is no longer
     * available.</p> <p>This parameter was used to specify a list of the EI instance
     * types associated with this notebook instance.</p>
     */
    inline const Aws::Vector<NotebookInstanceAcceleratorType>& GetAcceleratorTypes() const { return m_acceleratorTypes; }
    template<typename AcceleratorTypesT = Aws::Vector<NotebookInstanceAcceleratorType>>
    void SetAcceleratorTypes(AcceleratorTypesT&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = std::forward<AcceleratorTypesT>(value); }
    template<typename AcceleratorTypesT = Aws::Vector<NotebookInstanceAcceleratorType>>
    DescribeNotebookInstanceResult& WithAcceleratorTypes(AcceleratorTypesT&& value) { SetAcceleratorTypes(std::forward<AcceleratorTypesT>(value)); return *this;}
    inline DescribeNotebookInstanceResult& AddAcceleratorTypes(NotebookInstanceAcceleratorType value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Git repository associated with the notebook instance as its default code
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
    template<typename DefaultCodeRepositoryT = Aws::String>
    void SetDefaultCodeRepository(DefaultCodeRepositoryT&& value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository = std::forward<DefaultCodeRepositoryT>(value); }
    template<typename DefaultCodeRepositoryT = Aws::String>
    DescribeNotebookInstanceResult& WithDefaultCodeRepository(DefaultCodeRepositoryT&& value) { SetDefaultCodeRepository(std::forward<DefaultCodeRepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of up to three Git repositories associated with the notebook
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
    template<typename AdditionalCodeRepositoriesT = Aws::Vector<Aws::String>>
    void SetAdditionalCodeRepositories(AdditionalCodeRepositoriesT&& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories = std::forward<AdditionalCodeRepositoriesT>(value); }
    template<typename AdditionalCodeRepositoriesT = Aws::Vector<Aws::String>>
    DescribeNotebookInstanceResult& WithAdditionalCodeRepositories(AdditionalCodeRepositoriesT&& value) { SetAdditionalCodeRepositories(std::forward<AdditionalCodeRepositoriesT>(value)); return *this;}
    template<typename AdditionalCodeRepositoriesT = Aws::String>
    DescribeNotebookInstanceResult& AddAdditionalCodeRepositories(AdditionalCodeRepositoriesT&& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.emplace_back(std::forward<AdditionalCodeRepositoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether root access is enabled or disabled for users of the notebook
     * instance.</p>  <p>Lifecycle configurations need root access to be able to
     * set up a notebook instance. Because of this, lifecycle configurations associated
     * with a notebook instance always run with root access even if you disable root
     * access for users.</p> 
     */
    inline RootAccess GetRootAccess() const { return m_rootAccess; }
    inline void SetRootAccess(RootAccess value) { m_rootAccessHasBeenSet = true; m_rootAccess = value; }
    inline DescribeNotebookInstanceResult& WithRootAccess(RootAccess value) { SetRootAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform identifier of the notebook instance runtime environment.</p>
     */
    inline const Aws::String& GetPlatformIdentifier() const { return m_platformIdentifier; }
    template<typename PlatformIdentifierT = Aws::String>
    void SetPlatformIdentifier(PlatformIdentifierT&& value) { m_platformIdentifierHasBeenSet = true; m_platformIdentifier = std::forward<PlatformIdentifierT>(value); }
    template<typename PlatformIdentifierT = Aws::String>
    DescribeNotebookInstanceResult& WithPlatformIdentifier(PlatformIdentifierT&& value) { SetPlatformIdentifier(std::forward<PlatformIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information on the IMDS configuration of the notebook instance</p>
     */
    inline const InstanceMetadataServiceConfiguration& GetInstanceMetadataServiceConfiguration() const { return m_instanceMetadataServiceConfiguration; }
    template<typename InstanceMetadataServiceConfigurationT = InstanceMetadataServiceConfiguration>
    void SetInstanceMetadataServiceConfiguration(InstanceMetadataServiceConfigurationT&& value) { m_instanceMetadataServiceConfigurationHasBeenSet = true; m_instanceMetadataServiceConfiguration = std::forward<InstanceMetadataServiceConfigurationT>(value); }
    template<typename InstanceMetadataServiceConfigurationT = InstanceMetadataServiceConfiguration>
    DescribeNotebookInstanceResult& WithInstanceMetadataServiceConfiguration(InstanceMetadataServiceConfigurationT&& value) { SetInstanceMetadataServiceConfiguration(std::forward<InstanceMetadataServiceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeNotebookInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_notebookInstanceArn;
    bool m_notebookInstanceArnHasBeenSet = false;

    Aws::String m_notebookInstanceName;
    bool m_notebookInstanceNameHasBeenSet = false;

    NotebookInstanceStatus m_notebookInstanceStatus{NotebookInstanceStatus::NOT_SET};
    bool m_notebookInstanceStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    InstanceType m_instanceType{InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    IPAddressType m_ipAddressType{IPAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_notebookInstanceLifecycleConfigName;
    bool m_notebookInstanceLifecycleConfigNameHasBeenSet = false;

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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
