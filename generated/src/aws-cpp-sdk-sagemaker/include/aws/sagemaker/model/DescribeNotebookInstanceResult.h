/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/NotebookInstanceStatus.h>
#include <aws/sagemaker/model/InstanceType.h>
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
    AWS_SAGEMAKER_API DescribeNotebookInstanceResult();
    AWS_SAGEMAKER_API DescribeNotebookInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeNotebookInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance.</p>
     */
    inline const Aws::String& GetNotebookInstanceArn() const{ return m_notebookInstanceArn; }
    inline void SetNotebookInstanceArn(const Aws::String& value) { m_notebookInstanceArn = value; }
    inline void SetNotebookInstanceArn(Aws::String&& value) { m_notebookInstanceArn = std::move(value); }
    inline void SetNotebookInstanceArn(const char* value) { m_notebookInstanceArn.assign(value); }
    inline DescribeNotebookInstanceResult& WithNotebookInstanceArn(const Aws::String& value) { SetNotebookInstanceArn(value); return *this;}
    inline DescribeNotebookInstanceResult& WithNotebookInstanceArn(Aws::String&& value) { SetNotebookInstanceArn(std::move(value)); return *this;}
    inline DescribeNotebookInstanceResult& WithNotebookInstanceArn(const char* value) { SetNotebookInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SageMaker AI notebook instance. </p>
     */
    inline const Aws::String& GetNotebookInstanceName() const{ return m_notebookInstanceName; }
    inline void SetNotebookInstanceName(const Aws::String& value) { m_notebookInstanceName = value; }
    inline void SetNotebookInstanceName(Aws::String&& value) { m_notebookInstanceName = std::move(value); }
    inline void SetNotebookInstanceName(const char* value) { m_notebookInstanceName.assign(value); }
    inline DescribeNotebookInstanceResult& WithNotebookInstanceName(const Aws::String& value) { SetNotebookInstanceName(value); return *this;}
    inline DescribeNotebookInstanceResult& WithNotebookInstanceName(Aws::String&& value) { SetNotebookInstanceName(std::move(value)); return *this;}
    inline DescribeNotebookInstanceResult& WithNotebookInstanceName(const char* value) { SetNotebookInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the notebook instance.</p>
     */
    inline const NotebookInstanceStatus& GetNotebookInstanceStatus() const{ return m_notebookInstanceStatus; }
    inline void SetNotebookInstanceStatus(const NotebookInstanceStatus& value) { m_notebookInstanceStatus = value; }
    inline void SetNotebookInstanceStatus(NotebookInstanceStatus&& value) { m_notebookInstanceStatus = std::move(value); }
    inline DescribeNotebookInstanceResult& WithNotebookInstanceStatus(const NotebookInstanceStatus& value) { SetNotebookInstanceStatus(value); return *this;}
    inline DescribeNotebookInstanceResult& WithNotebookInstanceStatus(NotebookInstanceStatus&& value) { SetNotebookInstanceStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If status is <code>Failed</code>, the reason it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeNotebookInstanceResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeNotebookInstanceResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeNotebookInstanceResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that you use to connect to the Jupyter notebook that is running in
     * your notebook instance. </p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline void SetUrl(const Aws::String& value) { m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_url.assign(value); }
    inline DescribeNotebookInstanceResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline DescribeNotebookInstanceResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline DescribeNotebookInstanceResult& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of ML compute instance running on the notebook instance.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }
    inline void SetInstanceType(const InstanceType& value) { m_instanceType = value; }
    inline void SetInstanceType(InstanceType&& value) { m_instanceType = std::move(value); }
    inline DescribeNotebookInstanceResult& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}
    inline DescribeNotebookInstanceResult& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetId.assign(value); }
    inline DescribeNotebookInstanceResult& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline DescribeNotebookInstanceResult& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline DescribeNotebookInstanceResult& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the VPC security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroups = std::move(value); }
    inline DescribeNotebookInstanceResult& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline DescribeNotebookInstanceResult& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline DescribeNotebookInstanceResult& AddSecurityGroups(const Aws::String& value) { m_securityGroups.push_back(value); return *this; }
    inline DescribeNotebookInstanceResult& AddSecurityGroups(Aws::String&& value) { m_securityGroups.push_back(std::move(value)); return *this; }
    inline DescribeNotebookInstanceResult& AddSecurityGroups(const char* value) { m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the instance.
     * </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeNotebookInstanceResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeNotebookInstanceResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeNotebookInstanceResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key ID SageMaker AI uses to encrypt data when
     * storing it on the ML storage volume attached to the instance. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }
    inline DescribeNotebookInstanceResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline DescribeNotebookInstanceResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline DescribeNotebookInstanceResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interface IDs that SageMaker AI created at the time of creating
     * the instance. </p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceId = value; }
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceId = std::move(value); }
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceId.assign(value); }
    inline DescribeNotebookInstanceResult& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}
    inline DescribeNotebookInstanceResult& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}
    inline DescribeNotebookInstanceResult& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp. Use this parameter to retrieve the time when the notebook
     * instance was last modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeNotebookInstanceResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeNotebookInstanceResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp. Use this parameter to return the time when the notebook instance
     * was created</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeNotebookInstanceResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeNotebookInstanceResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the name of a notebook instance lifecycle configuration.</p> <p>For
     * information about notebook instance lifestyle configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a> </p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigName() const{ return m_notebookInstanceLifecycleConfigName; }
    inline void SetNotebookInstanceLifecycleConfigName(const Aws::String& value) { m_notebookInstanceLifecycleConfigName = value; }
    inline void SetNotebookInstanceLifecycleConfigName(Aws::String&& value) { m_notebookInstanceLifecycleConfigName = std::move(value); }
    inline void SetNotebookInstanceLifecycleConfigName(const char* value) { m_notebookInstanceLifecycleConfigName.assign(value); }
    inline DescribeNotebookInstanceResult& WithNotebookInstanceLifecycleConfigName(const Aws::String& value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}
    inline DescribeNotebookInstanceResult& WithNotebookInstanceLifecycleConfigName(Aws::String&& value) { SetNotebookInstanceLifecycleConfigName(std::move(value)); return *this;}
    inline DescribeNotebookInstanceResult& WithNotebookInstanceLifecycleConfigName(const char* value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}
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
    inline const DirectInternetAccess& GetDirectInternetAccess() const{ return m_directInternetAccess; }
    inline void SetDirectInternetAccess(const DirectInternetAccess& value) { m_directInternetAccess = value; }
    inline void SetDirectInternetAccess(DirectInternetAccess&& value) { m_directInternetAccess = std::move(value); }
    inline DescribeNotebookInstanceResult& WithDirectInternetAccess(const DirectInternetAccess& value) { SetDirectInternetAccess(value); return *this;}
    inline DescribeNotebookInstanceResult& WithDirectInternetAccess(DirectInternetAccess&& value) { SetDirectInternetAccess(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in GB, of the ML storage volume attached to the notebook
     * instance.</p>
     */
    inline int GetVolumeSizeInGB() const{ return m_volumeSizeInGB; }
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGB = value; }
    inline DescribeNotebookInstanceResult& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is no longer supported. Elastic Inference (EI) is no longer
     * available.</p> <p>This parameter was used to specify a list of the EI instance
     * types associated with this notebook instance.</p>
     */
    inline const Aws::Vector<NotebookInstanceAcceleratorType>& GetAcceleratorTypes() const{ return m_acceleratorTypes; }
    inline void SetAcceleratorTypes(const Aws::Vector<NotebookInstanceAcceleratorType>& value) { m_acceleratorTypes = value; }
    inline void SetAcceleratorTypes(Aws::Vector<NotebookInstanceAcceleratorType>&& value) { m_acceleratorTypes = std::move(value); }
    inline DescribeNotebookInstanceResult& WithAcceleratorTypes(const Aws::Vector<NotebookInstanceAcceleratorType>& value) { SetAcceleratorTypes(value); return *this;}
    inline DescribeNotebookInstanceResult& WithAcceleratorTypes(Aws::Vector<NotebookInstanceAcceleratorType>&& value) { SetAcceleratorTypes(std::move(value)); return *this;}
    inline DescribeNotebookInstanceResult& AddAcceleratorTypes(const NotebookInstanceAcceleratorType& value) { m_acceleratorTypes.push_back(value); return *this; }
    inline DescribeNotebookInstanceResult& AddAcceleratorTypes(NotebookInstanceAcceleratorType&& value) { m_acceleratorTypes.push_back(std::move(value)); return *this; }
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
    inline const Aws::String& GetDefaultCodeRepository() const{ return m_defaultCodeRepository; }
    inline void SetDefaultCodeRepository(const Aws::String& value) { m_defaultCodeRepository = value; }
    inline void SetDefaultCodeRepository(Aws::String&& value) { m_defaultCodeRepository = std::move(value); }
    inline void SetDefaultCodeRepository(const char* value) { m_defaultCodeRepository.assign(value); }
    inline DescribeNotebookInstanceResult& WithDefaultCodeRepository(const Aws::String& value) { SetDefaultCodeRepository(value); return *this;}
    inline DescribeNotebookInstanceResult& WithDefaultCodeRepository(Aws::String&& value) { SetDefaultCodeRepository(std::move(value)); return *this;}
    inline DescribeNotebookInstanceResult& WithDefaultCodeRepository(const char* value) { SetDefaultCodeRepository(value); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetAdditionalCodeRepositories() const{ return m_additionalCodeRepositories; }
    inline void SetAdditionalCodeRepositories(const Aws::Vector<Aws::String>& value) { m_additionalCodeRepositories = value; }
    inline void SetAdditionalCodeRepositories(Aws::Vector<Aws::String>&& value) { m_additionalCodeRepositories = std::move(value); }
    inline DescribeNotebookInstanceResult& WithAdditionalCodeRepositories(const Aws::Vector<Aws::String>& value) { SetAdditionalCodeRepositories(value); return *this;}
    inline DescribeNotebookInstanceResult& WithAdditionalCodeRepositories(Aws::Vector<Aws::String>&& value) { SetAdditionalCodeRepositories(std::move(value)); return *this;}
    inline DescribeNotebookInstanceResult& AddAdditionalCodeRepositories(const Aws::String& value) { m_additionalCodeRepositories.push_back(value); return *this; }
    inline DescribeNotebookInstanceResult& AddAdditionalCodeRepositories(Aws::String&& value) { m_additionalCodeRepositories.push_back(std::move(value)); return *this; }
    inline DescribeNotebookInstanceResult& AddAdditionalCodeRepositories(const char* value) { m_additionalCodeRepositories.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether root access is enabled or disabled for users of the notebook
     * instance.</p>  <p>Lifecycle configurations need root access to be able to
     * set up a notebook instance. Because of this, lifecycle configurations associated
     * with a notebook instance always run with root access even if you disable root
     * access for users.</p> 
     */
    inline const RootAccess& GetRootAccess() const{ return m_rootAccess; }
    inline void SetRootAccess(const RootAccess& value) { m_rootAccess = value; }
    inline void SetRootAccess(RootAccess&& value) { m_rootAccess = std::move(value); }
    inline DescribeNotebookInstanceResult& WithRootAccess(const RootAccess& value) { SetRootAccess(value); return *this;}
    inline DescribeNotebookInstanceResult& WithRootAccess(RootAccess&& value) { SetRootAccess(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform identifier of the notebook instance runtime environment.</p>
     */
    inline const Aws::String& GetPlatformIdentifier() const{ return m_platformIdentifier; }
    inline void SetPlatformIdentifier(const Aws::String& value) { m_platformIdentifier = value; }
    inline void SetPlatformIdentifier(Aws::String&& value) { m_platformIdentifier = std::move(value); }
    inline void SetPlatformIdentifier(const char* value) { m_platformIdentifier.assign(value); }
    inline DescribeNotebookInstanceResult& WithPlatformIdentifier(const Aws::String& value) { SetPlatformIdentifier(value); return *this;}
    inline DescribeNotebookInstanceResult& WithPlatformIdentifier(Aws::String&& value) { SetPlatformIdentifier(std::move(value)); return *this;}
    inline DescribeNotebookInstanceResult& WithPlatformIdentifier(const char* value) { SetPlatformIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information on the IMDS configuration of the notebook instance</p>
     */
    inline const InstanceMetadataServiceConfiguration& GetInstanceMetadataServiceConfiguration() const{ return m_instanceMetadataServiceConfiguration; }
    inline void SetInstanceMetadataServiceConfiguration(const InstanceMetadataServiceConfiguration& value) { m_instanceMetadataServiceConfiguration = value; }
    inline void SetInstanceMetadataServiceConfiguration(InstanceMetadataServiceConfiguration&& value) { m_instanceMetadataServiceConfiguration = std::move(value); }
    inline DescribeNotebookInstanceResult& WithInstanceMetadataServiceConfiguration(const InstanceMetadataServiceConfiguration& value) { SetInstanceMetadataServiceConfiguration(value); return *this;}
    inline DescribeNotebookInstanceResult& WithInstanceMetadataServiceConfiguration(InstanceMetadataServiceConfiguration&& value) { SetInstanceMetadataServiceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeNotebookInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeNotebookInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeNotebookInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_notebookInstanceArn;

    Aws::String m_notebookInstanceName;

    NotebookInstanceStatus m_notebookInstanceStatus;

    Aws::String m_failureReason;

    Aws::String m_url;

    InstanceType m_instanceType;

    Aws::String m_subnetId;

    Aws::Vector<Aws::String> m_securityGroups;

    Aws::String m_roleArn;

    Aws::String m_kmsKeyId;

    Aws::String m_networkInterfaceId;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_notebookInstanceLifecycleConfigName;

    DirectInternetAccess m_directInternetAccess;

    int m_volumeSizeInGB;

    Aws::Vector<NotebookInstanceAcceleratorType> m_acceleratorTypes;

    Aws::String m_defaultCodeRepository;

    Aws::Vector<Aws::String> m_additionalCodeRepositories;

    RootAccess m_rootAccess;

    Aws::String m_platformIdentifier;

    InstanceMetadataServiceConfiguration m_instanceMetadataServiceConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
