/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/model/QueryNetwork.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain-query/model/QueryTransactionEventType.h>
#include <aws/managedblockchain-query/model/BlockchainInstant.h>
#include <aws/managedblockchain-query/model/ConfirmationStatus.h>
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
   * <p>The container for the properties of a transaction event.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-query-2023-05-04/TransactionEvent">AWS
   * API Reference</a></p>
   */
  class TransactionEvent
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API TransactionEvent() = default;
    AWS_MANAGEDBLOCKCHAINQUERY_API TransactionEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API TransactionEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The blockchain network where the transaction occurred.</p>
     */
    inline QueryNetwork GetNetwork() const { return m_network; }
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
    inline void SetNetwork(QueryNetwork value) { m_networkHasBeenSet = true; m_network = value; }
    inline TransactionEvent& WithNetwork(QueryNetwork value) { SetNetwork(value); return *this;}
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
    TransactionEvent& WithTransactionHash(TransactionHashT&& value) { SetTransactionHash(std::forward<TransactionHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of transaction event.</p>
     */
    inline QueryTransactionEventType GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(QueryTransactionEventType value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline TransactionEvent& WithEventType(QueryTransactionEventType value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The wallet address initiating the transaction. It can either be a public key
     * or a contract.</p>
     */
    inline const Aws::String& GetFrom() const { return m_from; }
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
    template<typename FromT = Aws::String>
    void SetFrom(FromT&& value) { m_fromHasBeenSet = true; m_from = std::forward<FromT>(value); }
    template<typename FromT = Aws::String>
    TransactionEvent& WithFrom(FromT&& value) { SetFrom(std::forward<FromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The wallet address receiving the transaction. It can either be a public key
     * or a contract.</p>
     */
    inline const Aws::String& GetTo() const { return m_to; }
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }
    template<typename ToT = Aws::String>
    void SetTo(ToT&& value) { m_toHasBeenSet = true; m_to = std::forward<ToT>(value); }
    template<typename ToT = Aws::String>
    TransactionEvent& WithTo(ToT&& value) { SetTo(std::forward<ToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that was transacted.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    TransactionEvent& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blockchain address for the contract</p>
     */
    inline const Aws::String& GetContractAddress() const { return m_contractAddress; }
    inline bool ContractAddressHasBeenSet() const { return m_contractAddressHasBeenSet; }
    template<typename ContractAddressT = Aws::String>
    void SetContractAddress(ContractAddressT&& value) { m_contractAddressHasBeenSet = true; m_contractAddress = std::forward<ContractAddressT>(value); }
    template<typename ContractAddressT = Aws::String>
    TransactionEvent& WithContractAddress(ContractAddressT&& value) { SetContractAddress(std::forward<ContractAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the token involved in the transaction.</p>
     */
    inline const Aws::String& GetTokenId() const { return m_tokenId; }
    inline bool TokenIdHasBeenSet() const { return m_tokenIdHasBeenSet; }
    template<typename TokenIdT = Aws::String>
    void SetTokenId(TokenIdT&& value) { m_tokenIdHasBeenSet = true; m_tokenId = std::forward<TokenIdT>(value); }
    template<typename TokenIdT = Aws::String>
    TransactionEvent& WithTokenId(TokenIdT&& value) { SetTokenId(std::forward<TokenIdT>(value)); return *this;}
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
    TransactionEvent& WithTransactionId(TransactionIdT&& value) { SetTransactionId(std::forward<TransactionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position of the transaction output in the transaction output list.</p>
     */
    inline int GetVoutIndex() const { return m_voutIndex; }
    inline bool VoutIndexHasBeenSet() const { return m_voutIndexHasBeenSet; }
    inline void SetVoutIndex(int value) { m_voutIndexHasBeenSet = true; m_voutIndex = value; }
    inline TransactionEvent& WithVoutIndex(int value) { SetVoutIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the transaction output is spent or unspent. This is only
     * returned for BITCOIN_VOUT event types.</p>  <p>This is only returned for
     * <code>BITCOIN_VOUT</code> event types.</p> 
     */
    inline bool GetVoutSpent() const { return m_voutSpent; }
    inline bool VoutSpentHasBeenSet() const { return m_voutSpentHasBeenSet; }
    inline void SetVoutSpent(bool value) { m_voutSpentHasBeenSet = true; m_voutSpent = value; }
    inline TransactionEvent& WithVoutSpent(bool value) { SetVoutSpent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transactionId that <i>created</i> the spent transaction output.</p>
     *  <p>This is only returned for <code>BITCOIN_VIN</code> event types.</p>
     * 
     */
    inline const Aws::String& GetSpentVoutTransactionId() const { return m_spentVoutTransactionId; }
    inline bool SpentVoutTransactionIdHasBeenSet() const { return m_spentVoutTransactionIdHasBeenSet; }
    template<typename SpentVoutTransactionIdT = Aws::String>
    void SetSpentVoutTransactionId(SpentVoutTransactionIdT&& value) { m_spentVoutTransactionIdHasBeenSet = true; m_spentVoutTransactionId = std::forward<SpentVoutTransactionIdT>(value); }
    template<typename SpentVoutTransactionIdT = Aws::String>
    TransactionEvent& WithSpentVoutTransactionId(SpentVoutTransactionIdT&& value) { SetSpentVoutTransactionId(std::forward<SpentVoutTransactionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transactionHash that <i>created</i> the spent transaction output.</p>
     *  <p>This is only returned for <code>BITCOIN_VIN</code> event types.</p>
     * 
     */
    inline const Aws::String& GetSpentVoutTransactionHash() const { return m_spentVoutTransactionHash; }
    inline bool SpentVoutTransactionHashHasBeenSet() const { return m_spentVoutTransactionHashHasBeenSet; }
    template<typename SpentVoutTransactionHashT = Aws::String>
    void SetSpentVoutTransactionHash(SpentVoutTransactionHashT&& value) { m_spentVoutTransactionHashHasBeenSet = true; m_spentVoutTransactionHash = std::forward<SpentVoutTransactionHashT>(value); }
    template<typename SpentVoutTransactionHashT = Aws::String>
    TransactionEvent& WithSpentVoutTransactionHash(SpentVoutTransactionHashT&& value) { SetSpentVoutTransactionHash(std::forward<SpentVoutTransactionHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position of the spent transaction output in the output list of the
     * <i>creating transaction</i>.</p>  <p>This is only returned for
     * <code>BITCOIN_VIN</code> event types.</p> 
     */
    inline int GetSpentVoutIndex() const { return m_spentVoutIndex; }
    inline bool SpentVoutIndexHasBeenSet() const { return m_spentVoutIndexHasBeenSet; }
    inline void SetSpentVoutIndex(int value) { m_spentVoutIndexHasBeenSet = true; m_spentVoutIndex = value; }
    inline TransactionEvent& WithSpentVoutIndex(int value) { SetSpentVoutIndex(value); return *this;}
    ///@}

    ///@{
    
    inline const BlockchainInstant& GetBlockchainInstant() const { return m_blockchainInstant; }
    inline bool BlockchainInstantHasBeenSet() const { return m_blockchainInstantHasBeenSet; }
    template<typename BlockchainInstantT = BlockchainInstant>
    void SetBlockchainInstant(BlockchainInstantT&& value) { m_blockchainInstantHasBeenSet = true; m_blockchainInstant = std::forward<BlockchainInstantT>(value); }
    template<typename BlockchainInstantT = BlockchainInstant>
    TransactionEvent& WithBlockchainInstant(BlockchainInstantT&& value) { SetBlockchainInstant(std::forward<BlockchainInstantT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This container specifies whether the transaction has reached Finality.</p>
     */
    inline ConfirmationStatus GetConfirmationStatus() const { return m_confirmationStatus; }
    inline bool ConfirmationStatusHasBeenSet() const { return m_confirmationStatusHasBeenSet; }
    inline void SetConfirmationStatus(ConfirmationStatus value) { m_confirmationStatusHasBeenSet = true; m_confirmationStatus = value; }
    inline TransactionEvent& WithConfirmationStatus(ConfirmationStatus value) { SetConfirmationStatus(value); return *this;}
    ///@}
  private:

    QueryNetwork m_network{QueryNetwork::NOT_SET};
    bool m_networkHasBeenSet = false;

    Aws::String m_transactionHash;
    bool m_transactionHashHasBeenSet = false;

    QueryTransactionEventType m_eventType{QueryTransactionEventType::NOT_SET};
    bool m_eventTypeHasBeenSet = false;

    Aws::String m_from;
    bool m_fromHasBeenSet = false;

    Aws::String m_to;
    bool m_toHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_contractAddress;
    bool m_contractAddressHasBeenSet = false;

    Aws::String m_tokenId;
    bool m_tokenIdHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    int m_voutIndex{0};
    bool m_voutIndexHasBeenSet = false;

    bool m_voutSpent{false};
    bool m_voutSpentHasBeenSet = false;

    Aws::String m_spentVoutTransactionId;
    bool m_spentVoutTransactionIdHasBeenSet = false;

    Aws::String m_spentVoutTransactionHash;
    bool m_spentVoutTransactionHashHasBeenSet = false;

    int m_spentVoutIndex{0};
    bool m_spentVoutIndexHasBeenSet = false;

    BlockchainInstant m_blockchainInstant;
    bool m_blockchainInstantHasBeenSet = false;

    ConfirmationStatus m_confirmationStatus{ConfirmationStatus::NOT_SET};
    bool m_confirmationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
