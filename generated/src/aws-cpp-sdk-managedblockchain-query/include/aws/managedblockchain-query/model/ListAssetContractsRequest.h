/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryRequest.h>
#include <aws/managedblockchain-query/model/ContractFilter.h>
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
  class ListAssetContractsRequest : public ManagedBlockchainQueryRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API ListAssetContractsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssetContracts"; }

    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String SerializePayload() const override;


    /**
     * <p>Contains the filter parameter for the request.</p>
     */
    inline const ContractFilter& GetContractFilter() const{ return m_contractFilter; }

    /**
     * <p>Contains the filter parameter for the request.</p>
     */
    inline bool ContractFilterHasBeenSet() const { return m_contractFilterHasBeenSet; }

    /**
     * <p>Contains the filter parameter for the request.</p>
     */
    inline void SetContractFilter(const ContractFilter& value) { m_contractFilterHasBeenSet = true; m_contractFilter = value; }

    /**
     * <p>Contains the filter parameter for the request.</p>
     */
    inline void SetContractFilter(ContractFilter&& value) { m_contractFilterHasBeenSet = true; m_contractFilter = std::move(value); }

    /**
     * <p>Contains the filter parameter for the request.</p>
     */
    inline ListAssetContractsRequest& WithContractFilter(const ContractFilter& value) { SetContractFilter(value); return *this;}

    /**
     * <p>Contains the filter parameter for the request.</p>
     */
    inline ListAssetContractsRequest& WithContractFilter(ContractFilter&& value) { SetContractFilter(std::move(value)); return *this;}


    /**
     * <p> The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListAssetContractsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListAssetContractsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListAssetContractsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of contracts to list.</p> <p>Default:<code>100</code> </p>
     *  <p>Even if additional results can be retrieved, the request can return
     * less results than <code>maxResults</code> or an empty array of results.</p>
     * <p>To retrieve the next set of results, make another request with the returned
     * <code>nextToken</code> value. The value of <code>nextToken</code> is
     * <code>null</code> when there are no more results to return</p> 
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of contracts to list.</p> <p>Default:<code>100</code> </p>
     *  <p>Even if additional results can be retrieved, the request can return
     * less results than <code>maxResults</code> or an empty array of results.</p>
     * <p>To retrieve the next set of results, make another request with the returned
     * <code>nextToken</code> value. The value of <code>nextToken</code> is
     * <code>null</code> when there are no more results to return</p> 
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of contracts to list.</p> <p>Default:<code>100</code> </p>
     *  <p>Even if additional results can be retrieved, the request can return
     * less results than <code>maxResults</code> or an empty array of results.</p>
     * <p>To retrieve the next set of results, make another request with the returned
     * <code>nextToken</code> value. The value of <code>nextToken</code> is
     * <code>null</code> when there are no more results to return</p> 
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of contracts to list.</p> <p>Default:<code>100</code> </p>
     *  <p>Even if additional results can be retrieved, the request can return
     * less results than <code>maxResults</code> or an empty array of results.</p>
     * <p>To retrieve the next set of results, make another request with the returned
     * <code>nextToken</code> value. The value of <code>nextToken</code> is
     * <code>null</code> when there are no more results to return</p> 
     */
    inline ListAssetContractsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    ContractFilter m_contractFilter;
    bool m_contractFilterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
