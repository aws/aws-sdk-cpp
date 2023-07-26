/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/GetTransactionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedBlockchainQuery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTransactionRequest::GetTransactionRequest() : 
    m_transactionHashHasBeenSet(false),
    m_network(QueryNetwork::NOT_SET),
    m_networkHasBeenSet(false)
{
}

Aws::String GetTransactionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transactionHashHasBeenSet)
  {
   payload.WithString("transactionHash", m_transactionHash);

  }

  if(m_networkHasBeenSet)
  {
   payload.WithString("network", QueryNetworkMapper::GetNameForQueryNetwork(m_network));
  }

  return payload.View().WriteReadable();
}




