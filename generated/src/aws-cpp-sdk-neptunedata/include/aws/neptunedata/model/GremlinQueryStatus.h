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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace neptunedata
{
namespace Model
{

  /**
   * <p>Captures the status of a Gremlin query (see the <a
   * href="https://docs.aws.amazon.com/neptune/latest/userguide/gremlin-api-status.html">Gremlin
   * query status API</a> page).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptunedata-2023-08-01/GremlinQueryStatus">AWS
   * API Reference</a></p>
   */
  class GremlinQueryStatus
  {
  public:
    AWS_NEPTUNEDATA_API GremlinQueryStatus();
    AWS_NEPTUNEDATA_API GremlinQueryStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API GremlinQueryStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Gremlin query.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }

    /**
     * <p>The ID of the Gremlin query.</p>
     */
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }

    /**
     * <p>The ID of the Gremlin query.</p>
     */
    inline void SetQueryId(const Aws::String& value) { m_queryIdHasBeenSet = true; m_queryId = value; }

    /**
     * <p>The ID of the Gremlin query.</p>
     */
    inline void SetQueryId(Aws::String&& value) { m_queryIdHasBeenSet = true; m_queryId = std::move(value); }

    /**
     * <p>The ID of the Gremlin query.</p>
     */
    inline void SetQueryId(const char* value) { m_queryIdHasBeenSet = true; m_queryId.assign(value); }

    /**
     * <p>The ID of the Gremlin query.</p>
     */
    inline GremlinQueryStatus& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}

    /**
     * <p>The ID of the Gremlin query.</p>
     */
    inline GremlinQueryStatus& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Gremlin query.</p>
     */
    inline GremlinQueryStatus& WithQueryId(const char* value) { SetQueryId(value); return *this;}


    /**
     * <p>The query string of the Gremlin query.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>The query string of the Gremlin query.</p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>The query string of the Gremlin query.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>The query string of the Gremlin query.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>The query string of the Gremlin query.</p>
     */
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    /**
     * <p>The query string of the Gremlin query.</p>
     */
    inline GremlinQueryStatus& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The query string of the Gremlin query.</p>
     */
    inline GremlinQueryStatus& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The query string of the Gremlin query.</p>
     */
    inline GremlinQueryStatus& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>The query statistics of the Gremlin query.</p>
     */
    inline const QueryEvalStats& GetQueryEvalStats() const{ return m_queryEvalStats; }

    /**
     * <p>The query statistics of the Gremlin query.</p>
     */
    inline bool QueryEvalStatsHasBeenSet() const { return m_queryEvalStatsHasBeenSet; }

    /**
     * <p>The query statistics of the Gremlin query.</p>
     */
    inline void SetQueryEvalStats(const QueryEvalStats& value) { m_queryEvalStatsHasBeenSet = true; m_queryEvalStats = value; }

    /**
     * <p>The query statistics of the Gremlin query.</p>
     */
    inline void SetQueryEvalStats(QueryEvalStats&& value) { m_queryEvalStatsHasBeenSet = true; m_queryEvalStats = std::move(value); }

    /**
     * <p>The query statistics of the Gremlin query.</p>
     */
    inline GremlinQueryStatus& WithQueryEvalStats(const QueryEvalStats& value) { SetQueryEvalStats(value); return *this;}

    /**
     * <p>The query statistics of the Gremlin query.</p>
     */
    inline GremlinQueryStatus& WithQueryEvalStats(QueryEvalStats&& value) { SetQueryEvalStats(std::move(value)); return *this;}

  private:

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    QueryEvalStats m_queryEvalStats;
    bool m_queryEvalStatsHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
