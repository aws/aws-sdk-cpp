/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CreateFolderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFolderRequest::CreateFolderRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_folderType(FolderType::NOT_SET),
    m_folderTypeHasBeenSet(false),
    m_parentFolderArnHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateFolderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_folderTypeHasBeenSet)
  {
   payload.WithString("FolderType", FolderTypeMapper::GetNameForFolderType(m_folderType));
  }

  if(m_parentFolderArnHasBeenSet)
  {
   payload.WithString("ParentFolderArn", m_parentFolderArn);

  }

  if(m_permissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> permissionsJsonList(m_permissions.size());
   for(unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex)
   {
     permissionsJsonList[permissionsIndex].AsObject(m_permissions[permissionsIndex].Jsonize());
   }
   payload.WithArray("Permissions", std::move(permissionsJsonList));

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

  return payload.View().WriteReadable();
}




