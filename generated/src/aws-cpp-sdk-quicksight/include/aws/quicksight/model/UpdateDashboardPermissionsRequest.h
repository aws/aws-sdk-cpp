/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ResourcePermission.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateDashboardPermissionsRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateDashboardPermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDashboardPermissions"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the dashboard whose
     * permissions you're updating.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline UpdateDashboardPermissionsRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline UpdateDashboardPermissionsRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline UpdateDashboardPermissionsRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the dashboard.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    inline void SetDashboardId(const Aws::String& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = value; }
    inline void SetDashboardId(Aws::String&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::move(value); }
    inline void SetDashboardId(const char* value) { m_dashboardIdHasBeenSet = true; m_dashboardId.assign(value); }
    inline UpdateDashboardPermissionsRequest& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}
    inline UpdateDashboardPermissionsRequest& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}
    inline UpdateDashboardPermissionsRequest& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions that you want to grant on this resource.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetGrantPermissions() const{ return m_grantPermissions; }
    inline bool GrantPermissionsHasBeenSet() const { return m_grantPermissionsHasBeenSet; }
    inline void SetGrantPermissions(const Aws::Vector<ResourcePermission>& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions = value; }
    inline void SetGrantPermissions(Aws::Vector<ResourcePermission>&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions = std::move(value); }
    inline UpdateDashboardPermissionsRequest& WithGrantPermissions(const Aws::Vector<ResourcePermission>& value) { SetGrantPermissions(value); return *this;}
    inline UpdateDashboardPermissionsRequest& WithGrantPermissions(Aws::Vector<ResourcePermission>&& value) { SetGrantPermissions(std::move(value)); return *this;}
    inline UpdateDashboardPermissionsRequest& AddGrantPermissions(const ResourcePermission& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions.push_back(value); return *this; }
    inline UpdateDashboardPermissionsRequest& AddGrantPermissions(ResourcePermission&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The permissions that you want to revoke from this resource.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetRevokePermissions() const{ return m_revokePermissions; }
    inline bool RevokePermissionsHasBeenSet() const { return m_revokePermissionsHasBeenSet; }
    inline void SetRevokePermissions(const Aws::Vector<ResourcePermission>& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions = value; }
    inline void SetRevokePermissions(Aws::Vector<ResourcePermission>&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions = std::move(value); }
    inline UpdateDashboardPermissionsRequest& WithRevokePermissions(const Aws::Vector<ResourcePermission>& value) { SetRevokePermissions(value); return *this;}
    inline UpdateDashboardPermissionsRequest& WithRevokePermissions(Aws::Vector<ResourcePermission>&& value) { SetRevokePermissions(std::move(value)); return *this;}
    inline UpdateDashboardPermissionsRequest& AddRevokePermissions(const ResourcePermission& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions.push_back(value); return *this; }
    inline UpdateDashboardPermissionsRequest& AddRevokePermissions(ResourcePermission&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Grants link permissions to all users in a defined namespace.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetGrantLinkPermissions() const{ return m_grantLinkPermissions; }
    inline bool GrantLinkPermissionsHasBeenSet() const { return m_grantLinkPermissionsHasBeenSet; }
    inline void SetGrantLinkPermissions(const Aws::Vector<ResourcePermission>& value) { m_grantLinkPermissionsHasBeenSet = true; m_grantLinkPermissions = value; }
    inline void SetGrantLinkPermissions(Aws::Vector<ResourcePermission>&& value) { m_grantLinkPermissionsHasBeenSet = true; m_grantLinkPermissions = std::move(value); }
    inline UpdateDashboardPermissionsRequest& WithGrantLinkPermissions(const Aws::Vector<ResourcePermission>& value) { SetGrantLinkPermissions(value); return *this;}
    inline UpdateDashboardPermissionsRequest& WithGrantLinkPermissions(Aws::Vector<ResourcePermission>&& value) { SetGrantLinkPermissions(std::move(value)); return *this;}
    inline UpdateDashboardPermissionsRequest& AddGrantLinkPermissions(const ResourcePermission& value) { m_grantLinkPermissionsHasBeenSet = true; m_grantLinkPermissions.push_back(value); return *this; }
    inline UpdateDashboardPermissionsRequest& AddGrantLinkPermissions(ResourcePermission&& value) { m_grantLinkPermissionsHasBeenSet = true; m_grantLinkPermissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Revokes link permissions from all users in a defined namespace.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetRevokeLinkPermissions() const{ return m_revokeLinkPermissions; }
    inline bool RevokeLinkPermissionsHasBeenSet() const { return m_revokeLinkPermissionsHasBeenSet; }
    inline void SetRevokeLinkPermissions(const Aws::Vector<ResourcePermission>& value) { m_revokeLinkPermissionsHasBeenSet = true; m_revokeLinkPermissions = value; }
    inline void SetRevokeLinkPermissions(Aws::Vector<ResourcePermission>&& value) { m_revokeLinkPermissionsHasBeenSet = true; m_revokeLinkPermissions = std::move(value); }
    inline UpdateDashboardPermissionsRequest& WithRevokeLinkPermissions(const Aws::Vector<ResourcePermission>& value) { SetRevokeLinkPermissions(value); return *this;}
    inline UpdateDashboardPermissionsRequest& WithRevokeLinkPermissions(Aws::Vector<ResourcePermission>&& value) { SetRevokeLinkPermissions(std::move(value)); return *this;}
    inline UpdateDashboardPermissionsRequest& AddRevokeLinkPermissions(const ResourcePermission& value) { m_revokeLinkPermissionsHasBeenSet = true; m_revokeLinkPermissions.push_back(value); return *this; }
    inline UpdateDashboardPermissionsRequest& AddRevokeLinkPermissions(ResourcePermission&& value) { m_revokeLinkPermissionsHasBeenSet = true; m_revokeLinkPermissions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_grantPermissions;
    bool m_grantPermissionsHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_revokePermissions;
    bool m_revokePermissionsHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_grantLinkPermissions;
    bool m_grantLinkPermissionsHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_revokeLinkPermissions;
    bool m_revokeLinkPermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
