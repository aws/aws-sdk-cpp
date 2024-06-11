﻿/**
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
  class ListFilteredTransactionEventsResult
  {
  public:
    AWS_MANAGEDBLOCKCHAINQUERY_API ListFilteredTransactionEventsResult();
    AWS_MANAGEDBLOCKCHAINQUERY_API ListFilteredTransactionEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAINQUERY_API ListFilteredTransactionEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The transaction events returned by the request.</p>
     */
    inline const Aws::Vector<TransactionEvent>& GetEvents() const{ return m_events; }
    inline void SetEvents(const Aws::Vector<TransactionEvent>& value) { m_events = value; }
    inline void SetEvents(Aws::Vector<TransactionEvent>&& value) { m_events = std::move(value); }
    inline ListFilteredTransactionEventsResult& WithEvents(const Aws::Vector<TransactionEvent>& value) { SetEvents(value); return *this;}
    inline ListFilteredTransactionEventsResult& WithEvents(Aws::Vector<TransactionEvent>&& value) { SetEvents(std::move(value)); return *this;}
    inline ListFilteredTransactionEventsResult& AddEvents(const TransactionEvent& value) { m_events.push_back(value); return *this; }
    inline ListFilteredTransactionEventsResult& AddEvents(TransactionEvent&& value) { m_events.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFilteredTransactionEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFilteredTransactionEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFilteredTransactionEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFilteredTransactionEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFilteredTransactionEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFilteredTransactionEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TransactionEvent> m_events;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
