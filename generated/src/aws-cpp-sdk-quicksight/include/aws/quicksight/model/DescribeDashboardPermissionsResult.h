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
  class DescribeDashboardPermissionsResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeDashboardPermissionsResult() = default;
    AWS_QUICKSIGHT_API DescribeDashboardPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeDashboardPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID for the dashboard.</p>
     */
    inline const Aws::String& GetDashboardId() const { return m_dashboardId; }
    template<typename DashboardIdT = Aws::String>
    void SetDashboardId(DashboardIdT&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::forward<DashboardIdT>(value); }
    template<typename DashboardIdT = Aws::String>
    DescribeDashboardPermissionsResult& WithDashboardId(DashboardIdT&& value) { SetDashboardId(std::forward<DashboardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardArn() const { return m_dashboardArn; }
    template<typename DashboardArnT = Aws::String>
    void SetDashboardArn(DashboardArnT&& value) { m_dashboardArnHasBeenSet = true; m_dashboardArn = std::forward<DashboardArnT>(value); }
    template<typename DashboardArnT = Aws::String>
    DescribeDashboardPermissionsResult& WithDashboardArn(DashboardArnT&& value) { SetDashboardArn(std::forward<DashboardArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the permissions for the dashboard.</p>
     */
    inline const Aws::Vector<ResourcePermission>& GetPermissions() const { return m_permissions; }
    template<typename PermissionsT = Aws::Vector<ResourcePermission>>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::Vector<ResourcePermission>>
    DescribeDashboardPermissionsResult& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    template<typename PermissionsT = ResourcePermission>
    DescribeDashboardPermissionsResult& AddPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions.emplace_back(std::forward<PermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeDashboardPermissionsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDashboardPermissionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the configuration of a shareable link that grants
     * access to the dashboard. Your users can use the link to view and interact with
     * the dashboard, if the dashboard has been shared with them. For more information
     * about sharing dashboards, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sharing-a-dashboard.html">Sharing
     * Dashboards</a>.</p>
     */
    inline const LinkSharingConfiguration& GetLinkSharingConfiguration() const { return m_linkSharingConfiguration; }
    template<typename LinkSharingConfigurationT = LinkSharingConfiguration>
    void SetLinkSharingConfiguration(LinkSharingConfigurationT&& value) { m_linkSharingConfigurationHasBeenSet = true; m_linkSharingConfiguration = std::forward<LinkSharingConfigurationT>(value); }
    template<typename LinkSharingConfigurationT = LinkSharingConfiguration>
    DescribeDashboardPermissionsResult& WithLinkSharingConfiguration(LinkSharingConfigurationT&& value) { SetLinkSharingConfiguration(std::forward<LinkSharingConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    Aws::String m_dashboardArn;
    bool m_dashboardArnHasBeenSet = false;

    Aws::Vector<ResourcePermission> m_permissions;
    bool m_permissionsHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    LinkSharingConfiguration m_linkSharingConfiguration;
    bool m_linkSharingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
