/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobThemeOverridePermissions.h>
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

AssetBundleImportJobThemeOverridePermissions::AssetBundleImportJobThemeOverridePermissions() : 
    m_themeIdsHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
}

AssetBundleImportJobThemeOverridePermissions::AssetBundleImportJobThemeOverridePermissions(JsonView jsonValue) : 
    m_themeIdsHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleImportJobThemeOverridePermissions& AssetBundleImportJobThemeOverridePermissions::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Permissions"))
  {
    m_permissions = jsonValue.GetObject("Permissions");

    m_permissionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleImportJobThemeOverridePermissions::Jsonize() const
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

  if(m_permissionsHasBeenSet)
  {
   payload.WithObject("Permissions", m_permissions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
