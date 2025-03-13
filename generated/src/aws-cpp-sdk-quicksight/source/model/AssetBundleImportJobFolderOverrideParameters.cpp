/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportJobFolderOverrideParameters.h>
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

AssetBundleImportJobFolderOverrideParameters::AssetBundleImportJobFolderOverrideParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

AssetBundleImportJobFolderOverrideParameters& AssetBundleImportJobFolderOverrideParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FolderId"))
  {
    m_folderId = jsonValue.GetString("FolderId");
    m_folderIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParentFolderArn"))
  {
    m_parentFolderArn = jsonValue.GetString("ParentFolderArn");
    m_parentFolderArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetBundleImportJobFolderOverrideParameters::Jsonize() const
{
  JsonValue payload;

  if(m_folderIdHasBeenSet)
  {
   payload.WithString("FolderId", m_folderId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_parentFolderArnHasBeenSet)
  {
   payload.WithString("ParentFolderArn", m_parentFolderArn);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
