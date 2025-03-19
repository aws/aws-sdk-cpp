/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-metrics/model/MetricQuery.h>
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

MetricQuery::MetricQuery(JsonView jsonValue)
{
  *this = jsonValue;
}

MetricQuery& MetricQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");
    m_metricNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricStat"))
  {
    m_metricStat = MetricStatisticMapper::GetMetricStatisticForName(jsonValue.GetString("MetricStat"));
    m_metricStatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Period"))
  {
    m_period = PeriodMapper::GetPeriodForName(jsonValue.GetString("Period"));
    m_periodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("XAxisType"))
  {
    m_xAxisType = XAxisTypeMapper::GetXAxisTypeForName(jsonValue.GetString("XAxisType"));
    m_xAxisTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Start"))
  {
    m_start = jsonValue.GetInt64("Start");
    m_startHasBeenSet = true;
  }
  if(jsonValue.ValueExists("End"))
  {
    m_end = jsonValue.GetInt64("End");
    m_endHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricQuery::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_metricStatHasBeenSet)
  {
   payload.WithString("MetricStat", MetricStatisticMapper::GetNameForMetricStatistic(m_metricStat));
  }

  if(m_periodHasBeenSet)
  {
   payload.WithString("Period", PeriodMapper::GetNameForPeriod(m_period));
  }

  if(m_xAxisTypeHasBeenSet)
  {
   payload.WithString("XAxisType", XAxisTypeMapper::GetNameForXAxisType(m_xAxisType));
  }

  if(m_startHasBeenSet)
  {
   payload.WithInt64("Start", m_start);

  }

  if(m_endHasBeenSet)
  {
   payload.WithInt64("End", m_end);

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerMetrics
} // namespace Aws
