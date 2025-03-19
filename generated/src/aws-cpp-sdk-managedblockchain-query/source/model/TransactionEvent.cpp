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

TransactionEvent::TransactionEvent(JsonView jsonValue)
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
  if(jsonValue.ValueExists("voutSpent"))
  {
    m_voutSpent = jsonValue.GetBool("voutSpent");
    m_voutSpentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("spentVoutTransactionId"))
  {
    m_spentVoutTransactionId = jsonValue.GetString("spentVoutTransactionId");
    m_spentVoutTransactionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("spentVoutTransactionHash"))
  {
    m_spentVoutTransactionHash = jsonValue.GetString("spentVoutTransactionHash");
    m_spentVoutTransactionHashHasBeenSet = true;
  }
  if(jsonValue.ValueExists("spentVoutIndex"))
  {
    m_spentVoutIndex = jsonValue.GetInteger("spentVoutIndex");
    m_spentVoutIndexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("blockchainInstant"))
  {
    m_blockchainInstant = jsonValue.GetObject("blockchainInstant");
    m_blockchainInstantHasBeenSet = true;
  }
  if(jsonValue.ValueExists("confirmationStatus"))
  {
    m_confirmationStatus = ConfirmationStatusMapper::GetConfirmationStatusForName(jsonValue.GetString("confirmationStatus"));
    m_confirmationStatusHasBeenSet = true;
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

  if(m_voutSpentHasBeenSet)
  {
   payload.WithBool("voutSpent", m_voutSpent);

  }

  if(m_spentVoutTransactionIdHasBeenSet)
  {
   payload.WithString("spentVoutTransactionId", m_spentVoutTransactionId);

  }

  if(m_spentVoutTransactionHashHasBeenSet)
  {
   payload.WithString("spentVoutTransactionHash", m_spentVoutTransactionHash);

  }

  if(m_spentVoutIndexHasBeenSet)
  {
   payload.WithInteger("spentVoutIndex", m_spentVoutIndex);

  }

  if(m_blockchainInstantHasBeenSet)
  {
   payload.WithObject("blockchainInstant", m_blockchainInstant.Jsonize());

  }

  if(m_confirmationStatusHasBeenSet)
  {
   payload.WithString("confirmationStatus", ConfirmationStatusMapper::GetNameForConfirmationStatus(m_confirmationStatus));
  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
