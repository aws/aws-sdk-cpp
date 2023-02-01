/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/ListOperationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListOperationsRequest::ListOperationsRequest() : 
    m_submittedSinceHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_sortBy(ListOperationsSortAttributeName::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

Aws::String ListOperationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_submittedSinceHasBeenSet)
  {
   payload.WithDouble("SubmittedSince", m_submittedSince.SecondsWithMSPrecision());
  }

  if(m_markerHasBeenSet)
  {
   payload.WithString("Marker", m_marker);

  }

  if(m_maxItemsHasBeenSet)
  {
   payload.WithInteger("MaxItems", m_maxItems);

  }

  if(m_statusHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statusJsonList(m_status.size());
   for(unsigned statusIndex = 0; statusIndex < statusJsonList.GetLength(); ++statusIndex)
   {
     statusJsonList[statusIndex].AsString(OperationStatusMapper::GetNameForOperationStatus(m_status[statusIndex]));
   }
   payload.WithArray("Status", std::move(statusJsonList));

  }

  if(m_typeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> typeJsonList(m_type.size());
   for(unsigned typeIndex = 0; typeIndex < typeJsonList.GetLength(); ++typeIndex)
   {
     typeJsonList[typeIndex].AsString(OperationTypeMapper::GetNameForOperationType(m_type[typeIndex]));
   }
   payload.WithArray("Type", std::move(typeJsonList));

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", ListOperationsSortAttributeNameMapper::GetNameForListOperationsSortAttributeName(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListOperationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Domains_v20140515.ListOperations"));
  return headers;

}




