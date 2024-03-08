/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/TransactionOutputItem.h>
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

TransactionOutputItem::TransactionOutputItem() : 
    m_transactionHashHasBeenSet(false),
    m_network(QueryNetwork::NOT_SET),
    m_networkHasBeenSet(false),
    m_transactionTimestampHasBeenSet(false),
    m_confirmationStatus(ConfirmationStatus::NOT_SET),
    m_confirmationStatusHasBeenSet(false)
{
}

TransactionOutputItem::TransactionOutputItem(JsonView jsonValue) : 
    m_transactionHashHasBeenSet(false),
    m_network(QueryNetwork::NOT_SET),
    m_networkHasBeenSet(false),
    m_transactionTimestampHasBeenSet(false),
    m_confirmationStatus(ConfirmationStatus::NOT_SET),
    m_confirmationStatusHasBeenSet(false)
{
  *this = jsonValue;
}

TransactionOutputItem& TransactionOutputItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("transactionHash"))
  {
    m_transactionHash = jsonValue.GetString("transactionHash");

    m_transactionHashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("network"))
  {
    m_network = QueryNetworkMapper::GetQueryNetworkForName(jsonValue.GetString("network"));

    m_networkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transactionTimestamp"))
  {
    m_transactionTimestamp = jsonValue.GetDouble("transactionTimestamp");

    m_transactionTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("confirmationStatus"))
  {
    m_confirmationStatus = ConfirmationStatusMapper::GetConfirmationStatusForName(jsonValue.GetString("confirmationStatus"));

    m_confirmationStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue TransactionOutputItem::Jsonize() const
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

  if(m_transactionTimestampHasBeenSet)
  {
   payload.WithDouble("transactionTimestamp", m_transactionTimestamp.SecondsWithMSPrecision());
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
