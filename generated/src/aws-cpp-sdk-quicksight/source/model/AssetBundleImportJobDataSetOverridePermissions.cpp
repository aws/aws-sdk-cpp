/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobDataSetOverridePermissions.h>
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

AssetBundleImportJobDataSetOverridePermissions::AssetBundleImportJobDataSetOverridePermissions() : 
    m_dataSetIdsHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
}

AssetBundleImportJobDataSetOverridePermissions::AssetBundleImportJobDataSetOverridePermissions(JsonView jsonValue) : 
    m_dataSetIdsHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleImportJobDataSetOverridePermissions& AssetBundleImportJobDataSetOverridePermissions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSetIds"))
  {
    Aws::Utils::Array<JsonView> dataSetIdsJsonList = jsonValue.GetArray("DataSetIds");
    for(unsigned dataSetIdsIndex = 0; dataSetIdsIndex < dataSetIdsJsonList.GetLength(); ++dataSetIdsIndex)
    {
      m_dataSetIds.push_back(dataSetIdsJsonList[dataSetIdsIndex].AsString());
    }
    m_dataSetIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Permissions"))
  {
    m_permissions = jsonValue.GetObject("Permissions");

    m_permissionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleImportJobDataSetOverridePermissions::Jsonize() const
{
  JsonValue payload;

  if(m_dataSetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataSetIdsJsonList(m_dataSetIds.size());
   for(unsigned dataSetIdsIndex = 0; dataSetIdsIndex < dataSetIdsJsonList.GetLength(); ++dataSetIdsIndex)
   {
     dataSetIdsJsonList[dataSetIdsIndex].AsString(m_dataSetIds[dataSetIdsIndex]);
   }
   payload.WithArray("DataSetIds", std::move(dataSetIdsJsonList));

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
