/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AuthMode.h>
#include <aws/sagemaker/model/UserSettings.h>
#include <aws/sagemaker/model/DomainSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AppNetworkAccessType.h>
#include <aws/sagemaker/model/AppSecurityGroupManagement.h>
#include <aws/sagemaker/model/TagPropagation.h>
#include <aws/sagemaker/model/DefaultSpaceSettings.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateDomainRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateDomainRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomain"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name for the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    CreateDomainRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of authentication that members use to access the domain.</p>
     */
    inline AuthMode GetAuthMode() const { return m_authMode; }
    inline bool AuthModeHasBeenSet() const { return m_authModeHasBeenSet; }
    inline void SetAuthMode(AuthMode value) { m_authModeHasBeenSet = true; m_authMode = value; }
    inline CreateDomainRequest& WithAuthMode(AuthMode value) { SetAuthMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default settings to use to create a user profile when
     * <code>UserSettings</code> isn't specified in the call to the
     * <code>CreateUserProfile</code> API.</p> <p> <code>SecurityGroups</code> is
     * aggregated when specified in both calls. For all other settings in
     * <code>UserSettings</code>, the values specified in
     * <code>CreateUserProfile</code> take precedence over those specified in
     * <code>CreateDomain</code>.</p>
     */
    inline const UserSettings& GetDefaultUserSettings() const { return m_defaultUserSettings; }
    inline bool DefaultUserSettingsHasBeenSet() const { return m_defaultUserSettingsHasBeenSet; }
    template<typename DefaultUserSettingsT = UserSettings>
    void SetDefaultUserSettings(DefaultUserSettingsT&& value) { m_defaultUserSettingsHasBeenSet = true; m_defaultUserSettings = std::forward<DefaultUserSettingsT>(value); }
    template<typename DefaultUserSettingsT = UserSettings>
    CreateDomainRequest& WithDefaultUserSettings(DefaultUserSettingsT&& value) { SetDefaultUserSettings(std::forward<DefaultUserSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of <code>Domain</code> settings.</p>
     */
    inline const DomainSettings& GetDomainSettings() const { return m_domainSettings; }
    inline bool DomainSettingsHasBeenSet() const { return m_domainSettingsHasBeenSet; }
    template<typename DomainSettingsT = DomainSettings>
    void SetDomainSettings(DomainSettingsT&& value) { m_domainSettingsHasBeenSet = true; m_domainSettings = std::forward<DomainSettingsT>(value); }
    template<typename DomainSettingsT = DomainSettings>
    CreateDomainRequest& WithDomainSettings(DomainSettingsT&& value) { SetDomainSettings(std::forward<DomainSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC subnets that the domain uses for communication.</p> <p>The field is
     * optional when the <code>AppNetworkAccessType</code> parameter is set to
     * <code>PublicInternetOnly</code> for domains created from Amazon SageMaker
     * Unified Studio.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    CreateDomainRequest& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    CreateDomainRequest& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Virtual Private Cloud (VPC) that the domain uses for
     * communication.</p> <p>The field is optional when the
     * <code>AppNetworkAccessType</code> parameter is set to
     * <code>PublicInternetOnly</code> for domains created from Amazon SageMaker
     * Unified Studio.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    CreateDomainRequest& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to associated with the Domain. Each tag consists of a key and an
     * optional value. Tag keys must be unique per resource. Tags are searchable using
     * the <code>Search</code> API.</p> <p>Tags that you specify for the Domain are
     * also added to all Apps that the Domain launches.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDomainRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDomainRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    inline bool AppNetworkAccessTypeHasBeenSet() const { return m_appNetworkAccessTypeHasBeenSet; }
    inline void SetAppNetworkAccessType(AppNetworkAccessType value) { m_appNetworkAccessTypeHasBeenSet = true; m_appNetworkAccessType = value; }
    inline CreateDomainRequest& WithAppNetworkAccessType(AppNetworkAccessType value) { SetAppNetworkAccessType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>SageMaker AI uses Amazon Web Services KMS to encrypt EFS and EBS volumes
     * attached to the domain with an Amazon Web Services managed key by default. For
     * more control, specify a customer managed key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateDomainRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that creates and manages the required security groups for
     * inter-app communication in <code>VPCOnly</code> mode. Required when
     * <code>CreateDomain.AppNetworkAccessType</code> is <code>VPCOnly</code> and
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided. If setting up the domain for use with RStudio, this value must be
     * set to <code>Service</code>.</p>
     */
    inline AppSecurityGroupManagement GetAppSecurityGroupManagement() const { return m_appSecurityGroupManagement; }
    inline bool AppSecurityGroupManagementHasBeenSet() const { return m_appSecurityGroupManagementHasBeenSet; }
    inline void SetAppSecurityGroupManagement(AppSecurityGroupManagement value) { m_appSecurityGroupManagementHasBeenSet = true; m_appSecurityGroupManagement = value; }
    inline CreateDomainRequest& WithAppSecurityGroupManagement(AppSecurityGroupManagement value) { SetAppSecurityGroupManagement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether custom tag propagation is supported for the domain.
     * Defaults to <code>DISABLED</code>.</p>
     */
    inline TagPropagation GetTagPropagation() const { return m_tagPropagation; }
    inline bool TagPropagationHasBeenSet() const { return m_tagPropagationHasBeenSet; }
    inline void SetTagPropagation(TagPropagation value) { m_tagPropagationHasBeenSet = true; m_tagPropagation = value; }
    inline CreateDomainRequest& WithTagPropagation(TagPropagation value) { SetTagPropagation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default settings for shared spaces that users create in the domain.</p>
     */
    inline const DefaultSpaceSettings& GetDefaultSpaceSettings() const { return m_defaultSpaceSettings; }
    inline bool DefaultSpaceSettingsHasBeenSet() const { return m_defaultSpaceSettingsHasBeenSet; }
    template<typename DefaultSpaceSettingsT = DefaultSpaceSettings>
    void SetDefaultSpaceSettings(DefaultSpaceSettingsT&& value) { m_defaultSpaceSettingsHasBeenSet = true; m_defaultSpaceSettings = std::forward<DefaultSpaceSettingsT>(value); }
    template<typename DefaultSpaceSettingsT = DefaultSpaceSettings>
    CreateDomainRequest& WithDefaultSpaceSettings(DefaultSpaceSettingsT&& value) { SetDefaultSpaceSettings(std::forward<DefaultSpaceSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    AuthMode m_authMode{AuthMode::NOT_SET};
    bool m_authModeHasBeenSet = false;

    UserSettings m_defaultUserSettings;
    bool m_defaultUserSettingsHasBeenSet = false;

    DomainSettings m_domainSettings;
    bool m_domainSettingsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    AppNetworkAccessType m_appNetworkAccessType{AppNetworkAccessType::NOT_SET};
    bool m_appNetworkAccessTypeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    AppSecurityGroupManagement m_appSecurityGroupManagement{AppSecurityGroupManagement::NOT_SET};
    bool m_appSecurityGroupManagementHasBeenSet = false;

    TagPropagation m_tagPropagation{TagPropagation::NOT_SET};
    bool m_tagPropagationHasBeenSet = false;

    DefaultSpaceSettings m_defaultSpaceSettings;
    bool m_defaultSpaceSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
