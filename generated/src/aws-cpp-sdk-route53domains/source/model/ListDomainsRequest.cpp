/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/ListDomainsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListDomainsRequest::ListDomainsRequest() : 
    m_filterConditionsHasBeenSet(false),
    m_sortConditionHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false)
{
}

Aws::String ListDomainsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterConditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterConditionsJsonList(m_filterConditions.size());
   for(unsigned filterConditionsIndex = 0; filterConditionsIndex < filterConditionsJsonList.GetLength(); ++filterConditionsIndex)
   {
     filterConditionsJsonList[filterConditionsIndex].AsObject(m_filterConditions[filterConditionsIndex].Jsonize());
   }
   payload.WithArray("FilterConditions", std::move(filterConditionsJsonList));

  }

  if(m_sortConditionHasBeenSet)
  {
   payload.WithObject("SortCondition", m_sortCondition.Jsonize());

  }

  if(m_markerHasBeenSet)
  {
   payload.WithString("Marker", m_marker);

  }

  if(m_maxItemsHasBeenSet)
  {
   payload.WithInteger("MaxItems", m_maxItems);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListDomainsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Domains_v20140515.ListDomains"));
  return headers;

}




