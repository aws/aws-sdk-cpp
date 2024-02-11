/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/Transaction.h>
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

Transaction::Transaction() : 
    m_network(QueryNetwork::NOT_SET),
    m_networkHasBeenSet(false),
    m_blockHashHasBeenSet(false),
    m_transactionHashHasBeenSet(false),
    m_blockNumberHasBeenSet(false),
    m_transactionTimestampHasBeenSet(false),
    m_transactionIndex(0),
    m_transactionIndexHasBeenSet(false),
    m_numberOfTransactions(0),
    m_numberOfTransactionsHasBeenSet(false),
    m_toHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_contractAddressHasBeenSet(false),
    m_gasUsedHasBeenSet(false),
    m_cumulativeGasUsedHasBeenSet(false),
    m_effectiveGasPriceHasBeenSet(false),
    m_signatureV(0),
    m_signatureVHasBeenSet(false),
    m_signatureRHasBeenSet(false),
    m_signatureSHasBeenSet(false),
    m_transactionFeeHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_confirmationStatus(ConfirmationStatus::NOT_SET),
    m_confirmationStatusHasBeenSet(false),
    m_executionStatus(ExecutionStatus::NOT_SET),
    m_executionStatusHasBeenSet(false)
{
}

Transaction::Transaction(JsonView jsonValue) : 
    m_network(QueryNetwork::NOT_SET),
    m_networkHasBeenSet(false),
    m_blockHashHasBeenSet(false),
    m_transactionHashHasBeenSet(false),
    m_blockNumberHasBeenSet(false),
    m_transactionTimestampHasBeenSet(false),
    m_transactionIndex(0),
    m_transactionIndexHasBeenSet(false),
    m_numberOfTransactions(0),
    m_numberOfTransactionsHasBeenSet(false),
    m_toHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_contractAddressHasBeenSet(false),
    m_gasUsedHasBeenSet(false),
    m_cumulativeGasUsedHasBeenSet(false),
    m_effectiveGasPriceHasBeenSet(false),
    m_signatureV(0),
    m_signatureVHasBeenSet(false),
    m_signatureRHasBeenSet(false),
    m_signatureSHasBeenSet(false),
    m_transactionFeeHasBeenSet(false),
    m_transactionIdHasBeenSet(false),
    m_confirmationStatus(ConfirmationStatus::NOT_SET),
    m_confirmationStatusHasBeenSet(false),
    m_executionStatus(ExecutionStatus::NOT_SET),
    m_executionStatusHasBeenSet(false)
{
  *this = jsonValue;
}

