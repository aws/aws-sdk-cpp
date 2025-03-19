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
    AWS_NEPTUNEGRAPH_API GetQueryResult() = default;
    AWS_NEPTUNEGRAPH_API GetQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API GetQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the query in question.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetQueryResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query in question.</p>
     */
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    GetQueryResult& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how long the query waited, in milliseconds.</p>
     */
    inline int GetWaited() const { return m_waited; }
    inline void SetWaited(int value) { m_waitedHasBeenSet = true; m_waited = value; }
    inline GetQueryResult& WithWaited(int value) { SetWaited(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of milliseconds the query has been running.</p>
     */
    inline int GetElapsed() const { return m_elapsed; }
    inline void SetElapsed(int value) { m_elapsedHasBeenSet = true; m_elapsed = value; }
    inline GetQueryResult& WithElapsed(int value) { SetElapsed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the query.</p>
     */
    inline QueryState GetState() const { return m_state; }
    inline void SetState(QueryState value) { m_stateHasBeenSet = true; m_state = value; }
    inline GetQueryResult& WithState(QueryState value) { SetState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetQueryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    int m_waited{0};
    bool m_waitedHasBeenSet = false;

    int m_elapsed{0};
    bool m_elapsedHasBeenSet = false;

    QueryState m_state{QueryState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
