/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateContextRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateContextRequest::CreateContextRequest() : 
    m_contextNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_contextTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateContextRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contextNameHasBeenSet)
  {
   payload.WithString("ContextName", m_contextName);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  if(m_contextTypeHasBeenSet)
  {
   payload.WithString("ContextType", m_contextType);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_propertiesHasBeenSet)
  {
   JsonValue propertiesJsonMap;
   for(auto& propertiesItem : m_properties)
   {
     propertiesJsonMap.WithString(propertiesItem.first, propertiesItem.second);
   }
   payload.WithObject("Properties", std::move(propertiesJsonMap));

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

Aws::Http::HeaderValueCollection CreateContextRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateContext"));
  return headers;

}




