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
    AWS_MANAGEDBLOCKCHAINQUERY_API ListTransactionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTransactions"; }

    AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String SerializePayload() const override;


    /**
     * <p>The address (either a contract or wallet), whose transactions are being
     * requested.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }

    /**
     * <p>The address (either a contract or wallet), whose transactions are being
     * requested.</p>
     */
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }

    /**
     * <p>The address (either a contract or wallet), whose transactions are being
     * requested.</p>
     */
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }

    /**
     * <p>The address (either a contract or wallet), whose transactions are being
     * requested.</p>
     */
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }

    /**
     * <p>The address (either a contract or wallet), whose transactions are being
     * requested.</p>
     */
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }

    /**
     * <p>The address (either a contract or wallet), whose transactions are being
     * requested.</p>
     */
    inline ListTransactionsRequest& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}

    /**
     * <p>The address (either a contract or wallet), whose transactions are being
     * requested.</p>
     */
    inline ListTransactionsRequest& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}

    /**
     * <p>The address (either a contract or wallet), whose transactions are being
     * requested.</p>
     */
    inline ListTransactionsRequest& WithAddress(const char* value) { SetAddress(value); return *this;}


    /**
     * <p>The blockchain network where the transactions occurred.</p>
     */
    inline const QueryNetwork& GetNetwork() const{ return m_network; }

    /**
     * <p>The blockchain network where the transactions occurred.</p>
     */
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }

    /**
     * <p>The blockchain network where the transactions occurred.</p>
     */
    inline void SetNetwork(const QueryNetwork& value) { m_networkHasBeenSet = true; m_network = value; }

    /**
     * <p>The blockchain network where the transactions occurred.</p>
     */
    inline void SetNetwork(QueryNetwork&& value) { m_networkHasBeenSet = true; m_network = std::move(value); }

    /**
     * <p>The blockchain network where the transactions occurred.</p>
     */
    inline ListTransactionsRequest& WithNetwork(const QueryNetwork& value) { SetNetwork(value); return *this;}

    /**
     * <p>The blockchain network where the transactions occurred.</p>
     */
    inline ListTransactionsRequest& WithNetwork(QueryNetwork&& value) { SetNetwork(std::move(value)); return *this;}


    
    inline const BlockchainInstant& GetFromBlockchainInstant() const{ return m_fromBlockchainInstant; }

    
    inline bool FromBlockchainInstantHasBeenSet() const { return m_fromBlockchainInstantHasBeenSet; }

    
    inline void SetFromBlockchainInstant(const BlockchainInstant& value) { m_fromBlockchainInstantHasBeenSet = true; m_fromBlockchainInstant = value; }

    
    inline void SetFromBlockchainInstant(BlockchainInstant&& value) { m_fromBlockchainInstantHasBeenSet = true; m_fromBlockchainInstant = std::move(value); }

    
    inline ListTransactionsRequest& WithFromBlockchainInstant(const BlockchainInstant& value) { SetFromBlockchainInstant(value); return *this;}

    
    inline ListTransactionsRequest& WithFromBlockchainInstant(BlockchainInstant&& value) { SetFromBlockchainInstant(std::move(value)); return *this;}


    
    inline const BlockchainInstant& GetToBlockchainInstant() const{ return m_toBlockchainInstant; }

    
    inline bool ToBlockchainInstantHasBeenSet() const { return m_toBlockchainInstantHasBeenSet; }

    
    inline void SetToBlockchainInstant(const BlockchainInstant& value) { m_toBlockchainInstantHasBeenSet = true; m_toBlockchainInstant = value; }

    
    inline void SetToBlockchainInstant(BlockchainInstant&& value) { m_toBlockchainInstantHasBeenSet = true; m_toBlockchainInstant = std::move(value); }

    
    inline ListTransactionsRequest& WithToBlockchainInstant(const BlockchainInstant& value) { SetToBlockchainInstant(value); return *this;}

    
    inline ListTransactionsRequest& WithToBlockchainInstant(BlockchainInstant&& value) { SetToBlockchainInstant(std::move(value)); return *this;}


    /**
     * <p>The order by which the results will be sorted. If <code>ASCENNDING</code> is
     * selected, the results will be ordered by <code>fromTime</code>. </p>
     */
    inline const ListTransactionsSort& GetSort() const{ return m_sort; }

    /**
     * <p>The order by which the results will be sorted. If <code>ASCENNDING</code> is
     * selected, the results will be ordered by <code>fromTime</code>. </p>
     */
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }

    /**
     * <p>The order by which the results will be sorted. If <code>ASCENNDING</code> is
     * selected, the results will be ordered by <code>fromTime</code>. </p>
     */
    inline void SetSort(const ListTransactionsSort& value) { m_sortHasBeenSet = true; m_sort = value; }

    /**
     * <p>The order by which the results will be sorted. If <code>ASCENNDING</code> is
     * selected, the results will be ordered by <code>fromTime</code>. </p>
     */
    inline void SetSort(ListTransactionsSort&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }

    /**
     * <p>The order by which the results will be sorted. If <code>ASCENNDING</code> is
     * selected, the results will be ordered by <code>fromTime</code>. </p>
     */
    inline ListTransactionsRequest& WithSort(const ListTransactionsSort& value) { SetSort(value); return *this;}

    /**
     * <p>The order by which the results will be sorted. If <code>ASCENNDING</code> is
     * selected, the results will be ordered by <code>fromTime</code>. </p>
     */
    inline ListTransactionsRequest& WithSort(ListTransactionsSort&& value) { SetSort(std::move(value)); return *this;}


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
    inline ListTransactionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListTransactionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListTransactionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of transactions to list.</p> <p>Default:<code>100</code>
     * </p>  <p>Even if additional results can be retrieved, the request can
     * return less results than <code>maxResults</code> or an empty array of
     * results.</p> <p>To retrieve the next set of results, make another request with
     * the returned <code>nextToken</code> value. The value of <code>nextToken</code>
     * is <code>null</code> when there are no more results to return</p> 
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of transactions to list.</p> <p>Default:<code>100</code>
     * </p>  <p>Even if additional results can be retrieved, the request can
     * return less results than <code>maxResults</code> or an empty array of
     * results.</p> <p>To retrieve the next set of results, make another request with
     * the returned <code>nextToken</code> value. The value of <code>nextToken</code>
     * is <code>null</code> when there are no more results to return</p> 
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of transactions to list.</p> <p>Default:<code>100</code>
     * </p>  <p>Even if additional results can be retrieved, the request can
     * return less results than <code>maxResults</code> or an empty array of
     * results.</p> <p>To retrieve the next set of results, make another request with
     * the returned <code>nextToken</code> value. The value of <code>nextToken</code>
     * is <code>null</code> when there are no more results to return</p> 
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of transactions to list.</p> <p>Default:<code>100</code>
     * </p>  <p>Even if additional results can be retrieved, the request can
     * return less results than <code>maxResults</code> or an empty array of
     * results.</p> <p>To retrieve the next set of results, make another request with
     * the returned <code>nextToken</code> value. The value of <code>nextToken</code>
     * is <code>null</code> when there are no more results to return</p> 
     */
    inline ListTransactionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>This filter is used to include transactions in the response that haven't
     * reached <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ambq-dg/key-concepts.html#finality">
     * <i>finality</i> </a>. Transactions that have reached finiality are always part
     * of the response.</p>
     */
    inline const ConfirmationStatusFilter& GetConfirmationStatusFilter() const{ return m_confirmationStatusFilter; }

    /**
     * <p>This filter is used to include transactions in the response that haven't
     * reached <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ambq-dg/key-concepts.html#finality">
     * <i>finality</i> </a>. Transactions that have reached finiality are always part
     * of the response.</p>
     */
    inline bool ConfirmationStatusFilterHasBeenSet() const { return m_confirmationStatusFilterHasBeenSet; }

    /**
     * <p>This filter is used to include transactions in the response that haven't
     * reached <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ambq-dg/key-concepts.html#finality">
     * <i>finality</i> </a>. Transactions that have reached finiality are always part
     * of the response.</p>
     */
    inline void SetConfirmationStatusFilter(const ConfirmationStatusFilter& value) { m_confirmationStatusFilterHasBeenSet = true; m_confirmationStatusFilter = value; }

    /**
     * <p>This filter is used to include transactions in the response that haven't
     * reached <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ambq-dg/key-concepts.html#finality">
     * <i>finality</i> </a>. Transactions that have reached finiality are always part
     * of the response.</p>
     */
    inline void SetConfirmationStatusFilter(ConfirmationStatusFilter&& value) { m_confirmationStatusFilterHasBeenSet = true; m_confirmationStatusFilter = std::move(value); }

    /**
     * <p>This filter is used to include transactions in the response that haven't
     * reached <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ambq-dg/key-concepts.html#finality">
     * <i>finality</i> </a>. Transactions that have reached finiality are always part
     * of the response.</p>
     */
    inline ListTransactionsRequest& WithConfirmationStatusFilter(const ConfirmationStatusFilter& value) { SetConfirmationStatusFilter(value); return *this;}

    /**
     * <p>This filter is used to include transactions in the response that haven't
     * reached <a
     * href="https://docs.aws.amazon.com/managed-blockchain/latest/ambq-dg/key-concepts.html#finality">
     * <i>finality</i> </a>. Transactions that have reached finiality are always part
     * of the response.</p>
     */
    inline ListTransactionsRequest& WithConfirmationStatusFilter(ConfirmationStatusFilter&& value) { SetConfirmationStatusFilter(std::move(value)); return *this;}

  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    QueryNetwork m_network;
    bool m_networkHasBeenSet = false;

    BlockchainInstant m_fromBlockchainInstant;
    bool m_fromBlockchainInstantHasBeenSet = false;

    BlockchainInstant m_toBlockchainInstant;
    bool m_toBlockchainInstantHasBeenSet = false;

    ListTransactionsSort m_sort;
    bool m_sortHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    ConfirmationStatusFilter m_confirmationStatusFilter;
    bool m_confirmationStatusFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
