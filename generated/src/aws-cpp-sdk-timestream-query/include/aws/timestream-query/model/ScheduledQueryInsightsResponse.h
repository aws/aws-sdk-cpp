/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/QuerySpatialCoverage.h>
#include <aws/timestream-query/model/QueryTemporalRange.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>Provides various insights and metrics related to the
   * <code>ExecuteScheduledQueryRequest</code> that was executed.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ScheduledQueryInsightsResponse">AWS
   * API Reference</a></p>
   */
  class ScheduledQueryInsightsResponse
  {
  public:
    AWS_TIMESTREAMQUERY_API ScheduledQueryInsightsResponse() = default;
    AWS_TIMESTREAMQUERY_API ScheduledQueryInsightsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API ScheduledQueryInsightsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides insights into the spatial coverage of the query, including the table
     * with sub-optimal (max) spatial pruning. This information can help you identify
     * areas for improvement in your partitioning strategy to enhance spatial
     * pruning.</p>
     */
    inline const QuerySpatialCoverage& GetQuerySpatialCoverage() const { return m_querySpatialCoverage; }
    inline bool QuerySpatialCoverageHasBeenSet() const { return m_querySpatialCoverageHasBeenSet; }
    template<typename QuerySpatialCoverageT = QuerySpatialCoverage>
    void SetQuerySpatialCoverage(QuerySpatialCoverageT&& value) { m_querySpatialCoverageHasBeenSet = true; m_querySpatialCoverage = std::forward<QuerySpatialCoverageT>(value); }
    template<typename QuerySpatialCoverageT = QuerySpatialCoverage>
    ScheduledQueryInsightsResponse& WithQuerySpatialCoverage(QuerySpatialCoverageT&& value) { SetQuerySpatialCoverage(std::forward<QuerySpatialCoverageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides insights into the temporal range of the query, including the table
     * with the largest (max) time range. Following are some of the potential options
     * for optimizing time-based pruning:</p> <ul> <li> <p>Add missing
     * time-predicates.</p> </li> <li> <p>Remove functions around the time
     * predicates.</p> </li> <li> <p>Add time predicates to all the sub-queries.</p>
     * </li> </ul>
     */
    inline const QueryTemporalRange& GetQueryTemporalRange() const { return m_queryTemporalRange; }
    inline bool QueryTemporalRangeHasBeenSet() const { return m_queryTemporalRangeHasBeenSet; }
    template<typename QueryTemporalRangeT = QueryTemporalRange>
    void SetQueryTemporalRange(QueryTemporalRangeT&& value) { m_queryTemporalRangeHasBeenSet = true; m_queryTemporalRange = std::forward<QueryTemporalRangeT>(value); }
    template<typename QueryTemporalRangeT = QueryTemporalRange>
    ScheduledQueryInsightsResponse& WithQueryTemporalRange(QueryTemporalRangeT&& value) { SetQueryTemporalRange(std::forward<QueryTemporalRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the number of tables in the query.</p>
     */
    inline long long GetQueryTableCount() const { return m_queryTableCount; }
    inline bool QueryTableCountHasBeenSet() const { return m_queryTableCountHasBeenSet; }
    inline void SetQueryTableCount(long long value) { m_queryTableCountHasBeenSet = true; m_queryTableCount = value; }
    inline ScheduledQueryInsightsResponse& WithQueryTableCount(long long value) { SetQueryTableCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the total number of rows returned as part of the query result set.
     * You can use this data to validate if the number of rows in the result set have
     * changed as part of the query tuning exercise.</p>
     */
    inline long long GetOutputRows() const { return m_outputRows; }
    inline bool OutputRowsHasBeenSet() const { return m_outputRowsHasBeenSet; }
    inline void SetOutputRows(long long value) { m_outputRowsHasBeenSet = true; m_outputRows = value; }
    inline ScheduledQueryInsightsResponse& WithOutputRows(long long value) { SetOutputRows(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the size of query result set in bytes. You can use this data to
     * validate if the result set has changed as part of the query tuning exercise.</p>
     */
    inline long long GetOutputBytes() const { return m_outputBytes; }
    inline bool OutputBytesHasBeenSet() const { return m_outputBytesHasBeenSet; }
    inline void SetOutputBytes(long long value) { m_outputBytesHasBeenSet = true; m_outputBytes = value; }
    inline ScheduledQueryInsightsResponse& WithOutputBytes(long long value) { SetOutputBytes(value); return *this;}
    ///@}
  private:

    QuerySpatialCoverage m_querySpatialCoverage;
    bool m_querySpatialCoverageHasBeenSet = false;

    QueryTemporalRange m_queryTemporalRange;
    bool m_queryTemporalRangeHasBeenSet = false;

    long long m_queryTableCount{0};
    bool m_queryTableCountHasBeenSet = false;

    long long m_outputRows{0};
    bool m_outputRowsHasBeenSet = false;

    long long m_outputBytes{0};
    bool m_outputBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
