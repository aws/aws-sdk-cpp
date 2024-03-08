/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryRequest.h>
#include <aws/managedblockchain-query/model/OwnerFilter.h>
#include <aws/managedblockchain-query/model/TokenFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ManagedBlockchainQuery
{
namespace Model
{

  /**
   */
  class ListTokenBalancesRequest : public ManagedBlockchainQueryRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API ListTokenBalancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTokenBalances"; }

    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String SerializePayload() const override;


    /**
     * <p>The contract or wallet address on the blockchain network by which to filter
     * the request. You must specify the <code>address</code> property of the
     * <code>ownerFilter</code> when listing balances of tokens owned by the
     * address.</p>
     */
    inline const OwnerFilter& GetOwnerFilter() const{ return m_ownerFilter; }

    /**
     * <p>The contract or wallet address on the blockchain network by which to filter
     * the request. You must specify the <code>address</code> property of the
     * <code>ownerFilter</code> when listing balances of tokens owned by the
     * address.</p>
     */
    inline bool OwnerFilterHasBeenSet() const { return m_ownerFilterHasBeenSet; }

    /**
     * <p>The contract or wallet address on the blockchain network by which to filter
     * the request. You must specify the <code>address</code> property of the
     * <code>ownerFilter</code> when listing balances of tokens owned by the
     * address.</p>
     */
    inline void SetOwnerFilter(const OwnerFilter& value) { m_ownerFilterHasBeenSet = true; m_ownerFilter = value; }

    /**
     * <p>The contract or wallet address on the blockchain network by which to filter
     * the request. You must specify the <code>address</code> property of the
     * <code>ownerFilter</code> when listing balances of tokens owned by the
     * address.</p>
     */
    inline void SetOwnerFilter(OwnerFilter&& value) { m_ownerFilterHasBeenSet = true; m_ownerFilter = std::move(value); }

    /**
     * <p>The contract or wallet address on the blockchain network by which to filter
     * the request. You must specify the <code>address</code> property of the
     * <code>ownerFilter</code> when listing balances of tokens owned by the
     * address.</p>
     */
    inline ListTokenBalancesRequest& WithOwnerFilter(const OwnerFilter& value) { SetOwnerFilter(value); return *this;}

    /**
     * <p>The contract or wallet address on the blockchain network by which to filter
     * the request. You must specify the <code>address</code> property of the
     * <code>ownerFilter</code> when listing balances of tokens owned by the
     * address.</p>
     */
    inline ListTokenBalancesRequest& WithOwnerFilter(OwnerFilter&& value) { SetOwnerFilter(std::move(value)); return *this;}


    /**
     * <p>The contract address or a token identifier on the blockchain network by which
     * to filter the request. You must specify the <code>contractAddress</code>
     * property of this container when listing tokens minted by a contract.</p> 
     * <p>You must always specify the network property of this container when using
     * this operation.</p> 
     */
    inline const TokenFilter& GetTokenFilter() const{ return m_tokenFilter; }

    /**
     * <p>The contract address or a token identifier on the blockchain network by which
     * to filter the request. You must specify the <code>contractAddress</code>
     * property of this container when listing tokens minted by a contract.</p> 
     * <p>You must always specify the network property of this container when using
     * this operation.</p> 
     */
    inline bool TokenFilterHasBeenSet() const { return m_tokenFilterHasBeenSet; }

    /**
     * <p>The contract address or a token identifier on the blockchain network by which
     * to filter the request. You must specify the <code>contractAddress</code>
     * property of this container when listing tokens minted by a contract.</p> 
     * <p>You must always specify the network property of this container when using
     * this operation.</p> 
     */
    inline void SetTokenFilter(const TokenFilter& value) { m_tokenFilterHasBeenSet = true; m_tokenFilter = value; }

    /**
     * <p>The contract address or a token identifier on the blockchain network by which
     * to filter the request. You must specify the <code>contractAddress</code>
     * property of this container when listing tokens minted by a contract.</p> 
     * <p>You must always specify the network property of this container when using
     * this operation.</p> 
     */
    inline void SetTokenFilter(TokenFilter&& value) { m_tokenFilterHasBeenSet = true; m_tokenFilter = std::move(value); }

    /**
     * <p>The contract address or a token identifier on the blockchain network by which
     * to filter the request. You must specify the <code>contractAddress</code>
     * property of this container when listing tokens minted by a contract.</p> 
     * <p>You must always specify the network property of this container when using
     * this operation.</p> 
     */
    inline ListTokenBalancesRequest& WithTokenFilter(const TokenFilter& value) { SetTokenFilter(value); return *this;}

    /**
     * <p>The contract address or a token identifier on the blockchain network by which
     * to filter the request. You must specify the <code>contractAddress</code>
     * property of this container when listing tokens minted by a contract.</p> 
     * <p>You must always specify the network property of this container when using
     * this operation.</p> 
     */
    inline ListTokenBalancesRequest& WithTokenFilter(TokenFilter&& value) { SetTokenFilter(std::move(value)); return *this;}


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
    inline ListTokenBalancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListTokenBalancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListTokenBalancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of token balances to return.</p>
     * <p>Default:<code>100</code> </p>  <p>Even if additional results can be
     * retrieved, the request can return less results than <code>maxResults</code> or
     * an empty array of results.</p> <p>To retrieve the next set of results, make
     * another request with the returned <code>nextToken</code> value. The value of
     * <code>nextToken</code> is <code>null</code> when there are no more results to
     * return</p> 
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of token balances to return.</p>
     * <p>Default:<code>100</code> </p>  <p>Even if additional results can be
     * retrieved, the request can return less results than <code>maxResults</code> or
     * an empty array of results.</p> <p>To retrieve the next set of results, make
     * another request with the returned <code>nextToken</code> value. The value of
     * <code>nextToken</code> is <code>null</code> when there are no more results to
     * return</p> 
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of token balances to return.</p>
     * <p>Default:<code>100</code> </p>  <p>Even if additional results can be
     * retrieved, the request can return less results than <code>maxResults</code> or
     * an empty array of results.</p> <p>To retrieve the next set of results, make
     * another request with the returned <code>nextToken</code> value. The value of
     * <code>nextToken</code> is <code>null</code> when there are no more results to
     * return</p> 
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of token balances to return.</p>
     * <p>Default:<code>100</code> </p>  <p>Even if additional results can be
     * retrieved, the request can return less results than <code>maxResults</code> or
     * an empty array of results.</p> <p>To retrieve the next set of results, make
     * another request with the returned <code>nextToken</code> value. The value of
     * <code>nextToken</code> is <code>null</code> when there are no more results to
     * return</p> 
     */
    inline ListTokenBalancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    OwnerFilter m_ownerFilter;
    bool m_ownerFilterHasBeenSet = false;

    TokenFilter m_tokenFilter;
    bool m_tokenFilterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
