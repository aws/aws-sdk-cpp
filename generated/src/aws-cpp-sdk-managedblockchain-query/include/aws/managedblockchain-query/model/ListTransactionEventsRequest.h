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
    AWS_MANAGEDBLOCKCHAINQUERY_API ListTransactionEventsRequest() = default;

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
    inline const Aws::String& GetTransactionHash() const { return m_transactionHash; }
    inline bool TransactionHashHasBeenSet() const { return m_transactionHashHasBeenSet; }
    template<typename TransactionHashT = Aws::String>
    void SetTransactionHash(TransactionHashT&& value) { m_transactionHashHasBeenSet = true; m_transactionHash = std::forward<TransactionHashT>(value); }
    template<typename TransactionHashT = Aws::String>
    ListTransactionEventsRequest& WithTransactionHash(TransactionHashT&& value) { SetTransactionHash(std::forward<TransactionHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a Bitcoin transaction. It is generated when a transaction
     * is created.</p>  <p> <code>transactionId</code> is only supported on the
     * Bitcoin networks.</p> 
     */
    inline const Aws::String& GetTransactionId() const { return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    template<typename TransactionIdT = Aws::String>
    void SetTransactionId(TransactionIdT&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::forward<TransactionIdT>(value); }
    template<typename TransactionIdT = Aws::String>
    ListTransactionEventsRequest& WithTransactionId(TransactionIdT&& value) { SetTransactionId(std::forward<TransactionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The blockchain network where the transaction events occurred.</p>
     */
    inline QueryNetwork GetNetwork() const { return m_network; }
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
    inline void SetNetwork(QueryNetwork value) { m_networkHasBeenSet = true; m_network = value; }
    inline ListTransactionEventsRequest& WithNetwork(QueryNetwork value) { SetNetwork(value); return *this;}
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
    ListTransactionEventsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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
    inline ListTransactionEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_transactionHash;
    bool m_transactionHashHasBeenSet = false;

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    QueryNetwork m_network{QueryNetwork::NOT_SET};
    bool m_networkHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