Transaction& Transaction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("network"))
  {
    m_network = QueryNetworkMapper::GetQueryNetworkForName(jsonValue.GetString("network"));

    m_networkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blockHash"))
  {
    m_blockHash = jsonValue.GetString("blockHash");

    m_blockHashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transactionHash"))
  {
    m_transactionHash = jsonValue.GetString("transactionHash");

    m_transactionHashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blockNumber"))
  {
    m_blockNumber = jsonValue.GetString("blockNumber");

    m_blockNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transactionTimestamp"))
  {
    m_transactionTimestamp = jsonValue.GetDouble("transactionTimestamp");

    m_transactionTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transactionIndex"))
  {
    m_transactionIndex = jsonValue.GetInt64("transactionIndex");

    m_transactionIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfTransactions"))
  {
    m_numberOfTransactions = jsonValue.GetInt64("numberOfTransactions");

    m_numberOfTransactionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("to"))
  {
    m_to = jsonValue.GetString("to");

    m_toHasBeenSet = true;
  }

  if(jsonValue.ValueExists("from"))
  {
    m_from = jsonValue.GetString("from");

    m_fromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contractAddress"))
  {
    m_contractAddress = jsonValue.GetString("contractAddress");

    m_contractAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gasUsed"))
  {
    m_gasUsed = jsonValue.GetString("gasUsed");

    m_gasUsedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cumulativeGasUsed"))
  {
    m_cumulativeGasUsed = jsonValue.GetString("cumulativeGasUsed");

    m_cumulativeGasUsedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("effectiveGasPrice"))
  {
    m_effectiveGasPrice = jsonValue.GetString("effectiveGasPrice");

    m_effectiveGasPriceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signatureV"))
  {
    m_signatureV = jsonValue.GetInteger("signatureV");

    m_signatureVHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signatureR"))
  {
    m_signatureR = jsonValue.GetString("signatureR");

    m_signatureRHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signatureS"))
  {
    m_signatureS = jsonValue.GetString("signatureS");

    m_signatureSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transactionFee"))
  {
    m_transactionFee = jsonValue.GetString("transactionFee");

    m_transactionFeeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transactionId"))
  {
    m_transactionId = jsonValue.GetString("transactionId");

    m_transactionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("confirmationStatus"))
  {
    m_confirmationStatus = ConfirmationStatusMapper::GetConfirmationStatusForName(jsonValue.GetString("confirmationStatus"));

    m_confirmationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionStatus"))
  {
    m_executionStatus = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("executionStatus"));

    m_executionStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue Transaction::Jsonize() const
{
  JsonValue payload;

  if(m_networkHasBeenSet)
  {
   payload.WithString("network", QueryNetworkMapper::GetNameForQueryNetwork(m_network));
  }

  if(m_blockHashHasBeenSet)
  {
   payload.WithString("blockHash", m_blockHash);

  }

  if(m_transactionHashHasBeenSet)
  {
   payload.WithString("transactionHash", m_transactionHash);

  }

  if(m_blockNumberHasBeenSet)
  {
   payload.WithString("blockNumber", m_blockNumber);

  }

  if(m_transactionTimestampHasBeenSet)
  {
   payload.WithDouble("transactionTimestamp", m_transactionTimestamp.SecondsWithMSPrecision());
  }

  if(m_transactionIndexHasBeenSet)
  {
   payload.WithInt64("transactionIndex", m_transactionIndex);

  }

  if(m_numberOfTransactionsHasBeenSet)
  {
   payload.WithInt64("numberOfTransactions", m_numberOfTransactions);

  }

  if(m_toHasBeenSet)
  {
   payload.WithString("to", m_to);

  }

  if(m_fromHasBeenSet)
  {
   payload.WithString("from", m_from);

  }

  if(m_contractAddressHasBeenSet)
  {
   payload.WithString("contractAddress", m_contractAddress);

  }

  if(m_gasUsedHasBeenSet)
  {
   payload.WithString("gasUsed", m_gasUsed);

  }

  if(m_cumulativeGasUsedHasBeenSet)
  {
   payload.WithString("cumulativeGasUsed", m_cumulativeGasUsed);

  }

  if(m_effectiveGasPriceHasBeenSet)
  {
   payload.WithString("effectiveGasPrice", m_effectiveGasPrice);

  }

  if(m_signatureVHasBeenSet)
  {
   payload.WithInteger("signatureV", m_signatureV);

  }

  if(m_signatureRHasBeenSet)
  {
   payload.WithString("signatureR", m_signatureR);

  }

  if(m_signatureSHasBeenSet)
  {
   payload.WithString("signatureS", m_signatureS);

  }

  if(m_transactionFeeHasBeenSet)
  {
   payload.WithString("transactionFee", m_transactionFee);

  }

  if(m_transactionIdHasBeenSet)
  {
   payload.WithString("transactionId", m_transactionId);

  }

  if(m_confirmationStatusHasBeenSet)
  {
   payload.WithString("confirmationStatus", ConfirmationStatusMapper::GetNameForConfirmationStatus(m_confirmationStatus));
  }

  if(m_executionStatusHasBeenSet)
  {
   payload.WithString("executionStatus", ExecutionStatusMapper::GetNameForExecutionStatus(m_executionStatus));
  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
