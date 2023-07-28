/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/ListTokenBalancesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedBlockchainQuery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListTokenBalancesRequest::ListTokenBalancesRequest() : 
    m_ownerFilterHasBeenSet(false),
    m_tokenFilterHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListTokenBalancesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ownerFilterHasBeenSet)
  {
   payload.WithObject("ownerFilter", m_ownerFilter.Jsonize());

  }

  if(m_tokenFilterHasBeenSet)
  {
   payload.WithObject("tokenFilter", m_tokenFilter.Jsonize());

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




