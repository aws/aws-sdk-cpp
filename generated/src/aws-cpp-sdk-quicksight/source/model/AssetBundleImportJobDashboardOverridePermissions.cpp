/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobDashboardOverridePermissions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AssetBundleImportJobDashboardOverridePermissions::AssetBundleImportJobDashboardOverridePermissions() : 
    m_dashboardIdsHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_linkSharingConfigurationHasBeenSet(false)
{
}

AssetBundleImportJobDashboardOverridePermissions::AssetBundleImportJobDashboardOverridePermissions(JsonView jsonValue) : 
    m_dashboardIdsHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_linkSharingConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleImportJobDashboardOverridePermissions& AssetBundleImportJobDashboardOverridePermissions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DashboardIds"))
  {
    Aws::Utils::Array<JsonView> dashboardIdsJsonList = jsonValue.GetArray("DashboardIds");
    for(unsigned dashboardIdsIndex = 0; dashboardIdsIndex < dashboardIdsJsonList.GetLength(); ++dashboardIdsIndex)
    {
      m_dashboardIds.push_back(dashboardIdsJsonList[dashboardIdsIndex].AsString());
    }
    m_dashboardIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Permissions"))
  {
    m_permissions = jsonValue.GetObject("Permissions");

    m_permissionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LinkSharingConfiguration"))
  {
    m_linkSharingConfiguration = jsonValue.GetObject("LinkSharingConfiguration");

    m_linkSharingConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleImportJobDashboardOverridePermissions::Jsonize() const
{
  JsonValue payload;

  if(m_dashboardIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dashboardIdsJsonList(m_dashboardIds.size());
   for(unsigned dashboardIdsIndex = 0; dashboardIdsIndex < dashboardIdsJsonList.GetLength(); ++dashboardIdsIndex)
   {
     dashboardIdsJsonList[dashboardIdsIndex].AsString(m_dashboardIds[dashboardIdsIndex]);
   }
   payload.WithArray("DashboardIds", std::move(dashboardIdsJsonList));

  }

  if(m_permissionsHasBeenSet)
  {
   payload.WithObject("Permissions", m_permissions.Jsonize());

  }

  if(m_linkSharingConfigurationHasBeenSet)
  {
   payload.WithObject("LinkSharingConfiguration", m_linkSharingConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
