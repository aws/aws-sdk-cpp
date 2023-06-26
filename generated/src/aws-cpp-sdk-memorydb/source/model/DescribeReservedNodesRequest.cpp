/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/DescribeReservedNodesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeReservedNodesRequest::DescribeReservedNodesRequest() : 
    m_reservationIdHasBeenSet(false),
    m_reservedNodesOfferingIdHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_offeringTypeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeReservedNodesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reservationIdHasBeenSet)
  {
   payload.WithString("ReservationId", m_reservationId);

  }

  if(m_reservedNodesOfferingIdHasBeenSet)
  {
   payload.WithString("ReservedNodesOfferingId", m_reservedNodesOfferingId);

  }

  if(m_nodeTypeHasBeenSet)
  {
   payload.WithString("NodeType", m_nodeType);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithString("Duration", m_duration);

  }

  if(m_offeringTypeHasBeenSet)
  {
   payload.WithString("OfferingType", m_offeringType);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeReservedNodesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMemoryDB.DescribeReservedNodes"));
  return headers;

}




