/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateActionRequest::CreateActionRequest() : 
    m_actionNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(ActionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_metadataPropertiesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateActionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("ActionName", m_actionName);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("ActionType", m_actionType);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ActionStatusMapper::GetNameForActionStatus(m_status));
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

  if(m_metadataPropertiesHasBeenSet)
  {
   payload.WithObject("MetadataProperties", m_metadataProperties.Jsonize());

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

Aws::Http::HeaderValueCollection CreateActionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateAction"));
  return headers;

}




