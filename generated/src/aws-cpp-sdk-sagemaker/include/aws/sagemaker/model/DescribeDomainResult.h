/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DomainStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/AuthMode.h>
#include <aws/sagemaker/model/UserSettings.h>
#include <aws/sagemaker/model/DomainSettings.h>
#include <aws/sagemaker/model/AppNetworkAccessType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AppSecurityGroupManagement.h>
#include <aws/sagemaker/model/TagPropagation.h>
#include <aws/sagemaker/model/DefaultSpaceSettings.h>
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
  class DescribeDomainResult
  {
  public:
    AWS_SAGEMAKER_API DescribeDomainResult();
    AWS_SAGEMAKER_API DescribeDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The domain's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetDomainArn() const{ return m_domainArn; }
    inline void SetDomainArn(const Aws::String& value) { m_domainArn = value; }
    inline void SetDomainArn(Aws::String&& value) { m_domainArn = std::move(value); }
    inline void SetDomainArn(const char* value) { m_domainArn.assign(value); }
    inline DescribeDomainResult& WithDomainArn(const Aws::String& value) { SetDomainArn(value); return *this;}
    inline DescribeDomainResult& WithDomainArn(Aws::String&& value) { SetDomainArn(std::move(value)); return *this;}
    inline DescribeDomainResult& WithDomainArn(const char* value) { SetDomainArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain ID.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline DescribeDomainResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline DescribeDomainResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline DescribeDomainResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }
    inline DescribeDomainResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline DescribeDomainResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline DescribeDomainResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Elastic File System managed by this Domain.</p>
     */
    inline const Aws::String& GetHomeEfsFileSystemId() const{ return m_homeEfsFileSystemId; }
    inline void SetHomeEfsFileSystemId(const Aws::String& value) { m_homeEfsFileSystemId = value; }
    inline void SetHomeEfsFileSystemId(Aws::String&& value) { m_homeEfsFileSystemId = std::move(value); }
    inline void SetHomeEfsFileSystemId(const char* value) { m_homeEfsFileSystemId.assign(value); }
    inline DescribeDomainResult& WithHomeEfsFileSystemId(const Aws::String& value) { SetHomeEfsFileSystemId(value); return *this;}
    inline DescribeDomainResult& WithHomeEfsFileSystemId(Aws::String&& value) { SetHomeEfsFileSystemId(std::move(value)); return *this;}
    inline DescribeDomainResult& WithHomeEfsFileSystemId(const char* value) { SetHomeEfsFileSystemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM Identity Center managed application instance ID.</p>
     */
    inline const Aws::String& GetSingleSignOnManagedApplicationInstanceId() const{ return m_singleSignOnManagedApplicationInstanceId; }
    inline void SetSingleSignOnManagedApplicationInstanceId(const Aws::String& value) { m_singleSignOnManagedApplicationInstanceId = value; }
    inline void SetSingleSignOnManagedApplicationInstanceId(Aws::String&& value) { m_singleSignOnManagedApplicationInstanceId = std::move(value); }
    inline void SetSingleSignOnManagedApplicationInstanceId(const char* value) { m_singleSignOnManagedApplicationInstanceId.assign(value); }
    inline DescribeDomainResult& WithSingleSignOnManagedApplicationInstanceId(const Aws::String& value) { SetSingleSignOnManagedApplicationInstanceId(value); return *this;}
    inline DescribeDomainResult& WithSingleSignOnManagedApplicationInstanceId(Aws::String&& value) { SetSingleSignOnManagedApplicationInstanceId(std::move(value)); return *this;}
    inline DescribeDomainResult& WithSingleSignOnManagedApplicationInstanceId(const char* value) { SetSingleSignOnManagedApplicationInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the application managed by SageMaker AI in IAM Identity Center.
     * This value is only returned for domains created after October 1, 2023.</p>
     */
    inline const Aws::String& GetSingleSignOnApplicationArn() const{ return m_singleSignOnApplicationArn; }
    inline void SetSingleSignOnApplicationArn(const Aws::String& value) { m_singleSignOnApplicationArn = value; }
    inline void SetSingleSignOnApplicationArn(Aws::String&& value) { m_singleSignOnApplicationArn = std::move(value); }
    inline void SetSingleSignOnApplicationArn(const char* value) { m_singleSignOnApplicationArn.assign(value); }
    inline DescribeDomainResult& WithSingleSignOnApplicationArn(const Aws::String& value) { SetSingleSignOnApplicationArn(value); return *this;}
    inline DescribeDomainResult& WithSingleSignOnApplicationArn(Aws::String&& value) { SetSingleSignOnApplicationArn(std::move(value)); return *this;}
    inline DescribeDomainResult& WithSingleSignOnApplicationArn(const char* value) { SetSingleSignOnApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline const DomainStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const DomainStatus& value) { m_status = value; }
    inline void SetStatus(DomainStatus&& value) { m_status = std::move(value); }
    inline DescribeDomainResult& WithStatus(const DomainStatus& value) { SetStatus(value); return *this;}
    inline DescribeDomainResult& WithStatus(DomainStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeDomainResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeDomainResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeDomainResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeDomainResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure reason.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeDomainResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeDomainResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeDomainResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the security group that authorizes traffic between the
     * <code>RSessionGateway</code> apps and the <code>RStudioServerPro</code> app.</p>
     */
    inline const Aws::String& GetSecurityGroupIdForDomainBoundary() const{ return m_securityGroupIdForDomainBoundary; }
    inline void SetSecurityGroupIdForDomainBoundary(const Aws::String& value) { m_securityGroupIdForDomainBoundary = value; }
    inline void SetSecurityGroupIdForDomainBoundary(Aws::String&& value) { m_securityGroupIdForDomainBoundary = std::move(value); }
    inline void SetSecurityGroupIdForDomainBoundary(const char* value) { m_securityGroupIdForDomainBoundary.assign(value); }
    inline DescribeDomainResult& WithSecurityGroupIdForDomainBoundary(const Aws::String& value) { SetSecurityGroupIdForDomainBoundary(value); return *this;}
    inline DescribeDomainResult& WithSecurityGroupIdForDomainBoundary(Aws::String&& value) { SetSecurityGroupIdForDomainBoundary(std::move(value)); return *this;}
    inline DescribeDomainResult& WithSecurityGroupIdForDomainBoundary(const char* value) { SetSecurityGroupIdForDomainBoundary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain's authentication mode.</p>
     */
    inline const AuthMode& GetAuthMode() const{ return m_authMode; }
    inline void SetAuthMode(const AuthMode& value) { m_authMode = value; }
    inline void SetAuthMode(AuthMode&& value) { m_authMode = std::move(value); }
    inline DescribeDomainResult& WithAuthMode(const AuthMode& value) { SetAuthMode(value); return *this;}
    inline DescribeDomainResult& WithAuthMode(AuthMode&& value) { SetAuthMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings which are applied to UserProfiles in this domain if settings are not
     * explicitly specified in a given UserProfile. </p>
     */
    inline const UserSettings& GetDefaultUserSettings() const{ return m_defaultUserSettings; }
    inline void SetDefaultUserSettings(const UserSettings& value) { m_defaultUserSettings = value; }
    inline void SetDefaultUserSettings(UserSettings&& value) { m_defaultUserSettings = std::move(value); }
    inline DescribeDomainResult& WithDefaultUserSettings(const UserSettings& value) { SetDefaultUserSettings(value); return *this;}
    inline DescribeDomainResult& WithDefaultUserSettings(UserSettings&& value) { SetDefaultUserSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of <code>Domain</code> settings.</p>
     */
    inline const DomainSettings& GetDomainSettings() const{ return m_domainSettings; }
    inline void SetDomainSettings(const DomainSettings& value) { m_domainSettings = value; }
    inline void SetDomainSettings(DomainSettings&& value) { m_domainSettings = std::move(value); }
    inline DescribeDomainResult& WithDomainSettings(const DomainSettings& value) { SetDomainSettings(value); return *this;}
    inline DescribeDomainResult& WithDomainSettings(DomainSettings&& value) { SetDomainSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the VPC used for non-EFS traffic. The default value is
     * <code>PublicInternetOnly</code>.</p> <ul> <li> <p>
     * <code>PublicInternetOnly</code> - Non-EFS traffic is through a VPC managed by
     * Amazon SageMaker AI, which allows direct internet access</p> </li> <li> <p>
     * <code>VpcOnly</code> - All traffic is through the specified VPC and subnets</p>
     * </li> </ul>
     */
    inline const AppNetworkAccessType& GetAppNetworkAccessType() const{ return m_appNetworkAccessType; }
    inline void SetAppNetworkAccessType(const AppNetworkAccessType& value) { m_appNetworkAccessType = value; }
    inline void SetAppNetworkAccessType(AppNetworkAccessType&& value) { m_appNetworkAccessType = std::move(value); }
    inline DescribeDomainResult& WithAppNetworkAccessType(const AppNetworkAccessType& value) { SetAppNetworkAccessType(value); return *this;}
    inline DescribeDomainResult& WithAppNetworkAccessType(AppNetworkAccessType&& value) { SetAppNetworkAccessType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC subnets that the domain uses for communication.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIds = std::move(value); }
    inline DescribeDomainResult& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline DescribeDomainResult& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline DescribeDomainResult& AddSubnetIds(const Aws::String& value) { m_subnetIds.push_back(value); return *this; }
    inline DescribeDomainResult& AddSubnetIds(Aws::String&& value) { m_subnetIds.push_back(std::move(value)); return *this; }
    inline DescribeDomainResult& AddSubnetIds(const char* value) { m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The domain's URL.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline void SetUrl(const Aws::String& value) { m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_url.assign(value); }
    inline DescribeDomainResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline DescribeDomainResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline DescribeDomainResult& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Virtual Private Cloud (VPC) that the domain uses for
     * communication.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }
    inline DescribeDomainResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline DescribeDomainResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline DescribeDomainResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS customer managed key used to encrypt the EFS
     * volume attached to the domain.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }
    inline DescribeDomainResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline DescribeDomainResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline DescribeDomainResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that creates and manages the required security groups for
     * inter-app communication in <code>VPCOnly</code> mode. Required when
     * <code>CreateDomain.AppNetworkAccessType</code> is <code>VPCOnly</code> and
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided.</p>
     */
    inline const AppSecurityGroupManagement& GetAppSecurityGroupManagement() const{ return m_appSecurityGroupManagement; }
    inline void SetAppSecurityGroupManagement(const AppSecurityGroupManagement& value) { m_appSecurityGroupManagement = value; }
    inline void SetAppSecurityGroupManagement(AppSecurityGroupManagement&& value) { m_appSecurityGroupManagement = std::move(value); }
    inline DescribeDomainResult& WithAppSecurityGroupManagement(const AppSecurityGroupManagement& value) { SetAppSecurityGroupManagement(value); return *this;}
    inline DescribeDomainResult& WithAppSecurityGroupManagement(AppSecurityGroupManagement&& value) { SetAppSecurityGroupManagement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether custom tag propagation is supported for the domain.</p>
     */
    inline const TagPropagation& GetTagPropagation() const{ return m_tagPropagation; }
    inline void SetTagPropagation(const TagPropagation& value) { m_tagPropagation = value; }
    inline void SetTagPropagation(TagPropagation&& value) { m_tagPropagation = std::move(value); }
    inline DescribeDomainResult& WithTagPropagation(const TagPropagation& value) { SetTagPropagation(value); return *this;}
    inline DescribeDomainResult& WithTagPropagation(TagPropagation&& value) { SetTagPropagation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default settings for shared spaces that users create in the domain.</p>
     */
    inline const DefaultSpaceSettings& GetDefaultSpaceSettings() const{ return m_defaultSpaceSettings; }
    inline void SetDefaultSpaceSettings(const DefaultSpaceSettings& value) { m_defaultSpaceSettings = value; }
    inline void SetDefaultSpaceSettings(DefaultSpaceSettings&& value) { m_defaultSpaceSettings = std::move(value); }
    inline DescribeDomainResult& WithDefaultSpaceSettings(const DefaultSpaceSettings& value) { SetDefaultSpaceSettings(value); return *this;}
    inline DescribeDomainResult& WithDefaultSpaceSettings(DefaultSpaceSettings&& value) { SetDefaultSpaceSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDomainResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDomainResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDomainResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainArn;

    Aws::String m_domainId;

    Aws::String m_domainName;

    Aws::String m_homeEfsFileSystemId;

    Aws::String m_singleSignOnManagedApplicationInstanceId;

    Aws::String m_singleSignOnApplicationArn;

    DomainStatus m_status;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_failureReason;

    Aws::String m_securityGroupIdForDomainBoundary;

    AuthMode m_authMode;

    UserSettings m_defaultUserSettings;

    DomainSettings m_domainSettings;

    AppNetworkAccessType m_appNetworkAccessType;

    Aws::Vector<Aws::String> m_subnetIds;

    Aws::String m_url;

    Aws::String m_vpcId;

    Aws::String m_kmsKeyId;

    AppSecurityGroupManagement m_appSecurityGroupManagement;

    TagPropagation m_tagPropagation;

    DefaultSpaceSettings m_defaultSpaceSettings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
