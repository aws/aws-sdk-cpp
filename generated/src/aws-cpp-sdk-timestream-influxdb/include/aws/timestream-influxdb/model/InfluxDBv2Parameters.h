/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/model/LogLevel.h>
#include <aws/timestream-influxdb/model/TracingType.h>
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


    /**
     * <p>Include option to show detailed logs for Flux queries.</p> <p>Default:
     * false</p>
     */
    inline bool GetFluxLogEnabled() const{ return m_fluxLogEnabled; }

    /**
     * <p>Include option to show detailed logs for Flux queries.</p> <p>Default:
     * false</p>
     */
    inline bool FluxLogEnabledHasBeenSet() const { return m_fluxLogEnabledHasBeenSet; }

    /**
     * <p>Include option to show detailed logs for Flux queries.</p> <p>Default:
     * false</p>
     */
    inline void SetFluxLogEnabled(bool value) { m_fluxLogEnabledHasBeenSet = true; m_fluxLogEnabled = value; }

    /**
     * <p>Include option to show detailed logs for Flux queries.</p> <p>Default:
     * false</p>
     */
    inline InfluxDBv2Parameters& WithFluxLogEnabled(bool value) { SetFluxLogEnabled(value); return *this;}


    /**
     * <p>Log output level. InfluxDB outputs log entries with severity levels greater
     * than or equal to the level specified.</p> <p>Default: info</p>
     */
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }

    /**
     * <p>Log output level. InfluxDB outputs log entries with severity levels greater
     * than or equal to the level specified.</p> <p>Default: info</p>
     */
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }

    /**
     * <p>Log output level. InfluxDB outputs log entries with severity levels greater
     * than or equal to the level specified.</p> <p>Default: info</p>
     */
    inline void SetLogLevel(const LogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }

    /**
     * <p>Log output level. InfluxDB outputs log entries with severity levels greater
     * than or equal to the level specified.</p> <p>Default: info</p>
     */
    inline void SetLogLevel(LogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }

    /**
     * <p>Log output level. InfluxDB outputs log entries with severity levels greater
     * than or equal to the level specified.</p> <p>Default: info</p>
     */
    inline InfluxDBv2Parameters& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}

    /**
     * <p>Log output level. InfluxDB outputs log entries with severity levels greater
     * than or equal to the level specified.</p> <p>Default: info</p>
     */
    inline InfluxDBv2Parameters& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}


    /**
     * <p>Disable the task scheduler. If problematic tasks prevent InfluxDB from
     * starting, use this option to start InfluxDB without scheduling or executing
     * tasks.</p> <p>Default: false</p>
     */
    inline bool GetNoTasks() const{ return m_noTasks; }

    /**
     * <p>Disable the task scheduler. If problematic tasks prevent InfluxDB from
     * starting, use this option to start InfluxDB without scheduling or executing
     * tasks.</p> <p>Default: false</p>
     */
    inline bool NoTasksHasBeenSet() const { return m_noTasksHasBeenSet; }

    /**
     * <p>Disable the task scheduler. If problematic tasks prevent InfluxDB from
     * starting, use this option to start InfluxDB without scheduling or executing
     * tasks.</p> <p>Default: false</p>
     */
    inline void SetNoTasks(bool value) { m_noTasksHasBeenSet = true; m_noTasks = value; }

    /**
     * <p>Disable the task scheduler. If problematic tasks prevent InfluxDB from
     * starting, use this option to start InfluxDB without scheduling or executing
     * tasks.</p> <p>Default: false</p>
     */
    inline InfluxDBv2Parameters& WithNoTasks(bool value) { SetNoTasks(value); return *this;}


    /**
     * <p>Number of queries allowed to execute concurrently. Setting to 0 allows an
     * unlimited number of concurrent queries.</p> <p>Default: 0</p>
     */
    inline int GetQueryConcurrency() const{ return m_queryConcurrency; }

    /**
     * <p>Number of queries allowed to execute concurrently. Setting to 0 allows an
     * unlimited number of concurrent queries.</p> <p>Default: 0</p>
     */
    inline bool QueryConcurrencyHasBeenSet() const { return m_queryConcurrencyHasBeenSet; }

    /**
     * <p>Number of queries allowed to execute concurrently. Setting to 0 allows an
     * unlimited number of concurrent queries.</p> <p>Default: 0</p>
     */
    inline void SetQueryConcurrency(int value) { m_queryConcurrencyHasBeenSet = true; m_queryConcurrency = value; }

    /**
     * <p>Number of queries allowed to execute concurrently. Setting to 0 allows an
     * unlimited number of concurrent queries.</p> <p>Default: 0</p>
     */
    inline InfluxDBv2Parameters& WithQueryConcurrency(int value) { SetQueryConcurrency(value); return *this;}


    /**
     * <p>Maximum number of queries allowed in execution queue. When queue limit is
     * reached, new queries are rejected. Setting to 0 allows an unlimited number of
     * queries in the queue.</p> <p>Default: 0</p>
     */
    inline int GetQueryQueueSize() const{ return m_queryQueueSize; }

    /**
     * <p>Maximum number of queries allowed in execution queue. When queue limit is
     * reached, new queries are rejected. Setting to 0 allows an unlimited number of
     * queries in the queue.</p> <p>Default: 0</p>
     */
    inline bool QueryQueueSizeHasBeenSet() const { return m_queryQueueSizeHasBeenSet; }

    /**
     * <p>Maximum number of queries allowed in execution queue. When queue limit is
     * reached, new queries are rejected. Setting to 0 allows an unlimited number of
     * queries in the queue.</p> <p>Default: 0</p>
     */
    inline void SetQueryQueueSize(int value) { m_queryQueueSizeHasBeenSet = true; m_queryQueueSize = value; }

    /**
     * <p>Maximum number of queries allowed in execution queue. When queue limit is
     * reached, new queries are rejected. Setting to 0 allows an unlimited number of
     * queries in the queue.</p> <p>Default: 0</p>
     */
    inline InfluxDBv2Parameters& WithQueryQueueSize(int value) { SetQueryQueueSize(value); return *this;}


    /**
     * <p>Enable tracing in InfluxDB and specifies the tracing type. Tracing is
     * disabled by default.</p>
     */
    inline const TracingType& GetTracingType() const{ return m_tracingType; }

    /**
     * <p>Enable tracing in InfluxDB and specifies the tracing type. Tracing is
     * disabled by default.</p>
     */
    inline bool TracingTypeHasBeenSet() const { return m_tracingTypeHasBeenSet; }

    /**
     * <p>Enable tracing in InfluxDB and specifies the tracing type. Tracing is
     * disabled by default.</p>
     */
    inline void SetTracingType(const TracingType& value) { m_tracingTypeHasBeenSet = true; m_tracingType = value; }

    /**
     * <p>Enable tracing in InfluxDB and specifies the tracing type. Tracing is
     * disabled by default.</p>
     */
    inline void SetTracingType(TracingType&& value) { m_tracingTypeHasBeenSet = true; m_tracingType = std::move(value); }

    /**
     * <p>Enable tracing in InfluxDB and specifies the tracing type. Tracing is
     * disabled by default.</p>
     */
    inline InfluxDBv2Parameters& WithTracingType(const TracingType& value) { SetTracingType(value); return *this;}

    /**
     * <p>Enable tracing in InfluxDB and specifies the tracing type. Tracing is
     * disabled by default.</p>
     */
    inline InfluxDBv2Parameters& WithTracingType(TracingType&& value) { SetTracingType(std::move(value)); return *this;}


    /**
     * <p>Disable the HTTP /metrics endpoint which exposes <a
     * href="https://docs.influxdata.com/influxdb/v2/reference/internals/metrics/">internal
     * InfluxDB metrics</a>.</p> <p>Default: false</p>
     */
    inline bool GetMetricsDisabled() const{ return m_metricsDisabled; }

    /**
     * <p>Disable the HTTP /metrics endpoint which exposes <a
     * href="https://docs.influxdata.com/influxdb/v2/reference/internals/metrics/">internal
     * InfluxDB metrics</a>.</p> <p>Default: false</p>
     */
    inline bool MetricsDisabledHasBeenSet() const { return m_metricsDisabledHasBeenSet; }

    /**
     * <p>Disable the HTTP /metrics endpoint which exposes <a
     * href="https://docs.influxdata.com/influxdb/v2/reference/internals/metrics/">internal
     * InfluxDB metrics</a>.</p> <p>Default: false</p>
     */
    inline void SetMetricsDisabled(bool value) { m_metricsDisabledHasBeenSet = true; m_metricsDisabled = value; }

    /**
     * <p>Disable the HTTP /metrics endpoint which exposes <a
     * href="https://docs.influxdata.com/influxdb/v2/reference/internals/metrics/">internal
     * InfluxDB metrics</a>.</p> <p>Default: false</p>
     */
    inline InfluxDBv2Parameters& WithMetricsDisabled(bool value) { SetMetricsDisabled(value); return *this;}

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
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
