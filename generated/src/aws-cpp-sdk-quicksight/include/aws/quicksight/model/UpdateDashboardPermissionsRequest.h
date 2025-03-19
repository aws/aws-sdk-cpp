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
    AWS_QUICKSIGHT_API UpdateDashboardPermissionsRequest() = default;

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
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    UpdateDashboardPermissionsRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the dashboard.</p>
     */
    inline const Aws::String& GetDashboardId() const { return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    template<typename DashboardIdT = Aws::String>
    void SetDashboardId(DashboardIdT&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::forward<DashboardIdT>(value); }
    template<typename DashboardIdT = Aws::String>
    UpdateDashboardPermissionsRequest& WithDashboardId(DashboardIdT&& value) { SetDashboardId(std::forward<DashboardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions that you want to grant on this resource.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetGrantPermissions() const { return m_grantPermissions; }
    inline bool GrantPermissionsHasBeenSet() const { return m_grantPermissionsHasBeenSet; }
    template<typename GrantPermissionsT = Aws::Vector<ResourcePermission>>
    void SetGrantPermissions(GrantPermissionsT&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions = std::forward<GrantPermissionsT>(value); }
    template<typename GrantPermissionsT = Aws::Vector<ResourcePermission>>
    UpdateDashboardPermissionsRequest& WithGrantPermissions(GrantPermissionsT&& value) { SetGrantPermissions(std::forward<GrantPermissionsT>(value)); return *this;}
    template<typename GrantPermissionsT = ResourcePermission>
    UpdateDashboardPermissionsRequest& AddGrantPermissions(GrantPermissionsT&& value) { m_grantPermissionsHasBeenSet = true; m_grantPermissions.emplace_back(std::forward<GrantPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The permissions that you want to revoke from this resource.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetRevokePermissions() const { return m_revokePermissions; }
    inline bool RevokePermissionsHasBeenSet() const { return m_revokePermissionsHasBeenSet; }
    template<typename RevokePermissionsT = Aws::Vector<ResourcePermission>>
    void SetRevokePermissions(RevokePermissionsT&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions = std::forward<RevokePermissionsT>(value); }
    template<typename RevokePermissionsT = Aws::Vector<ResourcePermission>>
    UpdateDashboardPermissionsRequest& WithRevokePermissions(RevokePermissionsT&& value) { SetRevokePermissions(std::forward<RevokePermissionsT>(value)); return *this;}
    template<typename RevokePermissionsT = ResourcePermission>
    UpdateDashboardPermissionsRequest& AddRevokePermissions(RevokePermissionsT&& value) { m_revokePermissionsHasBeenSet = true; m_revokePermissions.emplace_back(std::forward<RevokePermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Grants link permissions to all users in a defined namespace.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetGrantLinkPermissions() const { return m_grantLinkPermissions; }
    inline bool GrantLinkPermissionsHasBeenSet() const { return m_grantLinkPermissionsHasBeenSet; }
    template<typename GrantLinkPermissionsT = Aws::Vector<ResourcePermission>>
    void SetGrantLinkPermissions(GrantLinkPermissionsT&& value) { m_grantLinkPermissionsHasBeenSet = true; m_grantLinkPermissions = std::forward<GrantLinkPermissionsT>(value); }
    template<typename GrantLinkPermissionsT = Aws::Vector<ResourcePermission>>
    UpdateDashboardPermissionsRequest& WithGrantLinkPermissions(GrantLinkPermissionsT&& value) { SetGrantLinkPermissions(std::forward<GrantLinkPermissionsT>(value)); return *this;}
    template<typename GrantLinkPermissionsT = ResourcePermission>
    UpdateDashboardPermissionsRequest& AddGrantLinkPermissions(GrantLinkPermissionsT&& value) { m_grantLinkPermissionsHasBeenSet = true; m_grantLinkPermissions.emplace_back(std::forward<GrantLinkPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Revokes link permissions from all users in a defined namespace.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetRevokeLinkPermissions() const { return m_revokeLinkPermissions; }
    inline bool RevokeLinkPermissionsHasBeenSet() const { return m_revokeLinkPermissionsHasBeenSet; }
    template<typename RevokeLinkPermissionsT = Aws::Vector<ResourcePermission>>
    void SetRevokeLinkPermissions(RevokeLinkPermissionsT&& value) { m_revokeLinkPermissionsHasBeenSet = true; m_revokeLinkPermissions = std::forward<RevokeLinkPermissionsT>(value); }
    template<typename RevokeLinkPermissionsT = Aws::Vector<ResourcePermission>>
    UpdateDashboardPermissionsRequest& WithRevokeLinkPermissions(RevokeLinkPermissionsT&& value) { SetRevokeLinkPermissions(std::forward<RevokeLinkPermissionsT>(value)); return *this;}
    template<typename RevokeLinkPermissionsT = ResourcePermission>
    UpdateDashboardPermissionsRequest& AddRevokeLinkPermissions(RevokeLinkPermissionsT&& value) { m_revokeLinkPermissionsHasBeenSet = true; m_revokeLinkPermissions.emplace_back(std::forward<RevokeLinkPermissionsT>(value)); return *this; }
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
