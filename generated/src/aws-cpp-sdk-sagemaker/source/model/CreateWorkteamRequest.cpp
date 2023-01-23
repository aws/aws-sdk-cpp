/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateWorkteamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWorkteamRequest::CreateWorkteamRequest() : 
    m_workteamNameHasBeenSet(false),
    m_workforceNameHasBeenSet(false),
    m_memberDefinitionsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_notificationConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateWorkteamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workteamNameHasBeenSet)
  {
   payload.WithString("WorkteamName", m_workteamName);

  }

  if(m_workforceNameHasBeenSet)
  {
   payload.WithString("WorkforceName", m_workforceName);

  }

  if(m_memberDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> memberDefinitionsJsonList(m_memberDefinitions.size());
   for(unsigned memberDefinitionsIndex = 0; memberDefinitionsIndex < memberDefinitionsJsonList.GetLength(); ++memberDefinitionsIndex)
   {
     memberDefinitionsJsonList[memberDefinitionsIndex].AsObject(m_memberDefinitions[memberDefinitionsIndex].Jsonize());
   }
   payload.WithArray("MemberDefinitions", std::move(memberDefinitionsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_notificationConfigurationHasBeenSet)
  {
   payload.WithObject("NotificationConfiguration", m_notificationConfiguration.Jsonize());

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

Aws::Http::HeaderValueCollection CreateWorkteamRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateWorkteam"));
  return headers;

}




