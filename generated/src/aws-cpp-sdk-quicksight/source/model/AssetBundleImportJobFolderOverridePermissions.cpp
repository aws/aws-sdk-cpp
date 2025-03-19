/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobFolderOverridePermissions.h>
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

AssetBundleImportJobFolderOverridePermissions::AssetBundleImportJobFolderOverridePermissions(JsonView jsonValue)
{
  *this = jsonValue;
}

AssetBundleImportJobFolderOverridePermissions& AssetBundleImportJobFolderOverridePermissions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FolderIds"))
  {
    Aws::Utils::Array<JsonView> folderIdsJsonList = jsonValue.GetArray("FolderIds");
    for(unsigned folderIdsIndex = 0; folderIdsIndex < folderIdsJsonList.GetLength(); ++folderIdsIndex)
    {
      m_folderIds.push_back(folderIdsJsonList[folderIdsIndex].AsString());
    }
    m_folderIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Permissions"))
  {
    m_permissions = jsonValue.GetObject("Permissions");
    m_permissionsHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetBundleImportJobFolderOverridePermissions::Jsonize() const
{
  JsonValue payload;

  if(m_folderIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> folderIdsJsonList(m_folderIds.size());
   for(unsigned folderIdsIndex = 0; folderIdsIndex < folderIdsJsonList.GetLength(); ++folderIdsIndex)
   {
     folderIdsJsonList[folderIdsIndex].AsString(m_folderIds[folderIdsIndex]);
   }
   payload.WithArray("FolderIds", std::move(folderIdsJsonList));

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
