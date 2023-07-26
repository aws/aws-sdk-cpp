/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain-query/model/TransactionEvent.h>
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
  class ListTransactionEventsResult
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API ListTransactionEventsResult();
    AWS_MANAGEDBLOCKCHAINQUERY_API ListTransactionEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAINQUERY_API ListTransactionEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>TransactionEvent</code> objects. Each object contains
     * details about the transaction events.</p>
     */
    inline const Aws::Vector<TransactionEvent>& GetEvents() const{ return m_events; }

    /**
     * <p>An array of <code>TransactionEvent</code> objects. Each object contains
     * details about the transaction events.</p>
     */
    inline void SetEvents(const Aws::Vector<TransactionEvent>& value) { m_events = value; }

    /**
     * <p>An array of <code>TransactionEvent</code> objects. Each object contains
     * details about the transaction events.</p>
     */
    inline void SetEvents(Aws::Vector<TransactionEvent>&& value) { m_events = std::move(value); }

    /**
     * <p>An array of <code>TransactionEvent</code> objects. Each object contains
     * details about the transaction events.</p>
     */
    inline ListTransactionEventsResult& WithEvents(const Aws::Vector<TransactionEvent>& value) { SetEvents(value); return *this;}

    /**
     * <p>An array of <code>TransactionEvent</code> objects. Each object contains
     * details about the transaction events.</p>
     */
    inline ListTransactionEventsResult& WithEvents(Aws::Vector<TransactionEvent>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>An array of <code>TransactionEvent</code> objects. Each object contains
     * details about the transaction events.</p>
     */
    inline ListTransactionEventsResult& AddEvents(const TransactionEvent& value) { m_events.push_back(value); return *this; }

    /**
     * <p>An array of <code>TransactionEvent</code> objects. Each object contains
     * details about the transaction events.</p>
     */
    inline ListTransactionEventsResult& AddEvents(TransactionEvent&& value) { m_events.push_back(std::move(value)); return *this; }


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
    inline ListTransactionEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListTransactionEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListTransactionEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTransactionEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTransactionEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTransactionEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<TransactionEvent> m_events;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
