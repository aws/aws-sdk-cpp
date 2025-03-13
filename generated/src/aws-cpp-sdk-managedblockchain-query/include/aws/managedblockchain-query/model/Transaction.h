/**
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
    AWS_MANAGEDBLOCKCHAINQUERY_API Transaction() = default;
    AWS_MANAGEDBLOCKCHAINQUERY_API Transaction(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Transaction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The blockchain network where the transaction occurred.</p>
     */
    inline QueryNetwork GetNetwork() const { return m_network; }
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
    inline void SetNetwork(QueryNetwork value) { m_networkHasBeenSet = true; m_network = value; }
    inline Transaction& WithNetwork(QueryNetwork value) { SetNetwork(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block hash is a unique identifier for a block. It is a fixed-size string
     * that is calculated by using the information in the block. The block hash is used
     * to verify the integrity of the data in the block.</p>
     */
    inline const Aws::String& GetBlockHash() const { return m_blockHash; }
    inline bool BlockHashHasBeenSet() const { return m_blockHashHasBeenSet; }
    template<typename BlockHashT = Aws::String>
    void SetBlockHash(BlockHashT&& value) { m_blockHashHasBeenSet = true; m_blockHash = std::forward<BlockHashT>(value); }
    template<typename BlockHashT = Aws::String>
    Transaction& WithBlockHash(BlockHashT&& value) { SetBlockHash(std::forward<BlockHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash of a transaction. It is generated when a transaction is created.</p>
     */
    inline const Aws::String& GetTransactionHash() const { return m_transactionHash; }
    inline bool TransactionHashHasBeenSet() const { return m_transactionHashHasBeenSet; }
    template<typename TransactionHashT = Aws::String>
    void SetTransactionHash(TransactionHashT&& value) { m_transactionHashHasBeenSet = true; m_transactionHash = std::forward<TransactionHashT>(value); }
    template<typename TransactionHashT = Aws::String>
    Transaction& WithTransactionHash(TransactionHashT&& value) { SetTransactionHash(std::forward<TransactionHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block number in which the transaction is recorded.</p>
     */
    inline const Aws::String& GetBlockNumber() const { return m_blockNumber; }
    inline bool BlockNumberHasBeenSet() const { return m_blockNumberHasBeenSet; }
    template<typename BlockNumberT = Aws::String>
    void SetBlockNumber(BlockNumberT&& value) { m_blockNumberHasBeenSet = true; m_blockNumber = std::forward<BlockNumberT>(value); }
    template<typename BlockNumberT = Aws::String>
    Transaction& WithBlockNumber(BlockNumberT&& value) { SetBlockNumber(std::forward<BlockNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Timestamp</code> of the transaction. </p>
     */
    inline const Aws::Utils::DateTime& GetTransactionTimestamp() const { return m_transactionTimestamp; }
    inline bool TransactionTimestampHasBeenSet() const { return m_transactionTimestampHasBeenSet; }
    template<typename TransactionTimestampT = Aws::Utils::DateTime>
    void SetTransactionTimestamp(TransactionTimestampT&& value) { m_transactionTimestampHasBeenSet = true; m_transactionTimestamp = std::forward<TransactionTimestampT>(value); }
    template<typename TransactionTimestampT = Aws::Utils::DateTime>
    Transaction& WithTransactionTimestamp(TransactionTimestampT&& value) { SetTransactionTimestamp(std::forward<TransactionTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The index of the transaction within a blockchain.</p>
     */
    inline long long GetTransactionIndex() const { return m_transactionIndex; }
    inline bool TransactionIndexHasBeenSet() const { return m_transactionIndexHasBeenSet; }
    inline void SetTransactionIndex(long long value) { m_transactionIndexHasBeenSet = true; m_transactionIndex = value; }
    inline Transaction& WithTransactionIndex(long long value) { SetTransactionIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of transactions in the block.</p>
     */
    inline long long GetNumberOfTransactions() const { return m_numberOfTransactions; }
    inline bool NumberOfTransactionsHasBeenSet() const { return m_numberOfTransactionsHasBeenSet; }
    inline void SetNumberOfTransactions(long long value) { m_numberOfTransactionsHasBeenSet = true; m_numberOfTransactions = value; }
    inline Transaction& WithNumberOfTransactions(long long value) { SetNumberOfTransactions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the transaction. It is generated whenever a transaction is
     * verified and added to the blockchain.</p>
     */
    inline const Aws::String& GetTo() const { return m_to; }
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
    template<typename ToT = Aws::String>
    void SetTo(ToT&& value) { m_toHasBeenSet = true; m_to = std::forward<ToT>(value); }
    template<typename ToT = Aws::String>
    Transaction& WithTo(ToT&& value) { SetTo(std::forward<ToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The initiator of the transaction. It is either in the form a public key or a
     * contract address.</p>
     */
    inline const Aws::String& GetFrom() const { return m_from; }
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
    template<typename FromT = Aws::String>
    void SetFrom(FromT&& value) { m_fromHasBeenSet = true; m_from = std::forward<FromT>(value); }
    template<typename FromT = Aws::String>
    Transaction& WithFrom(FromT&& value) { SetFrom(std::forward<FromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blockchain address for the contract.</p>
     */
    inline const Aws::String& GetContractAddress() const { return m_contractAddress; }
    inline bool ContractAddressHasBeenSet() const { return m_contractAddressHasBeenSet; }
    template<typename ContractAddressT = Aws::String>
    void SetContractAddress(ContractAddressT&& value) { m_contractAddressHasBeenSet = true; m_contractAddress = std::forward<ContractAddressT>(value); }
    template<typename ContractAddressT = Aws::String>
    Transaction& WithContractAddress(ContractAddressT&& value) { SetContractAddress(std::forward<ContractAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of gas used for the transaction.</p>
     */
    inline const Aws::String& GetGasUsed() const { return m_gasUsed; }
    inline bool GasUsedHasBeenSet() const { return m_gasUsedHasBeenSet; }
    template<typename GasUsedT = Aws::String>
    void SetGasUsed(GasUsedT&& value) { m_gasUsedHasBeenSet = true; m_gasUsed = std::forward<GasUsedT>(value); }
    template<typename GasUsedT = Aws::String>
    Transaction& WithGasUsed(GasUsedT&& value) { SetGasUsed(std::forward<GasUsedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of gas used up to the specified point in the block.</p>
     */
    inline const Aws::String& GetCumulativeGasUsed() const { return m_cumulativeGasUsed; }
    inline bool CumulativeGasUsedHasBeenSet() const { return m_cumulativeGasUsedHasBeenSet; }
    template<typename CumulativeGasUsedT = Aws::String>
    void SetCumulativeGasUsed(CumulativeGasUsedT&& value) { m_cumulativeGasUsedHasBeenSet = true; m_cumulativeGasUsed = std::forward<CumulativeGasUsedT>(value); }
    template<typename CumulativeGasUsedT = Aws::String>
    Transaction& WithCumulativeGasUsed(CumulativeGasUsedT&& value) { SetCumulativeGasUsed(std::forward<CumulativeGasUsedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective gas price.</p>
     */
    inline const Aws::String& GetEffectiveGasPrice() const { return m_effectiveGasPrice; }
    inline bool EffectiveGasPriceHasBeenSet() const { return m_effectiveGasPriceHasBeenSet; }
    template<typename EffectiveGasPriceT = Aws::String>
    void SetEffectiveGasPrice(EffectiveGasPriceT&& value) { m_effectiveGasPriceHasBeenSet = true; m_effectiveGasPrice = std::forward<EffectiveGasPriceT>(value); }
    template<typename EffectiveGasPriceT = Aws::String>
    Transaction& WithEffectiveGasPrice(EffectiveGasPriceT&& value) { SetEffectiveGasPrice(std::forward<EffectiveGasPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signature of the transaction. The Z coordinate of a point V.</p>
     */
    inline int GetSignatureV() const { return m_signatureV; }
    inline bool SignatureVHasBeenSet() const { return m_signatureVHasBeenSet; }
    inline void SetSignatureV(int value) { m_signatureVHasBeenSet = true; m_signatureV = value; }
    inline Transaction& WithSignatureV(int value) { SetSignatureV(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signature of the transaction. The X coordinate of a point R.</p>
     */
    inline const Aws::String& GetSignatureR() const { return m_signatureR; }
    inline bool SignatureRHasBeenSet() const { return m_signatureRHasBeenSet; }
    template<typename SignatureRT = Aws::String>
    void SetSignatureR(SignatureRT&& value) { m_signatureRHasBeenSet = true; m_signatureR = std::forward<SignatureRT>(value); }
    template<typename SignatureRT = Aws::String>
    Transaction& WithSignatureR(SignatureRT&& value) { SetSignatureR(std::forward<SignatureRT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signature of the transaction. The Y coordinate of a point S.</p>
     */
    inline const Aws::String& GetSignatureS() const { return m_signatureS; }
    inline bool SignatureSHasBeenSet() const { return m_signatureSHasBeenSet; }
    template<typename SignatureST = Aws::String>
    void SetSignatureS(SignatureST&& value) { m_signatureSHasBeenSet = true; m_signatureS = std::forward<SignatureST>(value); }
    template<typename SignatureST = Aws::String>
    Transaction& WithSignatureS(SignatureST&& value) { SetSignatureS(std::forward<SignatureST>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transaction fee.</p>
     */
    inline const Aws::String& GetTransactionFee() const { return m_transactionFee; }
    inline bool TransactionFeeHasBeenSet() const { return m_transactionFeeHasBeenSet; }
    template<typename TransactionFeeT = Aws::String>
    void SetTransactionFee(TransactionFeeT&& value) { m_transactionFeeHasBeenSet = true; m_transactionFee = std::forward<TransactionFeeT>(value); }
    template<typename TransactionFeeT = Aws::String>
    Transaction& WithTransactionFee(TransactionFeeT&& value) { SetTransactionFee(std::forward<TransactionFeeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>
     */
    inline const Aws::String& GetTransactionId() const { return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    template<typename TransactionIdT = Aws::String>
    void SetTransactionId(TransactionIdT&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::forward<TransactionIdT>(value); }
    template<typename TransactionIdT = Aws::String>
    Transaction& WithTransactionId(TransactionIdT&& value) { SetTransactionId(std::forward<TransactionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the transaction has reached Finality.</p>
     */
    inline ConfirmationStatus GetConfirmationStatus() const { return m_confirmationStatus; }
    inline bool ConfirmationStatusHasBeenSet() const { return m_confirmationStatusHasBeenSet; }
    inline void SetConfirmationStatus(ConfirmationStatus value) { m_confirmationStatusHasBeenSet = true; m_confirmationStatus = value; }
    inline Transaction& WithConfirmationStatus(ConfirmationStatus value) { SetConfirmationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies whether the transaction has succeeded or failed.</p>
     */
    inline ExecutionStatus GetExecutionStatus() const { return m_executionStatus; }
    inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }
    inline void SetExecutionStatus(ExecutionStatus value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }
    inline Transaction& WithExecutionStatus(ExecutionStatus value) { SetExecutionStatus(value); return *this;}
    ///@}
  private:

    QueryNetwork m_network{QueryNetwork::NOT_SET};
    bool m_networkHasBeenSet = false;

    Aws::String m_blockHash;
    bool m_blockHashHasBeenSet = false;

    Aws::String m_transactionHash;
    bool m_transactionHashHasBeenSet = false;

    Aws::String m_blockNumber;
    bool m_blockNumberHasBeenSet = false;

    Aws::Utils::DateTime m_transactionTimestamp{};
    bool m_transactionTimestampHasBeenSet = false;

    long long m_transactionIndex{0};
    bool m_transactionIndexHasBeenSet = false;

    long long m_numberOfTransactions{0};
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

    int m_signatureV{0};
    bool m_signatureVHasBeenSet = false;

    Aws::String m_signatureR;
    bool m_signatureRHasBeenSet = false;

    Aws::String m_signatureS;
    bool m_signatureSHasBeenSet = false;

    Aws::String m_transactionFee;
    bool m_transactionFeeHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    ConfirmationStatus m_confirmationStatus{ConfirmationStatus::NOT_SET};
    bool m_confirmationStatusHasBeenSet = false;

    ExecutionStatus m_executionStatus{ExecutionStatus::NOT_SET};
    bool m_executionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
