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
    AWS_MANAGEDBLOCKCHAINQUERY_API TransactionEvent();
    AWS_MANAGEDBLOCKCHAINQUERY_API TransactionEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API TransactionEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The blockchain network where the transaction occurred.</p>
     */
    inline const QueryNetwork& GetNetwork() const{ return m_network; }

    /**
     * <p>The blockchain network where the transaction occurred.</p>
     */
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }

    /**
     * <p>The blockchain network where the transaction occurred.</p>
     */
    inline void SetNetwork(const QueryNetwork& value) { m_networkHasBeenSet = true; m_network = value; }

    /**
     * <p>The blockchain network where the transaction occurred.</p>
     */
    inline void SetNetwork(QueryNetwork&& value) { m_networkHasBeenSet = true; m_network = std::move(value); }

    /**
     * <p>The blockchain network where the transaction occurred.</p>
     */
    inline TransactionEvent& WithNetwork(const QueryNetwork& value) { SetNetwork(value); return *this;}

    /**
     * <p>The blockchain network where the transaction occurred.</p>
     */
    inline TransactionEvent& WithNetwork(QueryNetwork&& value) { SetNetwork(std::move(value)); return *this;}


    /**
     * <p>The hash of a transaction. It is generated when a transaction is created.</p>
     */
    inline const Aws::String& GetTransactionHash() const{ return m_transactionHash; }

    /**
     * <p>The hash of a transaction. It is generated when a transaction is created.</p>
     */
    inline bool TransactionHashHasBeenSet() const { return m_transactionHashHasBeenSet; }

    /**
     * <p>The hash of a transaction. It is generated when a transaction is created.</p>
     */
    inline void SetTransactionHash(const Aws::String& value) { m_transactionHashHasBeenSet = true; m_transactionHash = value; }

    /**
     * <p>The hash of a transaction. It is generated when a transaction is created.</p>
     */
    inline void SetTransactionHash(Aws::String&& value) { m_transactionHashHasBeenSet = true; m_transactionHash = std::move(value); }

    /**
     * <p>The hash of a transaction. It is generated when a transaction is created.</p>
     */
    inline void SetTransactionHash(const char* value) { m_transactionHashHasBeenSet = true; m_transactionHash.assign(value); }

    /**
     * <p>The hash of a transaction. It is generated when a transaction is created.</p>
     */
    inline TransactionEvent& WithTransactionHash(const Aws::String& value) { SetTransactionHash(value); return *this;}

    /**
     * <p>The hash of a transaction. It is generated when a transaction is created.</p>
     */
    inline TransactionEvent& WithTransactionHash(Aws::String&& value) { SetTransactionHash(std::move(value)); return *this;}

    /**
     * <p>The hash of a transaction. It is generated when a transaction is created.</p>
     */
    inline TransactionEvent& WithTransactionHash(const char* value) { SetTransactionHash(value); return *this;}


    /**
     * <p>The type of transaction event.</p>
     */
    inline const QueryTransactionEventType& GetEventType() const{ return m_eventType; }

    /**
     * <p>The type of transaction event.</p>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p>The type of transaction event.</p>
     */
    inline void SetEventType(const QueryTransactionEventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The type of transaction event.</p>
     */
    inline void SetEventType(QueryTransactionEventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>The type of transaction event.</p>
     */
    inline TransactionEvent& WithEventType(const QueryTransactionEventType& value) { SetEventType(value); return *this;}

    /**
     * <p>The type of transaction event.</p>
     */
    inline TransactionEvent& WithEventType(QueryTransactionEventType&& value) { SetEventType(std::move(value)); return *this;}


    /**
     * <p>The wallet address initiating the transaction. It can either be a public key
     * or a contract.</p>
     */
    inline const Aws::String& GetFrom() const{ return m_from; }

    /**
     * <p>The wallet address initiating the transaction. It can either be a public key
     * or a contract.</p>
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    /**
     * <p>The wallet address initiating the transaction. It can either be a public key
     * or a contract.</p>
     */
    inline void SetFrom(const Aws::String& value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>The wallet address initiating the transaction. It can either be a public key
     * or a contract.</p>
     */
    inline void SetFrom(Aws::String&& value) { m_fromHasBeenSet = true; m_from = std::move(value); }

    /**
     * <p>The wallet address initiating the transaction. It can either be a public key
     * or a contract.</p>
     */
    inline void SetFrom(const char* value) { m_fromHasBeenSet = true; m_from.assign(value); }

    /**
     * <p>The wallet address initiating the transaction. It can either be a public key
     * or a contract.</p>
     */
    inline TransactionEvent& WithFrom(const Aws::String& value) { SetFrom(value); return *this;}

    /**
     * <p>The wallet address initiating the transaction. It can either be a public key
     * or a contract.</p>
     */
    inline TransactionEvent& WithFrom(Aws::String&& value) { SetFrom(std::move(value)); return *this;}

    /**
     * <p>The wallet address initiating the transaction. It can either be a public key
     * or a contract.</p>
     */
    inline TransactionEvent& WithFrom(const char* value) { SetFrom(value); return *this;}


    /**
     * <p>The wallet address receiving the transaction. It can either be a public key
     * or a contract.</p>
     */
    inline const Aws::String& GetTo() const{ return m_to; }

    /**
     * <p>The wallet address receiving the transaction. It can either be a public key
     * or a contract.</p>
     */
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }

    /**
     * <p>The wallet address receiving the transaction. It can either be a public key
     * or a contract.</p>
     */
    inline void SetTo(const Aws::String& value) { m_toHasBeenSet = true; m_to = value; }

    /**
     * <p>The wallet address receiving the transaction. It can either be a public key
     * or a contract.</p>
     */
    inline void SetTo(Aws::String&& value) { m_toHasBeenSet = true; m_to = std::move(value); }

    /**
     * <p>The wallet address receiving the transaction. It can either be a public key
     * or a contract.</p>
     */
    inline void SetTo(const char* value) { m_toHasBeenSet = true; m_to.assign(value); }

    /**
     * <p>The wallet address receiving the transaction. It can either be a public key
     * or a contract.</p>
     */
    inline TransactionEvent& WithTo(const Aws::String& value) { SetTo(value); return *this;}

    /**
     * <p>The wallet address receiving the transaction. It can either be a public key
     * or a contract.</p>
     */
    inline TransactionEvent& WithTo(Aws::String&& value) { SetTo(std::move(value)); return *this;}

    /**
     * <p>The wallet address receiving the transaction. It can either be a public key
     * or a contract.</p>
     */
    inline TransactionEvent& WithTo(const char* value) { SetTo(value); return *this;}


    /**
     * <p>The value that was transacted.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value that was transacted.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value that was transacted.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value that was transacted.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value that was transacted.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value that was transacted.</p>
     */
    inline TransactionEvent& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value that was transacted.</p>
     */
    inline TransactionEvent& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value that was transacted.</p>
     */
    inline TransactionEvent& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The blockchain address for the contract</p>
     */
    inline const Aws::String& GetContractAddress() const{ return m_contractAddress; }

    /**
     * <p>The blockchain address for the contract</p>
     */
    inline bool ContractAddressHasBeenSet() const { return m_contractAddressHasBeenSet; }

    /**
     * <p>The blockchain address for the contract</p>
     */
    inline void SetContractAddress(const Aws::String& value) { m_contractAddressHasBeenSet = true; m_contractAddress = value; }

    /**
     * <p>The blockchain address for the contract</p>
     */
    inline void SetContractAddress(Aws::String&& value) { m_contractAddressHasBeenSet = true; m_contractAddress = std::move(value); }

    /**
     * <p>The blockchain address for the contract</p>
     */
    inline void SetContractAddress(const char* value) { m_contractAddressHasBeenSet = true; m_contractAddress.assign(value); }

    /**
     * <p>The blockchain address for the contract</p>
     */
    inline TransactionEvent& WithContractAddress(const Aws::String& value) { SetContractAddress(value); return *this;}

    /**
     * <p>The blockchain address for the contract</p>
     */
    inline TransactionEvent& WithContractAddress(Aws::String&& value) { SetContractAddress(std::move(value)); return *this;}

    /**
     * <p>The blockchain address for the contract</p>
     */
    inline TransactionEvent& WithContractAddress(const char* value) { SetContractAddress(value); return *this;}


    /**
     * <p>The unique identifier for the token involved in the transaction.</p>
     */
    inline const Aws::String& GetTokenId() const{ return m_tokenId; }

    /**
     * <p>The unique identifier for the token involved in the transaction.</p>
     */
    inline bool TokenIdHasBeenSet() const { return m_tokenIdHasBeenSet; }

    /**
     * <p>The unique identifier for the token involved in the transaction.</p>
     */
    inline void SetTokenId(const Aws::String& value) { m_tokenIdHasBeenSet = true; m_tokenId = value; }

    /**
     * <p>The unique identifier for the token involved in the transaction.</p>
     */
    inline void SetTokenId(Aws::String&& value) { m_tokenIdHasBeenSet = true; m_tokenId = std::move(value); }

    /**
     * <p>The unique identifier for the token involved in the transaction.</p>
     */
    inline void SetTokenId(const char* value) { m_tokenIdHasBeenSet = true; m_tokenId.assign(value); }

    /**
     * <p>The unique identifier for the token involved in the transaction.</p>
     */
    inline TransactionEvent& WithTokenId(const Aws::String& value) { SetTokenId(value); return *this;}

    /**
     * <p>The unique identifier for the token involved in the transaction.</p>
     */
    inline TransactionEvent& WithTokenId(Aws::String&& value) { SetTokenId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the token involved in the transaction.</p>
     */
    inline TransactionEvent& WithTokenId(const char* value) { SetTokenId(value); return *this;}


    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>
     */
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }

    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }

    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>
     */
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }

    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>
     */
    inline TransactionEvent& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>
     */
    inline TransactionEvent& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>
     */
    inline TransactionEvent& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}


    /**
     * <p>The position of the transaction output in the transaction output list.</p>
     */
    inline int GetVoutIndex() const{ return m_voutIndex; }

    /**
     * <p>The position of the transaction output in the transaction output list.</p>
     */
    inline bool VoutIndexHasBeenSet() const { return m_voutIndexHasBeenSet; }

    /**
     * <p>The position of the transaction output in the transaction output list.</p>
     */
    inline void SetVoutIndex(int value) { m_voutIndexHasBeenSet = true; m_voutIndex = value; }

    /**
     * <p>The position of the transaction output in the transaction output list.</p>
     */
    inline TransactionEvent& WithVoutIndex(int value) { SetVoutIndex(value); return *this;}


    /**
     * <p>Specifies if the transaction output is spent or unspent. This is only
     * returned for BITCOIN_VOUT event types.</p>  <p>This is only returned for
     * <code>BITCOIN_VOUT</code> event types.</p> 
     */
    inline bool GetVoutSpent() const{ return m_voutSpent; }

    /**
     * <p>Specifies if the transaction output is spent or unspent. This is only
     * returned for BITCOIN_VOUT event types.</p>  <p>This is only returned for
     * <code>BITCOIN_VOUT</code> event types.</p> 
     */
    inline bool VoutSpentHasBeenSet() const { return m_voutSpentHasBeenSet; }

    /**
     * <p>Specifies if the transaction output is spent or unspent. This is only
     * returned for BITCOIN_VOUT event types.</p>  <p>This is only returned for
     * <code>BITCOIN_VOUT</code> event types.</p> 
     */
    inline void SetVoutSpent(bool value) { m_voutSpentHasBeenSet = true; m_voutSpent = value; }

    /**
     * <p>Specifies if the transaction output is spent or unspent. This is only
     * returned for BITCOIN_VOUT event types.</p>  <p>This is only returned for
     * <code>BITCOIN_VOUT</code> event types.</p> 
     */
    inline TransactionEvent& WithVoutSpent(bool value) { SetVoutSpent(value); return *this;}


    /**
     * <p>The transactionId that <i>created</i> the spent transaction output.</p>
     *  <p>This is only returned for <code>BITCOIN_VIN</code> event types.</p>
     * 
     */
    inline const Aws::String& GetSpentVoutTransactionId() const{ return m_spentVoutTransactionId; }

    /**
     * <p>The transactionId that <i>created</i> the spent transaction output.</p>
     *  <p>This is only returned for <code>BITCOIN_VIN</code> event types.</p>
     * 
     */
    inline bool SpentVoutTransactionIdHasBeenSet() const { return m_spentVoutTransactionIdHasBeenSet; }

    /**
     * <p>The transactionId that <i>created</i> the spent transaction output.</p>
     *  <p>This is only returned for <code>BITCOIN_VIN</code> event types.</p>
     * 
     */
    inline void SetSpentVoutTransactionId(const Aws::String& value) { m_spentVoutTransactionIdHasBeenSet = true; m_spentVoutTransactionId = value; }

    /**
     * <p>The transactionId that <i>created</i> the spent transaction output.</p>
     *  <p>This is only returned for <code>BITCOIN_VIN</code> event types.</p>
     * 
     */
    inline void SetSpentVoutTransactionId(Aws::String&& value) { m_spentVoutTransactionIdHasBeenSet = true; m_spentVoutTransactionId = std::move(value); }

    /**
     * <p>The transactionId that <i>created</i> the spent transaction output.</p>
     *  <p>This is only returned for <code>BITCOIN_VIN</code> event types.</p>
     * 
     */
    inline void SetSpentVoutTransactionId(const char* value) { m_spentVoutTransactionIdHasBeenSet = true; m_spentVoutTransactionId.assign(value); }

    /**
     * <p>The transactionId that <i>created</i> the spent transaction output.</p>
     *  <p>This is only returned for <code>BITCOIN_VIN</code> event types.</p>
     * 
     */
    inline TransactionEvent& WithSpentVoutTransactionId(const Aws::String& value) { SetSpentVoutTransactionId(value); return *this;}

    /**
     * <p>The transactionId that <i>created</i> the spent transaction output.</p>
     *  <p>This is only returned for <code>BITCOIN_VIN</code> event types.</p>
     * 
     */
    inline TransactionEvent& WithSpentVoutTransactionId(Aws::String&& value) { SetSpentVoutTransactionId(std::move(value)); return *this;}

    /**
     * <p>The transactionId that <i>created</i> the spent transaction output.</p>
     *  <p>This is only returned for <code>BITCOIN_VIN</code> event types.</p>
     * 
     */
    inline TransactionEvent& WithSpentVoutTransactionId(const char* value) { SetSpentVoutTransactionId(value); return *this;}


    /**
     * <p>The transactionHash that <i>created</i> the spent transaction output.</p>
     *  <p>This is only returned for <code>BITCOIN_VIN</code> event types.</p>
     * 
     */
    inline const Aws::String& GetSpentVoutTransactionHash() const{ return m_spentVoutTransactionHash; }

    /**
     * <p>The transactionHash that <i>created</i> the spent transaction output.</p>
     *  <p>This is only returned for <code>BITCOIN_VIN</code> event types.</p>
     * 
     */
    inline bool SpentVoutTransactionHashHasBeenSet() const { return m_spentVoutTransactionHashHasBeenSet; }

    /**
     * <p>The transactionHash that <i>created</i> the spent transaction output.</p>
     *  <p>This is only returned for <code>BITCOIN_VIN</code> event types.</p>
     * 
     */
    inline void SetSpentVoutTransactionHash(const Aws::String& value) { m_spentVoutTransactionHashHasBeenSet = true; m_spentVoutTransactionHash = value; }

    /**
     * <p>The transactionHash that <i>created</i> the spent transaction output.</p>
     *  <p>This is only returned for <code>BITCOIN_VIN</code> event types.</p>
     * 
     */
    inline void SetSpentVoutTransactionHash(Aws::String&& value) { m_spentVoutTransactionHashHasBeenSet = true; m_spentVoutTransactionHash = std::move(value); }

    /**
     * <p>The transactionHash that <i>created</i> the spent transaction output.</p>
     *  <p>This is only returned for <code>BITCOIN_VIN</code> event types.</p>
     * 
     */
    inline void SetSpentVoutTransactionHash(const char* value) { m_spentVoutTransactionHashHasBeenSet = true; m_spentVoutTransactionHash.assign(value); }

    /**
     * <p>The transactionHash that <i>created</i> the spent transaction output.</p>
     *  <p>This is only returned for <code>BITCOIN_VIN</code> event types.</p>
     * 
     */
    inline TransactionEvent& WithSpentVoutTransactionHash(const Aws::String& value) { SetSpentVoutTransactionHash(value); return *this;}

    /**
     * <p>The transactionHash that <i>created</i> the spent transaction output.</p>
     *  <p>This is only returned for <code>BITCOIN_VIN</code> event types.</p>
     * 
     */
    inline TransactionEvent& WithSpentVoutTransactionHash(Aws::String&& value) { SetSpentVoutTransactionHash(std::move(value)); return *this;}

    /**
     * <p>The transactionHash that <i>created</i> the spent transaction output.</p>
     *  <p>This is only returned for <code>BITCOIN_VIN</code> event types.</p>
     * 
     */
    inline TransactionEvent& WithSpentVoutTransactionHash(const char* value) { SetSpentVoutTransactionHash(value); return *this;}


    /**
     * <p>The position of the spent transaction output in the output list of the
     * <i>creating transaction</i>.</p>  <p>This is only returned for
     * <code>BITCOIN_VIN</code> event types.</p> 
     */
    inline int GetSpentVoutIndex() const{ return m_spentVoutIndex; }

    /**
     * <p>The position of the spent transaction output in the output list of the
     * <i>creating transaction</i>.</p>  <p>This is only returned for
     * <code>BITCOIN_VIN</code> event types.</p> 
     */
    inline bool SpentVoutIndexHasBeenSet() const { return m_spentVoutIndexHasBeenSet; }

    /**
     * <p>The position of the spent transaction output in the output list of the
     * <i>creating transaction</i>.</p>  <p>This is only returned for
     * <code>BITCOIN_VIN</code> event types.</p> 
     */
    inline void SetSpentVoutIndex(int value) { m_spentVoutIndexHasBeenSet = true; m_spentVoutIndex = value; }

    /**
     * <p>The position of the spent transaction output in the output list of the
     * <i>creating transaction</i>.</p>  <p>This is only returned for
     * <code>BITCOIN_VIN</code> event types.</p> 
     */
    inline TransactionEvent& WithSpentVoutIndex(int value) { SetSpentVoutIndex(value); return *this;}


    
    inline const BlockchainInstant& GetBlockchainInstant() const{ return m_blockchainInstant; }

    
    inline bool BlockchainInstantHasBeenSet() const { return m_blockchainInstantHasBeenSet; }

    
    inline void SetBlockchainInstant(const BlockchainInstant& value) { m_blockchainInstantHasBeenSet = true; m_blockchainInstant = value; }

    
    inline void SetBlockchainInstant(BlockchainInstant&& value) { m_blockchainInstantHasBeenSet = true; m_blockchainInstant = std::move(value); }

    
    inline TransactionEvent& WithBlockchainInstant(const BlockchainInstant& value) { SetBlockchainInstant(value); return *this;}

    
    inline TransactionEvent& WithBlockchainInstant(BlockchainInstant&& value) { SetBlockchainInstant(std::move(value)); return *this;}


    /**
     * <p>This container specifies whether the transaction has reached Finality.</p>
     */
    inline const ConfirmationStatus& GetConfirmationStatus() const{ return m_confirmationStatus; }

    /**
     * <p>This container specifies whether the transaction has reached Finality.</p>
     */
    inline bool ConfirmationStatusHasBeenSet() const { return m_confirmationStatusHasBeenSet; }

    /**
     * <p>This container specifies whether the transaction has reached Finality.</p>
     */
    inline void SetConfirmationStatus(const ConfirmationStatus& value) { m_confirmationStatusHasBeenSet = true; m_confirmationStatus = value; }

    /**
     * <p>This container specifies whether the transaction has reached Finality.</p>
     */
    inline void SetConfirmationStatus(ConfirmationStatus&& value) { m_confirmationStatusHasBeenSet = true; m_confirmationStatus = std::move(value); }

    /**
     * <p>This container specifies whether the transaction has reached Finality.</p>
     */
    inline TransactionEvent& WithConfirmationStatus(const ConfirmationStatus& value) { SetConfirmationStatus(value); return *this;}

    /**
     * <p>This container specifies whether the transaction has reached Finality.</p>
     */
    inline TransactionEvent& WithConfirmationStatus(ConfirmationStatus&& value) { SetConfirmationStatus(std::move(value)); return *this;}

  private:

    QueryNetwork m_network;
    bool m_networkHasBeenSet = false;

    Aws::String m_transactionHash;
    bool m_transactionHashHasBeenSet = false;

    QueryTransactionEventType m_eventType;
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

    int m_voutIndex;
    bool m_voutIndexHasBeenSet = false;

    bool m_voutSpent;
    bool m_voutSpentHasBeenSet = false;

    Aws::String m_spentVoutTransactionId;
    bool m_spentVoutTransactionIdHasBeenSet = false;

    Aws::String m_spentVoutTransactionHash;
    bool m_spentVoutTransactionHashHasBeenSet = false;

    int m_spentVoutIndex;
    bool m_spentVoutIndexHasBeenSet = false;

    BlockchainInstant m_blockchainInstant;
    bool m_blockchainInstantHasBeenSet = false;

    ConfirmationStatus m_confirmationStatus;
    bool m_confirmationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
