/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/UserSettings.h>
#include <aws/sagemaker/model/DomainSettingsForUpdate.h>
#include <aws/sagemaker/model/AppSecurityGroupManagement.h>
#include <aws/sagemaker/model/DefaultSpaceSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AppNetworkAccessType.h>
#include <aws/sagemaker/model/TagPropagation.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateDomainRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateDomainRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomain"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the domain to be updated.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    UpdateDomainRequest& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of settings.</p>
     */
    inline const UserSettings& GetDefaultUserSettings() const { return m_defaultUserSettings; }
    inline bool DefaultUserSettingsHasBeenSet() const { return m_defaultUserSettingsHasBeenSet; }
    template<typename DefaultUserSettingsT = UserSettings>
    void SetDefaultUserSettings(DefaultUserSettingsT&& value) { m_defaultUserSettingsHasBeenSet = true; m_defaultUserSettings = std::forward<DefaultUserSettingsT>(value); }
    template<typename DefaultUserSettingsT = UserSettings>
    UpdateDomainRequest& WithDefaultUserSettings(DefaultUserSettingsT&& value) { SetDefaultUserSettings(std::forward<DefaultUserSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of <code>DomainSettings</code> configuration values to
     * update.</p>
     */
    inline const DomainSettingsForUpdate& GetDomainSettingsForUpdate() const { return m_domainSettingsForUpdate; }
    inline bool DomainSettingsForUpdateHasBeenSet() const { return m_domainSettingsForUpdateHasBeenSet; }
    template<typename DomainSettingsForUpdateT = DomainSettingsForUpdate>
    void SetDomainSettingsForUpdate(DomainSettingsForUpdateT&& value) { m_domainSettingsForUpdateHasBeenSet = true; m_domainSettingsForUpdate = std::forward<DomainSettingsForUpdateT>(value); }
    template<typename DomainSettingsForUpdateT = DomainSettingsForUpdate>
    UpdateDomainRequest& WithDomainSettingsForUpdate(DomainSettingsForUpdateT&& value) { SetDomainSettingsForUpdate(std::forward<DomainSettingsForUpdateT>(value)); return *this;}
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
    inline UpdateDomainRequest& WithAppSecurityGroupManagement(AppSecurityGroupManagement value) { SetAppSecurityGroupManagement(value); return *this;}
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
    UpdateDomainRequest& WithDefaultSpaceSettings(DefaultSpaceSettingsT&& value) { SetDefaultSpaceSettings(std::forward<DefaultSpaceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC subnets that Studio uses for communication.</p> <p>If removing
     * subnets, ensure there are no apps in the <code>InService</code>,
     * <code>Pending</code>, or <code>Deleting</code> state.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    UpdateDomainRequest& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    UpdateDomainRequest& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the VPC used for non-EFS traffic.</p> <ul> <li> <p>
     * <code>PublicInternetOnly</code> - Non-EFS traffic is through a VPC managed by
     * Amazon SageMaker AI, which allows direct internet access.</p> </li> <li> <p>
     * <code>VpcOnly</code> - All Studio traffic is through the specified VPC and
     * subnets.</p> </li> </ul> <p>This configuration can only be modified if there are
     * no apps in the <code>InService</code>, <code>Pending</code>, or
     * <code>Deleting</code> state. The configuration cannot be updated if
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is already set or
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided as part of the same request.</p>
     */
    inline AppNetworkAccessType GetAppNetworkAccessType() const { return m_appNetworkAccessType; }
    inline bool AppNetworkAccessTypeHasBeenSet() const { return m_appNetworkAccessTypeHasBeenSet; }
    inline void SetAppNetworkAccessType(AppNetworkAccessType value) { m_appNetworkAccessTypeHasBeenSet = true; m_appNetworkAccessType = value; }
    inline UpdateDomainRequest& WithAppNetworkAccessType(AppNetworkAccessType value) { SetAppNetworkAccessType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether custom tag propagation is supported for the domain.
     * Defaults to <code>DISABLED</code>.</p>
     */
    inline TagPropagation GetTagPropagation() const { return m_tagPropagation; }
    inline bool TagPropagationHasBeenSet() const { return m_tagPropagationHasBeenSet; }
    inline void SetTagPropagation(TagPropagation value) { m_tagPropagationHasBeenSet = true; m_tagPropagation = value; }
    inline UpdateDomainRequest& WithTagPropagation(TagPropagation value) { SetTagPropagation(value); return *this;}
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    UserSettings m_defaultUserSettings;
    bool m_defaultUserSettingsHasBeenSet = false;

    DomainSettingsForUpdate m_domainSettingsForUpdate;
    bool m_domainSettingsForUpdateHasBeenSet = false;

    AppSecurityGroupManagement m_appSecurityGroupManagement{AppSecurityGroupManagement::NOT_SET};
    bool m_appSecurityGroupManagementHasBeenSet = false;

    DefaultSpaceSettings m_defaultSpaceSettings;
    bool m_defaultSpaceSettingsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    AppNetworkAccessType m_appNetworkAccessType{AppNetworkAccessType::NOT_SET};
    bool m_appNetworkAccessTypeHasBeenSet = false;

    TagPropagation m_tagPropagation{TagPropagation::NOT_SET};
    bool m_tagPropagationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
