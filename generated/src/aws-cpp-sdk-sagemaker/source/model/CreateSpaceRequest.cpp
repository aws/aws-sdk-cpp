/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateSpaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSpaceRequest::CreateSpaceRequest() : 
    m_domainIdHasBeenSet(false),
    m_spaceNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_spaceSettingsHasBeenSet(false),
    m_ownershipSettingsHasBeenSet(false),
    m_spaceSharingSettingsHasBeenSet(false),
    m_spaceDisplayNameHasBeenSet(false)
{
}

Aws::String CreateSpaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_spaceNameHasBeenSet)
  {
   payload.WithString("SpaceName", m_spaceName);

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

  if(m_spaceSettingsHasBeenSet)
  {
   payload.WithObject("SpaceSettings", m_spaceSettings.Jsonize());

  }

  if(m_ownershipSettingsHasBeenSet)
  {
   payload.WithObject("OwnershipSettings", m_ownershipSettings.Jsonize());

  }

  if(m_spaceSharingSettingsHasBeenSet)
  {
   payload.WithObject("SpaceSharingSettings", m_spaceSharingSettings.Jsonize());

  }

  if(m_spaceDisplayNameHasBeenSet)
  {
   payload.WithString("SpaceDisplayName", m_spaceDisplayName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateSpaceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateSpace"));
  return headers;

}




