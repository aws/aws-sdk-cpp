/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateActionRequest::UpdateActionRequest() : 
    m_actionNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(ActionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_propertiesToRemoveHasBeenSet(false)
{
}

Aws::String UpdateActionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("ActionName", m_actionName);

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

Aws::Http::HeaderValueCollection UpdateActionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateAction"));
  return headers;

}




