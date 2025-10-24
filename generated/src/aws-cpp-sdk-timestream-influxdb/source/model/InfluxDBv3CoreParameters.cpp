/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-influxdb/model/InfluxDBv3CoreParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {

InfluxDBv3CoreParameters::InfluxDBv3CoreParameters(JsonView jsonValue) { *this = jsonValue; }

InfluxDBv3CoreParameters& InfluxDBv3CoreParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("queryFileLimit")) {
    m_queryFileLimit = jsonValue.GetInteger("queryFileLimit");
    m_queryFileLimitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("queryLogSize")) {
    m_queryLogSize = jsonValue.GetInteger("queryLogSize");
    m_queryLogSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logFilter")) {
    m_logFilter = jsonValue.GetString("logFilter");
    m_logFilterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logFormat")) {
    m_logFormat = LogFormatsMapper::GetLogFormatsForName(jsonValue.GetString("logFormat"));
    m_logFormatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataFusionNumThreads")) {
    m_dataFusionNumThreads = jsonValue.GetInteger("dataFusionNumThreads");
    m_dataFusionNumThreadsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataFusionRuntimeType")) {
    m_dataFusionRuntimeType = DataFusionRuntimeTypeMapper::GetDataFusionRuntimeTypeForName(jsonValue.GetString("dataFusionRuntimeType"));
    m_dataFusionRuntimeTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataFusionRuntimeDisableLifoSlot")) {
    m_dataFusionRuntimeDisableLifoSlot = jsonValue.GetBool("dataFusionRuntimeDisableLifoSlot");
    m_dataFusionRuntimeDisableLifoSlotHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataFusionRuntimeEventInterval")) {
    m_dataFusionRuntimeEventInterval = jsonValue.GetInteger("dataFusionRuntimeEventInterval");
    m_dataFusionRuntimeEventIntervalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataFusionRuntimeGlobalQueueInterval")) {
    m_dataFusionRuntimeGlobalQueueInterval = jsonValue.GetInteger("dataFusionRuntimeGlobalQueueInterval");
    m_dataFusionRuntimeGlobalQueueIntervalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataFusionRuntimeMaxBlockingThreads")) {
    m_dataFusionRuntimeMaxBlockingThreads = jsonValue.GetInteger("dataFusionRuntimeMaxBlockingThreads");
    m_dataFusionRuntimeMaxBlockingThreadsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataFusionRuntimeMaxIoEventsPerTick")) {
    m_dataFusionRuntimeMaxIoEventsPerTick = jsonValue.GetInteger("dataFusionRuntimeMaxIoEventsPerTick");
    m_dataFusionRuntimeMaxIoEventsPerTickHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataFusionRuntimeThreadKeepAlive")) {
    m_dataFusionRuntimeThreadKeepAlive = jsonValue.GetObject("dataFusionRuntimeThreadKeepAlive");
    m_dataFusionRuntimeThreadKeepAliveHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataFusionRuntimeThreadPriority")) {
    m_dataFusionRuntimeThreadPriority = jsonValue.GetInteger("dataFusionRuntimeThreadPriority");
    m_dataFusionRuntimeThreadPriorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataFusionMaxParquetFanout")) {
    m_dataFusionMaxParquetFanout = jsonValue.GetInteger("dataFusionMaxParquetFanout");
    m_dataFusionMaxParquetFanoutHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataFusionUseCachedParquetLoader")) {
    m_dataFusionUseCachedParquetLoader = jsonValue.GetBool("dataFusionUseCachedParquetLoader");
    m_dataFusionUseCachedParquetLoaderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataFusionConfig")) {
    m_dataFusionConfig = jsonValue.GetString("dataFusionConfig");
    m_dataFusionConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxHttpRequestSize")) {
    m_maxHttpRequestSize = jsonValue.GetInt64("maxHttpRequestSize");
    m_maxHttpRequestSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("forceSnapshotMemThreshold")) {
    m_forceSnapshotMemThreshold = jsonValue.GetObject("forceSnapshotMemThreshold");
    m_forceSnapshotMemThresholdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("walSnapshotSize")) {
    m_walSnapshotSize = jsonValue.GetInteger("walSnapshotSize");
    m_walSnapshotSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("walMaxWriteBufferSize")) {
    m_walMaxWriteBufferSize = jsonValue.GetInteger("walMaxWriteBufferSize");
    m_walMaxWriteBufferSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("snapshottedWalFilesToKeep")) {
    m_snapshottedWalFilesToKeep = jsonValue.GetInteger("snapshottedWalFilesToKeep");
    m_snapshottedWalFilesToKeepHasBeenSet = true;
  }
  if (jsonValue.ValueExists("preemptiveCacheAge")) {
    m_preemptiveCacheAge = jsonValue.GetObject("preemptiveCacheAge");
    m_preemptiveCacheAgeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parquetMemCachePrunePercentage")) {
    m_parquetMemCachePrunePercentage = jsonValue.GetDouble("parquetMemCachePrunePercentage");
    m_parquetMemCachePrunePercentageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parquetMemCachePruneInterval")) {
    m_parquetMemCachePruneInterval = jsonValue.GetObject("parquetMemCachePruneInterval");
    m_parquetMemCachePruneIntervalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("disableParquetMemCache")) {
    m_disableParquetMemCache = jsonValue.GetBool("disableParquetMemCache");
    m_disableParquetMemCacheHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parquetMemCacheQueryPathDuration")) {
    m_parquetMemCacheQueryPathDuration = jsonValue.GetObject("parquetMemCacheQueryPathDuration");
    m_parquetMemCacheQueryPathDurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastCacheEvictionInterval")) {
    m_lastCacheEvictionInterval = jsonValue.GetObject("lastCacheEvictionInterval");
    m_lastCacheEvictionIntervalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("distinctCacheEvictionInterval")) {
    m_distinctCacheEvictionInterval = jsonValue.GetObject("distinctCacheEvictionInterval");
    m_distinctCacheEvictionIntervalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gen1Duration")) {
    m_gen1Duration = jsonValue.GetObject("gen1Duration");
    m_gen1DurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("execMemPoolBytes")) {
    m_execMemPoolBytes = jsonValue.GetObject("execMemPoolBytes");
    m_execMemPoolBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parquetMemCacheSize")) {
    m_parquetMemCacheSize = jsonValue.GetObject("parquetMemCacheSize");
    m_parquetMemCacheSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("walReplayFailOnError")) {
    m_walReplayFailOnError = jsonValue.GetBool("walReplayFailOnError");
    m_walReplayFailOnErrorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("walReplayConcurrencyLimit")) {
    m_walReplayConcurrencyLimit = jsonValue.GetInteger("walReplayConcurrencyLimit");
    m_walReplayConcurrencyLimitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tableIndexCacheMaxEntries")) {
    m_tableIndexCacheMaxEntries = jsonValue.GetInteger("tableIndexCacheMaxEntries");
    m_tableIndexCacheMaxEntriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tableIndexCacheConcurrencyLimit")) {
    m_tableIndexCacheConcurrencyLimit = jsonValue.GetInteger("tableIndexCacheConcurrencyLimit");
    m_tableIndexCacheConcurrencyLimitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gen1LookbackDuration")) {
    m_gen1LookbackDuration = jsonValue.GetObject("gen1LookbackDuration");
    m_gen1LookbackDurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("retentionCheckInterval")) {
    m_retentionCheckInterval = jsonValue.GetObject("retentionCheckInterval");
    m_retentionCheckIntervalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deleteGracePeriod")) {
    m_deleteGracePeriod = jsonValue.GetObject("deleteGracePeriod");
    m_deleteGracePeriodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hardDeleteDefaultDuration")) {
    m_hardDeleteDefaultDuration = jsonValue.GetObject("hardDeleteDefaultDuration");
    m_hardDeleteDefaultDurationHasBeenSet = true;
  }
  return *this;
}

