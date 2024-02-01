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
    AWS_NEPTUNEGRAPH_API QuerySummary();
    AWS_NEPTUNEGRAPH_API QuerySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API QuerySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string representation of the id of the query.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A string representation of the id of the query.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A string representation of the id of the query.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A string representation of the id of the query.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A string representation of the id of the query.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A string representation of the id of the query.</p>
     */
    inline QuerySummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A string representation of the id of the query.</p>
     */
    inline QuerySummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A string representation of the id of the query.</p>
     */
    inline QuerySummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The actual query text. The <code>queryString</code> may be truncated if the
     * actual query string is too long.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>The actual query text. The <code>queryString</code> may be truncated if the
     * actual query string is too long.</p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>The actual query text. The <code>queryString</code> may be truncated if the
     * actual query string is too long.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>The actual query text. The <code>queryString</code> may be truncated if the
     * actual query string is too long.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>The actual query text. The <code>queryString</code> may be truncated if the
     * actual query string is too long.</p>
     */
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    /**
     * <p>The actual query text. The <code>queryString</code> may be truncated if the
     * actual query string is too long.</p>
     */
    inline QuerySummary& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The actual query text. The <code>queryString</code> may be truncated if the
     * actual query string is too long.</p>
     */
    inline QuerySummary& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The actual query text. The <code>queryString</code> may be truncated if the
     * actual query string is too long.</p>
     */
    inline QuerySummary& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>The amount of time, in milliseconds, the query has waited in the queue before
     * being picked up by a worker thread.</p>
     */
    inline int GetWaited() const{ return m_waited; }

    /**
     * <p>The amount of time, in milliseconds, the query has waited in the queue before
     * being picked up by a worker thread.</p>
     */
    inline bool WaitedHasBeenSet() const { return m_waitedHasBeenSet; }

    /**
     * <p>The amount of time, in milliseconds, the query has waited in the queue before
     * being picked up by a worker thread.</p>
     */
    inline void SetWaited(int value) { m_waitedHasBeenSet = true; m_waited = value; }

    /**
     * <p>The amount of time, in milliseconds, the query has waited in the queue before
     * being picked up by a worker thread.</p>
     */
    inline QuerySummary& WithWaited(int value) { SetWaited(value); return *this;}


    /**
     * <p>The running time of the query, in milliseconds.</p>
     */
    inline int GetElapsed() const{ return m_elapsed; }

    /**
     * <p>The running time of the query, in milliseconds.</p>
     */
    inline bool ElapsedHasBeenSet() const { return m_elapsedHasBeenSet; }

    /**
     * <p>The running time of the query, in milliseconds.</p>
     */
    inline void SetElapsed(int value) { m_elapsedHasBeenSet = true; m_elapsed = value; }

    /**
     * <p>The running time of the query, in milliseconds.</p>
     */
    inline QuerySummary& WithElapsed(int value) { SetElapsed(value); return *this;}


    /**
     * <p>State of the query.</p>
     */
    inline const QueryState& GetState() const{ return m_state; }

    /**
     * <p>State of the query.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>State of the query.</p>
     */
    inline void SetState(const QueryState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>State of the query.</p>
     */
    inline void SetState(QueryState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>State of the query.</p>
     */
    inline QuerySummary& WithState(const QueryState& value) { SetState(value); return *this;}

    /**
     * <p>State of the query.</p>
     */
    inline QuerySummary& WithState(QueryState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    int m_waited;
    bool m_waitedHasBeenSet = false;

    int m_elapsed;
    bool m_elapsedHasBeenSet = false;

    QueryState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
