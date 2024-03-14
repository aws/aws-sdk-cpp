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

InfluxDBv2Parameters::InfluxDBv2Parameters() : 
    m_fluxLogEnabled(false),
    m_fluxLogEnabledHasBeenSet(false),
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false),
    m_noTasks(false),
    m_noTasksHasBeenSet(false),
    m_queryConcurrency(0),
    m_queryConcurrencyHasBeenSet(false),
    m_queryQueueSize(0),
    m_queryQueueSizeHasBeenSet(false),
    m_tracingType(TracingType::NOT_SET),
    m_tracingTypeHasBeenSet(false),
    m_metricsDisabled(false),
    m_metricsDisabledHasBeenSet(false)
{
}

InfluxDBv2Parameters::InfluxDBv2Parameters(JsonView jsonValue) : 
    m_fluxLogEnabled(false),
    m_fluxLogEnabledHasBeenSet(false),
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false),
    m_noTasks(false),
    m_noTasksHasBeenSet(false),
    m_queryConcurrency(0),
    m_queryConcurrencyHasBeenSet(false),
    m_queryQueueSize(0),
    m_queryQueueSizeHasBeenSet(false),
    m_tracingType(TracingType::NOT_SET),
    m_tracingTypeHasBeenSet(false),
    m_metricsDisabled(false),
    m_metricsDisabledHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
