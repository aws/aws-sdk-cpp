﻿/**
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
  class ListTransactionEventsRequest : public ManagedBlockchainQueryRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API ListTransactionEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTransactionEvents"; }

    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The hash of a transaction. It is generated when a transaction is created.</p>
     */
    inline const Aws::String& GetTransactionHash() const{ return m_transactionHash; }
    inline bool TransactionHashHasBeenSet() const { return m_transactionHashHasBeenSet; }
    inline void SetTransactionHash(const Aws::String& value) { m_transactionHashHasBeenSet = true; m_transactionHash = value; }
    inline void SetTransactionHash(Aws::String&& value) { m_transactionHashHasBeenSet = true; m_transactionHash = std::move(value); }
    inline void SetTransactionHash(const char* value) { m_transactionHashHasBeenSet = true; m_transactionHash.assign(value); }
    inline ListTransactionEventsRequest& WithTransactionHash(const Aws::String& value) { SetTransactionHash(value); return *this;}
    inline ListTransactionEventsRequest& WithTransactionHash(Aws::String&& value) { SetTransactionHash(std::move(value)); return *this;}
    inline ListTransactionEventsRequest& WithTransactionHash(const char* value) { SetTransactionHash(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>  <p> <code>transactionId</code> is only supported on the
     * Bitcoin networks.</p> 
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }
    inline ListTransactionEventsRequest& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}
    inline ListTransactionEventsRequest& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}
    inline ListTransactionEventsRequest& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blockchain network where the transaction events occurred.</p>
     */
    inline const QueryNetwork& GetNetwork() const{ return m_network; }
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
    inline void SetNetwork(const QueryNetwork& value) { m_networkHasBeenSet = true; m_network = value; }
    inline void SetNetwork(QueryNetwork&& value) { m_networkHasBeenSet = true; m_network = std::move(value); }
    inline ListTransactionEventsRequest& WithNetwork(const QueryNetwork& value) { SetNetwork(value); return *this;}
    inline ListTransactionEventsRequest& WithNetwork(QueryNetwork&& value) { SetNetwork(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListTransactionEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTransactionEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTransactionEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of transaction events to list.</p> <p>Default:
     * <code>100</code> </p>  <p>Even if additional results can be retrieved, the
     * request can return less results than <code>maxResults</code> or an empty array
     * of results.</p> <p>To retrieve the next set of results, make another request
     * with the returned <code>nextToken</code> value. The value of
     * <code>nextToken</code> is <code>null</code> when there are no more results to
     * return</p> 
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTransactionEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_transactionHash;
    bool m_transactionHashHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    QueryNetwork m_network;
    bool m_networkHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
