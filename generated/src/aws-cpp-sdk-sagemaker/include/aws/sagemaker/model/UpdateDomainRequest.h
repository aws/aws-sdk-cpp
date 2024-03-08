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
    AWS_SAGEMAKER_API UpdateDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomain"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the domain to be updated.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the domain to be updated.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The ID of the domain to be updated.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The ID of the domain to be updated.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The ID of the domain to be updated.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The ID of the domain to be updated.</p>
     */
    inline UpdateDomainRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the domain to be updated.</p>
     */
    inline UpdateDomainRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the domain to be updated.</p>
     */
    inline UpdateDomainRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>A collection of settings.</p>
     */
    inline const UserSettings& GetDefaultUserSettings() const{ return m_defaultUserSettings; }

    /**
     * <p>A collection of settings.</p>
     */
    inline bool DefaultUserSettingsHasBeenSet() const { return m_defaultUserSettingsHasBeenSet; }

    /**
     * <p>A collection of settings.</p>
     */
    inline void SetDefaultUserSettings(const UserSettings& value) { m_defaultUserSettingsHasBeenSet = true; m_defaultUserSettings = value; }

    /**
     * <p>A collection of settings.</p>
     */
    inline void SetDefaultUserSettings(UserSettings&& value) { m_defaultUserSettingsHasBeenSet = true; m_defaultUserSettings = std::move(value); }

    /**
     * <p>A collection of settings.</p>
     */
    inline UpdateDomainRequest& WithDefaultUserSettings(const UserSettings& value) { SetDefaultUserSettings(value); return *this;}

    /**
     * <p>A collection of settings.</p>
     */
    inline UpdateDomainRequest& WithDefaultUserSettings(UserSettings&& value) { SetDefaultUserSettings(std::move(value)); return *this;}


    /**
     * <p>A collection of <code>DomainSettings</code> configuration values to
     * update.</p>
     */
    inline const DomainSettingsForUpdate& GetDomainSettingsForUpdate() const{ return m_domainSettingsForUpdate; }

    /**
     * <p>A collection of <code>DomainSettings</code> configuration values to
     * update.</p>
     */
    inline bool DomainSettingsForUpdateHasBeenSet() const { return m_domainSettingsForUpdateHasBeenSet; }

    /**
     * <p>A collection of <code>DomainSettings</code> configuration values to
     * update.</p>
     */
    inline void SetDomainSettingsForUpdate(const DomainSettingsForUpdate& value) { m_domainSettingsForUpdateHasBeenSet = true; m_domainSettingsForUpdate = value; }

    /**
     * <p>A collection of <code>DomainSettings</code> configuration values to
     * update.</p>
     */
    inline void SetDomainSettingsForUpdate(DomainSettingsForUpdate&& value) { m_domainSettingsForUpdateHasBeenSet = true; m_domainSettingsForUpdate = std::move(value); }

    /**
     * <p>A collection of <code>DomainSettings</code> configuration values to
     * update.</p>
     */
    inline UpdateDomainRequest& WithDomainSettingsForUpdate(const DomainSettingsForUpdate& value) { SetDomainSettingsForUpdate(value); return *this;}

    /**
     * <p>A collection of <code>DomainSettings</code> configuration values to
     * update.</p>
     */
    inline UpdateDomainRequest& WithDomainSettingsForUpdate(DomainSettingsForUpdate&& value) { SetDomainSettingsForUpdate(std::move(value)); return *this;}


    /**
     * <p>The entity that creates and manages the required security groups for
     * inter-app communication in <code>VPCOnly</code> mode. Required when
     * <code>CreateDomain.AppNetworkAccessType</code> is <code>VPCOnly</code> and
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided. If setting up the domain for use with RStudio, this value must be
     * set to <code>Service</code>.</p>
     */
    inline const AppSecurityGroupManagement& GetAppSecurityGroupManagement() const{ return m_appSecurityGroupManagement; }

    /**
     * <p>The entity that creates and manages the required security groups for
     * inter-app communication in <code>VPCOnly</code> mode. Required when
     * <code>CreateDomain.AppNetworkAccessType</code> is <code>VPCOnly</code> and
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided. If setting up the domain for use with RStudio, this value must be
     * set to <code>Service</code>.</p>
     */
    inline bool AppSecurityGroupManagementHasBeenSet() const { return m_appSecurityGroupManagementHasBeenSet; }

    /**
     * <p>The entity that creates and manages the required security groups for
     * inter-app communication in <code>VPCOnly</code> mode. Required when
     * <code>CreateDomain.AppNetworkAccessType</code> is <code>VPCOnly</code> and
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided. If setting up the domain for use with RStudio, this value must be
     * set to <code>Service</code>.</p>
     */
    inline void SetAppSecurityGroupManagement(const AppSecurityGroupManagement& value) { m_appSecurityGroupManagementHasBeenSet = true; m_appSecurityGroupManagement = value; }

    /**
     * <p>The entity that creates and manages the required security groups for
     * inter-app communication in <code>VPCOnly</code> mode. Required when
     * <code>CreateDomain.AppNetworkAccessType</code> is <code>VPCOnly</code> and
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided. If setting up the domain for use with RStudio, this value must be
     * set to <code>Service</code>.</p>
     */
    inline void SetAppSecurityGroupManagement(AppSecurityGroupManagement&& value) { m_appSecurityGroupManagementHasBeenSet = true; m_appSecurityGroupManagement = std::move(value); }

    /**
     * <p>The entity that creates and manages the required security groups for
     * inter-app communication in <code>VPCOnly</code> mode. Required when
     * <code>CreateDomain.AppNetworkAccessType</code> is <code>VPCOnly</code> and
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided. If setting up the domain for use with RStudio, this value must be
     * set to <code>Service</code>.</p>
     */
    inline UpdateDomainRequest& WithAppSecurityGroupManagement(const AppSecurityGroupManagement& value) { SetAppSecurityGroupManagement(value); return *this;}

    /**
     * <p>The entity that creates and manages the required security groups for
     * inter-app communication in <code>VPCOnly</code> mode. Required when
     * <code>CreateDomain.AppNetworkAccessType</code> is <code>VPCOnly</code> and
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided. If setting up the domain for use with RStudio, this value must be
     * set to <code>Service</code>.</p>
     */
    inline UpdateDomainRequest& WithAppSecurityGroupManagement(AppSecurityGroupManagement&& value) { SetAppSecurityGroupManagement(std::move(value)); return *this;}


    /**
     * <p>The default settings used to create a space within the domain.</p>
     */
    inline const DefaultSpaceSettings& GetDefaultSpaceSettings() const{ return m_defaultSpaceSettings; }

    /**
     * <p>The default settings used to create a space within the domain.</p>
     */
    inline bool DefaultSpaceSettingsHasBeenSet() const { return m_defaultSpaceSettingsHasBeenSet; }

    /**
     * <p>The default settings used to create a space within the domain.</p>
     */
    inline void SetDefaultSpaceSettings(const DefaultSpaceSettings& value) { m_defaultSpaceSettingsHasBeenSet = true; m_defaultSpaceSettings = value; }

    /**
     * <p>The default settings used to create a space within the domain.</p>
     */
    inline void SetDefaultSpaceSettings(DefaultSpaceSettings&& value) { m_defaultSpaceSettingsHasBeenSet = true; m_defaultSpaceSettings = std::move(value); }

    /**
     * <p>The default settings used to create a space within the domain.</p>
     */
    inline UpdateDomainRequest& WithDefaultSpaceSettings(const DefaultSpaceSettings& value) { SetDefaultSpaceSettings(value); return *this;}

    /**
     * <p>The default settings used to create a space within the domain.</p>
     */
    inline UpdateDomainRequest& WithDefaultSpaceSettings(DefaultSpaceSettings&& value) { SetDefaultSpaceSettings(std::move(value)); return *this;}


    /**
     * <p>The VPC subnets that Studio uses for communication.</p> <p>If removing
     * subnets, ensure there are no apps in the <code>InService</code>,
     * <code>Pending</code>, or <code>Deleting</code> state.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The VPC subnets that Studio uses for communication.</p> <p>If removing
     * subnets, ensure there are no apps in the <code>InService</code>,
     * <code>Pending</code>, or <code>Deleting</code> state.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The VPC subnets that Studio uses for communication.</p> <p>If removing
     * subnets, ensure there are no apps in the <code>InService</code>,
     * <code>Pending</code>, or <code>Deleting</code> state.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The VPC subnets that Studio uses for communication.</p> <p>If removing
     * subnets, ensure there are no apps in the <code>InService</code>,
     * <code>Pending</code>, or <code>Deleting</code> state.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The VPC subnets that Studio uses for communication.</p> <p>If removing
     * subnets, ensure there are no apps in the <code>InService</code>,
     * <code>Pending</code>, or <code>Deleting</code> state.</p>
     */
    inline UpdateDomainRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The VPC subnets that Studio uses for communication.</p> <p>If removing
     * subnets, ensure there are no apps in the <code>InService</code>,
     * <code>Pending</code>, or <code>Deleting</code> state.</p>
     */
    inline UpdateDomainRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The VPC subnets that Studio uses for communication.</p> <p>If removing
     * subnets, ensure there are no apps in the <code>InService</code>,
     * <code>Pending</code>, or <code>Deleting</code> state.</p>
     */
    inline UpdateDomainRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The VPC subnets that Studio uses for communication.</p> <p>If removing
     * subnets, ensure there are no apps in the <code>InService</code>,
     * <code>Pending</code>, or <code>Deleting</code> state.</p>
     */
    inline UpdateDomainRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The VPC subnets that Studio uses for communication.</p> <p>If removing
     * subnets, ensure there are no apps in the <code>InService</code>,
     * <code>Pending</code>, or <code>Deleting</code> state.</p>
     */
    inline UpdateDomainRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>Specifies the VPC used for non-EFS traffic.</p> <ul> <li> <p>
     * <code>PublicInternetOnly</code> - Non-EFS traffic is through a VPC managed by
     * Amazon SageMaker, which allows direct internet access.</p> </li> <li> <p>
     * <code>VpcOnly</code> - All Studio traffic is through the specified VPC and
     * subnets.</p> </li> </ul> <p>This configuration can only be modified if there are
     * no apps in the <code>InService</code>, <code>Pending</code>, or
     * <code>Deleting</code> state. The configuration cannot be updated if
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is already set or
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided as part of the same request.</p>
     */
    inline const AppNetworkAccessType& GetAppNetworkAccessType() const{ return m_appNetworkAccessType; }

    /**
     * <p>Specifies the VPC used for non-EFS traffic.</p> <ul> <li> <p>
     * <code>PublicInternetOnly</code> - Non-EFS traffic is through a VPC managed by
     * Amazon SageMaker, which allows direct internet access.</p> </li> <li> <p>
     * <code>VpcOnly</code> - All Studio traffic is through the specified VPC and
     * subnets.</p> </li> </ul> <p>This configuration can only be modified if there are
     * no apps in the <code>InService</code>, <code>Pending</code>, or
     * <code>Deleting</code> state. The configuration cannot be updated if
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is already set or
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided as part of the same request.</p>
     */
    inline bool AppNetworkAccessTypeHasBeenSet() const { return m_appNetworkAccessTypeHasBeenSet; }

    /**
     * <p>Specifies the VPC used for non-EFS traffic.</p> <ul> <li> <p>
     * <code>PublicInternetOnly</code> - Non-EFS traffic is through a VPC managed by
     * Amazon SageMaker, which allows direct internet access.</p> </li> <li> <p>
     * <code>VpcOnly</code> - All Studio traffic is through the specified VPC and
     * subnets.</p> </li> </ul> <p>This configuration can only be modified if there are
     * no apps in the <code>InService</code>, <code>Pending</code>, or
     * <code>Deleting</code> state. The configuration cannot be updated if
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is already set or
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided as part of the same request.</p>
     */
    inline void SetAppNetworkAccessType(const AppNetworkAccessType& value) { m_appNetworkAccessTypeHasBeenSet = true; m_appNetworkAccessType = value; }

    /**
     * <p>Specifies the VPC used for non-EFS traffic.</p> <ul> <li> <p>
     * <code>PublicInternetOnly</code> - Non-EFS traffic is through a VPC managed by
     * Amazon SageMaker, which allows direct internet access.</p> </li> <li> <p>
     * <code>VpcOnly</code> - All Studio traffic is through the specified VPC and
     * subnets.</p> </li> </ul> <p>This configuration can only be modified if there are
     * no apps in the <code>InService</code>, <code>Pending</code>, or
     * <code>Deleting</code> state. The configuration cannot be updated if
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is already set or
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided as part of the same request.</p>
     */
    inline void SetAppNetworkAccessType(AppNetworkAccessType&& value) { m_appNetworkAccessTypeHasBeenSet = true; m_appNetworkAccessType = std::move(value); }

    /**
     * <p>Specifies the VPC used for non-EFS traffic.</p> <ul> <li> <p>
     * <code>PublicInternetOnly</code> - Non-EFS traffic is through a VPC managed by
     * Amazon SageMaker, which allows direct internet access.</p> </li> <li> <p>
     * <code>VpcOnly</code> - All Studio traffic is through the specified VPC and
     * subnets.</p> </li> </ul> <p>This configuration can only be modified if there are
     * no apps in the <code>InService</code>, <code>Pending</code>, or
     * <code>Deleting</code> state. The configuration cannot be updated if
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is already set or
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided as part of the same request.</p>
     */
    inline UpdateDomainRequest& WithAppNetworkAccessType(const AppNetworkAccessType& value) { SetAppNetworkAccessType(value); return *this;}

    /**
     * <p>Specifies the VPC used for non-EFS traffic.</p> <ul> <li> <p>
     * <code>PublicInternetOnly</code> - Non-EFS traffic is through a VPC managed by
     * Amazon SageMaker, which allows direct internet access.</p> </li> <li> <p>
     * <code>VpcOnly</code> - All Studio traffic is through the specified VPC and
     * subnets.</p> </li> </ul> <p>This configuration can only be modified if there are
     * no apps in the <code>InService</code>, <code>Pending</code>, or
     * <code>Deleting</code> state. The configuration cannot be updated if
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is already set or
     * <code>DomainSettings.RStudioServerProDomainSettings.DomainExecutionRoleArn</code>
     * is provided as part of the same request.</p>
     */
    inline UpdateDomainRequest& WithAppNetworkAccessType(AppNetworkAccessType&& value) { SetAppNetworkAccessType(std::move(value)); return *this;}

  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    UserSettings m_defaultUserSettings;
    bool m_defaultUserSettingsHasBeenSet = false;

    DomainSettingsForUpdate m_domainSettingsForUpdate;
    bool m_domainSettingsForUpdateHasBeenSet = false;

    AppSecurityGroupManagement m_appSecurityGroupManagement;
    bool m_appSecurityGroupManagementHasBeenSet = false;

    DefaultSpaceSettings m_defaultSpaceSettings;
    bool m_defaultSpaceSettingsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    AppNetworkAccessType m_appNetworkAccessType;
    bool m_appNetworkAccessTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
