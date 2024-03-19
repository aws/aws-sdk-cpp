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
    AWS_MANAGEDBLOCKCHAINQUERY_API ListFilteredTransactionEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFilteredTransactionEvents"; }

    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String SerializePayload() const override;


    /**
     * <p>The blockchain network where the transaction occurred.</p> <p>Valid Values:
     * <code>BITCOIN_MAINNET</code> | <code>BITCOIN_TESTNET</code> </p>
     */
    inline const Aws::String& GetNetwork() const{ return m_network; }

    /**
     * <p>The blockchain network where the transaction occurred.</p> <p>Valid Values:
     * <code>BITCOIN_MAINNET</code> | <code>BITCOIN_TESTNET</code> </p>
     */
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }

    /**
     * <p>The blockchain network where the transaction occurred.</p> <p>Valid Values:
     * <code>BITCOIN_MAINNET</code> | <code>BITCOIN_TESTNET</code> </p>
     */
    inline void SetNetwork(const Aws::String& value) { m_networkHasBeenSet = true; m_network = value; }

    /**
     * <p>The blockchain network where the transaction occurred.</p> <p>Valid Values:
     * <code>BITCOIN_MAINNET</code> | <code>BITCOIN_TESTNET</code> </p>
     */
    inline void SetNetwork(Aws::String&& value) { m_networkHasBeenSet = true; m_network = std::move(value); }

    /**
     * <p>The blockchain network where the transaction occurred.</p> <p>Valid Values:
     * <code>BITCOIN_MAINNET</code> | <code>BITCOIN_TESTNET</code> </p>
     */
    inline void SetNetwork(const char* value) { m_networkHasBeenSet = true; m_network.assign(value); }

    /**
     * <p>The blockchain network where the transaction occurred.</p> <p>Valid Values:
     * <code>BITCOIN_MAINNET</code> | <code>BITCOIN_TESTNET</code> </p>
     */
    inline ListFilteredTransactionEventsRequest& WithNetwork(const Aws::String& value) { SetNetwork(value); return *this;}

    /**
     * <p>The blockchain network where the transaction occurred.</p> <p>Valid Values:
     * <code>BITCOIN_MAINNET</code> | <code>BITCOIN_TESTNET</code> </p>
     */
    inline ListFilteredTransactionEventsRequest& WithNetwork(Aws::String&& value) { SetNetwork(std::move(value)); return *this;}

    /**
     * <p>The blockchain network where the transaction occurred.</p> <p>Valid Values:
     * <code>BITCOIN_MAINNET</code> | <code>BITCOIN_TESTNET</code> </p>
     */
    inline ListFilteredTransactionEventsRequest& WithNetwork(const char* value) { SetNetwork(value); return *this;}


    /**
     * <p>This is the unique public address on the blockchain for which the transaction
     * events are being requested.</p>
     */
    inline const AddressIdentifierFilter& GetAddressIdentifierFilter() const{ return m_addressIdentifierFilter; }

    /**
     * <p>This is the unique public address on the blockchain for which the transaction
     * events are being requested.</p>
     */
    inline bool AddressIdentifierFilterHasBeenSet() const { return m_addressIdentifierFilterHasBeenSet; }

    /**
     * <p>This is the unique public address on the blockchain for which the transaction
     * events are being requested.</p>
     */
    inline void SetAddressIdentifierFilter(const AddressIdentifierFilter& value) { m_addressIdentifierFilterHasBeenSet = true; m_addressIdentifierFilter = value; }

    /**
     * <p>This is the unique public address on the blockchain for which the transaction
     * events are being requested.</p>
     */
    inline void SetAddressIdentifierFilter(AddressIdentifierFilter&& value) { m_addressIdentifierFilterHasBeenSet = true; m_addressIdentifierFilter = std::move(value); }

    /**
     * <p>This is the unique public address on the blockchain for which the transaction
     * events are being requested.</p>
     */
    inline ListFilteredTransactionEventsRequest& WithAddressIdentifierFilter(const AddressIdentifierFilter& value) { SetAddressIdentifierFilter(value); return *this;}

    /**
     * <p>This is the unique public address on the blockchain for which the transaction
     * events are being requested.</p>
     */
    inline ListFilteredTransactionEventsRequest& WithAddressIdentifierFilter(AddressIdentifierFilter&& value) { SetAddressIdentifierFilter(std::move(value)); return *this;}


    /**
     * <p>This container specifies the time frame for the transaction events returned
     * in the response.</p>
     */
    inline const TimeFilter& GetTimeFilter() const{ return m_timeFilter; }

    /**
     * <p>This container specifies the time frame for the transaction events returned
     * in the response.</p>
     */
    inline bool TimeFilterHasBeenSet() const { return m_timeFilterHasBeenSet; }

    /**
     * <p>This container specifies the time frame for the transaction events returned
     * in the response.</p>
     */
    inline void SetTimeFilter(const TimeFilter& value) { m_timeFilterHasBeenSet = true; m_timeFilter = value; }

    /**
     * <p>This container specifies the time frame for the transaction events returned
     * in the response.</p>
     */
    inline void SetTimeFilter(TimeFilter&& value) { m_timeFilterHasBeenSet = true; m_timeFilter = std::move(value); }

    /**
     * <p>This container specifies the time frame for the transaction events returned
     * in the response.</p>
     */
    inline ListFilteredTransactionEventsRequest& WithTimeFilter(const TimeFilter& value) { SetTimeFilter(value); return *this;}

    /**
     * <p>This container specifies the time frame for the transaction events returned
     * in the response.</p>
     */
    inline ListFilteredTransactionEventsRequest& WithTimeFilter(TimeFilter&& value) { SetTimeFilter(std::move(value)); return *this;}


    /**
     * <p>This container specifies filtering attributes related to BITCOIN_VOUT event
     * types</p>
     */
    inline const VoutFilter& GetVoutFilter() const{ return m_voutFilter; }

    /**
     * <p>This container specifies filtering attributes related to BITCOIN_VOUT event
     * types</p>
     */
    inline bool VoutFilterHasBeenSet() const { return m_voutFilterHasBeenSet; }

    /**
     * <p>This container specifies filtering attributes related to BITCOIN_VOUT event
     * types</p>
     */
    inline void SetVoutFilter(const VoutFilter& value) { m_voutFilterHasBeenSet = true; m_voutFilter = value; }

    /**
     * <p>This container specifies filtering attributes related to BITCOIN_VOUT event
     * types</p>
     */
    inline void SetVoutFilter(VoutFilter&& value) { m_voutFilterHasBeenSet = true; m_voutFilter = std::move(value); }

    /**
     * <p>This container specifies filtering attributes related to BITCOIN_VOUT event
     * types</p>
     */
    inline ListFilteredTransactionEventsRequest& WithVoutFilter(const VoutFilter& value) { SetVoutFilter(value); return *this;}

    /**
     * <p>This container specifies filtering attributes related to BITCOIN_VOUT event
     * types</p>
     */
    inline ListFilteredTransactionEventsRequest& WithVoutFilter(VoutFilter&& value) { SetVoutFilter(std::move(value)); return *this;}


    
    inline const ConfirmationStatusFilter& GetConfirmationStatusFilter() const{ return m_confirmationStatusFilter; }

    
    inline bool ConfirmationStatusFilterHasBeenSet() const { return m_confirmationStatusFilterHasBeenSet; }

    
    inline void SetConfirmationStatusFilter(const ConfirmationStatusFilter& value) { m_confirmationStatusFilterHasBeenSet = true; m_confirmationStatusFilter = value; }

    
    inline void SetConfirmationStatusFilter(ConfirmationStatusFilter&& value) { m_confirmationStatusFilterHasBeenSet = true; m_confirmationStatusFilter = std::move(value); }

    
    inline ListFilteredTransactionEventsRequest& WithConfirmationStatusFilter(const ConfirmationStatusFilter& value) { SetConfirmationStatusFilter(value); return *this;}

    
    inline ListFilteredTransactionEventsRequest& WithConfirmationStatusFilter(ConfirmationStatusFilter&& value) { SetConfirmationStatusFilter(std::move(value)); return *this;}


    /**
     * <p>The order by which the results will be sorted.</p>
     */
    inline const ListFilteredTransactionEventsSort& GetSort() const{ return m_sort; }

    /**
     * <p>The order by which the results will be sorted.</p>
     */
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }

    /**
     * <p>The order by which the results will be sorted.</p>
     */
    inline void SetSort(const ListFilteredTransactionEventsSort& value) { m_sortHasBeenSet = true; m_sort = value; }

    /**
     * <p>The order by which the results will be sorted.</p>
     */
    inline void SetSort(ListFilteredTransactionEventsSort&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }

    /**
     * <p>The order by which the results will be sorted.</p>
     */
    inline ListFilteredTransactionEventsRequest& WithSort(const ListFilteredTransactionEventsSort& value) { SetSort(value); return *this;}

    /**
     * <p>The order by which the results will be sorted.</p>
     */
    inline ListFilteredTransactionEventsRequest& WithSort(ListFilteredTransactionEventsSort&& value) { SetSort(std::move(value)); return *this;}


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
    inline ListFilteredTransactionEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListFilteredTransactionEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListFilteredTransactionEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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

    /**
     * <p>The maximum number of transaction events to list.</p> <p>Default:
     * <code>100</code> </p>  <p>Even if additional results can be retrieved, the
     * request can return less results than <code>maxResults</code> or an empty array
     * of results.</p> <p>To retrieve the next set of results, make another request
     * with the returned <code>nextToken</code> value. The value of
     * <code>nextToken</code> is <code>null</code> when there are no more results to
     * return</p> 
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of transaction events to list.</p> <p>Default:
     * <code>100</code> </p>  <p>Even if additional results can be retrieved, the
     * request can return less results than <code>maxResults</code> or an empty array
     * of results.</p> <p>To retrieve the next set of results, make another request
     * with the returned <code>nextToken</code> value. The value of
     * <code>nextToken</code> is <code>null</code> when there are no more results to
     * return</p> 
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of transaction events to list.</p> <p>Default:
     * <code>100</code> </p>  <p>Even if additional results can be retrieved, the
     * request can return less results than <code>maxResults</code> or an empty array
     * of results.</p> <p>To retrieve the next set of results, make another request
     * with the returned <code>nextToken</code> value. The value of
     * <code>nextToken</code> is <code>null</code> when there are no more results to
     * return</p> 
     */
    inline ListFilteredTransactionEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

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

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