JsonValue InfluxDBv3CoreParameters::Jsonize() const {
  JsonValue payload;

  if (m_queryFileLimitHasBeenSet) {
    payload.WithInteger("queryFileLimit", m_queryFileLimit);
  }

  if (m_queryLogSizeHasBeenSet) {
    payload.WithInteger("queryLogSize", m_queryLogSize);
  }

  if (m_logFilterHasBeenSet) {
    payload.WithString("logFilter", m_logFilter);
  }

  if (m_logFormatHasBeenSet) {
    payload.WithString("logFormat", LogFormatsMapper::GetNameForLogFormats(m_logFormat));
  }

  if (m_dataFusionNumThreadsHasBeenSet) {
    payload.WithInteger("dataFusionNumThreads", m_dataFusionNumThreads);
  }

  if (m_dataFusionRuntimeTypeHasBeenSet) {
    payload.WithString("dataFusionRuntimeType", DataFusionRuntimeTypeMapper::GetNameForDataFusionRuntimeType(m_dataFusionRuntimeType));
  }

  if (m_dataFusionRuntimeDisableLifoSlotHasBeenSet) {
    payload.WithBool("dataFusionRuntimeDisableLifoSlot", m_dataFusionRuntimeDisableLifoSlot);
  }

  if (m_dataFusionRuntimeEventIntervalHasBeenSet) {
    payload.WithInteger("dataFusionRuntimeEventInterval", m_dataFusionRuntimeEventInterval);
  }

  if (m_dataFusionRuntimeGlobalQueueIntervalHasBeenSet) {
    payload.WithInteger("dataFusionRuntimeGlobalQueueInterval", m_dataFusionRuntimeGlobalQueueInterval);
  }

  if (m_dataFusionRuntimeMaxBlockingThreadsHasBeenSet) {
    payload.WithInteger("dataFusionRuntimeMaxBlockingThreads", m_dataFusionRuntimeMaxBlockingThreads);
  }

  if (m_dataFusionRuntimeMaxIoEventsPerTickHasBeenSet) {
    payload.WithInteger("dataFusionRuntimeMaxIoEventsPerTick", m_dataFusionRuntimeMaxIoEventsPerTick);
  }

  if (m_dataFusionRuntimeThreadKeepAliveHasBeenSet) {
    payload.WithObject("dataFusionRuntimeThreadKeepAlive", m_dataFusionRuntimeThreadKeepAlive.Jsonize());
  }

  if (m_dataFusionRuntimeThreadPriorityHasBeenSet) {
    payload.WithInteger("dataFusionRuntimeThreadPriority", m_dataFusionRuntimeThreadPriority);
  }

  if (m_dataFusionMaxParquetFanoutHasBeenSet) {
    payload.WithInteger("dataFusionMaxParquetFanout", m_dataFusionMaxParquetFanout);
  }

  if (m_dataFusionUseCachedParquetLoaderHasBeenSet) {
    payload.WithBool("dataFusionUseCachedParquetLoader", m_dataFusionUseCachedParquetLoader);
  }

  if (m_dataFusionConfigHasBeenSet) {
    payload.WithString("dataFusionConfig", m_dataFusionConfig);
  }

  if (m_maxHttpRequestSizeHasBeenSet) {
    payload.WithInt64("maxHttpRequestSize", m_maxHttpRequestSize);
  }

  if (m_forceSnapshotMemThresholdHasBeenSet) {
    payload.WithObject("forceSnapshotMemThreshold", m_forceSnapshotMemThreshold.Jsonize());
  }

  if (m_walSnapshotSizeHasBeenSet) {
    payload.WithInteger("walSnapshotSize", m_walSnapshotSize);
  }

  if (m_walMaxWriteBufferSizeHasBeenSet) {
    payload.WithInteger("walMaxWriteBufferSize", m_walMaxWriteBufferSize);
  }

  if (m_snapshottedWalFilesToKeepHasBeenSet) {
    payload.WithInteger("snapshottedWalFilesToKeep", m_snapshottedWalFilesToKeep);
  }

  if (m_preemptiveCacheAgeHasBeenSet) {
    payload.WithObject("preemptiveCacheAge", m_preemptiveCacheAge.Jsonize());
  }

  if (m_parquetMemCachePrunePercentageHasBeenSet) {
    payload.WithDouble("parquetMemCachePrunePercentage", m_parquetMemCachePrunePercentage);
  }

  if (m_parquetMemCachePruneIntervalHasBeenSet) {
    payload.WithObject("parquetMemCachePruneInterval", m_parquetMemCachePruneInterval.Jsonize());
  }

  if (m_disableParquetMemCacheHasBeenSet) {
    payload.WithBool("disableParquetMemCache", m_disableParquetMemCache);
  }

  if (m_parquetMemCacheQueryPathDurationHasBeenSet) {
    payload.WithObject("parquetMemCacheQueryPathDuration", m_parquetMemCacheQueryPathDuration.Jsonize());
  }

  if (m_lastCacheEvictionIntervalHasBeenSet) {
    payload.WithObject("lastCacheEvictionInterval", m_lastCacheEvictionInterval.Jsonize());
  }

  if (m_distinctCacheEvictionIntervalHasBeenSet) {
    payload.WithObject("distinctCacheEvictionInterval", m_distinctCacheEvictionInterval.Jsonize());
  }

  if (m_gen1DurationHasBeenSet) {
    payload.WithObject("gen1Duration", m_gen1Duration.Jsonize());
  }

  if (m_execMemPoolBytesHasBeenSet) {
    payload.WithObject("execMemPoolBytes", m_execMemPoolBytes.Jsonize());
  }

  if (m_parquetMemCacheSizeHasBeenSet) {
    payload.WithObject("parquetMemCacheSize", m_parquetMemCacheSize.Jsonize());
  }

  if (m_walReplayFailOnErrorHasBeenSet) {
    payload.WithBool("walReplayFailOnError", m_walReplayFailOnError);
  }

  if (m_walReplayConcurrencyLimitHasBeenSet) {
    payload.WithInteger("walReplayConcurrencyLimit", m_walReplayConcurrencyLimit);
  }

  if (m_tableIndexCacheMaxEntriesHasBeenSet) {
    payload.WithInteger("tableIndexCacheMaxEntries", m_tableIndexCacheMaxEntries);
  }

  if (m_tableIndexCacheConcurrencyLimitHasBeenSet) {
    payload.WithInteger("tableIndexCacheConcurrencyLimit", m_tableIndexCacheConcurrencyLimit);
  }

  if (m_gen1LookbackDurationHasBeenSet) {
    payload.WithObject("gen1LookbackDuration", m_gen1LookbackDuration.Jsonize());
  }

  if (m_retentionCheckIntervalHasBeenSet) {
    payload.WithObject("retentionCheckInterval", m_retentionCheckInterval.Jsonize());
  }

  if (m_deleteGracePeriodHasBeenSet) {
    payload.WithObject("deleteGracePeriod", m_deleteGracePeriod.Jsonize());
  }

  if (m_hardDeleteDefaultDurationHasBeenSet) {
    payload.WithObject("hardDeleteDefaultDuration", m_hardDeleteDefaultDuration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
