/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ImportWorkspaceImageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportWorkspaceImageRequest::ImportWorkspaceImageRequest() : 
    m_ec2ImageIdHasBeenSet(false),
    m_ingestionProcess(WorkspaceImageIngestionProcess::NOT_SET),
    m_ingestionProcessHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageDescriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_applicationsHasBeenSet(false)
{
}

Aws::String ImportWorkspaceImageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ec2ImageIdHasBeenSet)
  {
   payload.WithString("Ec2ImageId", m_ec2ImageId);

  }

  if(m_ingestionProcessHasBeenSet)
  {
   payload.WithString("IngestionProcess", WorkspaceImageIngestionProcessMapper::GetNameForWorkspaceImageIngestionProcess(m_ingestionProcess));
  }

  if(m_imageNameHasBeenSet)
  {
   payload.WithString("ImageName", m_imageName);

  }

  if(m_imageDescriptionHasBeenSet)
  {
   payload.WithString("ImageDescription", m_imageDescription);

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

  if(m_applicationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicationsJsonList(m_applications.size());
   for(unsigned applicationsIndex = 0; applicationsIndex < applicationsJsonList.GetLength(); ++applicationsIndex)
   {
     applicationsJsonList[applicationsIndex].AsString(ApplicationMapper::GetNameForApplication(m_applications[applicationsIndex]));
   }
   payload.WithArray("Applications", std::move(applicationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ImportWorkspaceImageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.ImportWorkspaceImage"));
  return headers;

}




