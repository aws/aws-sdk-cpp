/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/CopyWorkspaceImageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CopyWorkspaceImageRequest::CopyWorkspaceImageRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceImageIdHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CopyWorkspaceImageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_sourceImageIdHasBeenSet)
  {
   payload.WithString("SourceImageId", m_sourceImageId);

  }

  if(m_sourceRegionHasBeenSet)
  {
   payload.WithString("SourceRegion", m_sourceRegion);

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

Aws::Http::HeaderValueCollection CopyWorkspaceImageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.CopyWorkspaceImage"));
  return headers;

}




