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
    AWS_NEPTUNEDATA_API ListGremlinQueriesResult();
    AWS_NEPTUNEDATA_API ListGremlinQueriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API ListGremlinQueriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of queries that have been accepted but not yet completed,
     * including queries in the queue.</p>
     */
    inline int GetAcceptedQueryCount() const{ return m_acceptedQueryCount; }

    /**
     * <p>The number of queries that have been accepted but not yet completed,
     * including queries in the queue.</p>
     */
    inline void SetAcceptedQueryCount(int value) { m_acceptedQueryCount = value; }

    /**
     * <p>The number of queries that have been accepted but not yet completed,
     * including queries in the queue.</p>
     */
    inline ListGremlinQueriesResult& WithAcceptedQueryCount(int value) { SetAcceptedQueryCount(value); return *this;}


    /**
     * <p>The number of Gremlin queries currently running.</p>
     */
    inline int GetRunningQueryCount() const{ return m_runningQueryCount; }

    /**
     * <p>The number of Gremlin queries currently running.</p>
     */
    inline void SetRunningQueryCount(int value) { m_runningQueryCount = value; }

    /**
     * <p>The number of Gremlin queries currently running.</p>
     */
    inline ListGremlinQueriesResult& WithRunningQueryCount(int value) { SetRunningQueryCount(value); return *this;}


    /**
     * <p>A list of the current queries.</p>
     */
    inline const Aws::Vector<GremlinQueryStatus>& GetQueries() const{ return m_queries; }

    /**
     * <p>A list of the current queries.</p>
     */
    inline void SetQueries(const Aws::Vector<GremlinQueryStatus>& value) { m_queries = value; }

    /**
     * <p>A list of the current queries.</p>
     */
    inline void SetQueries(Aws::Vector<GremlinQueryStatus>&& value) { m_queries = std::move(value); }

    /**
     * <p>A list of the current queries.</p>
     */
    inline ListGremlinQueriesResult& WithQueries(const Aws::Vector<GremlinQueryStatus>& value) { SetQueries(value); return *this;}

    /**
     * <p>A list of the current queries.</p>
     */
    inline ListGremlinQueriesResult& WithQueries(Aws::Vector<GremlinQueryStatus>&& value) { SetQueries(std::move(value)); return *this;}

    /**
     * <p>A list of the current queries.</p>
     */
    inline ListGremlinQueriesResult& AddQueries(const GremlinQueryStatus& value) { m_queries.push_back(value); return *this; }

    /**
     * <p>A list of the current queries.</p>
     */
    inline ListGremlinQueriesResult& AddQueries(GremlinQueryStatus&& value) { m_queries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListGremlinQueriesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListGremlinQueriesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListGremlinQueriesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_acceptedQueryCount;

    int m_runningQueryCount;

    Aws::Vector<GremlinQueryStatus> m_queries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
