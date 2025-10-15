/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/model/LogFormats.h>
#include <aws/timestream-influxdb/model/DataFusionRuntimeType.h>
#include <aws/timestream-influxdb/model/Duration.h>
#include <aws/timestream-influxdb/model/PercentOrAbsoluteLong.h>
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
   * <p>All the customer-modifiable InfluxDB v3 Enterprise parameters in Timestream
   * for InfluxDB.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/InfluxDBv3EnterpriseParameters">AWS
   * API Reference</a></p>
   */
  class InfluxDBv3EnterpriseParameters
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API InfluxDBv3EnterpriseParameters() = default;
    AWS_TIMESTREAMINFLUXDB_API InfluxDBv3EnterpriseParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMINFLUXDB_API InfluxDBv3EnterpriseParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMINFLUXDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Limits the number of Parquet files a query can access. If a query attempts to
     * read more than this limit, InfluxDB 3 returns an error.</p> <p>Default: 432</p>
     */
    inline int GetQueryFileLimit() const { return m_queryFileLimit; }
    inline bool QueryFileLimitHasBeenSet() const { return m_queryFileLimitHasBeenSet; }
    inline void SetQueryFileLimit(int value) { m_queryFileLimitHasBeenSet = true; m_queryFileLimit = value; }
    inline InfluxDBv3EnterpriseParameters& WithQueryFileLimit(int value) { SetQueryFileLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the size of the query log. Up to this many queries remain in the log
     * before older queries are evicted to make room for new ones.</p> <p>Default:
     * 1000</p>
     */
    inline int GetQueryLogSize() const { return m_queryLogSize; }
    inline bool QueryLogSizeHasBeenSet() const { return m_queryLogSizeHasBeenSet; }
    inline void SetQueryLogSize(int value) { m_queryLogSizeHasBeenSet = true; m_queryLogSize = value; }
    inline InfluxDBv3EnterpriseParameters& WithQueryLogSize(int value) { SetQueryLogSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the filter directive for logs.</p>
     */
    inline const Aws::String& GetLogFilter() const { return m_logFilter; }
    inline bool LogFilterHasBeenSet() const { return m_logFilterHasBeenSet; }
    template<typename LogFilterT = Aws::String>
    void SetLogFilter(LogFilterT&& value) { m_logFilterHasBeenSet = true; m_logFilter = std::forward<LogFilterT>(value); }
    template<typename LogFilterT = Aws::String>
    InfluxDBv3EnterpriseParameters& WithLogFilter(LogFilterT&& value) { SetLogFilter(std::forward<LogFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the message format for logs.</p> <p>Default: full</p>
     */
    inline LogFormats GetLogFormat() const { return m_logFormat; }
    inline bool LogFormatHasBeenSet() const { return m_logFormatHasBeenSet; }
    inline void SetLogFormat(LogFormats value) { m_logFormatHasBeenSet = true; m_logFormat = value; }
    inline InfluxDBv3EnterpriseParameters& WithLogFormat(LogFormats value) { SetLogFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the maximum number of DataFusion runtime threads to use.</p>
     */
    inline int GetDataFusionNumThreads() const { return m_dataFusionNumThreads; }
    inline bool DataFusionNumThreadsHasBeenSet() const { return m_dataFusionNumThreadsHasBeenSet; }
    inline void SetDataFusionNumThreads(int value) { m_dataFusionNumThreadsHasBeenSet = true; m_dataFusionNumThreads = value; }
    inline InfluxDBv3EnterpriseParameters& WithDataFusionNumThreads(int value) { SetDataFusionNumThreads(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the DataFusion tokio runtime type.</p> <p>Default: multi-thread</p>
     */
    inline DataFusionRuntimeType GetDataFusionRuntimeType() const { return m_dataFusionRuntimeType; }
    inline bool DataFusionRuntimeTypeHasBeenSet() const { return m_dataFusionRuntimeTypeHasBeenSet; }
    inline void SetDataFusionRuntimeType(DataFusionRuntimeType value) { m_dataFusionRuntimeTypeHasBeenSet = true; m_dataFusionRuntimeType = value; }
    inline InfluxDBv3EnterpriseParameters& WithDataFusionRuntimeType(DataFusionRuntimeType value) { SetDataFusionRuntimeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disables the LIFO slot of the DataFusion runtime.</p>
     */
    inline bool GetDataFusionRuntimeDisableLifoSlot() const { return m_dataFusionRuntimeDisableLifoSlot; }
    inline bool DataFusionRuntimeDisableLifoSlotHasBeenSet() const { return m_dataFusionRuntimeDisableLifoSlotHasBeenSet; }
    inline void SetDataFusionRuntimeDisableLifoSlot(bool value) { m_dataFusionRuntimeDisableLifoSlotHasBeenSet = true; m_dataFusionRuntimeDisableLifoSlot = value; }
    inline InfluxDBv3EnterpriseParameters& WithDataFusionRuntimeDisableLifoSlot(bool value) { SetDataFusionRuntimeDisableLifoSlot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the number of scheduler ticks after which the scheduler of the
     * DataFusion tokio runtime polls for external events–for example: timers, I/O.</p>
     */
    inline int GetDataFusionRuntimeEventInterval() const { return m_dataFusionRuntimeEventInterval; }
    inline bool DataFusionRuntimeEventIntervalHasBeenSet() const { return m_dataFusionRuntimeEventIntervalHasBeenSet; }
    inline void SetDataFusionRuntimeEventInterval(int value) { m_dataFusionRuntimeEventIntervalHasBeenSet = true; m_dataFusionRuntimeEventInterval = value; }
    inline InfluxDBv3EnterpriseParameters& WithDataFusionRuntimeEventInterval(int value) { SetDataFusionRuntimeEventInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the number of scheduler ticks after which the scheduler of the
     * DataFusion runtime polls the global task queue.</p>
     */
    inline int GetDataFusionRuntimeGlobalQueueInterval() const { return m_dataFusionRuntimeGlobalQueueInterval; }
    inline bool DataFusionRuntimeGlobalQueueIntervalHasBeenSet() const { return m_dataFusionRuntimeGlobalQueueIntervalHasBeenSet; }
    inline void SetDataFusionRuntimeGlobalQueueInterval(int value) { m_dataFusionRuntimeGlobalQueueIntervalHasBeenSet = true; m_dataFusionRuntimeGlobalQueueInterval = value; }
    inline InfluxDBv3EnterpriseParameters& WithDataFusionRuntimeGlobalQueueInterval(int value) { SetDataFusionRuntimeGlobalQueueInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the limit for additional threads spawned by the DataFusion
     * runtime.</p>
     */
    inline int GetDataFusionRuntimeMaxBlockingThreads() const { return m_dataFusionRuntimeMaxBlockingThreads; }
    inline bool DataFusionRuntimeMaxBlockingThreadsHasBeenSet() const { return m_dataFusionRuntimeMaxBlockingThreadsHasBeenSet; }
    inline void SetDataFusionRuntimeMaxBlockingThreads(int value) { m_dataFusionRuntimeMaxBlockingThreadsHasBeenSet = true; m_dataFusionRuntimeMaxBlockingThreads = value; }
    inline InfluxDBv3EnterpriseParameters& WithDataFusionRuntimeMaxBlockingThreads(int value) { SetDataFusionRuntimeMaxBlockingThreads(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the maximum number of events processed per tick by the tokio
     * DataFusion runtime.</p>
     */
    inline int GetDataFusionRuntimeMaxIoEventsPerTick() const { return m_dataFusionRuntimeMaxIoEventsPerTick; }
    inline bool DataFusionRuntimeMaxIoEventsPerTickHasBeenSet() const { return m_dataFusionRuntimeMaxIoEventsPerTickHasBeenSet; }
    inline void SetDataFusionRuntimeMaxIoEventsPerTick(int value) { m_dataFusionRuntimeMaxIoEventsPerTickHasBeenSet = true; m_dataFusionRuntimeMaxIoEventsPerTick = value; }
    inline InfluxDBv3EnterpriseParameters& WithDataFusionRuntimeMaxIoEventsPerTick(int value) { SetDataFusionRuntimeMaxIoEventsPerTick(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets a custom timeout for a thread in the blocking pool of the tokio
     * DataFusion runtime.</p>
     */
    inline const Duration& GetDataFusionRuntimeThreadKeepAlive() const { return m_dataFusionRuntimeThreadKeepAlive; }
    inline bool DataFusionRuntimeThreadKeepAliveHasBeenSet() const { return m_dataFusionRuntimeThreadKeepAliveHasBeenSet; }
    template<typename DataFusionRuntimeThreadKeepAliveT = Duration>
    void SetDataFusionRuntimeThreadKeepAlive(DataFusionRuntimeThreadKeepAliveT&& value) { m_dataFusionRuntimeThreadKeepAliveHasBeenSet = true; m_dataFusionRuntimeThreadKeepAlive = std::forward<DataFusionRuntimeThreadKeepAliveT>(value); }
    template<typename DataFusionRuntimeThreadKeepAliveT = Duration>
    InfluxDBv3EnterpriseParameters& WithDataFusionRuntimeThreadKeepAlive(DataFusionRuntimeThreadKeepAliveT&& value) { SetDataFusionRuntimeThreadKeepAlive(std::forward<DataFusionRuntimeThreadKeepAliveT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the thread priority for tokio DataFusion runtime workers.</p>
     * <p>Default: 10</p>
     */
    inline int GetDataFusionRuntimeThreadPriority() const { return m_dataFusionRuntimeThreadPriority; }
    inline bool DataFusionRuntimeThreadPriorityHasBeenSet() const { return m_dataFusionRuntimeThreadPriorityHasBeenSet; }
    inline void SetDataFusionRuntimeThreadPriority(int value) { m_dataFusionRuntimeThreadPriorityHasBeenSet = true; m_dataFusionRuntimeThreadPriority = value; }
    inline InfluxDBv3EnterpriseParameters& WithDataFusionRuntimeThreadPriority(int value) { SetDataFusionRuntimeThreadPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When multiple parquet files are required in a sorted way (deduplication for
     * example), specifies the maximum fanout.</p> <p>Default: 1000</p>
     */
    inline int GetDataFusionMaxParquetFanout() const { return m_dataFusionMaxParquetFanout; }
    inline bool DataFusionMaxParquetFanoutHasBeenSet() const { return m_dataFusionMaxParquetFanoutHasBeenSet; }
    inline void SetDataFusionMaxParquetFanout(int value) { m_dataFusionMaxParquetFanoutHasBeenSet = true; m_dataFusionMaxParquetFanout = value; }
    inline InfluxDBv3EnterpriseParameters& WithDataFusionMaxParquetFanout(int value) { SetDataFusionMaxParquetFanout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uses a cached parquet loader when reading parquet files from the object
     * store.</p>
     */
    inline bool GetDataFusionUseCachedParquetLoader() const { return m_dataFusionUseCachedParquetLoader; }
    inline bool DataFusionUseCachedParquetLoaderHasBeenSet() const { return m_dataFusionUseCachedParquetLoaderHasBeenSet; }
    inline void SetDataFusionUseCachedParquetLoader(bool value) { m_dataFusionUseCachedParquetLoaderHasBeenSet = true; m_dataFusionUseCachedParquetLoader = value; }
    inline InfluxDBv3EnterpriseParameters& WithDataFusionUseCachedParquetLoader(bool value) { SetDataFusionUseCachedParquetLoader(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides custom configuration to DataFusion as a comma-separated list of
     * key:value pairs.</p>
     */
    inline const Aws::String& GetDataFusionConfig() const { return m_dataFusionConfig; }
    inline bool DataFusionConfigHasBeenSet() const { return m_dataFusionConfigHasBeenSet; }
    template<typename DataFusionConfigT = Aws::String>
    void SetDataFusionConfig(DataFusionConfigT&& value) { m_dataFusionConfigHasBeenSet = true; m_dataFusionConfig = std::forward<DataFusionConfigT>(value); }
    template<typename DataFusionConfigT = Aws::String>
    InfluxDBv3EnterpriseParameters& WithDataFusionConfig(DataFusionConfigT&& value) { SetDataFusionConfig(std::forward<DataFusionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum size of HTTP requests.</p> <p>Default: 10485760</p>
     */
    inline long long GetMaxHttpRequestSize() const { return m_maxHttpRequestSize; }
    inline bool MaxHttpRequestSizeHasBeenSet() const { return m_maxHttpRequestSizeHasBeenSet; }
    inline void SetMaxHttpRequestSize(long long value) { m_maxHttpRequestSizeHasBeenSet = true; m_maxHttpRequestSize = value; }
    inline InfluxDBv3EnterpriseParameters& WithMaxHttpRequestSize(long long value) { SetMaxHttpRequestSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the threshold for the internal memory buffer. Supports either a
     * percentage (portion of available memory) or absolute value in MB–for example:
     * 70% or 100</p> <p>Default: 70%</p>
     */
    inline const PercentOrAbsoluteLong& GetForceSnapshotMemThreshold() const { return m_forceSnapshotMemThreshold; }
    inline bool ForceSnapshotMemThresholdHasBeenSet() const { return m_forceSnapshotMemThresholdHasBeenSet; }
    template<typename ForceSnapshotMemThresholdT = PercentOrAbsoluteLong>
    void SetForceSnapshotMemThreshold(ForceSnapshotMemThresholdT&& value) { m_forceSnapshotMemThresholdHasBeenSet = true; m_forceSnapshotMemThreshold = std::forward<ForceSnapshotMemThresholdT>(value); }
    template<typename ForceSnapshotMemThresholdT = PercentOrAbsoluteLong>
    InfluxDBv3EnterpriseParameters& WithForceSnapshotMemThreshold(ForceSnapshotMemThresholdT&& value) { SetForceSnapshotMemThreshold(std::forward<ForceSnapshotMemThresholdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the number of WAL files to attempt to remove in a snapshot. This,
     * multiplied by the interval, determines how often snapshots are taken.</p>
     * <p>Default: 600</p>
     */
    inline int GetWalSnapshotSize() const { return m_walSnapshotSize; }
    inline bool WalSnapshotSizeHasBeenSet() const { return m_walSnapshotSizeHasBeenSet; }
    inline void SetWalSnapshotSize(int value) { m_walSnapshotSizeHasBeenSet = true; m_walSnapshotSize = value; }
    inline InfluxDBv3EnterpriseParameters& WithWalSnapshotSize(int value) { SetWalSnapshotSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of write requests that can be buffered before a
     * flush must be executed and succeed.</p> <p>Default: 100000</p>
     */
    inline int GetWalMaxWriteBufferSize() const { return m_walMaxWriteBufferSize; }
    inline bool WalMaxWriteBufferSizeHasBeenSet() const { return m_walMaxWriteBufferSizeHasBeenSet; }
    inline void SetWalMaxWriteBufferSize(int value) { m_walMaxWriteBufferSizeHasBeenSet = true; m_walMaxWriteBufferSize = value; }
    inline InfluxDBv3EnterpriseParameters& WithWalMaxWriteBufferSize(int value) { SetWalMaxWriteBufferSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of snapshotted WAL files to retain in the object store.
     * Flushing the WAL files does not clear the WAL files immediately; they are
     * deleted when the number of snapshotted WAL files exceeds this number.</p>
     * <p>Default: 300</p>
     */
    inline int GetSnapshottedWalFilesToKeep() const { return m_snapshottedWalFilesToKeep; }
    inline bool SnapshottedWalFilesToKeepHasBeenSet() const { return m_snapshottedWalFilesToKeepHasBeenSet; }
    inline void SetSnapshottedWalFilesToKeep(int value) { m_snapshottedWalFilesToKeepHasBeenSet = true; m_snapshottedWalFilesToKeep = value; }
    inline InfluxDBv3EnterpriseParameters& WithSnapshottedWalFilesToKeep(int value) { SetSnapshottedWalFilesToKeep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the interval to prefetch into the Parquet cache during
     * compaction.</p> <p>Default: 3d</p>
     */
    inline const Duration& GetPreemptiveCacheAge() const { return m_preemptiveCacheAge; }
    inline bool PreemptiveCacheAgeHasBeenSet() const { return m_preemptiveCacheAgeHasBeenSet; }
    template<typename PreemptiveCacheAgeT = Duration>
    void SetPreemptiveCacheAge(PreemptiveCacheAgeT&& value) { m_preemptiveCacheAgeHasBeenSet = true; m_preemptiveCacheAge = std::forward<PreemptiveCacheAgeT>(value); }
    template<typename PreemptiveCacheAgeT = Duration>
    InfluxDBv3EnterpriseParameters& WithPreemptiveCacheAge(PreemptiveCacheAgeT&& value) { SetPreemptiveCacheAge(std::forward<PreemptiveCacheAgeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the percentage of entries to prune during a prune operation on the
     * in-memory Parquet cache.</p> <p>Default: 0.1</p>
     */
    inline double GetParquetMemCachePrunePercentage() const { return m_parquetMemCachePrunePercentage; }
    inline bool ParquetMemCachePrunePercentageHasBeenSet() const { return m_parquetMemCachePrunePercentageHasBeenSet; }
    inline void SetParquetMemCachePrunePercentage(double value) { m_parquetMemCachePrunePercentageHasBeenSet = true; m_parquetMemCachePrunePercentage = value; }
    inline InfluxDBv3EnterpriseParameters& WithParquetMemCachePrunePercentage(double value) { SetParquetMemCachePrunePercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the interval to check if the in-memory Parquet cache needs to be
     * pruned.</p> <p>Default: 1s</p>
     */
    inline const Duration& GetParquetMemCachePruneInterval() const { return m_parquetMemCachePruneInterval; }
    inline bool ParquetMemCachePruneIntervalHasBeenSet() const { return m_parquetMemCachePruneIntervalHasBeenSet; }
    template<typename ParquetMemCachePruneIntervalT = Duration>
    void SetParquetMemCachePruneInterval(ParquetMemCachePruneIntervalT&& value) { m_parquetMemCachePruneIntervalHasBeenSet = true; m_parquetMemCachePruneInterval = std::forward<ParquetMemCachePruneIntervalT>(value); }
    template<typename ParquetMemCachePruneIntervalT = Duration>
    InfluxDBv3EnterpriseParameters& WithParquetMemCachePruneInterval(ParquetMemCachePruneIntervalT&& value) { SetParquetMemCachePruneInterval(std::forward<ParquetMemCachePruneIntervalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disables the in-memory Parquet cache. By default, the cache is enabled.</p>
     */
    inline bool GetDisableParquetMemCache() const { return m_disableParquetMemCache; }
    inline bool DisableParquetMemCacheHasBeenSet() const { return m_disableParquetMemCacheHasBeenSet; }
    inline void SetDisableParquetMemCache(bool value) { m_disableParquetMemCacheHasBeenSet = true; m_disableParquetMemCache = value; }
    inline InfluxDBv3EnterpriseParameters& WithDisableParquetMemCache(bool value) { SetDisableParquetMemCache(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time window for caching recent Parquet files in memory.</p>
     * <p>Default: 5h</p>
     */
    inline const Duration& GetParquetMemCacheQueryPathDuration() const { return m_parquetMemCacheQueryPathDuration; }
    inline bool ParquetMemCacheQueryPathDurationHasBeenSet() const { return m_parquetMemCacheQueryPathDurationHasBeenSet; }
    template<typename ParquetMemCacheQueryPathDurationT = Duration>
    void SetParquetMemCacheQueryPathDuration(ParquetMemCacheQueryPathDurationT&& value) { m_parquetMemCacheQueryPathDurationHasBeenSet = true; m_parquetMemCacheQueryPathDuration = std::forward<ParquetMemCacheQueryPathDurationT>(value); }
    template<typename ParquetMemCacheQueryPathDurationT = Duration>
    InfluxDBv3EnterpriseParameters& WithParquetMemCacheQueryPathDuration(ParquetMemCacheQueryPathDurationT&& value) { SetParquetMemCacheQueryPathDuration(std::forward<ParquetMemCacheQueryPathDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the interval to evict expired entries from the Last-N-Value cache,
     * expressed as a human-readable duration–for example: 20s, 1m, 1h.</p> <p>Default:
     * 10s</p>
     */
    inline const Duration& GetLastCacheEvictionInterval() const { return m_lastCacheEvictionInterval; }
    inline bool LastCacheEvictionIntervalHasBeenSet() const { return m_lastCacheEvictionIntervalHasBeenSet; }
    template<typename LastCacheEvictionIntervalT = Duration>
    void SetLastCacheEvictionInterval(LastCacheEvictionIntervalT&& value) { m_lastCacheEvictionIntervalHasBeenSet = true; m_lastCacheEvictionInterval = std::forward<LastCacheEvictionIntervalT>(value); }
    template<typename LastCacheEvictionIntervalT = Duration>
    InfluxDBv3EnterpriseParameters& WithLastCacheEvictionInterval(LastCacheEvictionIntervalT&& value) { SetLastCacheEvictionInterval(std::forward<LastCacheEvictionIntervalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the interval to evict expired entries from the distinct value
     * cache, expressed as a human-readable duration–for example: 20s, 1m, 1h.</p>
     * <p>Default: 10s</p>
     */
    inline const Duration& GetDistinctCacheEvictionInterval() const { return m_distinctCacheEvictionInterval; }
    inline bool DistinctCacheEvictionIntervalHasBeenSet() const { return m_distinctCacheEvictionIntervalHasBeenSet; }
    template<typename DistinctCacheEvictionIntervalT = Duration>
    void SetDistinctCacheEvictionInterval(DistinctCacheEvictionIntervalT&& value) { m_distinctCacheEvictionIntervalHasBeenSet = true; m_distinctCacheEvictionInterval = std::forward<DistinctCacheEvictionIntervalT>(value); }
    template<typename DistinctCacheEvictionIntervalT = Duration>
    InfluxDBv3EnterpriseParameters& WithDistinctCacheEvictionInterval(DistinctCacheEvictionIntervalT&& value) { SetDistinctCacheEvictionInterval(std::forward<DistinctCacheEvictionIntervalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the duration that Parquet files are arranged into. Data timestamps
     * land each row into a file of this duration. Supported durations are 1m, 5m, and
     * 10m. These files are known as “generation 1” files, which the compactor can
     * merge into larger generations.</p> <p>Default: 10m</p>
     */
    inline const Duration& GetGen1Duration() const { return m_gen1Duration; }
    inline bool Gen1DurationHasBeenSet() const { return m_gen1DurationHasBeenSet; }
    template<typename Gen1DurationT = Duration>
    void SetGen1Duration(Gen1DurationT&& value) { m_gen1DurationHasBeenSet = true; m_gen1Duration = std::forward<Gen1DurationT>(value); }
    template<typename Gen1DurationT = Duration>
    InfluxDBv3EnterpriseParameters& WithGen1Duration(Gen1DurationT&& value) { SetGen1Duration(std::forward<Gen1DurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the size of memory pool used during query execution. Can be given
     * as absolute value in bytes or as a percentage of the total available memory–for
     * example: 8000000000 or 10%.</p> <p>Default: 20%</p>
     */
    inline const PercentOrAbsoluteLong& GetExecMemPoolBytes() const { return m_execMemPoolBytes; }
    inline bool ExecMemPoolBytesHasBeenSet() const { return m_execMemPoolBytesHasBeenSet; }
    template<typename ExecMemPoolBytesT = PercentOrAbsoluteLong>
    void SetExecMemPoolBytes(ExecMemPoolBytesT&& value) { m_execMemPoolBytesHasBeenSet = true; m_execMemPoolBytes = std::forward<ExecMemPoolBytesT>(value); }
    template<typename ExecMemPoolBytesT = PercentOrAbsoluteLong>
    InfluxDBv3EnterpriseParameters& WithExecMemPoolBytes(ExecMemPoolBytesT&& value) { SetExecMemPoolBytes(std::forward<ExecMemPoolBytesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the size of the in-memory Parquet cache in megabytes or percentage
     * of total available memory.</p> <p>Default: 20%</p>
     */
    inline const PercentOrAbsoluteLong& GetParquetMemCacheSize() const { return m_parquetMemCacheSize; }
    inline bool ParquetMemCacheSizeHasBeenSet() const { return m_parquetMemCacheSizeHasBeenSet; }
    template<typename ParquetMemCacheSizeT = PercentOrAbsoluteLong>
    void SetParquetMemCacheSize(ParquetMemCacheSizeT&& value) { m_parquetMemCacheSizeHasBeenSet = true; m_parquetMemCacheSize = std::forward<ParquetMemCacheSizeT>(value); }
    template<typename ParquetMemCacheSizeT = PercentOrAbsoluteLong>
    InfluxDBv3EnterpriseParameters& WithParquetMemCacheSize(ParquetMemCacheSizeT&& value) { SetParquetMemCacheSize(std::forward<ParquetMemCacheSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether WAL replay should fail when encountering errors.</p>
     * <p>Default: false</p>
     */
    inline bool GetWalReplayFailOnError() const { return m_walReplayFailOnError; }
    inline bool WalReplayFailOnErrorHasBeenSet() const { return m_walReplayFailOnErrorHasBeenSet; }
    inline void SetWalReplayFailOnError(bool value) { m_walReplayFailOnErrorHasBeenSet = true; m_walReplayFailOnError = value; }
    inline InfluxDBv3EnterpriseParameters& WithWalReplayFailOnError(bool value) { SetWalReplayFailOnError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Concurrency limit during WAL replay. Setting this number too high can lead to
     * OOM. The default is dynamically determined.</p> <p>Default: max(num_cpus,
     * 10)</p>
     */
    inline int GetWalReplayConcurrencyLimit() const { return m_walReplayConcurrencyLimit; }
    inline bool WalReplayConcurrencyLimitHasBeenSet() const { return m_walReplayConcurrencyLimitHasBeenSet; }
    inline void SetWalReplayConcurrencyLimit(int value) { m_walReplayConcurrencyLimitHasBeenSet = true; m_walReplayConcurrencyLimit = value; }
    inline InfluxDBv3EnterpriseParameters& WithWalReplayConcurrencyLimit(int value) { SetWalReplayConcurrencyLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of entries in the table index cache.</p>
     * <p>Default: 1000</p>
     */
    inline int GetTableIndexCacheMaxEntries() const { return m_tableIndexCacheMaxEntries; }
    inline bool TableIndexCacheMaxEntriesHasBeenSet() const { return m_tableIndexCacheMaxEntriesHasBeenSet; }
    inline void SetTableIndexCacheMaxEntries(int value) { m_tableIndexCacheMaxEntriesHasBeenSet = true; m_tableIndexCacheMaxEntries = value; }
    inline InfluxDBv3EnterpriseParameters& WithTableIndexCacheMaxEntries(int value) { SetTableIndexCacheMaxEntries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits the concurrency level for table index cache operations.</p>
     * <p>Default: 8</p>
     */
    inline int GetTableIndexCacheConcurrencyLimit() const { return m_tableIndexCacheConcurrencyLimit; }
    inline bool TableIndexCacheConcurrencyLimitHasBeenSet() const { return m_tableIndexCacheConcurrencyLimitHasBeenSet; }
    inline void SetTableIndexCacheConcurrencyLimit(int value) { m_tableIndexCacheConcurrencyLimitHasBeenSet = true; m_tableIndexCacheConcurrencyLimit = value; }
    inline InfluxDBv3EnterpriseParameters& WithTableIndexCacheConcurrencyLimit(int value) { SetTableIndexCacheConcurrencyLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how far back to look when creating generation 1 Parquet files.</p>
     * <p>Default: 24h</p>
     */
    inline const Duration& GetGen1LookbackDuration() const { return m_gen1LookbackDuration; }
    inline bool Gen1LookbackDurationHasBeenSet() const { return m_gen1LookbackDurationHasBeenSet; }
    template<typename Gen1LookbackDurationT = Duration>
    void SetGen1LookbackDuration(Gen1LookbackDurationT&& value) { m_gen1LookbackDurationHasBeenSet = true; m_gen1LookbackDuration = std::forward<Gen1LookbackDurationT>(value); }
    template<typename Gen1LookbackDurationT = Duration>
    InfluxDBv3EnterpriseParameters& WithGen1LookbackDuration(Gen1LookbackDurationT&& value) { SetGen1LookbackDuration(std::forward<Gen1LookbackDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval at which retention policies are checked and enforced. Enter as a
     * human-readable time–for example: 30m or 1h.</p> <p>Default: 30m</p>
     */
    inline const Duration& GetRetentionCheckInterval() const { return m_retentionCheckInterval; }
    inline bool RetentionCheckIntervalHasBeenSet() const { return m_retentionCheckIntervalHasBeenSet; }
    template<typename RetentionCheckIntervalT = Duration>
    void SetRetentionCheckInterval(RetentionCheckIntervalT&& value) { m_retentionCheckIntervalHasBeenSet = true; m_retentionCheckInterval = std::forward<RetentionCheckIntervalT>(value); }
    template<typename RetentionCheckIntervalT = Duration>
    InfluxDBv3EnterpriseParameters& WithRetentionCheckInterval(RetentionCheckIntervalT&& value) { SetRetentionCheckInterval(std::forward<RetentionCheckIntervalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the grace period before permanently deleting data.</p> <p>Default:
     * 24h</p>
     */
    inline const Duration& GetDeleteGracePeriod() const { return m_deleteGracePeriod; }
    inline bool DeleteGracePeriodHasBeenSet() const { return m_deleteGracePeriodHasBeenSet; }
    template<typename DeleteGracePeriodT = Duration>
    void SetDeleteGracePeriod(DeleteGracePeriodT&& value) { m_deleteGracePeriodHasBeenSet = true; m_deleteGracePeriod = std::forward<DeleteGracePeriodT>(value); }
    template<typename DeleteGracePeriodT = Duration>
    InfluxDBv3EnterpriseParameters& WithDeleteGracePeriod(DeleteGracePeriodT&& value) { SetDeleteGracePeriod(std::forward<DeleteGracePeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the default duration for hard deletion of data.</p> <p>Default: 90d</p>
     */
    inline const Duration& GetHardDeleteDefaultDuration() const { return m_hardDeleteDefaultDuration; }
    inline bool HardDeleteDefaultDurationHasBeenSet() const { return m_hardDeleteDefaultDurationHasBeenSet; }
    template<typename HardDeleteDefaultDurationT = Duration>
    void SetHardDeleteDefaultDuration(HardDeleteDefaultDurationT&& value) { m_hardDeleteDefaultDurationHasBeenSet = true; m_hardDeleteDefaultDuration = std::forward<HardDeleteDefaultDurationT>(value); }
    template<typename HardDeleteDefaultDurationT = Duration>
    InfluxDBv3EnterpriseParameters& WithHardDeleteDefaultDuration(HardDeleteDefaultDurationT&& value) { SetHardDeleteDefaultDuration(std::forward<HardDeleteDefaultDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies number of instances in the DbCluster which can both ingest and
     * query.</p>
     */
    inline int GetIngestQueryInstances() const { return m_ingestQueryInstances; }
    inline bool IngestQueryInstancesHasBeenSet() const { return m_ingestQueryInstancesHasBeenSet; }
    inline void SetIngestQueryInstances(int value) { m_ingestQueryInstancesHasBeenSet = true; m_ingestQueryInstances = value; }
    inline InfluxDBv3EnterpriseParameters& WithIngestQueryInstances(int value) { SetIngestQueryInstances(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies number of instances in the DbCluster which can only query.</p>
     */
    inline int GetQueryOnlyInstances() const { return m_queryOnlyInstances; }
    inline bool QueryOnlyInstancesHasBeenSet() const { return m_queryOnlyInstancesHasBeenSet; }
    inline void SetQueryOnlyInstances(int value) { m_queryOnlyInstancesHasBeenSet = true; m_queryOnlyInstances = value; }
    inline InfluxDBv3EnterpriseParameters& WithQueryOnlyInstances(int value) { SetQueryOnlyInstances(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the compactor instance should be a standalone instance or
     * not.</p>
     */
    inline bool GetDedicatedCompactor() const { return m_dedicatedCompactor; }
    inline bool DedicatedCompactorHasBeenSet() const { return m_dedicatedCompactorHasBeenSet; }
    inline void SetDedicatedCompactor(bool value) { m_dedicatedCompactorHasBeenSet = true; m_dedicatedCompactor = value; }
    inline InfluxDBv3EnterpriseParameters& WithDedicatedCompactor(bool value) { SetDedicatedCompactor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the soft limit for the number of rows per file that the compactor
     * writes. The compactor may write more rows than this limit.</p> <p>Default:
     * 1000000</p>
     */
    inline int GetCompactionRowLimit() const { return m_compactionRowLimit; }
    inline bool CompactionRowLimitHasBeenSet() const { return m_compactionRowLimitHasBeenSet; }
    inline void SetCompactionRowLimit(int value) { m_compactionRowLimitHasBeenSet = true; m_compactionRowLimit = value; }
    inline InfluxDBv3EnterpriseParameters& WithCompactionRowLimit(int value) { SetCompactionRowLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the maximum number of files included in any compaction plan.</p>
     * <p>Default: 500</p>
     */
    inline int GetCompactionMaxNumFilesPerPlan() const { return m_compactionMaxNumFilesPerPlan; }
    inline bool CompactionMaxNumFilesPerPlanHasBeenSet() const { return m_compactionMaxNumFilesPerPlanHasBeenSet; }
    inline void SetCompactionMaxNumFilesPerPlan(int value) { m_compactionMaxNumFilesPerPlanHasBeenSet = true; m_compactionMaxNumFilesPerPlan = value; }
    inline InfluxDBv3EnterpriseParameters& WithCompactionMaxNumFilesPerPlan(int value) { SetCompactionMaxNumFilesPerPlan(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the duration of the first level of compaction (gen2). Later levels
     * of compaction are multiples of this duration. This value should be equal to or
     * greater than the gen1 duration.</p> <p>Default: 20m</p>
     */
    inline const Duration& GetCompactionGen2Duration() const { return m_compactionGen2Duration; }
    inline bool CompactionGen2DurationHasBeenSet() const { return m_compactionGen2DurationHasBeenSet; }
    template<typename CompactionGen2DurationT = Duration>
    void SetCompactionGen2Duration(CompactionGen2DurationT&& value) { m_compactionGen2DurationHasBeenSet = true; m_compactionGen2Duration = std::forward<CompactionGen2DurationT>(value); }
    template<typename CompactionGen2DurationT = Duration>
    InfluxDBv3EnterpriseParameters& WithCompactionGen2Duration(CompactionGen2DurationT&& value) { SetCompactionGen2Duration(std::forward<CompactionGen2DurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a comma-separated list of multiples defining the duration of each
     * level of compaction. The number of elements in the list determines the number of
     * compaction levels. The first element specifies the duration of the first level
     * (gen3); subsequent levels are multiples of the previous level.</p> <p>Default:
     * 3,4,6,5</p>
     */
    inline const Aws::String& GetCompactionMultipliers() const { return m_compactionMultipliers; }
    inline bool CompactionMultipliersHasBeenSet() const { return m_compactionMultipliersHasBeenSet; }
    template<typename CompactionMultipliersT = Aws::String>
    void SetCompactionMultipliers(CompactionMultipliersT&& value) { m_compactionMultipliersHasBeenSet = true; m_compactionMultipliers = std::forward<CompactionMultipliersT>(value); }
    template<typename CompactionMultipliersT = Aws::String>
    InfluxDBv3EnterpriseParameters& WithCompactionMultipliers(CompactionMultipliersT&& value) { SetCompactionMultipliers(std::forward<CompactionMultipliersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the amount of time that the compactor waits after finishing a
     * compaction run to delete files marked as needing deletion during that compaction
     * run.</p> <p>Default: 10m</p>
     */
    inline const Duration& GetCompactionCleanupWait() const { return m_compactionCleanupWait; }
    inline bool CompactionCleanupWaitHasBeenSet() const { return m_compactionCleanupWaitHasBeenSet; }
    template<typename CompactionCleanupWaitT = Duration>
    void SetCompactionCleanupWait(CompactionCleanupWaitT&& value) { m_compactionCleanupWaitHasBeenSet = true; m_compactionCleanupWait = std::forward<CompactionCleanupWaitT>(value); }
    template<typename CompactionCleanupWaitT = Duration>
    InfluxDBv3EnterpriseParameters& WithCompactionCleanupWait(CompactionCleanupWaitT&& value) { SetCompactionCleanupWait(std::forward<CompactionCleanupWaitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how often the compactor checks for new compaction work to
     * perform.</p> <p>Default: 10s</p>
     */
    inline const Duration& GetCompactionCheckInterval() const { return m_compactionCheckInterval; }
    inline bool CompactionCheckIntervalHasBeenSet() const { return m_compactionCheckIntervalHasBeenSet; }
    template<typename CompactionCheckIntervalT = Duration>
    void SetCompactionCheckInterval(CompactionCheckIntervalT&& value) { m_compactionCheckIntervalHasBeenSet = true; m_compactionCheckInterval = std::forward<CompactionCheckIntervalT>(value); }
    template<typename CompactionCheckIntervalT = Duration>
    InfluxDBv3EnterpriseParameters& WithCompactionCheckInterval(CompactionCheckIntervalT&& value) { SetCompactionCheckInterval(std::forward<CompactionCheckIntervalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disables populating the last-N-value cache from historical data. If disabled,
     * the cache is still populated with data from the write-ahead log (WAL).</p>
     */
    inline bool GetLastValueCacheDisableFromHistory() const { return m_lastValueCacheDisableFromHistory; }
    inline bool LastValueCacheDisableFromHistoryHasBeenSet() const { return m_lastValueCacheDisableFromHistoryHasBeenSet; }
    inline void SetLastValueCacheDisableFromHistory(bool value) { m_lastValueCacheDisableFromHistoryHasBeenSet = true; m_lastValueCacheDisableFromHistory = value; }
    inline InfluxDBv3EnterpriseParameters& WithLastValueCacheDisableFromHistory(bool value) { SetLastValueCacheDisableFromHistory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disables populating the distinct value cache from historical data. If
     * disabled, the cache is still populated with data from the write-ahead log
     * (WAL).</p>
     */
    inline bool GetDistinctValueCacheDisableFromHistory() const { return m_distinctValueCacheDisableFromHistory; }
    inline bool DistinctValueCacheDisableFromHistoryHasBeenSet() const { return m_distinctValueCacheDisableFromHistoryHasBeenSet; }
    inline void SetDistinctValueCacheDisableFromHistory(bool value) { m_distinctValueCacheDisableFromHistoryHasBeenSet = true; m_distinctValueCacheDisableFromHistory = value; }
    inline InfluxDBv3EnterpriseParameters& WithDistinctValueCacheDisableFromHistory(bool value) { SetDistinctValueCacheDisableFromHistory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the interval at which data replication occurs between cluster
     * nodes.</p> <p>Default: 250ms</p>
     */
    inline const Duration& GetReplicationInterval() const { return m_replicationInterval; }
    inline bool ReplicationIntervalHasBeenSet() const { return m_replicationIntervalHasBeenSet; }
    template<typename ReplicationIntervalT = Duration>
    void SetReplicationInterval(ReplicationIntervalT&& value) { m_replicationIntervalHasBeenSet = true; m_replicationInterval = std::forward<ReplicationIntervalT>(value); }
    template<typename ReplicationIntervalT = Duration>
    InfluxDBv3EnterpriseParameters& WithReplicationInterval(ReplicationIntervalT&& value) { SetReplicationInterval(std::forward<ReplicationIntervalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines how often the catalog synchronizes across cluster nodes.</p>
     * <p>Default: 10s</p>
     */
    inline const Duration& GetCatalogSyncInterval() const { return m_catalogSyncInterval; }
    inline bool CatalogSyncIntervalHasBeenSet() const { return m_catalogSyncIntervalHasBeenSet; }
    template<typename CatalogSyncIntervalT = Duration>
    void SetCatalogSyncInterval(CatalogSyncIntervalT&& value) { m_catalogSyncIntervalHasBeenSet = true; m_catalogSyncInterval = std::forward<CatalogSyncIntervalT>(value); }
    template<typename CatalogSyncIntervalT = Duration>
    InfluxDBv3EnterpriseParameters& WithCatalogSyncInterval(CatalogSyncIntervalT&& value) { SetCatalogSyncInterval(std::forward<CatalogSyncIntervalT>(value)); return *this;}
    ///@}
  private:

    int m_queryFileLimit{0};
    bool m_queryFileLimitHasBeenSet = false;

    int m_queryLogSize{0};
    bool m_queryLogSizeHasBeenSet = false;

    Aws::String m_logFilter;
    bool m_logFilterHasBeenSet = false;

    LogFormats m_logFormat{LogFormats::NOT_SET};
    bool m_logFormatHasBeenSet = false;

    int m_dataFusionNumThreads{0};
    bool m_dataFusionNumThreadsHasBeenSet = false;

    DataFusionRuntimeType m_dataFusionRuntimeType{DataFusionRuntimeType::NOT_SET};
    bool m_dataFusionRuntimeTypeHasBeenSet = false;

    bool m_dataFusionRuntimeDisableLifoSlot{false};
    bool m_dataFusionRuntimeDisableLifoSlotHasBeenSet = false;

    int m_dataFusionRuntimeEventInterval{0};
    bool m_dataFusionRuntimeEventIntervalHasBeenSet = false;

    int m_dataFusionRuntimeGlobalQueueInterval{0};
    bool m_dataFusionRuntimeGlobalQueueIntervalHasBeenSet = false;

    int m_dataFusionRuntimeMaxBlockingThreads{0};
    bool m_dataFusionRuntimeMaxBlockingThreadsHasBeenSet = false;

    int m_dataFusionRuntimeMaxIoEventsPerTick{0};
    bool m_dataFusionRuntimeMaxIoEventsPerTickHasBeenSet = false;

    Duration m_dataFusionRuntimeThreadKeepAlive;
    bool m_dataFusionRuntimeThreadKeepAliveHasBeenSet = false;

    int m_dataFusionRuntimeThreadPriority{0};
    bool m_dataFusionRuntimeThreadPriorityHasBeenSet = false;

    int m_dataFusionMaxParquetFanout{0};
    bool m_dataFusionMaxParquetFanoutHasBeenSet = false;

    bool m_dataFusionUseCachedParquetLoader{false};
    bool m_dataFusionUseCachedParquetLoaderHasBeenSet = false;

    Aws::String m_dataFusionConfig;
    bool m_dataFusionConfigHasBeenSet = false;

    long long m_maxHttpRequestSize{0};
    bool m_maxHttpRequestSizeHasBeenSet = false;

    PercentOrAbsoluteLong m_forceSnapshotMemThreshold;
    bool m_forceSnapshotMemThresholdHasBeenSet = false;

    int m_walSnapshotSize{0};
    bool m_walSnapshotSizeHasBeenSet = false;

    int m_walMaxWriteBufferSize{0};
    bool m_walMaxWriteBufferSizeHasBeenSet = false;

    int m_snapshottedWalFilesToKeep{0};
    bool m_snapshottedWalFilesToKeepHasBeenSet = false;

    Duration m_preemptiveCacheAge;
    bool m_preemptiveCacheAgeHasBeenSet = false;

    double m_parquetMemCachePrunePercentage{0.0};
    bool m_parquetMemCachePrunePercentageHasBeenSet = false;

    Duration m_parquetMemCachePruneInterval;
    bool m_parquetMemCachePruneIntervalHasBeenSet = false;

    bool m_disableParquetMemCache{false};
    bool m_disableParquetMemCacheHasBeenSet = false;

    Duration m_parquetMemCacheQueryPathDuration;
    bool m_parquetMemCacheQueryPathDurationHasBeenSet = false;

    Duration m_lastCacheEvictionInterval;
    bool m_lastCacheEvictionIntervalHasBeenSet = false;

    Duration m_distinctCacheEvictionInterval;
    bool m_distinctCacheEvictionIntervalHasBeenSet = false;

    Duration m_gen1Duration;
    bool m_gen1DurationHasBeenSet = false;

    PercentOrAbsoluteLong m_execMemPoolBytes;
    bool m_execMemPoolBytesHasBeenSet = false;

    PercentOrAbsoluteLong m_parquetMemCacheSize;
    bool m_parquetMemCacheSizeHasBeenSet = false;

    bool m_walReplayFailOnError{false};
    bool m_walReplayFailOnErrorHasBeenSet = false;

    int m_walReplayConcurrencyLimit{0};
    bool m_walReplayConcurrencyLimitHasBeenSet = false;

    int m_tableIndexCacheMaxEntries{0};
    bool m_tableIndexCacheMaxEntriesHasBeenSet = false;

    int m_tableIndexCacheConcurrencyLimit{0};
    bool m_tableIndexCacheConcurrencyLimitHasBeenSet = false;

    Duration m_gen1LookbackDuration;
    bool m_gen1LookbackDurationHasBeenSet = false;

    Duration m_retentionCheckInterval;
    bool m_retentionCheckIntervalHasBeenSet = false;

    Duration m_deleteGracePeriod;
    bool m_deleteGracePeriodHasBeenSet = false;

    Duration m_hardDeleteDefaultDuration;
    bool m_hardDeleteDefaultDurationHasBeenSet = false;

    int m_ingestQueryInstances{0};
    bool m_ingestQueryInstancesHasBeenSet = false;

    int m_queryOnlyInstances{0};
    bool m_queryOnlyInstancesHasBeenSet = false;

    bool m_dedicatedCompactor{false};
    bool m_dedicatedCompactorHasBeenSet = false;

    int m_compactionRowLimit{0};
    bool m_compactionRowLimitHasBeenSet = false;

    int m_compactionMaxNumFilesPerPlan{0};
    bool m_compactionMaxNumFilesPerPlanHasBeenSet = false;

    Duration m_compactionGen2Duration;
    bool m_compactionGen2DurationHasBeenSet = false;

    Aws::String m_compactionMultipliers;
    bool m_compactionMultipliersHasBeenSet = false;

    Duration m_compactionCleanupWait;
    bool m_compactionCleanupWaitHasBeenSet = false;

    Duration m_compactionCheckInterval;
    bool m_compactionCheckIntervalHasBeenSet = false;

    bool m_lastValueCacheDisableFromHistory{false};
    bool m_lastValueCacheDisableFromHistoryHasBeenSet = false;

    bool m_distinctValueCacheDisableFromHistory{false};
    bool m_distinctValueCacheDisableFromHistoryHasBeenSet = false;

    Duration m_replicationInterval;
    bool m_replicationIntervalHasBeenSet = false;

    Duration m_catalogSyncInterval;
    bool m_catalogSyncIntervalHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
