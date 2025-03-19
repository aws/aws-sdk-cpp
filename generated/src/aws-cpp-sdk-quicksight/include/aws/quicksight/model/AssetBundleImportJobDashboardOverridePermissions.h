/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/AssetBundleResourcePermissions.h>
#include <aws/quicksight/model/AssetBundleResourceLinkSharingConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>An object that contains a list of permissions to be applied to a list of
   * dashboard IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobDashboardOverridePermissions">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobDashboardOverridePermissions
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobDashboardOverridePermissions() = default;
    AWS_QUICKSIGHT_API AssetBundleImportJobDashboardOverridePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobDashboardOverridePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of dashboard IDs that you want to apply overrides to. You can use
     * <code>*</code> to override all dashboards in this asset bundle.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDashboardIds() const { return m_dashboardIds; }
    inline bool DashboardIdsHasBeenSet() const { return m_dashboardIdsHasBeenSet; }
    template<typename DashboardIdsT = Aws::Vector<Aws::String>>
    void SetDashboardIds(DashboardIdsT&& value) { m_dashboardIdsHasBeenSet = true; m_dashboardIds = std::forward<DashboardIdsT>(value); }
    template<typename DashboardIdsT = Aws::Vector<Aws::String>>
    AssetBundleImportJobDashboardOverridePermissions& WithDashboardIds(DashboardIdsT&& value) { SetDashboardIds(std::forward<DashboardIdsT>(value)); return *this;}
    template<typename DashboardIdsT = Aws::String>
    AssetBundleImportJobDashboardOverridePermissions& AddDashboardIds(DashboardIdsT&& value) { m_dashboardIdsHasBeenSet = true; m_dashboardIds.emplace_back(std::forward<DashboardIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of permissions for the dashboards that you want to apply overrides
     * to.</p>
     */
    inline const AssetBundleResourcePermissions& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = AssetBundleResourcePermissions>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = AssetBundleResourcePermissions>
    AssetBundleImportJobDashboardOverridePermissions& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the link sharing configurations that you want to
     * apply overrides to.</p>
     */
    inline const AssetBundleResourceLinkSharingConfiguration& GetLinkSharingConfiguration() const { return m_linkSharingConfiguration; }
    inline bool LinkSharingConfigurationHasBeenSet() const { return m_linkSharingConfigurationHasBeenSet; }
    template<typename LinkSharingConfigurationT = AssetBundleResourceLinkSharingConfiguration>
    void SetLinkSharingConfiguration(LinkSharingConfigurationT&& value) { m_linkSharingConfigurationHasBeenSet = true; m_linkSharingConfiguration = std::forward<LinkSharingConfigurationT>(value); }
    template<typename LinkSharingConfigurationT = AssetBundleResourceLinkSharingConfiguration>
    AssetBundleImportJobDashboardOverridePermissions& WithLinkSharingConfiguration(LinkSharingConfigurationT&& value) { SetLinkSharingConfiguration(std::forward<LinkSharingConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_dashboardIds;
    bool m_dashboardIdsHasBeenSet = false;

    AssetBundleResourcePermissions m_permissions;
    bool m_permissionsHasBeenSet = false;

    AssetBundleResourceLinkSharingConfiguration m_linkSharingConfiguration;
    bool m_linkSharingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
