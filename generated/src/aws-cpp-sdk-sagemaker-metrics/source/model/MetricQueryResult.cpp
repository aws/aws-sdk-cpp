/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-metrics/model/MetricQueryResult.h>
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

MetricQueryResult::MetricQueryResult(JsonView jsonValue)
{
  *this = jsonValue;
}

MetricQueryResult& MetricQueryResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = MetricQueryResultStatusMapper::GetMetricQueryResultStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("XAxisValues"))
  {
    Aws::Utils::Array<JsonView> xAxisValuesJsonList = jsonValue.GetArray("XAxisValues");
    for(unsigned xAxisValuesIndex = 0; xAxisValuesIndex < xAxisValuesJsonList.GetLength(); ++xAxisValuesIndex)
    {
      m_xAxisValues.push_back(xAxisValuesJsonList[xAxisValuesIndex].AsInt64());
    }
    m_xAxisValuesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricValues"))
  {
    Aws::Utils::Array<JsonView> metricValuesJsonList = jsonValue.GetArray("MetricValues");
    for(unsigned metricValuesIndex = 0; metricValuesIndex < metricValuesJsonList.GetLength(); ++metricValuesIndex)
    {
      m_metricValues.push_back(metricValuesJsonList[metricValuesIndex].AsDouble());
    }
    m_metricValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricQueryResult::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", MetricQueryResultStatusMapper::GetNameForMetricQueryResultStatus(m_status));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_xAxisValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> xAxisValuesJsonList(m_xAxisValues.size());
   for(unsigned xAxisValuesIndex = 0; xAxisValuesIndex < xAxisValuesJsonList.GetLength(); ++xAxisValuesIndex)
   {
     xAxisValuesJsonList[xAxisValuesIndex].AsInt64(m_xAxisValues[xAxisValuesIndex]);
   }
   payload.WithArray("XAxisValues", std::move(xAxisValuesJsonList));

  }

  if(m_metricValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricValuesJsonList(m_metricValues.size());
   for(unsigned metricValuesIndex = 0; metricValuesIndex < metricValuesJsonList.GetLength(); ++metricValuesIndex)
   {
     metricValuesJsonList[metricValuesIndex].AsDouble(m_metricValues[metricValuesIndex]);
   }
   payload.WithArray("MetricValues", std::move(metricValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerMetrics
} // namespace Aws
