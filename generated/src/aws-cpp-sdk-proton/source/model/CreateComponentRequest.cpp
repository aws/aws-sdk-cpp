/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/CreateComponentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateComponentRequest::CreateComponentRequest() : 
    m_descriptionHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_manifestHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_serviceInstanceNameHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceSpecHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_templateFileHasBeenSet(false)
{
}

Aws::String CreateComponentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_environmentNameHasBeenSet)
  {
   payload.WithString("environmentName", m_environmentName);

  }

  if(m_manifestHasBeenSet)
  {
   payload.WithString("manifest", m_manifest);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_serviceInstanceNameHasBeenSet)
  {
   payload.WithString("serviceInstanceName", m_serviceInstanceName);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  if(m_serviceSpecHasBeenSet)
  {
   payload.WithString("serviceSpec", m_serviceSpec);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_templateFileHasBeenSet)
  {
   payload.WithString("templateFile", m_templateFile);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateComponentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.CreateComponent"));
  return headers;

}




