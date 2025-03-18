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
    AWS_SAGEMAKER_API DescribeDomainResult() = default;
    AWS_SAGEMAKER_API DescribeDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The domain's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetDomainArn() const { return m_domainArn; }
    template<typename DomainArnT = Aws::String>
    void SetDomainArn(DomainArnT&& value) { m_domainArnHasBeenSet = true; m_domainArn = std::forward<DomainArnT>(value); }
    template<typename DomainArnT = Aws::String>
    DescribeDomainResult& WithDomainArn(DomainArnT&& value) { SetDomainArn(std::forward<DomainArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain ID.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    DescribeDomainResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DescribeDomainResult& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Elastic File System managed by this Domain.</p>
     */
    inline const Aws::String& GetHomeEfsFileSystemId() const { return m_homeEfsFileSystemId; }
    template<typename HomeEfsFileSystemIdT = Aws::String>
    void SetHomeEfsFileSystemId(HomeEfsFileSystemIdT&& value) { m_homeEfsFileSystemIdHasBeenSet = true; m_homeEfsFileSystemId = std::forward<HomeEfsFileSystemIdT>(value); }
    template<typename HomeEfsFileSystemIdT = Aws::String>
    DescribeDomainResult& WithHomeEfsFileSystemId(HomeEfsFileSystemIdT&& value) { SetHomeEfsFileSystemId(std::forward<HomeEfsFileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM Identity Center managed application instance ID.</p>
     */
    inline const Aws::String& GetSingleSignOnManagedApplicationInstanceId() const { return m_singleSignOnManagedApplicationInstanceId; }
    template<typename SingleSignOnManagedApplicationInstanceIdT = Aws::String>
    void SetSingleSignOnManagedApplicationInstanceId(SingleSignOnManagedApplicationInstanceIdT&& value) { m_singleSignOnManagedApplicationInstanceIdHasBeenSet = true; m_singleSignOnManagedApplicationInstanceId = std::forward<SingleSignOnManagedApplicationInstanceIdT>(value); }
    template<typename SingleSignOnManagedApplicationInstanceIdT = Aws::String>
    DescribeDomainResult& WithSingleSignOnManagedApplicationInstanceId(SingleSignOnManagedApplicationInstanceIdT&& value) { SetSingleSignOnManagedApplicationInstanceId(std::forward<SingleSignOnManagedApplicationInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the application managed by SageMaker AI in IAM Identity Center.
     * This value is only returned for domains created after October 1, 2023.</p>
     */
    inline const Aws::String& GetSingleSignOnApplicationArn() const { return m_singleSignOnApplicationArn; }
    template<typename SingleSignOnApplicationArnT = Aws::String>
    void SetSingleSignOnApplicationArn(SingleSignOnApplicationArnT&& value) { m_singleSignOnApplicationArnHasBeenSet = true; m_singleSignOnApplicationArn = std::forward<SingleSignOnApplicationArnT>(value); }
    template<typename SingleSignOnApplicationArnT = Aws::String>
    DescribeDomainResult& WithSingleSignOnApplicationArn(SingleSignOnApplicationArnT&& value) { SetSingleSignOnApplicationArn(std::forward<SingleSignOnApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline DomainStatus GetStatus() const { return m_status; }
    inline void SetStatus(DomainStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeDomainResult& WithStatus(DomainStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeDomainResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeDomainResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure reason.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeDomainResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the security group that authorizes traffic between the
     * <code>RSessionGateway</code> apps and the <code>RStudioServerPro</code> app.</p>
     */
    inline const Aws::String& GetSecurityGroupIdForDomainBoundary() const { return m_securityGroupIdForDomainBoundary; }
    template<typename SecurityGroupIdForDomainBoundaryT = Aws::String>
    void SetSecurityGroupIdForDomainBoundary(SecurityGroupIdForDomainBoundaryT&& value) { m_securityGroupIdForDomainBoundaryHasBeenSet = true; m_securityGroupIdForDomainBoundary = std::forward<SecurityGroupIdForDomainBoundaryT>(value); }
    template<typename SecurityGroupIdForDomainBoundaryT = Aws::String>
    DescribeDomainResult& WithSecurityGroupIdForDomainBoundary(SecurityGroupIdForDomainBoundaryT&& value) { SetSecurityGroupIdForDomainBoundary(std::forward<SecurityGroupIdForDomainBoundaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain's authentication mode.</p>
     */
    inline AuthMode GetAuthMode() const { return m_authMode; }
    inline void SetAuthMode(AuthMode value) { m_authModeHasBeenSet = true; m_authMode = value; }
    inline DescribeDomainResult& WithAuthMode(AuthMode value) { SetAuthMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings which are applied to UserProfiles in this domain if settings are not
     * explicitly specified in a given UserProfile. </p>
     */
    inline const UserSettings& GetDefaultUserSettings() const { return m_defaultUserSettings; }
    template<typename DefaultUserSettingsT = UserSettings>
    void SetDefaultUserSettings(DefaultUserSettingsT&& value) { m_defaultUserSettingsHasBeenSet = true; m_defaultUserSettings = std::forward<DefaultUserSettingsT>(value); }
    template<typename DefaultUserSettingsT = UserSettings>
    DescribeDomainResult& WithDefaultUserSettings(DefaultUserSettingsT&& value) { SetDefaultUserSettings(std::forward<DefaultUserSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of <code>Domain</code> settings.</p>
     */
    inline const DomainSettings& GetDomainSettings() const { return m_domainSettings; }
    template<typename DomainSettingsT = DomainSettings>
    void SetDomainSettings(DomainSettingsT&& value) { m_domainSettingsHasBeenSet = true; m_domainSettings = std::forward<DomainSettingsT>(value); }
    template<typename DomainSettingsT = DomainSettings>
    DescribeDomainResult& WithDomainSettings(DomainSettingsT&& value) { SetDomainSettings(std::forward<DomainSettingsT>(value)); return *this;}
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
    inline AppNetworkAccessType GetAppNetworkAccessType() const { return m_appNetworkAccessType; }
    inline void SetAppNetworkAccessType(AppNetworkAccessType value) { m_appNetworkAccessTypeHasBeenSet = true; m_appNetworkAccessType = value; }
    inline DescribeDomainResult& WithAppNetworkAccessType(AppNetworkAccessType value) { SetAppNetworkAccessType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC subnets that the domain uses for communication.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    DescribeDomainResult& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    DescribeDomainResult& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The domain's URL.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    DescribeDomainResult& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Virtual Private Cloud (VPC) that the domain uses for
     * communication.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    DescribeDomainResult& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS customer managed key used to encrypt the EFS
     * volume attached to the domain.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    DescribeDomainResult& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that creates and manages the required security groups for
     * inter-app communication in <code>VPCOnly</code> mode. Required when
     * <code>CreateDomain.AppNetworkAccessType</code> is <code>VPCOnly</code> and
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided.</p>
     */
    inline AppSecurityGroupManagement GetAppSecurityGroupManagement() const { return m_appSecurityGroupManagement; }
    inline void SetAppSecurityGroupManagement(AppSecurityGroupManagement value) { m_appSecurityGroupManagementHasBeenSet = true; m_appSecurityGroupManagement = value; }
    inline DescribeDomainResult& WithAppSecurityGroupManagement(AppSecurityGroupManagement value) { SetAppSecurityGroupManagement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether custom tag propagation is supported for the domain.</p>
     */
    inline TagPropagation GetTagPropagation() const { return m_tagPropagation; }
    inline void SetTagPropagation(TagPropagation value) { m_tagPropagationHasBeenSet = true; m_tagPropagation = value; }
    inline DescribeDomainResult& WithTagPropagation(TagPropagation value) { SetTagPropagation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default settings for shared spaces that users create in the domain.</p>
     */
    inline const DefaultSpaceSettings& GetDefaultSpaceSettings() const { return m_defaultSpaceSettings; }
    template<typename DefaultSpaceSettingsT = DefaultSpaceSettings>
    void SetDefaultSpaceSettings(DefaultSpaceSettingsT&& value) { m_defaultSpaceSettingsHasBeenSet = true; m_defaultSpaceSettings = std::forward<DefaultSpaceSettingsT>(value); }
    template<typename DefaultSpaceSettingsT = DefaultSpaceSettings>
    DescribeDomainResult& WithDefaultSpaceSettings(DefaultSpaceSettingsT&& value) { SetDefaultSpaceSettings(std::forward<DefaultSpaceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDomainResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainArn;
    bool m_domainArnHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_homeEfsFileSystemId;
    bool m_homeEfsFileSystemIdHasBeenSet = false;

    Aws::String m_singleSignOnManagedApplicationInstanceId;
    bool m_singleSignOnManagedApplicationInstanceIdHasBeenSet = false;

    Aws::String m_singleSignOnApplicationArn;
    bool m_singleSignOnApplicationArnHasBeenSet = false;

    DomainStatus m_status{DomainStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_securityGroupIdForDomainBoundary;
    bool m_securityGroupIdForDomainBoundaryHasBeenSet = false;

    AuthMode m_authMode{AuthMode::NOT_SET};
    bool m_authModeHasBeenSet = false;

    UserSettings m_defaultUserSettings;
    bool m_defaultUserSettingsHasBeenSet = false;

    DomainSettings m_domainSettings;
    bool m_domainSettingsHasBeenSet = false;

    AppNetworkAccessType m_appNetworkAccessType{AppNetworkAccessType::NOT_SET};
    bool m_appNetworkAccessTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    AppSecurityGroupManagement m_appSecurityGroupManagement{AppSecurityGroupManagement::NOT_SET};
    bool m_appSecurityGroupManagementHasBeenSet = false;

    TagPropagation m_tagPropagation{TagPropagation::NOT_SET};
    bool m_tagPropagationHasBeenSet = false;

    DefaultSpaceSettings m_defaultSpaceSettings;
    bool m_defaultSpaceSettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
