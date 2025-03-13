/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/model/GremlinQueryStatus.h>
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
namespace neptunedata
{
namespace Model
{
  class ListGremlinQueriesResult
  {
  public:
    AWS_NEPTUNEDATA_API ListGremlinQueriesResult() = default;
    AWS_NEPTUNEDATA_API ListGremlinQueriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API ListGremlinQueriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of queries that have been accepted but not yet completed,
     * including queries in the queue.</p>
     */
    inline int GetAcceptedQueryCount() const { return m_acceptedQueryCount; }
    inline void SetAcceptedQueryCount(int value) { m_acceptedQueryCountHasBeenSet = true; m_acceptedQueryCount = value; }
    inline ListGremlinQueriesResult& WithAcceptedQueryCount(int value) { SetAcceptedQueryCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Gremlin queries currently running.</p>
     */
    inline int GetRunningQueryCount() const { return m_runningQueryCount; }
    inline void SetRunningQueryCount(int value) { m_runningQueryCountHasBeenSet = true; m_runningQueryCount = value; }
    inline ListGremlinQueriesResult& WithRunningQueryCount(int value) { SetRunningQueryCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the current queries.</p>
     */
    inline const Aws::Vector<GremlinQueryStatus>& GetQueries() const { return m_queries; }
    template<typename QueriesT = Aws::Vector<GremlinQueryStatus>>
    void SetQueries(QueriesT&& value) { m_queriesHasBeenSet = true; m_queries = std::forward<QueriesT>(value); }
    template<typename QueriesT = Aws::Vector<GremlinQueryStatus>>
    ListGremlinQueriesResult& WithQueries(QueriesT&& value) { SetQueries(std::forward<QueriesT>(value)); return *this;}
    template<typename QueriesT = GremlinQueryStatus>
    ListGremlinQueriesResult& AddQueries(QueriesT&& value) { m_queriesHasBeenSet = true; m_queries.emplace_back(std::forward<QueriesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGremlinQueriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_acceptedQueryCount{0};
    bool m_acceptedQueryCountHasBeenSet = false;

    int m_runningQueryCount{0};
    bool m_runningQueryCountHasBeenSet = false;

    Aws::Vector<GremlinQueryStatus> m_queries;
    bool m_queriesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
