/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/TransactionEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchainQuery
{
namespace Model
{

TransactionEvent::TransactionEvent() : 
    m_network(QueryNetwork::NOT_SET),
    m_networkHasBeenSet(false),
    m_transactionHashHasBeenSet(false),
    m_eventType(QueryTransactionEventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_contractAddressHasBeenSet(false),
    m_tokenIdHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_voutIndex(0),
    m_voutIndexHasBeenSet(false)
{
}

TransactionEvent::TransactionEvent(JsonView jsonValue) : 
    m_network(QueryNetwork::NOT_SET),
    m_networkHasBeenSet(false),
    m_transactionHashHasBeenSet(false),
    m_eventType(QueryTransactionEventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_contractAddressHasBeenSet(false),
    m_tokenIdHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_voutIndex(0),
    m_voutIndexHasBeenSet(false)
{
  *this = jsonValue;
}

TransactionEvent& TransactionEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("network"))
  {
    m_network = QueryNetworkMapper::GetQueryNetworkForName(jsonValue.GetString("network"));

    m_networkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transactionHash"))
  {
    m_transactionHash = jsonValue.GetString("transactionHash");

    m_transactionHashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = QueryTransactionEventTypeMapper::GetQueryTransactionEventTypeForName(jsonValue.GetString("eventType"));

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("from"))
  {
    m_from = jsonValue.GetString("from");

    m_fromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("to"))
  {
    m_to = jsonValue.GetString("to");

    m_toHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contractAddress"))
  {
    m_contractAddress = jsonValue.GetString("contractAddress");

    m_contractAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tokenId"))
  {
    m_tokenId = jsonValue.GetString("tokenId");

    m_tokenIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transactionId"))
  {
    m_transactionId = jsonValue.GetString("transactionId");

    m_transactionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("voutIndex"))
  {
    m_voutIndex = jsonValue.GetInteger("voutIndex");

    m_voutIndexHasBeenSet = true;
  }

  return *this;
}

JsonValue TransactionEvent::Jsonize() const
{
  JsonValue payload;

  if(m_networkHasBeenSet)
  {
   payload.WithString("network", QueryNetworkMapper::GetNameForQueryNetwork(m_network));
  }

  if(m_transactionHashHasBeenSet)
  {
   payload.WithString("transactionHash", m_transactionHash);

  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", QueryTransactionEventTypeMapper::GetNameForQueryTransactionEventType(m_eventType));
  }

  if(m_fromHasBeenSet)
  {
   payload.WithString("from", m_from);

  }

  if(m_toHasBeenSet)
  {
   payload.WithString("to", m_to);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_contractAddressHasBeenSet)
  {
   payload.WithString("contractAddress", m_contractAddress);

  }

  if(m_tokenIdHasBeenSet)
  {
   payload.WithString("tokenId", m_tokenId);

  }

  if(m_transactionIdHasBeenSet)
  {
   payload.WithString("transactionId", m_transactionId);

  }

  if(m_voutIndexHasBeenSet)
  {
   payload.WithInteger("voutIndex", m_voutIndex);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
