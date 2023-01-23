/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateAppRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAppRequest::CreateAppRequest() : 
    m_domainIdHasBeenSet(false),
    m_userProfileNameHasBeenSet(false),
    m_appType(AppType::NOT_SET),
    m_appTypeHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_resourceSpecHasBeenSet(false),
    m_spaceNameHasBeenSet(false)
{
}

Aws::String CreateAppRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_userProfileNameHasBeenSet)
  {
   payload.WithString("UserProfileName", m_userProfileName);

  }

  if(m_appTypeHasBeenSet)
  {
   payload.WithString("AppType", AppTypeMapper::GetNameForAppType(m_appType));
  }

  if(m_appNameHasBeenSet)
  {
   payload.WithString("AppName", m_appName);

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

  if(m_resourceSpecHasBeenSet)
  {
   payload.WithObject("ResourceSpec", m_resourceSpec.Jsonize());

  }

  if(m_spaceNameHasBeenSet)
  {
   payload.WithString("SpaceName", m_spaceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAppRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateApp"));
  return headers;

}




