/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-edge/model/EdgeMetric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SagemakerEdgeManager
{
namespace Model
{

EdgeMetric::EdgeMetric() : 
    m_dimensionHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

EdgeMetric::EdgeMetric(JsonView jsonValue) : 
    m_dimensionHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
  *this = jsonValue;
}

EdgeMetric& EdgeMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Dimension"))
  {
    m_dimension = jsonValue.GetString("Dimension");

    m_dimensionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

    m_timestampHasBeenSet = true;
  }

  return *this;
}

JsonValue EdgeMetric::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionHasBeenSet)
  {
   payload.WithString("Dimension", m_dimension);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
