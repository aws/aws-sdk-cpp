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
    AWS_NEPTUNEDATA_API GremlinQueryStatus() = default;
    AWS_NEPTUNEDATA_API GremlinQueryStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API GremlinQueryStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Gremlin query.</p>
     */
    inline const Aws::String& GetQueryId() const { return m_queryId; }
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }
    template<typename QueryIdT = Aws::String>
    void SetQueryId(QueryIdT&& value) { m_queryIdHasBeenSet = true; m_queryId = std::forward<QueryIdT>(value); }
    template<typename QueryIdT = Aws::String>
    GremlinQueryStatus& WithQueryId(QueryIdT&& value) { SetQueryId(std::forward<QueryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query string of the Gremlin query.</p>
     */
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    GremlinQueryStatus& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query statistics of the Gremlin query.</p>
     */
    inline const QueryEvalStats& GetQueryEvalStats() const { return m_queryEvalStats; }
    inline bool QueryEvalStatsHasBeenSet() const { return m_queryEvalStatsHasBeenSet; }
    template<typename QueryEvalStatsT = QueryEvalStats>
    void SetQueryEvalStats(QueryEvalStatsT&& value) { m_queryEvalStatsHasBeenSet = true; m_queryEvalStats = std::forward<QueryEvalStatsT>(value); }
    template<typename QueryEvalStatsT = QueryEvalStats>
    GremlinQueryStatus& WithQueryEvalStats(QueryEvalStatsT&& value) { SetQueryEvalStats(std::forward<QueryEvalStatsT>(value)); return *this;}
    ///@}
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
