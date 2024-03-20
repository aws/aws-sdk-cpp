/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain-query/model/QueryNetwork.h>
#include <utility>

namespace Aws
{
namespace ManagedBlockchainQuery
{
namespace Model
{

  /**
   */
  class GetTransactionRequest : public ManagedBlockchainQueryRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API GetTransactionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTransaction"; }

    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String SerializePayload() const override;


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
    inline GetTransactionRequest& WithTransactionHash(const Aws::String& value) { SetTransactionHash(value); return *this;}

    /**
     * <p>The hash of a transaction. It is generated when a transaction is created.</p>
     */
    inline GetTransactionRequest& WithTransactionHash(Aws::String&& value) { SetTransactionHash(std::move(value)); return *this;}

    /**
     * <p>The hash of a transaction. It is generated when a transaction is created.</p>
     */
    inline GetTransactionRequest& WithTransactionHash(const char* value) { SetTransactionHash(value); return *this;}


    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>  <p> <code>transactionId</code> is only supported on the
     * Bitcoin networks.</p> 
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>  <p> <code>transactionId</code> is only supported on the
     * Bitcoin networks.</p> 
     */
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }

    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>  <p> <code>transactionId</code> is only supported on the
     * Bitcoin networks.</p> 
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>  <p> <code>transactionId</code> is only supported on the
     * Bitcoin networks.</p> 
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }

    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>  <p> <code>transactionId</code> is only supported on the
     * Bitcoin networks.</p> 
     */
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }

    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>  <p> <code>transactionId</code> is only supported on the
     * Bitcoin networks.</p> 
     */
    inline GetTransactionRequest& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>  <p> <code>transactionId</code> is only supported on the
     * Bitcoin networks.</p> 
     */
    inline GetTransactionRequest& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>  <p> <code>transactionId</code> is only supported on the
     * Bitcoin networks.</p> 
     */
    inline GetTransactionRequest& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}


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
    inline GetTransactionRequest& WithNetwork(const QueryNetwork& value) { SetNetwork(value); return *this;}

    /**
     * <p>The blockchain network where the transaction occurred.</p>
     */
    inline GetTransactionRequest& WithNetwork(QueryNetwork&& value) { SetNetwork(std::move(value)); return *this;}

  private:

    Aws::String m_transactionHash;
    bool m_transactionHashHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    QueryNetwork m_network;
    bool m_networkHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
