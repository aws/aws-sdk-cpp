/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobDataSetOverrideTags.h>
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

AssetBundleImportJobDataSetOverrideTags::AssetBundleImportJobDataSetOverrideTags() : 
    m_dataSetIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

AssetBundleImportJobDataSetOverrideTags::AssetBundleImportJobDataSetOverrideTags(JsonView jsonValue) : 
    m_dataSetIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleImportJobDataSetOverrideTags& AssetBundleImportJobDataSetOverrideTags::operator =(JsonView jsonValue)
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

JsonValue AssetBundleImportJobDataSetOverrideTags::Jsonize() const
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
