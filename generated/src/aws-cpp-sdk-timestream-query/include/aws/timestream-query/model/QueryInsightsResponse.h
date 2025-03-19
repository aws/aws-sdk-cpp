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
   * <p>Provides various insights and metrics related to the query that you
   * executed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/QueryInsightsResponse">AWS
   * API Reference</a></p>
   */
  class QueryInsightsResponse
  {
  public:
    AWS_TIMESTREAMQUERY_API QueryInsightsResponse() = default;
    AWS_TIMESTREAMQUERY_API QueryInsightsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API QueryInsightsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides insights into the spatial coverage of the query, including the table
     * with sub-optimal (max) spatial pruning. This information can help you identify
     * areas for improvement in your partitioning strategy to enhance spatial pruning.
     * </p>
     */
    inline const QuerySpatialCoverage& GetQuerySpatialCoverage() const { return m_querySpatialCoverage; }
    inline bool QuerySpatialCoverageHasBeenSet() const { return m_querySpatialCoverageHasBeenSet; }
    template<typename QuerySpatialCoverageT = QuerySpatialCoverage>
    void SetQuerySpatialCoverage(QuerySpatialCoverageT&& value) { m_querySpatialCoverageHasBeenSet = true; m_querySpatialCoverage = std::forward<QuerySpatialCoverageT>(value); }
    template<typename QuerySpatialCoverageT = QuerySpatialCoverage>
    QueryInsightsResponse& WithQuerySpatialCoverage(QuerySpatialCoverageT&& value) { SetQuerySpatialCoverage(std::forward<QuerySpatialCoverageT>(value)); return *this;}
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
    QueryInsightsResponse& WithQueryTemporalRange(QueryTemporalRangeT&& value) { SetQueryTemporalRange(std::forward<QueryTemporalRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the number of tables in the query.</p>
     */
    inline long long GetQueryTableCount() const { return m_queryTableCount; }
    inline bool QueryTableCountHasBeenSet() const { return m_queryTableCountHasBeenSet; }
    inline void SetQueryTableCount(long long value) { m_queryTableCountHasBeenSet = true; m_queryTableCount = value; }
    inline QueryInsightsResponse& WithQueryTableCount(long long value) { SetQueryTableCount(value); return *this;}
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
    inline QueryInsightsResponse& WithOutputRows(long long value) { SetOutputRows(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the size of query result set in bytes. You can use this data to
     * validate if the result set has changed as part of the query tuning exercise.</p>
     */
    inline long long GetOutputBytes() const { return m_outputBytes; }
    inline bool OutputBytesHasBeenSet() const { return m_outputBytesHasBeenSet; }
    inline void SetOutputBytes(long long value) { m_outputBytesHasBeenSet = true; m_outputBytes = value; }
    inline QueryInsightsResponse& WithOutputBytes(long long value) { SetOutputBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the partitions created by the <code>Unload</code> operation.</p>
     */
    inline long long GetUnloadPartitionCount() const { return m_unloadPartitionCount; }
    inline bool UnloadPartitionCountHasBeenSet() const { return m_unloadPartitionCountHasBeenSet; }
    inline void SetUnloadPartitionCount(long long value) { m_unloadPartitionCountHasBeenSet = true; m_unloadPartitionCount = value; }
    inline QueryInsightsResponse& WithUnloadPartitionCount(long long value) { SetUnloadPartitionCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the rows written by the <code>Unload</code> query.</p>
     */
    inline long long GetUnloadWrittenRows() const { return m_unloadWrittenRows; }
    inline bool UnloadWrittenRowsHasBeenSet() const { return m_unloadWrittenRowsHasBeenSet; }
    inline void SetUnloadWrittenRows(long long value) { m_unloadWrittenRowsHasBeenSet = true; m_unloadWrittenRows = value; }
    inline QueryInsightsResponse& WithUnloadWrittenRows(long long value) { SetUnloadWrittenRows(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the size, in bytes, written by the <code>Unload</code>
     * operation.</p>
     */
    inline long long GetUnloadWrittenBytes() const { return m_unloadWrittenBytes; }
    inline bool UnloadWrittenBytesHasBeenSet() const { return m_unloadWrittenBytesHasBeenSet; }
    inline void SetUnloadWrittenBytes(long long value) { m_unloadWrittenBytesHasBeenSet = true; m_unloadWrittenBytes = value; }
    inline QueryInsightsResponse& WithUnloadWrittenBytes(long long value) { SetUnloadWrittenBytes(value); return *this;}
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

    long long m_unloadPartitionCount{0};
    bool m_unloadPartitionCountHasBeenSet = false;

    long long m_unloadWrittenRows{0};
    bool m_unloadWrittenRowsHasBeenSet = false;

    long long m_unloadWrittenBytes{0};
    bool m_unloadWrittenBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
