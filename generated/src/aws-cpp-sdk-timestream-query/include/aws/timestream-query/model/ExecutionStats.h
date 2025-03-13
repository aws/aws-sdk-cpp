/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>

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
   * <p>Statistics for a single scheduled query run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ExecutionStats">AWS
   * API Reference</a></p>
   */
  class ExecutionStats
  {
  public:
    AWS_TIMESTREAMQUERY_API ExecutionStats() = default;
    AWS_TIMESTREAMQUERY_API ExecutionStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API ExecutionStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Total time, measured in milliseconds, that was needed for the scheduled query
     * run to complete.</p>
     */
    inline long long GetExecutionTimeInMillis() const { return m_executionTimeInMillis; }
    inline bool ExecutionTimeInMillisHasBeenSet() const { return m_executionTimeInMillisHasBeenSet; }
    inline void SetExecutionTimeInMillis(long long value) { m_executionTimeInMillisHasBeenSet = true; m_executionTimeInMillis = value; }
    inline ExecutionStats& WithExecutionTimeInMillis(long long value) { SetExecutionTimeInMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data writes metered for records ingested in a single scheduled query run.</p>
     */
    inline long long GetDataWrites() const { return m_dataWrites; }
    inline bool DataWritesHasBeenSet() const { return m_dataWritesHasBeenSet; }
    inline void SetDataWrites(long long value) { m_dataWritesHasBeenSet = true; m_dataWrites = value; }
    inline ExecutionStats& WithDataWrites(long long value) { SetDataWrites(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Bytes metered for a single scheduled query run.</p>
     */
    inline long long GetBytesMetered() const { return m_bytesMetered; }
    inline bool BytesMeteredHasBeenSet() const { return m_bytesMeteredHasBeenSet; }
    inline void SetBytesMetered(long long value) { m_bytesMeteredHasBeenSet = true; m_bytesMetered = value; }
    inline ExecutionStats& WithBytesMetered(long long value) { SetBytesMetered(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Bytes scanned for a single scheduled query run.</p>
     */
    inline long long GetCumulativeBytesScanned() const { return m_cumulativeBytesScanned; }
    inline bool CumulativeBytesScannedHasBeenSet() const { return m_cumulativeBytesScannedHasBeenSet; }
    inline void SetCumulativeBytesScanned(long long value) { m_cumulativeBytesScannedHasBeenSet = true; m_cumulativeBytesScanned = value; }
    inline ExecutionStats& WithCumulativeBytesScanned(long long value) { SetCumulativeBytesScanned(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of records ingested for a single scheduled query run. </p>
     */
    inline long long GetRecordsIngested() const { return m_recordsIngested; }
    inline bool RecordsIngestedHasBeenSet() const { return m_recordsIngestedHasBeenSet; }
    inline void SetRecordsIngested(long long value) { m_recordsIngestedHasBeenSet = true; m_recordsIngested = value; }
    inline ExecutionStats& WithRecordsIngested(long long value) { SetRecordsIngested(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of rows present in the output from running a query before ingestion to
     * destination data source.</p>
     */
    inline long long GetQueryResultRows() const { return m_queryResultRows; }
    inline bool QueryResultRowsHasBeenSet() const { return m_queryResultRowsHasBeenSet; }
    inline void SetQueryResultRows(long long value) { m_queryResultRowsHasBeenSet = true; m_queryResultRows = value; }
    inline ExecutionStats& WithQueryResultRows(long long value) { SetQueryResultRows(value); return *this;}
    ///@}
  private:

    long long m_executionTimeInMillis{0};
    bool m_executionTimeInMillisHasBeenSet = false;

    long long m_dataWrites{0};
    bool m_dataWritesHasBeenSet = false;

    long long m_bytesMetered{0};
    bool m_bytesMeteredHasBeenSet = false;

    long long m_cumulativeBytesScanned{0};
    bool m_cumulativeBytesScannedHasBeenSet = false;

    long long m_recordsIngested{0};
    bool m_recordsIngestedHasBeenSet = false;

    long long m_queryResultRows{0};
    bool m_queryResultRowsHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
