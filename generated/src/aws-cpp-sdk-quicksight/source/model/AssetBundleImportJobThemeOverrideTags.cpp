/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobThemeOverrideTags.h>
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

AssetBundleImportJobThemeOverrideTags::AssetBundleImportJobThemeOverrideTags() : 
    m_themeIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

AssetBundleImportJobThemeOverrideTags::AssetBundleImportJobThemeOverrideTags(JsonView jsonValue) : 
    m_themeIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleImportJobThemeOverrideTags& AssetBundleImportJobThemeOverrideTags::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ThemeIds"))
  {
    Aws::Utils::Array<JsonView> themeIdsJsonList = jsonValue.GetArray("ThemeIds");
    for(unsigned themeIdsIndex = 0; themeIdsIndex < themeIdsJsonList.GetLength(); ++themeIdsIndex)
    {
      m_themeIds.push_back(themeIdsJsonList[themeIdsIndex].AsString());
    }
    m_themeIdsHasBeenSet = true;
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

JsonValue AssetBundleImportJobThemeOverrideTags::Jsonize() const
{
  JsonValue payload;

  if(m_themeIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> themeIdsJsonList(m_themeIds.size());
   for(unsigned themeIdsIndex = 0; themeIdsIndex < themeIdsJsonList.GetLength(); ++themeIdsIndex)
   {
     themeIdsJsonList[themeIdsIndex].AsString(m_themeIds[themeIdsIndex]);
   }
   payload.WithArray("ThemeIds", std::move(themeIdsJsonList));

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
