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
    AWS_TIMESTREAMINFLUXDB_API InfluxDBv2Parameters() = default;
    AWS_TIMESTREAMINFLUXDB_API InfluxDBv2Parameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMINFLUXDB_API InfluxDBv2Parameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMINFLUXDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Include option to show detailed logs for Flux queries.</p> <p>Default:
     * false</p>
     */
    inline bool GetFluxLogEnabled() const { return m_fluxLogEnabled; }
    inline bool FluxLogEnabledHasBeenSet() const { return m_fluxLogEnabledHasBeenSet; }
    inline void SetFluxLogEnabled(bool value) { m_fluxLogEnabledHasBeenSet = true; m_fluxLogEnabled = value; }
    inline InfluxDBv2Parameters& WithFluxLogEnabled(bool value) { SetFluxLogEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Log output level. InfluxDB outputs log entries with severity levels greater
     * than or equal to the level specified.</p> <p>Default: info</p>
     */
    inline LogLevel GetLogLevel() const { return m_logLevel; }
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
    inline void SetLogLevel(LogLevel value) { m_logLevelHasBeenSet = true; m_logLevel = value; }
    inline InfluxDBv2Parameters& WithLogLevel(LogLevel value) { SetLogLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disable the task scheduler. If problematic tasks prevent InfluxDB from
     * starting, use this option to start InfluxDB without scheduling or executing
     * tasks.</p> <p>Default: false</p>
     */
    inline bool GetNoTasks() const { return m_noTasks; }
    inline bool NoTasksHasBeenSet() const { return m_noTasksHasBeenSet; }
    inline void SetNoTasks(bool value) { m_noTasksHasBeenSet = true; m_noTasks = value; }
    inline InfluxDBv2Parameters& WithNoTasks(bool value) { SetNoTasks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of queries allowed to execute concurrently. Setting to 0 allows an
     * unlimited number of concurrent queries.</p> <p>Default: 0</p>
     */
    inline int GetQueryConcurrency() const { return m_queryConcurrency; }
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
    inline int GetQueryQueueSize() const { return m_queryQueueSize; }
    inline bool QueryQueueSizeHasBeenSet() const { return m_queryQueueSizeHasBeenSet; }
    inline void SetQueryQueueSize(int value) { m_queryQueueSizeHasBeenSet = true; m_queryQueueSize = value; }
    inline InfluxDBv2Parameters& WithQueryQueueSize(int value) { SetQueryQueueSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable tracing in InfluxDB and specifies the tracing type. Tracing is
     * disabled by default.</p>
     */
    inline TracingType GetTracingType() const { return m_tracingType; }
    inline bool TracingTypeHasBeenSet() const { return m_tracingTypeHasBeenSet; }
    inline void SetTracingType(TracingType value) { m_tracingTypeHasBeenSet = true; m_tracingType = value; }
    inline InfluxDBv2Parameters& WithTracingType(TracingType value) { SetTracingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disable the HTTP /metrics endpoint which exposes <a
     * href="https://docs.influxdata.com/influxdb/v2/reference/internals/metrics/">internal
     * InfluxDB metrics</a>.</p> <p>Default: false</p>
     */
    inline bool GetMetricsDisabled() const { return m_metricsDisabled; }
    inline bool MetricsDisabledHasBeenSet() const { return m_metricsDisabledHasBeenSet; }
    inline void SetMetricsDisabled(bool value) { m_metricsDisabledHasBeenSet = true; m_metricsDisabled = value; }
    inline InfluxDBv2Parameters& WithMetricsDisabled(bool value) { SetMetricsDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum duration the server should keep established connections alive while
     * waiting for new requests. Set to 0 for no timeout.</p> <p>Default: 3 minutes</p>
     */
    inline const Duration& GetHttpIdleTimeout() const { return m_httpIdleTimeout; }
    inline bool HttpIdleTimeoutHasBeenSet() const { return m_httpIdleTimeoutHasBeenSet; }
    template<typename HttpIdleTimeoutT = Duration>
    void SetHttpIdleTimeout(HttpIdleTimeoutT&& value) { m_httpIdleTimeoutHasBeenSet = true; m_httpIdleTimeout = std::forward<HttpIdleTimeoutT>(value); }
    template<typename HttpIdleTimeoutT = Duration>
    InfluxDBv2Parameters& WithHttpIdleTimeout(HttpIdleTimeoutT&& value) { SetHttpIdleTimeout(std::forward<HttpIdleTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum duration the server should try to read HTTP headers for new requests.
     * Set to 0 for no timeout.</p> <p>Default: 10 seconds</p>
     */
    inline const Duration& GetHttpReadHeaderTimeout() const { return m_httpReadHeaderTimeout; }
    inline bool HttpReadHeaderTimeoutHasBeenSet() const { return m_httpReadHeaderTimeoutHasBeenSet; }
    template<typename HttpReadHeaderTimeoutT = Duration>
    void SetHttpReadHeaderTimeout(HttpReadHeaderTimeoutT&& value) { m_httpReadHeaderTimeoutHasBeenSet = true; m_httpReadHeaderTimeout = std::forward<HttpReadHeaderTimeoutT>(value); }
    template<typename HttpReadHeaderTimeoutT = Duration>
    InfluxDBv2Parameters& WithHttpReadHeaderTimeout(HttpReadHeaderTimeoutT&& value) { SetHttpReadHeaderTimeout(std::forward<HttpReadHeaderTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum duration the server should try to read the entirety of new requests.
     * Set to 0 for no timeout.</p> <p>Default: 0</p>
     */
    inline const Duration& GetHttpReadTimeout() const { return m_httpReadTimeout; }
    inline bool HttpReadTimeoutHasBeenSet() const { return m_httpReadTimeoutHasBeenSet; }
    template<typename HttpReadTimeoutT = Duration>
    void SetHttpReadTimeout(HttpReadTimeoutT&& value) { m_httpReadTimeoutHasBeenSet = true; m_httpReadTimeout = std::forward<HttpReadTimeoutT>(value); }
    template<typename HttpReadTimeoutT = Duration>
    InfluxDBv2Parameters& WithHttpReadTimeout(HttpReadTimeoutT&& value) { SetHttpReadTimeout(std::forward<HttpReadTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum duration the server should spend processing and responding to write
     * requests. Set to 0 for no timeout.</p> <p>Default: 0</p>
     */
    inline const Duration& GetHttpWriteTimeout() const { return m_httpWriteTimeout; }
    inline bool HttpWriteTimeoutHasBeenSet() const { return m_httpWriteTimeoutHasBeenSet; }
    template<typename HttpWriteTimeoutT = Duration>
    void SetHttpWriteTimeout(HttpWriteTimeoutT&& value) { m_httpWriteTimeoutHasBeenSet = true; m_httpWriteTimeout = std::forward<HttpWriteTimeoutT>(value); }
    template<typename HttpWriteTimeoutT = Duration>
    InfluxDBv2Parameters& WithHttpWriteTimeout(HttpWriteTimeoutT&& value) { SetHttpWriteTimeout(std::forward<HttpWriteTimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of group by time buckets a SELECT statement can create. 0
     * allows an unlimited number of buckets.</p> <p>Default: 0</p>
     */
    inline long long GetInfluxqlMaxSelectBuckets() const { return m_influxqlMaxSelectBuckets; }
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
    inline long long GetInfluxqlMaxSelectPoint() const { return m_influxqlMaxSelectPoint; }
    inline bool InfluxqlMaxSelectPointHasBeenSet() const { return m_influxqlMaxSelectPointHasBeenSet; }
    inline void SetInfluxqlMaxSelectPoint(long long value) { m_influxqlMaxSelectPointHasBeenSet = true; m_influxqlMaxSelectPoint = value; }
    inline InfluxDBv2Parameters& WithInfluxqlMaxSelectPoint(long long value) { SetInfluxqlMaxSelectPoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of series a SELECT statement can return. 0 allows an unlimited
     * number of series.</p> <p>Default: 0</p>
     */
    inline long long GetInfluxqlMaxSelectSeries() const { return m_influxqlMaxSelectSeries; }
    inline bool InfluxqlMaxSelectSeriesHasBeenSet() const { return m_influxqlMaxSelectSeriesHasBeenSet; }
    inline void SetInfluxqlMaxSelectSeries(long long value) { m_influxqlMaxSelectSeriesHasBeenSet = true; m_influxqlMaxSelectSeries = value; }
    inline InfluxDBv2Parameters& WithInfluxqlMaxSelectSeries(long long value) { SetInfluxqlMaxSelectSeries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disable the /debug/pprof HTTP endpoint. This endpoint provides runtime
     * profiling data and can be helpful when debugging.</p> <p>Default: true</p>
     */
    inline bool GetPprofDisabled() const { return m_pprofDisabled; }
    inline bool PprofDisabledHasBeenSet() const { return m_pprofDisabledHasBeenSet; }
    inline void SetPprofDisabled(bool value) { m_pprofDisabledHasBeenSet = true; m_pprofDisabled = value; }
    inline InfluxDBv2Parameters& WithPprofDisabled(bool value) { SetPprofDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Initial bytes of memory allocated for a query.</p> <p>Default: 0</p>
     */
    inline long long GetQueryInitialMemoryBytes() const { return m_queryInitialMemoryBytes; }
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
    inline long long GetQueryMaxMemoryBytes() const { return m_queryMaxMemoryBytes; }
    inline bool QueryMaxMemoryBytesHasBeenSet() const { return m_queryMaxMemoryBytesHasBeenSet; }
    inline void SetQueryMaxMemoryBytes(long long value) { m_queryMaxMemoryBytesHasBeenSet = true; m_queryMaxMemoryBytes = value; }
    inline InfluxDBv2Parameters& WithQueryMaxMemoryBytes(long long value) { SetQueryMaxMemoryBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum bytes of memory allowed for a single query. Must be greater or equal
     * to queryInitialMemoryBytes.</p> <p>Default: 0</p>
     */
    inline long long GetQueryMemoryBytes() const { return m_queryMemoryBytes; }
    inline bool QueryMemoryBytesHasBeenSet() const { return m_queryMemoryBytesHasBeenSet; }
    inline void SetQueryMemoryBytes(long long value) { m_queryMemoryBytesHasBeenSet = true; m_queryMemoryBytes = value; }
    inline InfluxDBv2Parameters& WithQueryMemoryBytes(long long value) { SetQueryMemoryBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Time to Live (TTL) in minutes for newly created user
     * sessions.</p> <p>Default: 60</p>
     */
    inline int GetSessionLength() const { return m_sessionLength; }
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
    inline bool GetSessionRenewDisabled() const { return m_sessionRenewDisabled; }
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
    inline long long GetStorageCacheMaxMemorySize() const { return m_storageCacheMaxMemorySize; }
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
    inline long long GetStorageCacheSnapshotMemorySize() const { return m_storageCacheSnapshotMemorySize; }
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
    inline const Duration& GetStorageCacheSnapshotWriteColdDuration() const { return m_storageCacheSnapshotWriteColdDuration; }
    inline bool StorageCacheSnapshotWriteColdDurationHasBeenSet() const { return m_storageCacheSnapshotWriteColdDurationHasBeenSet; }
    template<typename StorageCacheSnapshotWriteColdDurationT = Duration>
    void SetStorageCacheSnapshotWriteColdDuration(StorageCacheSnapshotWriteColdDurationT&& value) { m_storageCacheSnapshotWriteColdDurationHasBeenSet = true; m_storageCacheSnapshotWriteColdDuration = std::forward<StorageCacheSnapshotWriteColdDurationT>(value); }
    template<typename StorageCacheSnapshotWriteColdDurationT = Duration>
    InfluxDBv2Parameters& WithStorageCacheSnapshotWriteColdDuration(StorageCacheSnapshotWriteColdDurationT&& value) { SetStorageCacheSnapshotWriteColdDuration(std::forward<StorageCacheSnapshotWriteColdDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration at which the storage engine will compact all TSM files in a shard if
     * it hasn't received writes or deletes.</p> <p>Default: 4 hours</p>
     */
    inline const Duration& GetStorageCompactFullWriteColdDuration() const { return m_storageCompactFullWriteColdDuration; }
    inline bool StorageCompactFullWriteColdDurationHasBeenSet() const { return m_storageCompactFullWriteColdDurationHasBeenSet; }
    template<typename StorageCompactFullWriteColdDurationT = Duration>
    void SetStorageCompactFullWriteColdDuration(StorageCompactFullWriteColdDurationT&& value) { m_storageCompactFullWriteColdDurationHasBeenSet = true; m_storageCompactFullWriteColdDuration = std::forward<StorageCompactFullWriteColdDurationT>(value); }
    template<typename StorageCompactFullWriteColdDurationT = Duration>
    InfluxDBv2Parameters& WithStorageCompactFullWriteColdDuration(StorageCompactFullWriteColdDurationT&& value) { SetStorageCompactFullWriteColdDuration(std::forward<StorageCompactFullWriteColdDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Rate limit (in bytes per second) that TSM compactions can write to disk.</p>
     * <p>Default: 50331648</p>
     */
    inline long long GetStorageCompactThroughputBurst() const { return m_storageCompactThroughputBurst; }
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
    inline int GetStorageMaxConcurrentCompactions() const { return m_storageMaxConcurrentCompactions; }
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
    inline long long GetStorageMaxIndexLogFileSize() const { return m_storageMaxIndexLogFileSize; }
    inline bool StorageMaxIndexLogFileSizeHasBeenSet() const { return m_storageMaxIndexLogFileSizeHasBeenSet; }
    inline void SetStorageMaxIndexLogFileSize(long long value) { m_storageMaxIndexLogFileSizeHasBeenSet = true; m_storageMaxIndexLogFileSize = value; }
    inline InfluxDBv2Parameters& WithStorageMaxIndexLogFileSize(long long value) { SetStorageMaxIndexLogFileSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Skip field size validation on incoming write requests.</p> <p>Default:
     * false</p>
     */
    inline bool GetStorageNoValidateFieldSize() const { return m_storageNoValidateFieldSize; }
    inline bool StorageNoValidateFieldSizeHasBeenSet() const { return m_storageNoValidateFieldSizeHasBeenSet; }
    inline void SetStorageNoValidateFieldSize(bool value) { m_storageNoValidateFieldSizeHasBeenSet = true; m_storageNoValidateFieldSize = value; }
    inline InfluxDBv2Parameters& WithStorageNoValidateFieldSize(bool value) { SetStorageNoValidateFieldSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Interval of retention policy enforcement checks. Must be greater than 0.</p>
     * <p>Default: 30 minutes</p>
     */
    inline const Duration& GetStorageRetentionCheckInterval() const { return m_storageRetentionCheckInterval; }
    inline bool StorageRetentionCheckIntervalHasBeenSet() const { return m_storageRetentionCheckIntervalHasBeenSet; }
    template<typename StorageRetentionCheckIntervalT = Duration>
    void SetStorageRetentionCheckInterval(StorageRetentionCheckIntervalT&& value) { m_storageRetentionCheckIntervalHasBeenSet = true; m_storageRetentionCheckInterval = std::forward<StorageRetentionCheckIntervalT>(value); }
    template<typename StorageRetentionCheckIntervalT = Duration>
    InfluxDBv2Parameters& WithStorageRetentionCheckInterval(StorageRetentionCheckIntervalT&& value) { SetStorageRetentionCheckInterval(std::forward<StorageRetentionCheckIntervalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of snapshot compactions that can run concurrently across all
     * series partitions in a database.</p> <p>Default: 0</p>
     */
    inline int GetStorageSeriesFileMaxConcurrentSnapshotCompactions() const { return m_storageSeriesFileMaxConcurrentSnapshotCompactions; }
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
    inline long long GetStorageSeriesIdSetCacheSize() const { return m_storageSeriesIdSetCacheSize; }
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
    inline int GetStorageWalMaxConcurrentWrites() const { return m_storageWalMaxConcurrentWrites; }
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
    inline const Duration& GetStorageWalMaxWriteDelay() const { return m_storageWalMaxWriteDelay; }
    inline bool StorageWalMaxWriteDelayHasBeenSet() const { return m_storageWalMaxWriteDelayHasBeenSet; }
    template<typename StorageWalMaxWriteDelayT = Duration>
    void SetStorageWalMaxWriteDelay(StorageWalMaxWriteDelayT&& value) { m_storageWalMaxWriteDelayHasBeenSet = true; m_storageWalMaxWriteDelay = std::forward<StorageWalMaxWriteDelayT>(value); }
    template<typename StorageWalMaxWriteDelayT = Duration>
    InfluxDBv2Parameters& WithStorageWalMaxWriteDelay(StorageWalMaxWriteDelayT&& value) { SetStorageWalMaxWriteDelay(std::forward<StorageWalMaxWriteDelayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disable the InfluxDB user interface (UI). The UI is enabled by default.</p>
     * <p>Default: false</p>
     */
    inline bool GetUiDisabled() const { return m_uiDisabled; }
    inline bool UiDisabledHasBeenSet() const { return m_uiDisabledHasBeenSet; }
    inline void SetUiDisabled(bool value) { m_uiDisabledHasBeenSet = true; m_uiDisabled = value; }
    inline InfluxDBv2Parameters& WithUiDisabled(bool value) { SetUiDisabled(value); return *this;}
    ///@}
  private:

    bool m_fluxLogEnabled{false};
    bool m_fluxLogEnabledHasBeenSet = false;

    LogLevel m_logLevel{LogLevel::NOT_SET};
    bool m_logLevelHasBeenSet = false;

    bool m_noTasks{false};
    bool m_noTasksHasBeenSet = false;

    int m_queryConcurrency{0};
    bool m_queryConcurrencyHasBeenSet = false;

    int m_queryQueueSize{0};
    bool m_queryQueueSizeHasBeenSet = false;

    TracingType m_tracingType{TracingType::NOT_SET};
    bool m_tracingTypeHasBeenSet = false;

    bool m_metricsDisabled{false};
    bool m_metricsDisabledHasBeenSet = false;

    Duration m_httpIdleTimeout;
    bool m_httpIdleTimeoutHasBeenSet = false;

    Duration m_httpReadHeaderTimeout;
    bool m_httpReadHeaderTimeoutHasBeenSet = false;

    Duration m_httpReadTimeout;
    bool m_httpReadTimeoutHasBeenSet = false;

    Duration m_httpWriteTimeout;
    bool m_httpWriteTimeoutHasBeenSet = false;

    long long m_influxqlMaxSelectBuckets{0};
    bool m_influxqlMaxSelectBucketsHasBeenSet = false;

    long long m_influxqlMaxSelectPoint{0};
    bool m_influxqlMaxSelectPointHasBeenSet = false;

    long long m_influxqlMaxSelectSeries{0};
    bool m_influxqlMaxSelectSeriesHasBeenSet = false;

    bool m_pprofDisabled{false};
    bool m_pprofDisabledHasBeenSet = false;

    long long m_queryInitialMemoryBytes{0};
    bool m_queryInitialMemoryBytesHasBeenSet = false;

    long long m_queryMaxMemoryBytes{0};
    bool m_queryMaxMemoryBytesHasBeenSet = false;

    long long m_queryMemoryBytes{0};
    bool m_queryMemoryBytesHasBeenSet = false;

    int m_sessionLength{0};
    bool m_sessionLengthHasBeenSet = false;

    bool m_sessionRenewDisabled{false};
    bool m_sessionRenewDisabledHasBeenSet = false;

    long long m_storageCacheMaxMemorySize{0};
    bool m_storageCacheMaxMemorySizeHasBeenSet = false;

    long long m_storageCacheSnapshotMemorySize{0};
    bool m_storageCacheSnapshotMemorySizeHasBeenSet = false;

    Duration m_storageCacheSnapshotWriteColdDuration;
    bool m_storageCacheSnapshotWriteColdDurationHasBeenSet = false;

    Duration m_storageCompactFullWriteColdDuration;
    bool m_storageCompactFullWriteColdDurationHasBeenSet = false;

    long long m_storageCompactThroughputBurst{0};
    bool m_storageCompactThroughputBurstHasBeenSet = false;

    int m_storageMaxConcurrentCompactions{0};
    bool m_storageMaxConcurrentCompactionsHasBeenSet = false;

    long long m_storageMaxIndexLogFileSize{0};
    bool m_storageMaxIndexLogFileSizeHasBeenSet = false;

    bool m_storageNoValidateFieldSize{false};
    bool m_storageNoValidateFieldSizeHasBeenSet = false;

    Duration m_storageRetentionCheckInterval;
    bool m_storageRetentionCheckIntervalHasBeenSet = false;

    int m_storageSeriesFileMaxConcurrentSnapshotCompactions{0};
    bool m_storageSeriesFileMaxConcurrentSnapshotCompactionsHasBeenSet = false;

    long long m_storageSeriesIdSetCacheSize{0};
    bool m_storageSeriesIdSetCacheSizeHasBeenSet = false;

    int m_storageWalMaxConcurrentWrites{0};
    bool m_storageWalMaxConcurrentWritesHasBeenSet = false;

    Duration m_storageWalMaxWriteDelay;
    bool m_storageWalMaxWriteDelayHasBeenSet = false;

    bool m_uiDisabled{false};
    bool m_uiDisabledHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
