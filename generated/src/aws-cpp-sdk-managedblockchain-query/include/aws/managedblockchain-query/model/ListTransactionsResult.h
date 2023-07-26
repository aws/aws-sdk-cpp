/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain-query/model/TransactionOutputItem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ManagedBlockchainQuery
{
namespace Model
{
  class ListTransactionsResult
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API ListTransactionsResult();
    AWS_MANAGEDBLOCKCHAINQUERY_API ListTransactionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAINQUERY_API ListTransactionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The array of transactions returned by the request.</p>
     */
    inline const Aws::Vector<TransactionOutputItem>& GetTransactions() const{ return m_transactions; }

    /**
     * <p>The array of transactions returned by the request.</p>
     */
    inline void SetTransactions(const Aws::Vector<TransactionOutputItem>& value) { m_transactions = value; }

    /**
     * <p>The array of transactions returned by the request.</p>
     */
    inline void SetTransactions(Aws::Vector<TransactionOutputItem>&& value) { m_transactions = std::move(value); }

    /**
     * <p>The array of transactions returned by the request.</p>
     */
    inline ListTransactionsResult& WithTransactions(const Aws::Vector<TransactionOutputItem>& value) { SetTransactions(value); return *this;}

    /**
     * <p>The array of transactions returned by the request.</p>
     */
    inline ListTransactionsResult& WithTransactions(Aws::Vector<TransactionOutputItem>&& value) { SetTransactions(std::move(value)); return *this;}

    /**
     * <p>The array of transactions returned by the request.</p>
     */
    inline ListTransactionsResult& AddTransactions(const TransactionOutputItem& value) { m_transactions.push_back(value); return *this; }

    /**
     * <p>The array of transactions returned by the request.</p>
     */
    inline ListTransactionsResult& AddTransactions(TransactionOutputItem&& value) { m_transactions.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListTransactionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListTransactionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListTransactionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTransactionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTransactionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTransactionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<TransactionOutputItem> m_transactions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
