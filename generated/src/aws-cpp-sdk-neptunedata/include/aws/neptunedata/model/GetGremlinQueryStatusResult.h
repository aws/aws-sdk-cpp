/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/model/QueryEvalStats.h>
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
  class GetGremlinQueryStatusResult
  {
  public:
    AWS_NEPTUNEDATA_API GetGremlinQueryStatusResult();
    AWS_NEPTUNEDATA_API GetGremlinQueryStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API GetGremlinQueryStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the query for which status is being returned.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }

    /**
     * <p>The ID of the query for which status is being returned.</p>
     */
    inline void SetQueryId(const Aws::String& value) { m_queryId = value; }

    /**
     * <p>The ID of the query for which status is being returned.</p>
     */
    inline void SetQueryId(Aws::String&& value) { m_queryId = std::move(value); }

    /**
     * <p>The ID of the query for which status is being returned.</p>
     */
    inline void SetQueryId(const char* value) { m_queryId.assign(value); }

    /**
     * <p>The ID of the query for which status is being returned.</p>
     */
    inline GetGremlinQueryStatusResult& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}

    /**
     * <p>The ID of the query for which status is being returned.</p>
     */
    inline GetGremlinQueryStatusResult& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}

    /**
     * <p>The ID of the query for which status is being returned.</p>
     */
    inline GetGremlinQueryStatusResult& WithQueryId(const char* value) { SetQueryId(value); return *this;}


    /**
     * <p>The Gremlin query string.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>The Gremlin query string.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryString = value; }

    /**
     * <p>The Gremlin query string.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryString = std::move(value); }

    /**
     * <p>The Gremlin query string.</p>
     */
    inline void SetQueryString(const char* value) { m_queryString.assign(value); }

    /**
     * <p>The Gremlin query string.</p>
     */
    inline GetGremlinQueryStatusResult& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The Gremlin query string.</p>
     */
    inline GetGremlinQueryStatusResult& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The Gremlin query string.</p>
     */
    inline GetGremlinQueryStatusResult& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>The evaluation status of the Gremlin query.</p>
     */
    inline const QueryEvalStats& GetQueryEvalStats() const{ return m_queryEvalStats; }

    /**
     * <p>The evaluation status of the Gremlin query.</p>
     */
    inline void SetQueryEvalStats(const QueryEvalStats& value) { m_queryEvalStats = value; }

    /**
     * <p>The evaluation status of the Gremlin query.</p>
     */
    inline void SetQueryEvalStats(QueryEvalStats&& value) { m_queryEvalStats = std::move(value); }

    /**
     * <p>The evaluation status of the Gremlin query.</p>
     */
    inline GetGremlinQueryStatusResult& WithQueryEvalStats(const QueryEvalStats& value) { SetQueryEvalStats(value); return *this;}

    /**
     * <p>The evaluation status of the Gremlin query.</p>
     */
    inline GetGremlinQueryStatusResult& WithQueryEvalStats(QueryEvalStats&& value) { SetQueryEvalStats(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetGremlinQueryStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetGremlinQueryStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetGremlinQueryStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_queryId;

    Aws::String m_queryString;

    QueryEvalStats m_queryEvalStats;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
