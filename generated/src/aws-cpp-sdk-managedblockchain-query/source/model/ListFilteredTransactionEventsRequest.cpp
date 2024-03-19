/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/ListFilteredTransactionEventsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedBlockchainQuery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListFilteredTransactionEventsRequest::ListFilteredTransactionEventsRequest() : 
    m_networkHasBeenSet(false),
    m_addressIdentifierFilterHasBeenSet(false),
    m_timeFilterHasBeenSet(false),
    m_voutFilterHasBeenSet(false),
    m_confirmationStatusFilterHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListFilteredTransactionEventsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_networkHasBeenSet)
  {
   payload.WithString("network", m_network);

  }

  if(m_addressIdentifierFilterHasBeenSet)
  {
   payload.WithObject("addressIdentifierFilter", m_addressIdentifierFilter.Jsonize());

  }

  if(m_timeFilterHasBeenSet)
  {
   payload.WithObject("timeFilter", m_timeFilter.Jsonize());

  }

  if(m_voutFilterHasBeenSet)
  {
   payload.WithObject("voutFilter", m_voutFilter.Jsonize());

  }

  if(m_confirmationStatusFilterHasBeenSet)
  {
   payload.WithObject("confirmationStatusFilter", m_confirmationStatusFilter.Jsonize());

  }

  if(m_sortHasBeenSet)
  {
   payload.WithObject("sort", m_sort.Jsonize());

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}




