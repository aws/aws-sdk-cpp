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
    AWS_MANAGEDBLOCKCHAINQUERY_API ListAssetContractsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssetContracts"; }

    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Contains the filter parameter for the request.</p>
     */
    inline const ContractFilter& GetContractFilter() const { return m_contractFilter; }
    inline bool ContractFilterHasBeenSet() const { return m_contractFilterHasBeenSet; }
    template<typename ContractFilterT = ContractFilter>
    void SetContractFilter(ContractFilterT&& value) { m_contractFilterHasBeenSet = true; m_contractFilter = std::forward<ContractFilterT>(value); }
    template<typename ContractFilterT = ContractFilter>
    ListAssetContractsRequest& WithContractFilter(ContractFilterT&& value) { SetContractFilter(std::forward<ContractFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssetContractsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of contracts to list.</p> <p>Default: <code>100</code>
     * </p>  <p>Even if additional results can be retrieved, the request can
     * return less results than <code>maxResults</code> or an empty array of
     * results.</p> <p>To retrieve the next set of results, make another request with
     * the returned <code>nextToken</code> value. The value of <code>nextToken</code>
     * is <code>null</code> when there are no more results to return</p> 
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAssetContractsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    ContractFilter m_contractFilter;
    bool m_contractFilterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
