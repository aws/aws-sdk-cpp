/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobDataSourceOverridePermissions.h>
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

AssetBundleImportJobDataSourceOverridePermissions::AssetBundleImportJobDataSourceOverridePermissions() : 
    m_dataSourceIdsHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
}

AssetBundleImportJobDataSourceOverridePermissions::AssetBundleImportJobDataSourceOverridePermissions(JsonView jsonValue) : 
    m_dataSourceIdsHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleImportJobDataSourceOverridePermissions& AssetBundleImportJobDataSourceOverridePermissions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSourceIds"))
  {
    Aws::Utils::Array<JsonView> dataSourceIdsJsonList = jsonValue.GetArray("DataSourceIds");
    for(unsigned dataSourceIdsIndex = 0; dataSourceIdsIndex < dataSourceIdsJsonList.GetLength(); ++dataSourceIdsIndex)
    {
      m_dataSourceIds.push_back(dataSourceIdsJsonList[dataSourceIdsIndex].AsString());
    }
    m_dataSourceIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Permissions"))
  {
    m_permissions = jsonValue.GetObject("Permissions");

    m_permissionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleImportJobDataSourceOverridePermissions::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataSourceIdsJsonList(m_dataSourceIds.size());
   for(unsigned dataSourceIdsIndex = 0; dataSourceIdsIndex < dataSourceIdsJsonList.GetLength(); ++dataSourceIdsIndex)
   {
     dataSourceIdsJsonList[dataSourceIdsIndex].AsString(m_dataSourceIds[dataSourceIdsIndex]);
   }
   payload.WithArray("DataSourceIds", std::move(dataSourceIdsJsonList));

  }

  if(m_permissionsHasBeenSet)
  {
   payload.WithObject("Permissions", m_permissions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
