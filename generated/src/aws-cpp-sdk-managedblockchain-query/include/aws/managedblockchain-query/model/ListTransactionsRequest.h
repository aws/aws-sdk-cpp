/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain-query/model/QueryNetwork.h>
#include <aws/managedblockchain-query/model/BlockchainInstant.h>
#include <aws/managedblockchain-query/model/ListTransactionsSort.h>
#include <aws/managedblockchain-query/model/ConfirmationStatusFilter.h>
#include <utility>

namespace Aws
{
namespace ManagedBlockchainQuery
{
namespace Model
{

  /**
   */
  class ListTransactionsRequest : public ManagedBlockchainQueryRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API ListTransactionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTransactions"; }

    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The address (either a contract or wallet), whose transactions are being
     * requested.</p>
     */
    inline const Aws::String& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Aws::String>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Aws::String>
    ListTransactionsRequest& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blockchain network where the transactions occurred.</p>
     */
    inline QueryNetwork GetNetwork() const { return m_network; }
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
    inline void SetNetwork(QueryNetwork value) { m_networkHasBeenSet = true; m_network = value; }
    inline ListTransactionsRequest& WithNetwork(QueryNetwork value) { SetNetwork(value); return *this;}
    ///@}

    ///@{
    
    inline const BlockchainInstant& GetFromBlockchainInstant() const { return m_fromBlockchainInstant; }
    inline bool FromBlockchainInstantHasBeenSet() const { return m_fromBlockchainInstantHasBeenSet; }
    template<typename FromBlockchainInstantT = BlockchainInstant>
    void SetFromBlockchainInstant(FromBlockchainInstantT&& value) { m_fromBlockchainInstantHasBeenSet = true; m_fromBlockchainInstant = std::forward<FromBlockchainInstantT>(value); }
    template<typename FromBlockchainInstantT = BlockchainInstant>
    ListTransactionsRequest& WithFromBlockchainInstant(FromBlockchainInstantT&& value) { SetFromBlockchainInstant(std::forward<FromBlockchainInstantT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const BlockchainInstant& GetToBlockchainInstant() const { return m_toBlockchainInstant; }
    inline bool ToBlockchainInstantHasBeenSet() const { return m_toBlockchainInstantHasBeenSet; }
    template<typename ToBlockchainInstantT = BlockchainInstant>
    void SetToBlockchainInstant(ToBlockchainInstantT&& value) { m_toBlockchainInstantHasBeenSet = true; m_toBlockchainInstant = std::forward<ToBlockchainInstantT>(value); }
    template<typename ToBlockchainInstantT = BlockchainInstant>
    ListTransactionsRequest& WithToBlockchainInstant(ToBlockchainInstantT&& value) { SetToBlockchainInstant(std::forward<ToBlockchainInstantT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order by which the results will be sorted. </p>
     */
    inline const ListTransactionsSort& GetSort() const { return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    template<typename SortT = ListTransactionsSort>
    void SetSort(SortT&& value) { m_sortHasBeenSet = true; m_sort = std::forward<SortT>(value); }
    template<typename SortT = ListTransactionsSort>
    ListTransactionsRequest& WithSort(SortT&& value) { SetSort(std::forward<SortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTransactionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of transactions to list.</p> <p>Default: <code>100</code>
     * </p>  <p>Even if additional results can be retrieved, the request can
     * return less results than <code>maxResults</code> or an empty array of
     * results.</p> <p>To retrieve the next set of results, make another request with
     * the returned <code>nextToken</code> value. The value of <code>nextToken</code>
     * is <code>null</code> when there are no more results to return</p> 
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTransactionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This filter is used to include transactions in the response that haven't
     * reached <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ambq-dg/key-concepts.html#finality">
     * <i>finality</i> </a>. Transactions that have reached finality are always part of
     * the response.</p>
     */
    inline const ConfirmationStatusFilter& GetConfirmationStatusFilter() const { return m_confirmationStatusFilter; }
    inline bool ConfirmationStatusFilterHasBeenSet() const { return m_confirmationStatusFilterHasBeenSet; }
    template<typename ConfirmationStatusFilterT = ConfirmationStatusFilter>
    void SetConfirmationStatusFilter(ConfirmationStatusFilterT&& value) { m_confirmationStatusFilterHasBeenSet = true; m_confirmationStatusFilter = std::forward<ConfirmationStatusFilterT>(value); }
    template<typename ConfirmationStatusFilterT = ConfirmationStatusFilter>
    ListTransactionsRequest& WithConfirmationStatusFilter(ConfirmationStatusFilterT&& value) { SetConfirmationStatusFilter(std::forward<ConfirmationStatusFilterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    QueryNetwork m_network{QueryNetwork::NOT_SET};
    bool m_networkHasBeenSet = false;

    BlockchainInstant m_fromBlockchainInstant;
    bool m_fromBlockchainInstantHasBeenSet = false;

    BlockchainInstant m_toBlockchainInstant;
    bool m_toBlockchainInstantHasBeenSet = false;

    ListTransactionsSort m_sort;
    bool m_sortHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    ConfirmationStatusFilter m_confirmationStatusFilter;
    bool m_confirmationStatusFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
