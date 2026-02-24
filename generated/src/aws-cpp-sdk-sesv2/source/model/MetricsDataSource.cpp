/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/MetricsDataSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {

MetricsDataSource::MetricsDataSource(JsonView jsonValue) { *this = jsonValue; }

MetricsDataSource& MetricsDataSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Dimensions")) {
    Aws::Map<Aws::String, JsonView> dimensionsJsonMap = jsonValue.GetObject("Dimensions").GetAllObjects();
    for (auto& dimensionsItem : dimensionsJsonMap) {
      Aws::Utils::Array<JsonView> exportDimensionValue2JsonList = dimensionsItem.second.AsArray();
      Aws::Vector<Aws::String> exportDimensionValue2List;
      exportDimensionValue2List.reserve((size_t)exportDimensionValue2JsonList.GetLength());
      for (unsigned exportDimensionValue2Index = 0; exportDimensionValue2Index < exportDimensionValue2JsonList.GetLength();
           ++exportDimensionValue2Index) {
        exportDimensionValue2List.push_back(exportDimensionValue2JsonList[exportDimensionValue2Index].AsString());
      }
      m_dimensions[MetricDimensionNameMapper::GetMetricDimensionNameForName(dimensionsItem.first)] = std::move(exportDimensionValue2List);
    }
    m_dimensionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Namespace")) {
    m_namespace = MetricNamespaceMapper::GetMetricNamespaceForName(jsonValue.GetString("Namespace"));
    m_namespaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Metrics")) {
    Aws::Utils::Array<JsonView> metricsJsonList = jsonValue.GetArray("Metrics");
    for (unsigned metricsIndex = 0; metricsIndex < metricsJsonList.GetLength(); ++metricsIndex) {
      m_metrics.push_back(metricsJsonList[metricsIndex].AsObject());
    }
    m_metricsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartDate")) {
    m_startDate = jsonValue.GetDouble("StartDate");
    m_startDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndDate")) {
    m_endDate = jsonValue.GetDouble("EndDate");
    m_endDateHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricsDataSource::Jsonize() const {
  JsonValue payload;

  if (m_dimensionsHasBeenSet) {
    JsonValue dimensionsJsonMap;
    for (auto& dimensionsItem : m_dimensions) {
      Aws::Utils::Array<JsonValue> exportDimensionValueJsonList(dimensionsItem.second.size());
      for (unsigned exportDimensionValueIndex = 0; exportDimensionValueIndex < exportDimensionValueJsonList.GetLength();
           ++exportDimensionValueIndex) {
        exportDimensionValueJsonList[exportDimensionValueIndex].AsString(dimensionsItem.second[exportDimensionValueIndex]);
      }
      dimensionsJsonMap.WithArray(MetricDimensionNameMapper::GetNameForMetricDimensionName(dimensionsItem.first),
                                  std::move(exportDimensionValueJsonList));
    }
    payload.WithObject("Dimensions", std::move(dimensionsJsonMap));
  }

  if (m_namespaceHasBeenSet) {
    payload.WithString("Namespace", MetricNamespaceMapper::GetNameForMetricNamespace(m_namespace));
  }

  if (m_metricsHasBeenSet) {
    Aws::Utils::Array<JsonValue> metricsJsonList(m_metrics.size());
    for (unsigned metricsIndex = 0; metricsIndex < metricsJsonList.GetLength(); ++metricsIndex) {
      metricsJsonList[metricsIndex].AsObject(m_metrics[metricsIndex].Jsonize());
    }
    payload.WithArray("Metrics", std::move(metricsJsonList));
  }

  if (m_startDateHasBeenSet) {
    payload.WithDouble("StartDate", m_startDate.SecondsWithMSPrecision());
  }

  if (m_endDateHasBeenSet) {
    payload.WithDouble("EndDate", m_endDate.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
