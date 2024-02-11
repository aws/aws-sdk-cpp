/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ExportMetric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

ExportMetric::ExportMetric() : 
    m_name(Metric::NOT_SET),
    m_nameHasBeenSet(false),
    m_aggregation(MetricAggregation::NOT_SET),
    m_aggregationHasBeenSet(false)
{
}

ExportMetric::ExportMetric(JsonView jsonValue) : 
    m_name(Metric::NOT_SET),
    m_nameHasBeenSet(false),
    m_aggregation(MetricAggregation::NOT_SET),
    m_aggregationHasBeenSet(false)
{
  *this = jsonValue;
}

ExportMetric& ExportMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = MetricMapper::GetMetricForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Aggregation"))
  {
    m_aggregation = MetricAggregationMapper::GetMetricAggregationForName(jsonValue.GetString("Aggregation"));

    m_aggregationHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportMetric::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", MetricMapper::GetNameForMetric(m_name));
  }

  if(m_aggregationHasBeenSet)
  {
   payload.WithString("Aggregation", MetricAggregationMapper::GetNameForMetricAggregation(m_aggregation));
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
