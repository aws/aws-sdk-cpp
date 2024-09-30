/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/model/LogLevel.h>
#include <aws/timestream-influxdb/model/TracingType.h>
#include <aws/timestream-influxdb/model/Duration.h>
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
namespace TimestreamInfluxDB
{
namespace Model
{

  /**
   * <p>All the customer-modifiable InfluxDB v2 parameters in Timestream for
   * InfluxDB.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/InfluxDBv2Parameters">AWS
   * API Reference</a></p>
   */
  class InfluxDBv2Parameters
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API InfluxDBv2Parameters();
    AWS_TIMESTREAMINFLUXDB_API InfluxDBv2Parameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMINFLUXDB_API InfluxDBv2Parameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMINFLUXDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Include option to show detailed logs for Flux queries.</p> <p>Default:
     * false</p>
     */
    inline bool GetFluxLogEnabled() const{ return m_fluxLogEnabled; }
    inline bool FluxLogEnabledHasBeenSet() const { return m_fluxLogEnabledHasBeenSet; }
    inline void SetFluxLogEnabled(bool value) { m_fluxLogEnabledHasBeenSet = true; m_fluxLogEnabled = value; }
    inline InfluxDBv2Parameters& WithFluxLogEnabled(bool value) { SetFluxLogEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Log output level. InfluxDB outputs log entries with severity levels greater
     * than or equal to the level specified.</p> <p>Default: info</p>
     */
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(const LogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline void SetLogLevel(LogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }
    inline InfluxDBv2Parameters& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}
    inline InfluxDBv2Parameters& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disable the task scheduler. If problematic tasks prevent InfluxDB from
     * starting, use this option to start InfluxDB without scheduling or executing
     * tasks.</p> <p>Default: false</p>
     */
    inline bool GetNoTasks() const{ return m_noTasks; }
    inline bool NoTasksHasBeenSet() const { return m_noTasksHasBeenSet; }
    inline void SetNoTasks(bool value) { m_noTasksHasBeenSet = true; m_noTasks = value; }
    inline InfluxDBv2Parameters& WithNoTasks(bool value) { SetNoTasks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of queries allowed to execute concurrently. Setting to 0 allows an
     * unlimited number of concurrent queries.</p> <p>Default: 0</p>
     */
    inline int GetQueryConcurrency() const{ return m_queryConcurrency; }
    inline bool QueryConcurrencyHasBeenSet() const { return m_queryConcurrencyHasBeenSet; }
    inline void SetQueryConcurrency(int value) { m_queryConcurrencyHasBeenSet = true; m_queryConcurrency = value; }
    inline InfluxDBv2Parameters& WithQueryConcurrency(int value) { SetQueryConcurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of queries allowed in execution queue. When queue limit is
     * reached, new queries are rejected. Setting to 0 allows an unlimited number of
     * queries in the queue.</p> <p>Default: 0</p>
     */
    inline int GetQueryQueueSize() const{ return m_queryQueueSize; }
    inline bool QueryQueueSizeHasBeenSet() const { return m_queryQueueSizeHasBeenSet; }
    inline void SetQueryQueueSize(int value) { m_queryQueueSizeHasBeenSet = true; m_queryQueueSize = value; }
    inline InfluxDBv2Parameters& WithQueryQueueSize(int value) { SetQueryQueueSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable tracing in InfluxDB and specifies the tracing type. Tracing is
     * disabled by default.</p>
     */
    inline const TracingType& GetTracingType() const{ return m_tracingType; }
    inline bool TracingTypeHasBeenSet() const { return m_tracingTypeHasBeenSet; }
    inline void SetTracingType(const TracingType& value) { m_tracingTypeHasBeenSet = true; m_tracingType = value; }
    inline void SetTracingType(TracingType&& value) { m_tracingTypeHasBeenSet = true; m_tracingType = std::move(value); }
    inline InfluxDBv2Parameters& WithTracingType(const TracingType& value) { SetTracingType(value); return *this;}
    inline InfluxDBv2Parameters& WithTracingType(TracingType&& value) { SetTracingType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disable the HTTP /metrics endpoint which exposes <a
     * href="https://docs.influxdata.com/influxdb/v2/reference/internals/metrics/">internal
     * InfluxDB metrics</a>.</p> <p>Default: false</p>
     */
    inline bool GetMetricsDisabled() const{ return m_metricsDisabled; }
    inline bool MetricsDisabledHasBeenSet() const { return m_metricsDisabledHasBeenSet; }
    inline void SetMetricsDisabled(bool value) { m_metricsDisabledHasBeenSet = true; m_metricsDisabled = value; }
    inline InfluxDBv2Parameters& WithMetricsDisabled(bool value) { SetMetricsDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum duration the server should keep established connections alive while
     * waiting for new requests. Set to 0 for no timeout.</p> <p>Default: 3 minutes</p>
     */
    inline const Duration& GetHttpIdleTimeout() const{ return m_httpIdleTimeout; }
    inline bool HttpIdleTimeoutHasBeenSet() const { return m_httpIdleTimeoutHasBeenSet; }
    inline void SetHttpIdleTimeout(const Duration& value) { m_httpIdleTimeoutHasBeenSet = true; m_httpIdleTimeout = value; }
    inline void SetHttpIdleTimeout(Duration&& value) { m_httpIdleTimeoutHasBeenSet = true; m_httpIdleTimeout = std::move(value); }
    inline InfluxDBv2Parameters& WithHttpIdleTimeout(const Duration& value) { SetHttpIdleTimeout(value); return *this;}
    inline InfluxDBv2Parameters& WithHttpIdleTimeout(Duration&& value) { SetHttpIdleTimeout(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum duration the server should try to read HTTP headers for new requests.
     * Set to 0 for no timeout.</p> <p>Default: 10 seconds</p>
     */
    inline const Duration& GetHttpReadHeaderTimeout() const{ return m_httpReadHeaderTimeout; }
    inline bool HttpReadHeaderTimeoutHasBeenSet() const { return m_httpReadHeaderTimeoutHasBeenSet; }
    inline void SetHttpReadHeaderTimeout(const Duration& value) { m_httpReadHeaderTimeoutHasBeenSet = true; m_httpReadHeaderTimeout = value; }
    inline void SetHttpReadHeaderTimeout(Duration&& value) { m_httpReadHeaderTimeoutHasBeenSet = true; m_httpReadHeaderTimeout = std::move(value); }
    inline InfluxDBv2Parameters& WithHttpReadHeaderTimeout(const Duration& value) { SetHttpReadHeaderTimeout(value); return *this;}
    inline InfluxDBv2Parameters& WithHttpReadHeaderTimeout(Duration&& value) { SetHttpReadHeaderTimeout(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum duration the server should try to read the entirety of new requests.
     * Set to 0 for no timeout.</p> <p>Default: 0</p>
     */
    inline const Duration& GetHttpReadTimeout() const{ return m_httpReadTimeout; }
    inline bool HttpReadTimeoutHasBeenSet() const { return m_httpReadTimeoutHasBeenSet; }
    inline void SetHttpReadTimeout(const Duration& value) { m_httpReadTimeoutHasBeenSet = true; m_httpReadTimeout = value; }
    inline void SetHttpReadTimeout(Duration&& value) { m_httpReadTimeoutHasBeenSet = true; m_httpReadTimeout = std::move(value); }
    inline InfluxDBv2Parameters& WithHttpReadTimeout(const Duration& value) { SetHttpReadTimeout(value); return *this;}
    inline InfluxDBv2Parameters& WithHttpReadTimeout(Duration&& value) { SetHttpReadTimeout(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum duration the server should spend processing and responding to write
     * requests. Set to 0 for no timeout.</p> <p>Default: 0</p>
     */
    inline const Duration& GetHttpWriteTimeout() const{ return m_httpWriteTimeout; }
    inline bool HttpWriteTimeoutHasBeenSet() const { return m_httpWriteTimeoutHasBeenSet; }
    inline void SetHttpWriteTimeout(const Duration& value) { m_httpWriteTimeoutHasBeenSet = true; m_httpWriteTimeout = value; }
    inline void SetHttpWriteTimeout(Duration&& value) { m_httpWriteTimeoutHasBeenSet = true; m_httpWriteTimeout = std::move(value); }
    inline InfluxDBv2Parameters& WithHttpWriteTimeout(const Duration& value) { SetHttpWriteTimeout(value); return *this;}
    inline InfluxDBv2Parameters& WithHttpWriteTimeout(Duration&& value) { SetHttpWriteTimeout(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of group by time buckets a SELECT statement can create. 0
     * allows an unlimited number of buckets.</p> <p>Default: 0</p>
     */
    inline long long GetInfluxqlMaxSelectBuckets() const{ return m_influxqlMaxSelectBuckets; }
    inline bool InfluxqlMaxSelectBucketsHasBeenSet() const { return m_influxqlMaxSelectBucketsHasBeenSet; }
    inline void SetInfluxqlMaxSelectBuckets(long long value) { m_influxqlMaxSelectBucketsHasBeenSet = true; m_influxqlMaxSelectBuckets = value; }
    inline InfluxDBv2Parameters& WithInfluxqlMaxSelectBuckets(long long value) { SetInfluxqlMaxSelectBuckets(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of points a SELECT statement can process. 0 allows an
     * unlimited number of points. InfluxDB checks the point count every second (so
     * queries exceeding the maximum aren’t immediately aborted).</p> <p>Default: 0</p>
     */
    inline long long GetInfluxqlMaxSelectPoint() const{ return m_influxqlMaxSelectPoint; }
    inline bool InfluxqlMaxSelectPointHasBeenSet() const { return m_influxqlMaxSelectPointHasBeenSet; }
    inline void SetInfluxqlMaxSelectPoint(long long value) { m_influxqlMaxSelectPointHasBeenSet = true; m_influxqlMaxSelectPoint = value; }
    inline InfluxDBv2Parameters& WithInfluxqlMaxSelectPoint(long long value) { SetInfluxqlMaxSelectPoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of series a SELECT statement can return. 0 allows an unlimited
     * number of series.</p> <p>Default: 0</p>
     */
    inline long long GetInfluxqlMaxSelectSeries() const{ return m_influxqlMaxSelectSeries; }
    inline bool InfluxqlMaxSelectSeriesHasBeenSet() const { return m_influxqlMaxSelectSeriesHasBeenSet; }
    inline void SetInfluxqlMaxSelectSeries(long long value) { m_influxqlMaxSelectSeriesHasBeenSet = true; m_influxqlMaxSelectSeries = value; }
    inline InfluxDBv2Parameters& WithInfluxqlMaxSelectSeries(long long value) { SetInfluxqlMaxSelectSeries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disable the /debug/pprof HTTP endpoint. This endpoint provides runtime
     * profiling data and can be helpful when debugging.</p> <p>Default: false</p>
     */
    inline bool GetPprofDisabled() const{ return m_pprofDisabled; }
    inline bool PprofDisabledHasBeenSet() const { return m_pprofDisabledHasBeenSet; }
    inline void SetPprofDisabled(bool value) { m_pprofDisabledHasBeenSet = true; m_pprofDisabled = value; }
    inline InfluxDBv2Parameters& WithPprofDisabled(bool value) { SetPprofDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Initial bytes of memory allocated for a query.</p> <p>Default: 0</p>
     */
    inline long long GetQueryInitialMemoryBytes() const{ return m_queryInitialMemoryBytes; }
    inline bool QueryInitialMemoryBytesHasBeenSet() const { return m_queryInitialMemoryBytesHasBeenSet; }
    inline void SetQueryInitialMemoryBytes(long long value) { m_queryInitialMemoryBytesHasBeenSet = true; m_queryInitialMemoryBytes = value; }
    inline InfluxDBv2Parameters& WithQueryInitialMemoryBytes(long long value) { SetQueryInitialMemoryBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of queries allowed in execution queue. When queue limit is
     * reached, new queries are rejected. Setting to 0 allows an unlimited number of
     * queries in the queue.</p> <p>Default: 0</p>
     */
    inline long long GetQueryMaxMemoryBytes() const{ return m_queryMaxMemoryBytes; }
    inline bool QueryMaxMemoryBytesHasBeenSet() const { return m_queryMaxMemoryBytesHasBeenSet; }
    inline void SetQueryMaxMemoryBytes(long long value) { m_queryMaxMemoryBytesHasBeenSet = true; m_queryMaxMemoryBytes = value; }
    inline InfluxDBv2Parameters& WithQueryMaxMemoryBytes(long long value) { SetQueryMaxMemoryBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum bytes of memory allowed for a single query. Must be greater or equal
     * to queryInitialMemoryBytes.</p> <p>Default: 0</p>
     */
    inline long long GetQueryMemoryBytes() const{ return m_queryMemoryBytes; }
    inline bool QueryMemoryBytesHasBeenSet() const { return m_queryMemoryBytesHasBeenSet; }
    inline void SetQueryMemoryBytes(long long value) { m_queryMemoryBytesHasBeenSet = true; m_queryMemoryBytes = value; }
    inline InfluxDBv2Parameters& WithQueryMemoryBytes(long long value) { SetQueryMemoryBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Time to Live (TTL) in minutes for newly created user
     * sessions.</p> <p>Default: 60</p>
     */
    inline int GetSessionLength() const{ return m_sessionLength; }
    inline bool SessionLengthHasBeenSet() const { return m_sessionLengthHasBeenSet; }
    inline void SetSessionLength(int value) { m_sessionLengthHasBeenSet = true; m_sessionLength = value; }
    inline InfluxDBv2Parameters& WithSessionLength(int value) { SetSessionLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disables automatically extending a user’s session TTL on each request. By
     * default, every request sets the session’s expiration time to five minutes from
     * now. When disabled, sessions expire after the specified <a
     * href="https://docs.influxdata.com/influxdb/v2/reference/config-options/#session-length">session
     * length</a> and the user is redirected to the login page, even if recently
     * active.</p> <p>Default: false</p>
     */
    inline bool GetSessionRenewDisabled() const{ return m_sessionRenewDisabled; }
    inline bool SessionRenewDisabledHasBeenSet() const { return m_sessionRenewDisabledHasBeenSet; }
    inline void SetSessionRenewDisabled(bool value) { m_sessionRenewDisabledHasBeenSet = true; m_sessionRenewDisabled = value; }
    inline InfluxDBv2Parameters& WithSessionRenewDisabled(bool value) { SetSessionRenewDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum size (in bytes) a shard’s cache can reach before it starts rejecting
     * writes. Must be greater than storageCacheSnapShotMemorySize and lower than
     * instance’s total memory capacity. We recommend setting it to below 15% of the
     * total memory capacity.</p> <p>Default: 1073741824</p>
     */
    inline long long GetStorageCacheMaxMemorySize() const{ return m_storageCacheMaxMemorySize; }
    inline bool StorageCacheMaxMemorySizeHasBeenSet() const { return m_storageCacheMaxMemorySizeHasBeenSet; }
    inline void SetStorageCacheMaxMemorySize(long long value) { m_storageCacheMaxMemorySizeHasBeenSet = true; m_storageCacheMaxMemorySize = value; }
    inline InfluxDBv2Parameters& WithStorageCacheMaxMemorySize(long long value) { SetStorageCacheMaxMemorySize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Size (in bytes) at which the storage engine will snapshot the cache and write
     * it to a TSM file to make more memory available. Must not be greater than
     * storageCacheMaxMemorySize.</p> <p>Default: 26214400</p>
     */
    inline long long GetStorageCacheSnapshotMemorySize() const{ return m_storageCacheSnapshotMemorySize; }
    inline bool StorageCacheSnapshotMemorySizeHasBeenSet() const { return m_storageCacheSnapshotMemorySizeHasBeenSet; }
    inline void SetStorageCacheSnapshotMemorySize(long long value) { m_storageCacheSnapshotMemorySizeHasBeenSet = true; m_storageCacheSnapshotMemorySize = value; }
    inline InfluxDBv2Parameters& WithStorageCacheSnapshotMemorySize(long long value) { SetStorageCacheSnapshotMemorySize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration at which the storage engine will snapshot the cache and write it to
     * a new TSM file if the shard hasn’t received writes or deletes.</p> <p>Default:
     * 10 minutes</p>
     */
    inline const Duration& GetStorageCacheSnapshotWriteColdDuration() const{ return m_storageCacheSnapshotWriteColdDuration; }
    inline bool StorageCacheSnapshotWriteColdDurationHasBeenSet() const { return m_storageCacheSnapshotWriteColdDurationHasBeenSet; }
    inline void SetStorageCacheSnapshotWriteColdDuration(const Duration& value) { m_storageCacheSnapshotWriteColdDurationHasBeenSet = true; m_storageCacheSnapshotWriteColdDuration = value; }
    inline void SetStorageCacheSnapshotWriteColdDuration(Duration&& value) { m_storageCacheSnapshotWriteColdDurationHasBeenSet = true; m_storageCacheSnapshotWriteColdDuration = std::move(value); }
    inline InfluxDBv2Parameters& WithStorageCacheSnapshotWriteColdDuration(const Duration& value) { SetStorageCacheSnapshotWriteColdDuration(value); return *this;}
    inline InfluxDBv2Parameters& WithStorageCacheSnapshotWriteColdDuration(Duration&& value) { SetStorageCacheSnapshotWriteColdDuration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration at which the storage engine will compact all TSM files in a shard if
     * it hasn't received writes or deletes.</p> <p>Default: 4 hours</p>
     */
    inline const Duration& GetStorageCompactFullWriteColdDuration() const{ return m_storageCompactFullWriteColdDuration; }
    inline bool StorageCompactFullWriteColdDurationHasBeenSet() const { return m_storageCompactFullWriteColdDurationHasBeenSet; }
    inline void SetStorageCompactFullWriteColdDuration(const Duration& value) { m_storageCompactFullWriteColdDurationHasBeenSet = true; m_storageCompactFullWriteColdDuration = value; }
    inline void SetStorageCompactFullWriteColdDuration(Duration&& value) { m_storageCompactFullWriteColdDurationHasBeenSet = true; m_storageCompactFullWriteColdDuration = std::move(value); }
    inline InfluxDBv2Parameters& WithStorageCompactFullWriteColdDuration(const Duration& value) { SetStorageCompactFullWriteColdDuration(value); return *this;}
    inline InfluxDBv2Parameters& WithStorageCompactFullWriteColdDuration(Duration&& value) { SetStorageCompactFullWriteColdDuration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Rate limit (in bytes per second) that TSM compactions can write to disk.</p>
     * <p>Default: 50331648</p>
     */
    inline long long GetStorageCompactThroughputBurst() const{ return m_storageCompactThroughputBurst; }
    inline bool StorageCompactThroughputBurstHasBeenSet() const { return m_storageCompactThroughputBurstHasBeenSet; }
    inline void SetStorageCompactThroughputBurst(long long value) { m_storageCompactThroughputBurstHasBeenSet = true; m_storageCompactThroughputBurst = value; }
    inline InfluxDBv2Parameters& WithStorageCompactThroughputBurst(long long value) { SetStorageCompactThroughputBurst(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of full and level compactions that can run concurrently. A
     * value of 0 results in 50% of runtime.GOMAXPROCS(0) used at runtime. Any number
     * greater than zero limits compactions to that value. This setting does not apply
     * to cache snapshotting.</p> <p>Default: 0</p>
     */
    inline int GetStorageMaxConcurrentCompactions() const{ return m_storageMaxConcurrentCompactions; }
    inline bool StorageMaxConcurrentCompactionsHasBeenSet() const { return m_storageMaxConcurrentCompactionsHasBeenSet; }
    inline void SetStorageMaxConcurrentCompactions(int value) { m_storageMaxConcurrentCompactionsHasBeenSet = true; m_storageMaxConcurrentCompactions = value; }
    inline InfluxDBv2Parameters& WithStorageMaxConcurrentCompactions(int value) { SetStorageMaxConcurrentCompactions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Size (in bytes) at which an index write-ahead log (WAL) file will compact
     * into an index file. Lower sizes will cause log files to be compacted more
     * quickly and result in lower heap usage at the expense of write throughput.</p>
     * <p>Default: 1048576</p>
     */
    inline long long GetStorageMaxIndexLogFileSize() const{ return m_storageMaxIndexLogFileSize; }
    inline bool StorageMaxIndexLogFileSizeHasBeenSet() const { return m_storageMaxIndexLogFileSizeHasBeenSet; }
    inline void SetStorageMaxIndexLogFileSize(long long value) { m_storageMaxIndexLogFileSizeHasBeenSet = true; m_storageMaxIndexLogFileSize = value; }
    inline InfluxDBv2Parameters& WithStorageMaxIndexLogFileSize(long long value) { SetStorageMaxIndexLogFileSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Skip field size validation on incoming write requests.</p> <p>Default:
     * false</p>
     */
    inline bool GetStorageNoValidateFieldSize() const{ return m_storageNoValidateFieldSize; }
    inline bool StorageNoValidateFieldSizeHasBeenSet() const { return m_storageNoValidateFieldSizeHasBeenSet; }
    inline void SetStorageNoValidateFieldSize(bool value) { m_storageNoValidateFieldSizeHasBeenSet = true; m_storageNoValidateFieldSize = value; }
    inline InfluxDBv2Parameters& WithStorageNoValidateFieldSize(bool value) { SetStorageNoValidateFieldSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Interval of retention policy enforcement checks. Must be greater than 0.</p>
     * <p>Default: 30 minutes</p>
     */
    inline const Duration& GetStorageRetentionCheckInterval() const{ return m_storageRetentionCheckInterval; }
    inline bool StorageRetentionCheckIntervalHasBeenSet() const { return m_storageRetentionCheckIntervalHasBeenSet; }
    inline void SetStorageRetentionCheckInterval(const Duration& value) { m_storageRetentionCheckIntervalHasBeenSet = true; m_storageRetentionCheckInterval = value; }
    inline void SetStorageRetentionCheckInterval(Duration&& value) { m_storageRetentionCheckIntervalHasBeenSet = true; m_storageRetentionCheckInterval = std::move(value); }
    inline InfluxDBv2Parameters& WithStorageRetentionCheckInterval(const Duration& value) { SetStorageRetentionCheckInterval(value); return *this;}
    inline InfluxDBv2Parameters& WithStorageRetentionCheckInterval(Duration&& value) { SetStorageRetentionCheckInterval(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of snapshot compactions that can run concurrently across all
     * series partitions in a database.</p> <p>Default: 0</p>
     */
    inline int GetStorageSeriesFileMaxConcurrentSnapshotCompactions() const{ return m_storageSeriesFileMaxConcurrentSnapshotCompactions; }
    inline bool StorageSeriesFileMaxConcurrentSnapshotCompactionsHasBeenSet() const { return m_storageSeriesFileMaxConcurrentSnapshotCompactionsHasBeenSet; }
    inline void SetStorageSeriesFileMaxConcurrentSnapshotCompactions(int value) { m_storageSeriesFileMaxConcurrentSnapshotCompactionsHasBeenSet = true; m_storageSeriesFileMaxConcurrentSnapshotCompactions = value; }
    inline InfluxDBv2Parameters& WithStorageSeriesFileMaxConcurrentSnapshotCompactions(int value) { SetStorageSeriesFileMaxConcurrentSnapshotCompactions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Size of the internal cache used in the TSI index to store previously
     * calculated series results. Cached results are returned quickly rather than
     * needing to be recalculated when a subsequent query with the same tag key/value
     * predicate is executed. Setting this value to 0 will disable the cache and may
     * decrease query performance.</p> <p>Default: 100</p>
     */
    inline long long GetStorageSeriesIdSetCacheSize() const{ return m_storageSeriesIdSetCacheSize; }
    inline bool StorageSeriesIdSetCacheSizeHasBeenSet() const { return m_storageSeriesIdSetCacheSizeHasBeenSet; }
    inline void SetStorageSeriesIdSetCacheSize(long long value) { m_storageSeriesIdSetCacheSizeHasBeenSet = true; m_storageSeriesIdSetCacheSize = value; }
    inline InfluxDBv2Parameters& WithStorageSeriesIdSetCacheSize(long long value) { SetStorageSeriesIdSetCacheSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number writes to the WAL directory to attempt at the same time.
     * Setting this value to 0 results in number of processing units available x2.</p>
     * <p>Default: 0</p>
     */
    inline int GetStorageWalMaxConcurrentWrites() const{ return m_storageWalMaxConcurrentWrites; }
    inline bool StorageWalMaxConcurrentWritesHasBeenSet() const { return m_storageWalMaxConcurrentWritesHasBeenSet; }
    inline void SetStorageWalMaxConcurrentWrites(int value) { m_storageWalMaxConcurrentWritesHasBeenSet = true; m_storageWalMaxConcurrentWrites = value; }
    inline InfluxDBv2Parameters& WithStorageWalMaxConcurrentWrites(int value) { SetStorageWalMaxConcurrentWrites(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum amount of time a write request to the WAL directory will wait when
     * the <a
     * href="https://docs.influxdata.com/influxdb/v2/reference/config-options/#storage-wal-max-concurrent-writes">maximum
     * number of concurrent active writes to the WAL directory has been met</a>. Set to
     * 0 to disable the timeout.</p> <p>Default: 10 minutes</p>
     */
    inline const Duration& GetStorageWalMaxWriteDelay() const{ return m_storageWalMaxWriteDelay; }
    inline bool StorageWalMaxWriteDelayHasBeenSet() const { return m_storageWalMaxWriteDelayHasBeenSet; }
    inline void SetStorageWalMaxWriteDelay(const Duration& value) { m_storageWalMaxWriteDelayHasBeenSet = true; m_storageWalMaxWriteDelay = value; }
    inline void SetStorageWalMaxWriteDelay(Duration&& value) { m_storageWalMaxWriteDelayHasBeenSet = true; m_storageWalMaxWriteDelay = std::move(value); }
    inline InfluxDBv2Parameters& WithStorageWalMaxWriteDelay(const Duration& value) { SetStorageWalMaxWriteDelay(value); return *this;}
    inline InfluxDBv2Parameters& WithStorageWalMaxWriteDelay(Duration&& value) { SetStorageWalMaxWriteDelay(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disable the InfluxDB user interface (UI). The UI is enabled by default.</p>
     * <p>Default: false</p>
     */
    inline bool GetUiDisabled() const{ return m_uiDisabled; }
    inline bool UiDisabledHasBeenSet() const { return m_uiDisabledHasBeenSet; }
    inline void SetUiDisabled(bool value) { m_uiDisabledHasBeenSet = true; m_uiDisabled = value; }
    inline InfluxDBv2Parameters& WithUiDisabled(bool value) { SetUiDisabled(value); return *this;}
    ///@}
  private:

    bool m_fluxLogEnabled;
    bool m_fluxLogEnabledHasBeenSet = false;

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet = false;

    bool m_noTasks;
    bool m_noTasksHasBeenSet = false;

    int m_queryConcurrency;
    bool m_queryConcurrencyHasBeenSet = false;

    int m_queryQueueSize;
    bool m_queryQueueSizeHasBeenSet = false;

    TracingType m_tracingType;
    bool m_tracingTypeHasBeenSet = false;

    bool m_metricsDisabled;
    bool m_metricsDisabledHasBeenSet = false;

    Duration m_httpIdleTimeout;
    bool m_httpIdleTimeoutHasBeenSet = false;

    Duration m_httpReadHeaderTimeout;
    bool m_httpReadHeaderTimeoutHasBeenSet = false;

    Duration m_httpReadTimeout;
    bool m_httpReadTimeoutHasBeenSet = false;

    Duration m_httpWriteTimeout;
    bool m_httpWriteTimeoutHasBeenSet = false;

    long long m_influxqlMaxSelectBuckets;
    bool m_influxqlMaxSelectBucketsHasBeenSet = false;

    long long m_influxqlMaxSelectPoint;
    bool m_influxqlMaxSelectPointHasBeenSet = false;

    long long m_influxqlMaxSelectSeries;
    bool m_influxqlMaxSelectSeriesHasBeenSet = false;

    bool m_pprofDisabled;
    bool m_pprofDisabledHasBeenSet = false;

    long long m_queryInitialMemoryBytes;
    bool m_queryInitialMemoryBytesHasBeenSet = false;

    long long m_queryMaxMemoryBytes;
    bool m_queryMaxMemoryBytesHasBeenSet = false;

    long long m_queryMemoryBytes;
    bool m_queryMemoryBytesHasBeenSet = false;

    int m_sessionLength;
    bool m_sessionLengthHasBeenSet = false;

    bool m_sessionRenewDisabled;
    bool m_sessionRenewDisabledHasBeenSet = false;

    long long m_storageCacheMaxMemorySize;
    bool m_storageCacheMaxMemorySizeHasBeenSet = false;

    long long m_storageCacheSnapshotMemorySize;
    bool m_storageCacheSnapshotMemorySizeHasBeenSet = false;

    Duration m_storageCacheSnapshotWriteColdDuration;
    bool m_storageCacheSnapshotWriteColdDurationHasBeenSet = false;

    Duration m_storageCompactFullWriteColdDuration;
    bool m_storageCompactFullWriteColdDurationHasBeenSet = false;

    long long m_storageCompactThroughputBurst;
    bool m_storageCompactThroughputBurstHasBeenSet = false;

    int m_storageMaxConcurrentCompactions;
    bool m_storageMaxConcurrentCompactionsHasBeenSet = false;

    long long m_storageMaxIndexLogFileSize;
    bool m_storageMaxIndexLogFileSizeHasBeenSet = false;

    bool m_storageNoValidateFieldSize;
    bool m_storageNoValidateFieldSizeHasBeenSet = false;

    Duration m_storageRetentionCheckInterval;
    bool m_storageRetentionCheckIntervalHasBeenSet = false;

    int m_storageSeriesFileMaxConcurrentSnapshotCompactions;
    bool m_storageSeriesFileMaxConcurrentSnapshotCompactionsHasBeenSet = false;

    long long m_storageSeriesIdSetCacheSize;
    bool m_storageSeriesIdSetCacheSizeHasBeenSet = false;

    int m_storageWalMaxConcurrentWrites;
    bool m_storageWalMaxConcurrentWritesHasBeenSet = false;

    Duration m_storageWalMaxWriteDelay;
    bool m_storageWalMaxWriteDelayHasBeenSet = false;

    bool m_uiDisabled;
    bool m_uiDisabledHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
