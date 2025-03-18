/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-metrics/model/BatchGetMetricsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMakerMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchGetMetricsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_metricQueriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricQueriesJsonList(m_metricQueries.size());
   for(unsigned metricQueriesIndex = 0; metricQueriesIndex < metricQueriesJsonList.GetLength(); ++metricQueriesIndex)
   {
     metricQueriesJsonList[metricQueriesIndex].AsObject(m_metricQueries[metricQueriesIndex].Jsonize());
   }
   payload.WithArray("MetricQueries", std::move(metricQueriesJsonList));

  }

  return payload.View().WriteReadable();
}




