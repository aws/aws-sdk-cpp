/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateContextRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateContextRequest::UpdateContextRequest() : 
    m_contextNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_propertiesToRemoveHasBeenSet(false)
{
}

Aws::String UpdateContextRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contextNameHasBeenSet)
  {
   payload.WithString("ContextName", m_contextName);

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

  if(m_propertiesToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> propertiesToRemoveJsonList(m_propertiesToRemove.size());
   for(unsigned propertiesToRemoveIndex = 0; propertiesToRemoveIndex < propertiesToRemoveJsonList.GetLength(); ++propertiesToRemoveIndex)
   {
     propertiesToRemoveJsonList[propertiesToRemoveIndex].AsString(m_propertiesToRemove[propertiesToRemoveIndex]);
   }
   payload.WithArray("PropertiesToRemove", std::move(propertiesToRemoveJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateContextRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateContext"));
  return headers;

}




