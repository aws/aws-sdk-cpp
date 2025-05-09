/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/RegisterWorkspaceDirectoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RegisterWorkspaceDirectoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));

  }

  if(m_enableSelfServiceHasBeenSet)
  {
   payload.WithBool("EnableSelfService", m_enableSelfService);

  }

  if(m_tenancyHasBeenSet)
  {
   payload.WithString("Tenancy", TenancyMapper::GetNameForTenancy(m_tenancy));
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

  if(m_workspaceDirectoryNameHasBeenSet)
  {
   payload.WithString("WorkspaceDirectoryName", m_workspaceDirectoryName);

  }

  if(m_workspaceDirectoryDescriptionHasBeenSet)
  {
   payload.WithString("WorkspaceDirectoryDescription", m_workspaceDirectoryDescription);

  }

  if(m_userIdentityTypeHasBeenSet)
  {
   payload.WithString("UserIdentityType", UserIdentityTypeMapper::GetNameForUserIdentityType(m_userIdentityType));
  }

  if(m_idcInstanceArnHasBeenSet)
  {
   payload.WithString("IdcInstanceArn", m_idcInstanceArn);

  }

  if(m_microsoftEntraConfigHasBeenSet)
  {
   payload.WithObject("MicrosoftEntraConfig", m_microsoftEntraConfig.Jsonize());

  }

  if(m_workspaceTypeHasBeenSet)
  {
   payload.WithString("WorkspaceType", WorkspaceTypeMapper::GetNameForWorkspaceType(m_workspaceType));
  }

  if(m_activeDirectoryConfigHasBeenSet)
  {
   payload.WithObject("ActiveDirectoryConfig", m_activeDirectoryConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterWorkspaceDirectoryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.RegisterWorkspaceDirectory"));
  return headers;

}




