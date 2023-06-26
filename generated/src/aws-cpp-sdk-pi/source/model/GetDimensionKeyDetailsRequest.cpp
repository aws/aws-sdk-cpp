/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/GetDimensionKeyDetailsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDimensionKeyDetailsRequest::GetDimensionKeyDetailsRequest() : 
    m_serviceType(ServiceType::NOT_SET),
    m_serviceTypeHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_groupIdentifierHasBeenSet(false),
    m_requestedDimensionsHasBeenSet(false)
{
}

Aws::String GetDimensionKeyDetailsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceTypeHasBeenSet)
  {
   payload.WithString("ServiceType", ServiceTypeMapper::GetNameForServiceType(m_serviceType));
  }

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  if(m_groupHasBeenSet)
  {
   payload.WithString("Group", m_group);

  }

  if(m_groupIdentifierHasBeenSet)
  {
   payload.WithString("GroupIdentifier", m_groupIdentifier);

  }

  if(m_requestedDimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requestedDimensionsJsonList(m_requestedDimensions.size());
   for(unsigned requestedDimensionsIndex = 0; requestedDimensionsIndex < requestedDimensionsJsonList.GetLength(); ++requestedDimensionsIndex)
   {
     requestedDimensionsJsonList[requestedDimensionsIndex].AsString(m_requestedDimensions[requestedDimensionsIndex]);
   }
   payload.WithArray("RequestedDimensions", std::move(requestedDimensionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetDimensionKeyDetailsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PerformanceInsightsv20180227.GetDimensionKeyDetails"));
  return headers;

}




