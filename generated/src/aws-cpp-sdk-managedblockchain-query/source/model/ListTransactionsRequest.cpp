/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/ListTransactionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedBlockchainQuery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListTransactionsRequest::ListTransactionsRequest() : 
    m_addressHasBeenSet(false),
    m_network(QueryNetwork::NOT_SET),
    m_networkHasBeenSet(false),
    m_fromBlockchainInstantHasBeenSet(false),
    m_toBlockchainInstantHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_confirmationStatusFilterHasBeenSet(false)
{
}

Aws::String ListTransactionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_addressHasBeenSet)
  {
   payload.WithString("address", m_address);

  }

  if(m_networkHasBeenSet)
  {
   payload.WithString("network", QueryNetworkMapper::GetNameForQueryNetwork(m_network));
  }

  if(m_fromBlockchainInstantHasBeenSet)
  {
   payload.WithObject("fromBlockchainInstant", m_fromBlockchainInstant.Jsonize());

  }

  if(m_toBlockchainInstantHasBeenSet)
  {
   payload.WithObject("toBlockchainInstant", m_toBlockchainInstant.Jsonize());

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

  if(m_confirmationStatusFilterHasBeenSet)
  {
   payload.WithObject("confirmationStatusFilter", m_confirmationStatusFilter.Jsonize());

  }

  return payload.View().WriteReadable();
}




