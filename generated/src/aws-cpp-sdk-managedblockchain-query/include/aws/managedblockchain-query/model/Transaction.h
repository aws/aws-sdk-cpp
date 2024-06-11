﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/model/QueryNetwork.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/managedblockchain-query/model/ConfirmationStatus.h>
#include <aws/managedblockchain-query/model/ExecutionStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ManagedBlockchainQuery
{
namespace Model
{

  /**
   * <p>There are two possible types of transactions used for this data type:</p>
   * <ul> <li> <p>A Bitcoin transaction is a movement of BTC from one address to
   * another.</p> </li> <li> <p>An Ethereum transaction refers to an action initiated
   * by an externally owned account, which is an account managed by a human, not a
   * contract. For example, if Bob sends Alice 1 ETH, Bob's account must be debited
   * and Alice's must be credited. This state-changing action occurs within a
   * transaction.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/Transaction">AWS
   * API Reference</a></p>
   */
  class Transaction
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API Transaction();
    AWS_MANAGEDBLOCKCHAINQUERY_API Transaction(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Transaction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The blockchain network where the transaction occurred.</p>
     */
    inline const QueryNetwork& GetNetwork() const{ return m_network; }
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
    inline void SetNetwork(const QueryNetwork& value) { m_networkHasBeenSet = true; m_network = value; }
    inline void SetNetwork(QueryNetwork&& value) { m_networkHasBeenSet = true; m_network = std::move(value); }
    inline Transaction& WithNetwork(const QueryNetwork& value) { SetNetwork(value); return *this;}
    inline Transaction& WithNetwork(QueryNetwork&& value) { SetNetwork(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block hash is a unique identifier for a block. It is a fixed-size string
     * that is calculated by using the information in the block. The block hash is used
     * to verify the integrity of the data in the block.</p>
     */
    inline const Aws::String& GetBlockHash() const{ return m_blockHash; }
    inline bool BlockHashHasBeenSet() const { return m_blockHashHasBeenSet; }
    inline void SetBlockHash(const Aws::String& value) { m_blockHashHasBeenSet = true; m_blockHash = value; }
    inline void SetBlockHash(Aws::String&& value) { m_blockHashHasBeenSet = true; m_blockHash = std::move(value); }
    inline void SetBlockHash(const char* value) { m_blockHashHasBeenSet = true; m_blockHash.assign(value); }
    inline Transaction& WithBlockHash(const Aws::String& value) { SetBlockHash(value); return *this;}
    inline Transaction& WithBlockHash(Aws::String&& value) { SetBlockHash(std::move(value)); return *this;}
    inline Transaction& WithBlockHash(const char* value) { SetBlockHash(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash of a transaction. It is generated when a transaction is created.</p>
     */
    inline const Aws::String& GetTransactionHash() const{ return m_transactionHash; }
    inline bool TransactionHashHasBeenSet() const { return m_transactionHashHasBeenSet; }
    inline void SetTransactionHash(const Aws::String& value) { m_transactionHashHasBeenSet = true; m_transactionHash = value; }
    inline void SetTransactionHash(Aws::String&& value) { m_transactionHashHasBeenSet = true; m_transactionHash = std::move(value); }
    inline void SetTransactionHash(const char* value) { m_transactionHashHasBeenSet = true; m_transactionHash.assign(value); }
    inline Transaction& WithTransactionHash(const Aws::String& value) { SetTransactionHash(value); return *this;}
    inline Transaction& WithTransactionHash(Aws::String&& value) { SetTransactionHash(std::move(value)); return *this;}
    inline Transaction& WithTransactionHash(const char* value) { SetTransactionHash(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block number in which the transaction is recorded.</p>
     */
    inline const Aws::String& GetBlockNumber() const{ return m_blockNumber; }
    inline bool BlockNumberHasBeenSet() const { return m_blockNumberHasBeenSet; }
    inline void SetBlockNumber(const Aws::String& value) { m_blockNumberHasBeenSet = true; m_blockNumber = value; }
    inline void SetBlockNumber(Aws::String&& value) { m_blockNumberHasBeenSet = true; m_blockNumber = std::move(value); }
    inline void SetBlockNumber(const char* value) { m_blockNumberHasBeenSet = true; m_blockNumber.assign(value); }
    inline Transaction& WithBlockNumber(const Aws::String& value) { SetBlockNumber(value); return *this;}
    inline Transaction& WithBlockNumber(Aws::String&& value) { SetBlockNumber(std::move(value)); return *this;}
    inline Transaction& WithBlockNumber(const char* value) { SetBlockNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Timestamp</code> of the transaction. </p>
     */
    inline const Aws::Utils::DateTime& GetTransactionTimestamp() const{ return m_transactionTimestamp; }
    inline bool TransactionTimestampHasBeenSet() const { return m_transactionTimestampHasBeenSet; }
    inline void SetTransactionTimestamp(const Aws::Utils::DateTime& value) { m_transactionTimestampHasBeenSet = true; m_transactionTimestamp = value; }
    inline void SetTransactionTimestamp(Aws::Utils::DateTime&& value) { m_transactionTimestampHasBeenSet = true; m_transactionTimestamp = std::move(value); }
    inline Transaction& WithTransactionTimestamp(const Aws::Utils::DateTime& value) { SetTransactionTimestamp(value); return *this;}
    inline Transaction& WithTransactionTimestamp(Aws::Utils::DateTime&& value) { SetTransactionTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The index of the transaction within a blockchain.</p>
     */
    inline long long GetTransactionIndex() const{ return m_transactionIndex; }
    inline bool TransactionIndexHasBeenSet() const { return m_transactionIndexHasBeenSet; }
    inline void SetTransactionIndex(long long value) { m_transactionIndexHasBeenSet = true; m_transactionIndex = value; }
    inline Transaction& WithTransactionIndex(long long value) { SetTransactionIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of transactions in the block.</p>
     */
    inline long long GetNumberOfTransactions() const{ return m_numberOfTransactions; }
    inline bool NumberOfTransactionsHasBeenSet() const { return m_numberOfTransactionsHasBeenSet; }
    inline void SetNumberOfTransactions(long long value) { m_numberOfTransactionsHasBeenSet = true; m_numberOfTransactions = value; }
    inline Transaction& WithNumberOfTransactions(long long value) { SetNumberOfTransactions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the transaction. It is generated whenever a transaction is
     * verified and added to the blockchain.</p>
     */
    inline const Aws::String& GetTo() const{ return m_to; }
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
    inline void SetTo(const Aws::String& value) { m_toHasBeenSet = true; m_to = value; }
    inline void SetTo(Aws::String&& value) { m_toHasBeenSet = true; m_to = std::move(value); }
    inline void SetTo(const char* value) { m_toHasBeenSet = true; m_to.assign(value); }
    inline Transaction& WithTo(const Aws::String& value) { SetTo(value); return *this;}
    inline Transaction& WithTo(Aws::String&& value) { SetTo(std::move(value)); return *this;}
    inline Transaction& WithTo(const char* value) { SetTo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The initiator of the transaction. It is either in the form a public key or a
     * contract address.</p>
     */
    inline const Aws::String& GetFrom() const{ return m_from; }
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
    inline void SetFrom(const Aws::String& value) { m_fromHasBeenSet = true; m_from = value; }
    inline void SetFrom(Aws::String&& value) { m_fromHasBeenSet = true; m_from = std::move(value); }
    inline void SetFrom(const char* value) { m_fromHasBeenSet = true; m_from.assign(value); }
    inline Transaction& WithFrom(const Aws::String& value) { SetFrom(value); return *this;}
    inline Transaction& WithFrom(Aws::String&& value) { SetFrom(std::move(value)); return *this;}
    inline Transaction& WithFrom(const char* value) { SetFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blockchain address for the contract.</p>
     */
    inline const Aws::String& GetContractAddress() const{ return m_contractAddress; }
    inline bool ContractAddressHasBeenSet() const { return m_contractAddressHasBeenSet; }
    inline void SetContractAddress(const Aws::String& value) { m_contractAddressHasBeenSet = true; m_contractAddress = value; }
    inline void SetContractAddress(Aws::String&& value) { m_contractAddressHasBeenSet = true; m_contractAddress = std::move(value); }
    inline void SetContractAddress(const char* value) { m_contractAddressHasBeenSet = true; m_contractAddress.assign(value); }
    inline Transaction& WithContractAddress(const Aws::String& value) { SetContractAddress(value); return *this;}
    inline Transaction& WithContractAddress(Aws::String&& value) { SetContractAddress(std::move(value)); return *this;}
    inline Transaction& WithContractAddress(const char* value) { SetContractAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of gas used for the transaction.</p>
     */
    inline const Aws::String& GetGasUsed() const{ return m_gasUsed; }
    inline bool GasUsedHasBeenSet() const { return m_gasUsedHasBeenSet; }
    inline void SetGasUsed(const Aws::String& value) { m_gasUsedHasBeenSet = true; m_gasUsed = value; }
    inline void SetGasUsed(Aws::String&& value) { m_gasUsedHasBeenSet = true; m_gasUsed = std::move(value); }
    inline void SetGasUsed(const char* value) { m_gasUsedHasBeenSet = true; m_gasUsed.assign(value); }
    inline Transaction& WithGasUsed(const Aws::String& value) { SetGasUsed(value); return *this;}
    inline Transaction& WithGasUsed(Aws::String&& value) { SetGasUsed(std::move(value)); return *this;}
    inline Transaction& WithGasUsed(const char* value) { SetGasUsed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of gas used up to the specified point in the block.</p>
     */
    inline const Aws::String& GetCumulativeGasUsed() const{ return m_cumulativeGasUsed; }
    inline bool CumulativeGasUsedHasBeenSet() const { return m_cumulativeGasUsedHasBeenSet; }
    inline void SetCumulativeGasUsed(const Aws::String& value) { m_cumulativeGasUsedHasBeenSet = true; m_cumulativeGasUsed = value; }
    inline void SetCumulativeGasUsed(Aws::String&& value) { m_cumulativeGasUsedHasBeenSet = true; m_cumulativeGasUsed = std::move(value); }
    inline void SetCumulativeGasUsed(const char* value) { m_cumulativeGasUsedHasBeenSet = true; m_cumulativeGasUsed.assign(value); }
    inline Transaction& WithCumulativeGasUsed(const Aws::String& value) { SetCumulativeGasUsed(value); return *this;}
    inline Transaction& WithCumulativeGasUsed(Aws::String&& value) { SetCumulativeGasUsed(std::move(value)); return *this;}
    inline Transaction& WithCumulativeGasUsed(const char* value) { SetCumulativeGasUsed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective gas price.</p>
     */
    inline const Aws::String& GetEffectiveGasPrice() const{ return m_effectiveGasPrice; }
    inline bool EffectiveGasPriceHasBeenSet() const { return m_effectiveGasPriceHasBeenSet; }
    inline void SetEffectiveGasPrice(const Aws::String& value) { m_effectiveGasPriceHasBeenSet = true; m_effectiveGasPrice = value; }
    inline void SetEffectiveGasPrice(Aws::String&& value) { m_effectiveGasPriceHasBeenSet = true; m_effectiveGasPrice = std::move(value); }
    inline void SetEffectiveGasPrice(const char* value) { m_effectiveGasPriceHasBeenSet = true; m_effectiveGasPrice.assign(value); }
    inline Transaction& WithEffectiveGasPrice(const Aws::String& value) { SetEffectiveGasPrice(value); return *this;}
    inline Transaction& WithEffectiveGasPrice(Aws::String&& value) { SetEffectiveGasPrice(std::move(value)); return *this;}
    inline Transaction& WithEffectiveGasPrice(const char* value) { SetEffectiveGasPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signature of the transaction. The Z coordinate of a point V.</p>
     */
    inline int GetSignatureV() const{ return m_signatureV; }
    inline bool SignatureVHasBeenSet() const { return m_signatureVHasBeenSet; }
    inline void SetSignatureV(int value) { m_signatureVHasBeenSet = true; m_signatureV = value; }
    inline Transaction& WithSignatureV(int value) { SetSignatureV(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signature of the transaction. The X coordinate of a point R.</p>
     */
    inline const Aws::String& GetSignatureR() const{ return m_signatureR; }
    inline bool SignatureRHasBeenSet() const { return m_signatureRHasBeenSet; }
    inline void SetSignatureR(const Aws::String& value) { m_signatureRHasBeenSet = true; m_signatureR = value; }
    inline void SetSignatureR(Aws::String&& value) { m_signatureRHasBeenSet = true; m_signatureR = std::move(value); }
    inline void SetSignatureR(const char* value) { m_signatureRHasBeenSet = true; m_signatureR.assign(value); }
    inline Transaction& WithSignatureR(const Aws::String& value) { SetSignatureR(value); return *this;}
    inline Transaction& WithSignatureR(Aws::String&& value) { SetSignatureR(std::move(value)); return *this;}
    inline Transaction& WithSignatureR(const char* value) { SetSignatureR(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signature of the transaction. The Y coordinate of a point S.</p>
     */
    inline const Aws::String& GetSignatureS() const{ return m_signatureS; }
    inline bool SignatureSHasBeenSet() const { return m_signatureSHasBeenSet; }
    inline void SetSignatureS(const Aws::String& value) { m_signatureSHasBeenSet = true; m_signatureS = value; }
    inline void SetSignatureS(Aws::String&& value) { m_signatureSHasBeenSet = true; m_signatureS = std::move(value); }
    inline void SetSignatureS(const char* value) { m_signatureSHasBeenSet = true; m_signatureS.assign(value); }
    inline Transaction& WithSignatureS(const Aws::String& value) { SetSignatureS(value); return *this;}
    inline Transaction& WithSignatureS(Aws::String&& value) { SetSignatureS(std::move(value)); return *this;}
    inline Transaction& WithSignatureS(const char* value) { SetSignatureS(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transaction fee.</p>
     */
    inline const Aws::String& GetTransactionFee() const{ return m_transactionFee; }
    inline bool TransactionFeeHasBeenSet() const { return m_transactionFeeHasBeenSet; }
    inline void SetTransactionFee(const Aws::String& value) { m_transactionFeeHasBeenSet = true; m_transactionFee = value; }
    inline void SetTransactionFee(Aws::String&& value) { m_transactionFeeHasBeenSet = true; m_transactionFee = std::move(value); }
    inline void SetTransactionFee(const char* value) { m_transactionFeeHasBeenSet = true; m_transactionFee.assign(value); }
    inline Transaction& WithTransactionFee(const Aws::String& value) { SetTransactionFee(value); return *this;}
    inline Transaction& WithTransactionFee(Aws::String&& value) { SetTransactionFee(std::move(value)); return *this;}
    inline Transaction& WithTransactionFee(const char* value) { SetTransactionFee(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }
    inline Transaction& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}
    inline Transaction& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}
    inline Transaction& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the transaction has reached Finality.</p>
     */
    inline const ConfirmationStatus& GetConfirmationStatus() const{ return m_confirmationStatus; }
    inline bool ConfirmationStatusHasBeenSet() const { return m_confirmationStatusHasBeenSet; }
    inline void SetConfirmationStatus(const ConfirmationStatus& value) { m_confirmationStatusHasBeenSet = true; m_confirmationStatus = value; }
    inline void SetConfirmationStatus(ConfirmationStatus&& value) { m_confirmationStatusHasBeenSet = true; m_confirmationStatus = std::move(value); }
    inline Transaction& WithConfirmationStatus(const ConfirmationStatus& value) { SetConfirmationStatus(value); return *this;}
    inline Transaction& WithConfirmationStatus(ConfirmationStatus&& value) { SetConfirmationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies whether the transaction has succeeded or failed.</p>
     */
    inline const ExecutionStatus& GetExecutionStatus() const{ return m_executionStatus; }
    inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }
    inline void SetExecutionStatus(const ExecutionStatus& value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }
    inline void SetExecutionStatus(ExecutionStatus&& value) { m_executionStatusHasBeenSet = true; m_executionStatus = std::move(value); }
    inline Transaction& WithExecutionStatus(const ExecutionStatus& value) { SetExecutionStatus(value); return *this;}
    inline Transaction& WithExecutionStatus(ExecutionStatus&& value) { SetExecutionStatus(std::move(value)); return *this;}
    ///@}
  private:

    QueryNetwork m_network;
    bool m_networkHasBeenSet = false;

    Aws::String m_blockHash;
    bool m_blockHashHasBeenSet = false;

    Aws::String m_transactionHash;
    bool m_transactionHashHasBeenSet = false;

    Aws::String m_blockNumber;
    bool m_blockNumberHasBeenSet = false;

    Aws::Utils::DateTime m_transactionTimestamp;
    bool m_transactionTimestampHasBeenSet = false;

    long long m_transactionIndex;
    bool m_transactionIndexHasBeenSet = false;

    long long m_numberOfTransactions;
    bool m_numberOfTransactionsHasBeenSet = false;

    Aws::String m_to;
    bool m_toHasBeenSet = false;

    Aws::String m_from;
    bool m_fromHasBeenSet = false;

    Aws::String m_contractAddress;
    bool m_contractAddressHasBeenSet = false;

    Aws::String m_gasUsed;
    bool m_gasUsedHasBeenSet = false;

    Aws::String m_cumulativeGasUsed;
    bool m_cumulativeGasUsedHasBeenSet = false;

    Aws::String m_effectiveGasPrice;
    bool m_effectiveGasPriceHasBeenSet = false;

    int m_signatureV;
    bool m_signatureVHasBeenSet = false;

    Aws::String m_signatureR;
    bool m_signatureRHasBeenSet = false;

    Aws::String m_signatureS;
    bool m_signatureSHasBeenSet = false;

    Aws::String m_transactionFee;
    bool m_transactionFeeHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    ConfirmationStatus m_confirmationStatus;
    bool m_confirmationStatusHasBeenSet = false;

    ExecutionStatus m_executionStatus;
    bool m_executionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
