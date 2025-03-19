/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/managedblockchain-query/ManagedBlockchainQueryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain-query/model/AddressIdentifierFilter.h>
#include <aws/managedblockchain-query/model/TimeFilter.h>
#include <aws/managedblockchain-query/model/VoutFilter.h>
#include <aws/managedblockchain-query/model/ConfirmationStatusFilter.h>
#include <aws/managedblockchain-query/model/ListFilteredTransactionEventsSort.h>
#include <utility>

namespace Aws
{
namespace ManagedBlockchainQuery
{
namespace Model
{

  /**
   */
  class ListFilteredTransactionEventsRequest : public ManagedBlockchainQueryRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API ListFilteredTransactionEventsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFilteredTransactionEvents"; }

    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The blockchain network where the transaction occurred.</p> <p>Valid Values:
     * <code>BITCOIN_MAINNET</code> | <code>BITCOIN_TESTNET</code> </p>
     */
    inline const Aws::String& GetNetwork() const { return m_network; }
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
    template<typename NetworkT = Aws::String>
    void SetNetwork(NetworkT&& value) { m_networkHasBeenSet = true; m_network = std::forward<NetworkT>(value); }
    template<typename NetworkT = Aws::String>
    ListFilteredTransactionEventsRequest& WithNetwork(NetworkT&& value) { SetNetwork(std::forward<NetworkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the unique public address on the blockchain for which the transaction
     * events are being requested.</p>
     */
    inline const AddressIdentifierFilter& GetAddressIdentifierFilter() const { return m_addressIdentifierFilter; }
    inline bool AddressIdentifierFilterHasBeenSet() const { return m_addressIdentifierFilterHasBeenSet; }
    template<typename AddressIdentifierFilterT = AddressIdentifierFilter>
    void SetAddressIdentifierFilter(AddressIdentifierFilterT&& value) { m_addressIdentifierFilterHasBeenSet = true; m_addressIdentifierFilter = std::forward<AddressIdentifierFilterT>(value); }
    template<typename AddressIdentifierFilterT = AddressIdentifierFilter>
    ListFilteredTransactionEventsRequest& WithAddressIdentifierFilter(AddressIdentifierFilterT&& value) { SetAddressIdentifierFilter(std::forward<AddressIdentifierFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This container specifies the time frame for the transaction events returned
     * in the response.</p>
     */
    inline const TimeFilter& GetTimeFilter() const { return m_timeFilter; }
    inline bool TimeFilterHasBeenSet() const { return m_timeFilterHasBeenSet; }
    template<typename TimeFilterT = TimeFilter>
    void SetTimeFilter(TimeFilterT&& value) { m_timeFilterHasBeenSet = true; m_timeFilter = std::forward<TimeFilterT>(value); }
    template<typename TimeFilterT = TimeFilter>
    ListFilteredTransactionEventsRequest& WithTimeFilter(TimeFilterT&& value) { SetTimeFilter(std::forward<TimeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This container specifies filtering attributes related to BITCOIN_VOUT event
     * types</p>
     */
    inline const VoutFilter& GetVoutFilter() const { return m_voutFilter; }
    inline bool VoutFilterHasBeenSet() const { return m_voutFilterHasBeenSet; }
    template<typename VoutFilterT = VoutFilter>
    void SetVoutFilter(VoutFilterT&& value) { m_voutFilterHasBeenSet = true; m_voutFilter = std::forward<VoutFilterT>(value); }
    template<typename VoutFilterT = VoutFilter>
    ListFilteredTransactionEventsRequest& WithVoutFilter(VoutFilterT&& value) { SetVoutFilter(std::forward<VoutFilterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ConfirmationStatusFilter& GetConfirmationStatusFilter() const { return m_confirmationStatusFilter; }
    inline bool ConfirmationStatusFilterHasBeenSet() const { return m_confirmationStatusFilterHasBeenSet; }
    template<typename ConfirmationStatusFilterT = ConfirmationStatusFilter>
    void SetConfirmationStatusFilter(ConfirmationStatusFilterT&& value) { m_confirmationStatusFilterHasBeenSet = true; m_confirmationStatusFilter = std::forward<ConfirmationStatusFilterT>(value); }
    template<typename ConfirmationStatusFilterT = ConfirmationStatusFilter>
    ListFilteredTransactionEventsRequest& WithConfirmationStatusFilter(ConfirmationStatusFilterT&& value) { SetConfirmationStatusFilter(std::forward<ConfirmationStatusFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order by which the results will be sorted.</p>
     */
    inline const ListFilteredTransactionEventsSort& GetSort() const { return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    template<typename SortT = ListFilteredTransactionEventsSort>
    void SetSort(SortT&& value) { m_sortHasBeenSet = true; m_sort = std::forward<SortT>(value); }
    template<typename SortT = ListFilteredTransactionEventsSort>
    ListFilteredTransactionEventsRequest& WithSort(SortT&& value) { SetSort(std::forward<SortT>(value)); return *this;}
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
    ListFilteredTransactionEventsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListFilteredTransactionEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_network;
    bool m_networkHasBeenSet = false;

    AddressIdentifierFilter m_addressIdentifierFilter;
    bool m_addressIdentifierFilterHasBeenSet = false;

    TimeFilter m_timeFilter;
    bool m_timeFilterHasBeenSet = false;

    VoutFilter m_voutFilter;
    bool m_voutFilterHasBeenSet = false;

    ConfirmationStatusFilter m_confirmationStatusFilter;
    bool m_confirmationStatusFilterHasBeenSet = false;

    ListFilteredTransactionEventsSort m_sort;
    bool m_sortHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
