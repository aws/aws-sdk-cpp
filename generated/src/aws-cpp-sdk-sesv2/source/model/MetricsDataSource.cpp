/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/MetricsDataSource.h>
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

MetricsDataSource::MetricsDataSource() : 
    m_dimensionsHasBeenSet(false),
    m_namespace(MetricNamespace::NOT_SET),
    m_namespaceHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
}

MetricsDataSource::MetricsDataSource(JsonView jsonValue) : 
    m_dimensionsHasBeenSet(false),
    m_namespace(MetricNamespace::NOT_SET),
    m_namespaceHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
  *this = jsonValue;
}

MetricsDataSource& MetricsDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Dimensions"))
  {
    Aws::Map<Aws::String, JsonView> dimensionsJsonMap = jsonValue.GetObject("Dimensions").GetAllObjects();
    for(auto& dimensionsItem : dimensionsJsonMap)
    {
      Aws::Utils::Array<JsonView> exportDimensionValueJsonList = dimensionsItem.second.AsArray();
      Aws::Vector<Aws::String> exportDimensionValueList;
      exportDimensionValueList.reserve((size_t)exportDimensionValueJsonList.GetLength());
      for(unsigned exportDimensionValueIndex = 0; exportDimensionValueIndex < exportDimensionValueJsonList.GetLength(); ++exportDimensionValueIndex)
      {
        exportDimensionValueList.push_back(exportDimensionValueJsonList[exportDimensionValueIndex].AsString());
      }
      m_dimensions[MetricDimensionNameMapper::GetMetricDimensionNameForName(dimensionsItem.first)] = std::move(exportDimensionValueList);
    }
    m_dimensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Namespace"))
  {
    m_namespace = MetricNamespaceMapper::GetMetricNamespaceForName(jsonValue.GetString("Namespace"));

    m_namespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metrics"))
  {
    Aws::Utils::Array<JsonView> metricsJsonList = jsonValue.GetArray("Metrics");
    for(unsigned metricsIndex = 0; metricsIndex < metricsJsonList.GetLength(); ++metricsIndex)
    {
      m_metrics.push_back(metricsJsonList[metricsIndex].AsObject());
    }
    m_metricsHasBeenSet = true;
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

JsonValue MetricsDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionsHasBeenSet)
  {
   JsonValue dimensionsJsonMap;
   for(auto& dimensionsItem : m_dimensions)
   {
     Aws::Utils::Array<JsonValue> exportDimensionValueJsonList(dimensionsItem.second.size());
     for(unsigned exportDimensionValueIndex = 0; exportDimensionValueIndex < exportDimensionValueJsonList.GetLength(); ++exportDimensionValueIndex)
     {
       exportDimensionValueJsonList[exportDimensionValueIndex].AsString(dimensionsItem.second[exportDimensionValueIndex]);
     }
     dimensionsJsonMap.WithArray(MetricDimensionNameMapper::GetNameForMetricDimensionName(dimensionsItem.first), std::move(exportDimensionValueJsonList));
   }
   payload.WithObject("Dimensions", std::move(dimensionsJsonMap));

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("Namespace", MetricNamespaceMapper::GetNameForMetricNamespace(m_namespace));
  }

  if(m_metricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricsJsonList(m_metrics.size());
   for(unsigned metricsIndex = 0; metricsIndex < metricsJsonList.GetLength(); ++metricsIndex)
   {
     metricsJsonList[metricsIndex].AsObject(m_metrics[metricsIndex].Jsonize());
   }
   payload.WithArray("Metrics", std::move(metricsJsonList));

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
