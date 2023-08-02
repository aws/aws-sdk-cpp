/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CustomizedMetricSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

CustomizedMetricSpecification::CustomizedMetricSpecification() : 
    m_metricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_statistic(Statistic::NOT_SET),
    m_statisticHasBeenSet(false)
{
}

CustomizedMetricSpecification::CustomizedMetricSpecification(JsonView jsonValue) : 
    m_metricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_statistic(Statistic::NOT_SET),
    m_statisticHasBeenSet(false)
{
  *this = jsonValue;
}

CustomizedMetricSpecification& CustomizedMetricSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Namespace"))
  {
    m_namespace = jsonValue.GetString("Namespace");

    m_namespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Statistic"))
  {
    m_statistic = StatisticMapper::GetStatisticForName(jsonValue.GetString("Statistic"));

    m_statisticHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomizedMetricSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("Namespace", m_namespace);

  }

  if(m_statisticHasBeenSet)
  {
   payload.WithString("Statistic", StatisticMapper::GetNameForStatistic(m_statistic));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
