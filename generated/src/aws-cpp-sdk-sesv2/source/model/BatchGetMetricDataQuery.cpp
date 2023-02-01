/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/BatchGetMetricDataQuery.h>
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

BatchGetMetricDataQuery::BatchGetMetricDataQuery() : 
    m_idHasBeenSet(false),
    m_namespace(MetricNamespace::NOT_SET),
    m_namespaceHasBeenSet(false),
    m_metric(Metric::NOT_SET),
    m_metricHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
}

BatchGetMetricDataQuery::BatchGetMetricDataQuery(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_namespace(MetricNamespace::NOT_SET),
    m_namespaceHasBeenSet(false),
    m_metric(Metric::NOT_SET),
    m_metricHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetMetricDataQuery& BatchGetMetricDataQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Namespace"))
  {
    m_namespace = MetricNamespaceMapper::GetMetricNamespaceForName(jsonValue.GetString("Namespace"));

    m_namespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metric"))
  {
    m_metric = MetricMapper::GetMetricForName(jsonValue.GetString("Metric"));

    m_metricHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Dimensions"))
  {
    Aws::Map<Aws::String, JsonView> dimensionsJsonMap = jsonValue.GetObject("Dimensions").GetAllObjects();
    for(auto& dimensionsItem : dimensionsJsonMap)
    {
      m_dimensions[MetricDimensionNameMapper::GetMetricDimensionNameForName(dimensionsItem.first)] = dimensionsItem.second.AsString();
    }
    m_dimensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartDate"))
  {
    m_startDate = jsonValue.GetDouble("StartDate");

    m_startDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndDate"))
  {
    m_endDate = jsonValue.GetDouble("EndDate");

    m_endDateHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchGetMetricDataQuery::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("Namespace", MetricNamespaceMapper::GetNameForMetricNamespace(m_namespace));
  }

  if(m_metricHasBeenSet)
  {
   payload.WithString("Metric", MetricMapper::GetNameForMetric(m_metric));
  }

  if(m_dimensionsHasBeenSet)
  {
   JsonValue dimensionsJsonMap;
   for(auto& dimensionsItem : m_dimensions)
   {
     dimensionsJsonMap.WithString(MetricDimensionNameMapper::GetNameForMetricDimensionName(dimensionsItem.first), dimensionsItem.second);
   }
   payload.WithObject("Dimensions", std::move(dimensionsJsonMap));

  }

  if(m_startDateHasBeenSet)
  {
   payload.WithDouble("StartDate", m_startDate.SecondsWithMSPrecision());
  }

  if(m_endDateHasBeenSet)
  {
   payload.WithDouble("EndDate", m_endDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
