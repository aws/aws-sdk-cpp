/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobDataSourceOverrideTags.h>
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

AssetBundleImportJobDataSourceOverrideTags::AssetBundleImportJobDataSourceOverrideTags() : 
    m_dataSourceIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

AssetBundleImportJobDataSourceOverrideTags::AssetBundleImportJobDataSourceOverrideTags(JsonView jsonValue) : 
    m_dataSourceIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleImportJobDataSourceOverrideTags& AssetBundleImportJobDataSourceOverrideTags::operator =(JsonView jsonValue)
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

JsonValue AssetBundleImportJobDataSourceOverrideTags::Jsonize() const
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
