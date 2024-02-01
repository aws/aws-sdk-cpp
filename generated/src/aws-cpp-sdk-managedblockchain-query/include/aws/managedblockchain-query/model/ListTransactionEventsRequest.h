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
    inline ListTransactionEventsRequest& WithTransactionHash(const Aws::String& value) { SetTransactionHash(value); return *this;}

    /**
     * <p>The hash of the transaction. It is generated whenever a transaction is
     * verified and added to the blockchain.</p>
     */
    inline ListTransactionEventsRequest& WithTransactionHash(Aws::String&& value) { SetTransactionHash(std::move(value)); return *this;}

    /**
     * <p>The hash of the transaction. It is generated whenever a transaction is
     * verified and added to the blockchain.</p>
     */
    inline ListTransactionEventsRequest& WithTransactionHash(const char* value) { SetTransactionHash(value); return *this;}


    /**
     * <p>The blockchain network where the transaction events occurred.</p>
     */
    inline const QueryNetwork& GetNetwork() const{ return m_network; }

    /**
     * <p>The blockchain network where the transaction events occurred.</p>
     */
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }

    /**
     * <p>The blockchain network where the transaction events occurred.</p>
     */
    inline void SetNetwork(const QueryNetwork& value) { m_networkHasBeenSet = true; m_network = value; }

    /**
     * <p>The blockchain network where the transaction events occurred.</p>
     */
    inline void SetNetwork(QueryNetwork&& value) { m_networkHasBeenSet = true; m_network = std::move(value); }

    /**
     * <p>The blockchain network where the transaction events occurred.</p>
     */
    inline ListTransactionEventsRequest& WithNetwork(const QueryNetwork& value) { SetNetwork(value); return *this;}

    /**
     * <p>The blockchain network where the transaction events occurred.</p>
     */
    inline ListTransactionEventsRequest& WithNetwork(QueryNetwork&& value) { SetNetwork(std::move(value)); return *this;}


    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListTransactionEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListTransactionEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListTransactionEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of transaction events to list.</p>
     * <p>Default:<code>100</code> </p>  <p>Even if additional results can be
     * retrieved, the request can return less results than <code>maxResults</code> or
     * an empty array of results.</p> <p>To retrieve the next set of results, make
     * another request with the returned <code>nextToken</code> value. The value of
     * <code>nextToken</code> is <code>null</code> when there are no more results to
     * return</p> 
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of transaction events to list.</p>
     * <p>Default:<code>100</code> </p>  <p>Even if additional results can be
     * retrieved, the request can return less results than <code>maxResults</code> or
     * an empty array of results.</p> <p>To retrieve the next set of results, make
     * another request with the returned <code>nextToken</code> value. The value of
     * <code>nextToken</code> is <code>null</code> when there are no more results to
     * return</p> 
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of transaction events to list.</p>
     * <p>Default:<code>100</code> </p>  <p>Even if additional results can be
     * retrieved, the request can return less results than <code>maxResults</code> or
     * an empty array of results.</p> <p>To retrieve the next set of results, make
     * another request with the returned <code>nextToken</code> value. The value of
     * <code>nextToken</code> is <code>null</code> when there are no more results to
     * return</p> 
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of transaction events to list.</p>
     * <p>Default:<code>100</code> </p>  <p>Even if additional results can be
     * retrieved, the request can return less results than <code>maxResults</code> or
     * an empty array of results.</p> <p>To retrieve the next set of results, make
     * another request with the returned <code>nextToken</code> value. The value of
     * <code>nextToken</code> is <code>null</code> when there are no more results to
     * return</p> 
     */
    inline ListTransactionEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_transactionHash;
    bool m_transactionHashHasBeenSet = false;

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
