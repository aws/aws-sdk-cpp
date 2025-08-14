/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ImportCustomWorkspaceImageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ImportCustomWorkspaceImageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_imageNameHasBeenSet)
  {
   payload.WithString("ImageName", m_imageName);

  }

  if(m_imageDescriptionHasBeenSet)
  {
   payload.WithString("ImageDescription", m_imageDescription);

  }

  if(m_computeTypeHasBeenSet)
  {
   payload.WithString("ComputeType", ImageComputeTypeMapper::GetNameForImageComputeType(m_computeType));
  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", CustomImageProtocolMapper::GetNameForCustomImageProtocol(m_protocol));
  }

  if(m_imageSourceHasBeenSet)
  {
   payload.WithObject("ImageSource", m_imageSource.Jsonize());

  }

  if(m_infrastructureConfigurationArnHasBeenSet)
  {
   payload.WithString("InfrastructureConfigurationArn", m_infrastructureConfigurationArn);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("Platform", PlatformMapper::GetNameForPlatform(m_platform));
  }

  if(m_osVersionHasBeenSet)
  {
   payload.WithString("OsVersion", OSVersionMapper::GetNameForOSVersion(m_osVersion));
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

Aws::Http::HeaderValueCollection ImportCustomWorkspaceImageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.ImportCustomWorkspaceImage"));
  return headers;

}




