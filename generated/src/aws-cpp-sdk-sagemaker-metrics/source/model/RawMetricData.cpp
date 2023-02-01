/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-metrics/model/RawMetricData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerMetrics
{
namespace Model
{

RawMetricData::RawMetricData() : 
    m_metricNameHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_step(0),
    m_stepHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

RawMetricData::RawMetricData(JsonView jsonValue) : 
    m_metricNameHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_step(0),
    m_stepHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

RawMetricData& RawMetricData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Step"))
  {
    m_step = jsonValue.GetInteger("Step");

    m_stepHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue RawMetricData::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_stepHasBeenSet)
  {
   payload.WithInteger("Step", m_step);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerMetrics
} // namespace Aws
