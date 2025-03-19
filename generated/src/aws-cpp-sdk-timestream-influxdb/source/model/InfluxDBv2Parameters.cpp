/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/model/InfluxDBv2Parameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamInfluxDB
{
namespace Model
{

InfluxDBv2Parameters::InfluxDBv2Parameters(JsonView jsonValue)
{
  *this = jsonValue;
}

InfluxDBv2Parameters& InfluxDBv2Parameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fluxLogEnabled"))
  {
    m_fluxLogEnabled = jsonValue.GetBool("fluxLogEnabled");
    m_fluxLogEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logLevel"))
  {
    m_logLevel = LogLevelMapper::GetLogLevelForName(jsonValue.GetString("logLevel"));
    m_logLevelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("noTasks"))
  {
    m_noTasks = jsonValue.GetBool("noTasks");
    m_noTasksHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queryConcurrency"))
  {
    m_queryConcurrency = jsonValue.GetInteger("queryConcurrency");
    m_queryConcurrencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queryQueueSize"))
  {
    m_queryQueueSize = jsonValue.GetInteger("queryQueueSize");
    m_queryQueueSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tracingType"))
  {
    m_tracingType = TracingTypeMapper::GetTracingTypeForName(jsonValue.GetString("tracingType"));
    m_tracingTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metricsDisabled"))
  {
    m_metricsDisabled = jsonValue.GetBool("metricsDisabled");
    m_metricsDisabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("httpIdleTimeout"))
  {
    m_httpIdleTimeout = jsonValue.GetObject("httpIdleTimeout");
    m_httpIdleTimeoutHasBeenSet = true;
  }
  if(jsonValue.ValueExists("httpReadHeaderTimeout"))
  {
    m_httpReadHeaderTimeout = jsonValue.GetObject("httpReadHeaderTimeout");
    m_httpReadHeaderTimeoutHasBeenSet = true;
  }
  if(jsonValue.ValueExists("httpReadTimeout"))
  {
    m_httpReadTimeout = jsonValue.GetObject("httpReadTimeout");
    m_httpReadTimeoutHasBeenSet = true;
  }
  if(jsonValue.ValueExists("httpWriteTimeout"))
  {
    m_httpWriteTimeout = jsonValue.GetObject("httpWriteTimeout");
    m_httpWriteTimeoutHasBeenSet = true;
  }
  if(jsonValue.ValueExists("influxqlMaxSelectBuckets"))
  {
    m_influxqlMaxSelectBuckets = jsonValue.GetInt64("influxqlMaxSelectBuckets");
    m_influxqlMaxSelectBucketsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("influxqlMaxSelectPoint"))
  {
    m_influxqlMaxSelectPoint = jsonValue.GetInt64("influxqlMaxSelectPoint");
    m_influxqlMaxSelectPointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("influxqlMaxSelectSeries"))
  {
    m_influxqlMaxSelectSeries = jsonValue.GetInt64("influxqlMaxSelectSeries");
    m_influxqlMaxSelectSeriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pprofDisabled"))
  {
    m_pprofDisabled = jsonValue.GetBool("pprofDisabled");
    m_pprofDisabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queryInitialMemoryBytes"))
  {
    m_queryInitialMemoryBytes = jsonValue.GetInt64("queryInitialMemoryBytes");
    m_queryInitialMemoryBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queryMaxMemoryBytes"))
  {
    m_queryMaxMemoryBytes = jsonValue.GetInt64("queryMaxMemoryBytes");
    m_queryMaxMemoryBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queryMemoryBytes"))
  {
    m_queryMemoryBytes = jsonValue.GetInt64("queryMemoryBytes");
    m_queryMemoryBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionLength"))
  {
    m_sessionLength = jsonValue.GetInteger("sessionLength");
    m_sessionLengthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionRenewDisabled"))
  {
    m_sessionRenewDisabled = jsonValue.GetBool("sessionRenewDisabled");
    m_sessionRenewDisabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageCacheMaxMemorySize"))
  {
    m_storageCacheMaxMemorySize = jsonValue.GetInt64("storageCacheMaxMemorySize");
    m_storageCacheMaxMemorySizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageCacheSnapshotMemorySize"))
  {
    m_storageCacheSnapshotMemorySize = jsonValue.GetInt64("storageCacheSnapshotMemorySize");
    m_storageCacheSnapshotMemorySizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageCacheSnapshotWriteColdDuration"))
  {
    m_storageCacheSnapshotWriteColdDuration = jsonValue.GetObject("storageCacheSnapshotWriteColdDuration");
    m_storageCacheSnapshotWriteColdDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageCompactFullWriteColdDuration"))
  {
    m_storageCompactFullWriteColdDuration = jsonValue.GetObject("storageCompactFullWriteColdDuration");
    m_storageCompactFullWriteColdDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageCompactThroughputBurst"))
  {
    m_storageCompactThroughputBurst = jsonValue.GetInt64("storageCompactThroughputBurst");
    m_storageCompactThroughputBurstHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageMaxConcurrentCompactions"))
  {
    m_storageMaxConcurrentCompactions = jsonValue.GetInteger("storageMaxConcurrentCompactions");
    m_storageMaxConcurrentCompactionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageMaxIndexLogFileSize"))
  {
    m_storageMaxIndexLogFileSize = jsonValue.GetInt64("storageMaxIndexLogFileSize");
    m_storageMaxIndexLogFileSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageNoValidateFieldSize"))
  {
    m_storageNoValidateFieldSize = jsonValue.GetBool("storageNoValidateFieldSize");
    m_storageNoValidateFieldSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageRetentionCheckInterval"))
  {
    m_storageRetentionCheckInterval = jsonValue.GetObject("storageRetentionCheckInterval");
    m_storageRetentionCheckIntervalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageSeriesFileMaxConcurrentSnapshotCompactions"))
  {
    m_storageSeriesFileMaxConcurrentSnapshotCompactions = jsonValue.GetInteger("storageSeriesFileMaxConcurrentSnapshotCompactions");
    m_storageSeriesFileMaxConcurrentSnapshotCompactionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageSeriesIdSetCacheSize"))
  {
    m_storageSeriesIdSetCacheSize = jsonValue.GetInt64("storageSeriesIdSetCacheSize");
    m_storageSeriesIdSetCacheSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageWalMaxConcurrentWrites"))
  {
    m_storageWalMaxConcurrentWrites = jsonValue.GetInteger("storageWalMaxConcurrentWrites");
    m_storageWalMaxConcurrentWritesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageWalMaxWriteDelay"))
  {
    m_storageWalMaxWriteDelay = jsonValue.GetObject("storageWalMaxWriteDelay");
    m_storageWalMaxWriteDelayHasBeenSet = true;
  }
  if(jsonValue.ValueExists("uiDisabled"))
  {
    m_uiDisabled = jsonValue.GetBool("uiDisabled");
    m_uiDisabledHasBeenSet = true;
  }
  return *this;
}

JsonValue InfluxDBv2Parameters::Jsonize() const
{
  JsonValue payload;

  if(m_fluxLogEnabledHasBeenSet)
  {
   payload.WithBool("fluxLogEnabled", m_fluxLogEnabled);

  }

  if(m_logLevelHasBeenSet)
  {
   payload.WithString("logLevel", LogLevelMapper::GetNameForLogLevel(m_logLevel));
  }

  if(m_noTasksHasBeenSet)
  {
   payload.WithBool("noTasks", m_noTasks);

  }

  if(m_queryConcurrencyHasBeenSet)
  {
   payload.WithInteger("queryConcurrency", m_queryConcurrency);

  }

  if(m_queryQueueSizeHasBeenSet)
  {
   payload.WithInteger("queryQueueSize", m_queryQueueSize);

  }

  if(m_tracingTypeHasBeenSet)
  {
   payload.WithString("tracingType", TracingTypeMapper::GetNameForTracingType(m_tracingType));
  }

  if(m_metricsDisabledHasBeenSet)
  {
   payload.WithBool("metricsDisabled", m_metricsDisabled);

  }

  if(m_httpIdleTimeoutHasBeenSet)
  {
   payload.WithObject("httpIdleTimeout", m_httpIdleTimeout.Jsonize());

  }

  if(m_httpReadHeaderTimeoutHasBeenSet)
  {
   payload.WithObject("httpReadHeaderTimeout", m_httpReadHeaderTimeout.Jsonize());

  }

  if(m_httpReadTimeoutHasBeenSet)
  {
   payload.WithObject("httpReadTimeout", m_httpReadTimeout.Jsonize());

  }

  if(m_httpWriteTimeoutHasBeenSet)
  {
   payload.WithObject("httpWriteTimeout", m_httpWriteTimeout.Jsonize());

  }

  if(m_influxqlMaxSelectBucketsHasBeenSet)
  {
   payload.WithInt64("influxqlMaxSelectBuckets", m_influxqlMaxSelectBuckets);

  }

  if(m_influxqlMaxSelectPointHasBeenSet)
  {
   payload.WithInt64("influxqlMaxSelectPoint", m_influxqlMaxSelectPoint);

  }

  if(m_influxqlMaxSelectSeriesHasBeenSet)
  {
   payload.WithInt64("influxqlMaxSelectSeries", m_influxqlMaxSelectSeries);

  }

  if(m_pprofDisabledHasBeenSet)
  {
   payload.WithBool("pprofDisabled", m_pprofDisabled);

  }

  if(m_queryInitialMemoryBytesHasBeenSet)
  {
   payload.WithInt64("queryInitialMemoryBytes", m_queryInitialMemoryBytes);

  }

  if(m_queryMaxMemoryBytesHasBeenSet)
  {
   payload.WithInt64("queryMaxMemoryBytes", m_queryMaxMemoryBytes);

  }

  if(m_queryMemoryBytesHasBeenSet)
  {
   payload.WithInt64("queryMemoryBytes", m_queryMemoryBytes);

  }

  if(m_sessionLengthHasBeenSet)
  {
   payload.WithInteger("sessionLength", m_sessionLength);

  }

  if(m_sessionRenewDisabledHasBeenSet)
  {
   payload.WithBool("sessionRenewDisabled", m_sessionRenewDisabled);

  }

  if(m_storageCacheMaxMemorySizeHasBeenSet)
  {
   payload.WithInt64("storageCacheMaxMemorySize", m_storageCacheMaxMemorySize);

  }

  if(m_storageCacheSnapshotMemorySizeHasBeenSet)
  {
   payload.WithInt64("storageCacheSnapshotMemorySize", m_storageCacheSnapshotMemorySize);

  }

  if(m_storageCacheSnapshotWriteColdDurationHasBeenSet)
  {
   payload.WithObject("storageCacheSnapshotWriteColdDuration", m_storageCacheSnapshotWriteColdDuration.Jsonize());

  }

  if(m_storageCompactFullWriteColdDurationHasBeenSet)
  {
   payload.WithObject("storageCompactFullWriteColdDuration", m_storageCompactFullWriteColdDuration.Jsonize());

  }

  if(m_storageCompactThroughputBurstHasBeenSet)
  {
   payload.WithInt64("storageCompactThroughputBurst", m_storageCompactThroughputBurst);

  }

  if(m_storageMaxConcurrentCompactionsHasBeenSet)
  {
   payload.WithInteger("storageMaxConcurrentCompactions", m_storageMaxConcurrentCompactions);

  }

  if(m_storageMaxIndexLogFileSizeHasBeenSet)
  {
   payload.WithInt64("storageMaxIndexLogFileSize", m_storageMaxIndexLogFileSize);

  }

  if(m_storageNoValidateFieldSizeHasBeenSet)
  {
   payload.WithBool("storageNoValidateFieldSize", m_storageNoValidateFieldSize);

  }

  if(m_storageRetentionCheckIntervalHasBeenSet)
  {
   payload.WithObject("storageRetentionCheckInterval", m_storageRetentionCheckInterval.Jsonize());

  }

  if(m_storageSeriesFileMaxConcurrentSnapshotCompactionsHasBeenSet)
  {
   payload.WithInteger("storageSeriesFileMaxConcurrentSnapshotCompactions", m_storageSeriesFileMaxConcurrentSnapshotCompactions);

  }

  if(m_storageSeriesIdSetCacheSizeHasBeenSet)
  {
   payload.WithInt64("storageSeriesIdSetCacheSize", m_storageSeriesIdSetCacheSize);

  }

  if(m_storageWalMaxConcurrentWritesHasBeenSet)
  {
   payload.WithInteger("storageWalMaxConcurrentWrites", m_storageWalMaxConcurrentWrites);

  }

  if(m_storageWalMaxWriteDelayHasBeenSet)
  {
   payload.WithObject("storageWalMaxWriteDelay", m_storageWalMaxWriteDelay.Jsonize());

  }

  if(m_uiDisabledHasBeenSet)
  {
   payload.WithBool("uiDisabled", m_uiDisabled);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
