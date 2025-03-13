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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NeptuneGraph
{
namespace Model
{

  /**
   * <p>Details of the query listed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/QuerySummary">AWS
   * API Reference</a></p>
   */
  class QuerySummary
  {
  public:
    AWS_NEPTUNEGRAPH_API QuerySummary() = default;
    AWS_NEPTUNEGRAPH_API QuerySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API QuerySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string representation of the id of the query.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    QuerySummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual query text. The <code>queryString</code> may be truncated if the
     * actual query string is too long.</p>
     */
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    QuerySummary& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in milliseconds, the query has waited in the queue before
     * being picked up by a worker thread.</p>
     */
    inline int GetWaited() const { return m_waited; }
    inline bool WaitedHasBeenSet() const { return m_waitedHasBeenSet; }
    inline void SetWaited(int value) { m_waitedHasBeenSet = true; m_waited = value; }
    inline QuerySummary& WithWaited(int value) { SetWaited(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The running time of the query, in milliseconds.</p>
     */
    inline int GetElapsed() const { return m_elapsed; }
    inline bool ElapsedHasBeenSet() const { return m_elapsedHasBeenSet; }
    inline void SetElapsed(int value) { m_elapsedHasBeenSet = true; m_elapsed = value; }
    inline QuerySummary& WithElapsed(int value) { SetElapsed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the query.</p>
     */
    inline QueryState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(QueryState value) { m_stateHasBeenSet = true; m_state = value; }
    inline QuerySummary& WithState(QueryState value) { SetState(value); return *this;}
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
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
