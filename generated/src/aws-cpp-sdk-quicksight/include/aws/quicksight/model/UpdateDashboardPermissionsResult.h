/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/LinkSharingConfiguration.h>
#include <aws/quicksight/model/ResourcePermission.h>
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
namespace QuickSight
{
namespace Model
{
  class UpdateDashboardPermissionsResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateDashboardPermissionsResult() = default;
    AWS_QUICKSIGHT_API UpdateDashboardPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateDashboardPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardArn() const { return m_dashboardArn; }
    template<typename DashboardArnT = Aws::String>
    void SetDashboardArn(DashboardArnT&& value) { m_dashboardArnHasBeenSet = true; m_dashboardArn = std::forward<DashboardArnT>(value); }
    template<typename DashboardArnT = Aws::String>
    UpdateDashboardPermissionsResult& WithDashboardArn(DashboardArnT&& value) { SetDashboardArn(std::forward<DashboardArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the dashboard.</p>
     */
    inline const Aws::String& GetDashboardId() const { return m_dashboardId; }
    template<typename DashboardIdT = Aws::String>
    void SetDashboardId(DashboardIdT&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::forward<DashboardIdT>(value); }
    template<typename DashboardIdT = Aws::String>
    UpdateDashboardPermissionsResult& WithDashboardId(DashboardIdT&& value) { SetDashboardId(std::forward<DashboardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the permissions on the dashboard.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const { return m_permissions; }
    template<typename PermissionsT = Aws::Vector<ResourcePermission>>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::Vector<ResourcePermission>>
    UpdateDashboardPermissionsResult& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    template<typename PermissionsT = ResourcePermission>
    UpdateDashboardPermissionsResult& AddPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions.emplace_back(std::forward<PermissionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateDashboardPermissionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateDashboardPermissionsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the permissions of a shared link to an QuickSight dashboard.</p>
     */
    inline const LinkSharingConfiguration& GetLinkSharingConfiguration() const { return m_linkSharingConfiguration; }
    template<typename LinkSharingConfigurationT = LinkSharingConfiguration>
    void SetLinkSharingConfiguration(LinkSharingConfigurationT&& value) { m_linkSharingConfigurationHasBeenSet = true; m_linkSharingConfiguration = std::forward<LinkSharingConfigurationT>(value); }
    template<typename LinkSharingConfigurationT = LinkSharingConfiguration>
    UpdateDashboardPermissionsResult& WithLinkSharingConfiguration(LinkSharingConfigurationT&& value) { SetLinkSharingConfiguration(std::forward<LinkSharingConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dashboardArn;
    bool m_dashboardArnHasBeenSet = false;

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;

    LinkSharingConfiguration m_linkSharingConfiguration;
    bool m_linkSharingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
