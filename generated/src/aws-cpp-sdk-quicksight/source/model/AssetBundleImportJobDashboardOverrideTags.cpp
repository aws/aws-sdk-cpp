/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobDashboardOverrideTags.h>
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

AssetBundleImportJobDashboardOverrideTags::AssetBundleImportJobDashboardOverrideTags() : 
    m_dashboardIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

AssetBundleImportJobDashboardOverrideTags::AssetBundleImportJobDashboardOverrideTags(JsonView jsonValue) : 
    m_dashboardIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleImportJobDashboardOverrideTags& AssetBundleImportJobDashboardOverrideTags::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleImportJobDashboardOverrideTags::Jsonize() const
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

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
