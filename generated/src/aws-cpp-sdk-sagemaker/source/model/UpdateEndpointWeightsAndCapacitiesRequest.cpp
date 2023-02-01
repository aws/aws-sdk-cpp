/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateEndpointWeightsAndCapacitiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEndpointWeightsAndCapacitiesRequest::UpdateEndpointWeightsAndCapacitiesRequest() : 
    m_endpointNameHasBeenSet(false),
    m_desiredWeightsAndCapacitiesHasBeenSet(false)
{
}

Aws::String UpdateEndpointWeightsAndCapacitiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

  }

  if(m_desiredWeightsAndCapacitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> desiredWeightsAndCapacitiesJsonList(m_desiredWeightsAndCapacities.size());
   for(unsigned desiredWeightsAndCapacitiesIndex = 0; desiredWeightsAndCapacitiesIndex < desiredWeightsAndCapacitiesJsonList.GetLength(); ++desiredWeightsAndCapacitiesIndex)
   {
     desiredWeightsAndCapacitiesJsonList[desiredWeightsAndCapacitiesIndex].AsObject(m_desiredWeightsAndCapacities[desiredWeightsAndCapacitiesIndex].Jsonize());
   }
   payload.WithArray("DesiredWeightsAndCapacities", std::move(desiredWeightsAndCapacitiesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateEndpointWeightsAndCapacitiesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateEndpointWeightsAndCapacities"));
  return headers;

}




