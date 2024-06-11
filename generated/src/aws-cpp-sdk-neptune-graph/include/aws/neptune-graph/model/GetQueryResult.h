/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune-graph/model/QueryState.h>
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
namespace NeptuneGraph
{
namespace Model
{
  class GetQueryResult
  {
  public:
    AWS_NEPTUNEGRAPH_API GetQueryResult();
    AWS_NEPTUNEGRAPH_API GetQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API GetQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the query in question.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetQueryResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetQueryResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetQueryResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query in question.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }
    inline void SetQueryString(const Aws::String& value) { m_queryString = value; }
    inline void SetQueryString(Aws::String&& value) { m_queryString = std::move(value); }
    inline void SetQueryString(const char* value) { m_queryString.assign(value); }
    inline GetQueryResult& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}
    inline GetQueryResult& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}
    inline GetQueryResult& WithQueryString(const char* value) { SetQueryString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how long the query waited, in milliseconds.</p>
     */
    inline int GetWaited() const{ return m_waited; }
    inline void SetWaited(int value) { m_waited = value; }
    inline GetQueryResult& WithWaited(int value) { SetWaited(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of milliseconds the query has been running.</p>
     */
    inline int GetElapsed() const{ return m_elapsed; }
    inline void SetElapsed(int value) { m_elapsed = value; }
    inline GetQueryResult& WithElapsed(int value) { SetElapsed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the query.</p>
     */
    inline const QueryState& GetState() const{ return m_state; }
    inline void SetState(const QueryState& value) { m_state = value; }
    inline void SetState(QueryState&& value) { m_state = std::move(value); }
    inline GetQueryResult& WithState(const QueryState& value) { SetState(value); return *this;}
    inline GetQueryResult& WithState(QueryState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetQueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetQueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetQueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_queryString;

    int m_waited;

    int m_elapsed;

    QueryState m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
