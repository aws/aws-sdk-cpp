/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/model/QueryNetwork.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain-query/model/QueryTransactionEventType.h>
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
     * <p>The hash of the transaction. It is generated whenever a transaction is
     * verified and added to the blockchain.</p>
     */
    inline const Aws::String& GetTransactionHash() const{ return m_transactionHash; }

    /**
     * <p>The hash of the transaction. It is generated whenever a transaction is
     * verified and added to the blockchain.</p>
     */
    inline bool TransactionHashHasBeenSet() const { return m_transactionHashHasBeenSet; }

    /**
     * <p>The hash of the transaction. It is generated whenever a transaction is
     * verified and added to the blockchain.</p>
     */
    inline void SetTransactionHash(const Aws::String& value) { m_transactionHashHasBeenSet = true; m_transactionHash = value; }

    /**
     * <p>The hash of the transaction. It is generated whenever a transaction is
     * verified and added to the blockchain.</p>
     */
    inline void SetTransactionHash(Aws::String&& value) { m_transactionHashHasBeenSet = true; m_transactionHash = std::move(value); }

    /**
     * <p>The hash of the transaction. It is generated whenever a transaction is
     * verified and added to the blockchain.</p>
     */
    inline void SetTransactionHash(const char* value) { m_transactionHashHasBeenSet = true; m_transactionHash.assign(value); }

    /**
     * <p>The hash of the transaction. It is generated whenever a transaction is
     * verified and added to the blockchain.</p>
     */
    inline TransactionEvent& WithTransactionHash(const Aws::String& value) { SetTransactionHash(value); return *this;}

    /**
     * <p>The hash of the transaction. It is generated whenever a transaction is
     * verified and added to the blockchain.</p>
     */
    inline TransactionEvent& WithTransactionHash(Aws::String&& value) { SetTransactionHash(std::move(value)); return *this;}

    /**
     * <p>The hash of the transaction. It is generated whenever a transaction is
     * verified and added to the blockchain.</p>
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
     * <p>The blockchain address. for the contract</p>
     */
    inline const Aws::String& GetContractAddress() const{ return m_contractAddress; }

    /**
     * <p>The blockchain address. for the contract</p>
     */
    inline bool ContractAddressHasBeenSet() const { return m_contractAddressHasBeenSet; }

    /**
     * <p>The blockchain address. for the contract</p>
     */
    inline void SetContractAddress(const Aws::String& value) { m_contractAddressHasBeenSet = true; m_contractAddress = value; }

    /**
     * <p>The blockchain address. for the contract</p>
     */
    inline void SetContractAddress(Aws::String&& value) { m_contractAddressHasBeenSet = true; m_contractAddress = std::move(value); }

    /**
     * <p>The blockchain address. for the contract</p>
     */
    inline void SetContractAddress(const char* value) { m_contractAddressHasBeenSet = true; m_contractAddress.assign(value); }

    /**
     * <p>The blockchain address. for the contract</p>
     */
    inline TransactionEvent& WithContractAddress(const Aws::String& value) { SetContractAddress(value); return *this;}

    /**
     * <p>The blockchain address. for the contract</p>
     */
    inline TransactionEvent& WithContractAddress(Aws::String&& value) { SetContractAddress(std::move(value)); return *this;}

    /**
     * <p>The blockchain address. for the contract</p>
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
     * <p>The unique identifier of the transaction. It is generated whenever a
     * transaction is verified and added to the blockchain.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The unique identifier of the transaction. It is generated whenever a
     * transaction is verified and added to the blockchain.</p>
     */
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }

    /**
     * <p>The unique identifier of the transaction. It is generated whenever a
     * transaction is verified and added to the blockchain.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

    /**
     * <p>The unique identifier of the transaction. It is generated whenever a
     * transaction is verified and added to the blockchain.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }

    /**
     * <p>The unique identifier of the transaction. It is generated whenever a
     * transaction is verified and added to the blockchain.</p>
     */
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }

    /**
     * <p>The unique identifier of the transaction. It is generated whenever a
     * transaction is verified and added to the blockchain.</p>
     */
    inline TransactionEvent& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The unique identifier of the transaction. It is generated whenever a
     * transaction is verified and added to the blockchain.</p>
     */
    inline TransactionEvent& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the transaction. It is generated whenever a
     * transaction is verified and added to the blockchain.</p>
     */
    inline TransactionEvent& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}


    /**
     * <p>The position of the vout in the transaction output list.</p>
     */
    inline int GetVoutIndex() const{ return m_voutIndex; }

    /**
     * <p>The position of the vout in the transaction output list.</p>
     */
    inline bool VoutIndexHasBeenSet() const { return m_voutIndexHasBeenSet; }

    /**
     * <p>The position of the vout in the transaction output list.</p>
     */
    inline void SetVoutIndex(int value) { m_voutIndexHasBeenSet = true; m_voutIndex = value; }

    /**
     * <p>The position of the vout in the transaction output list.</p>
     */
    inline TransactionEvent& WithVoutIndex(int value) { SetVoutIndex(value); return *this;}

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
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
