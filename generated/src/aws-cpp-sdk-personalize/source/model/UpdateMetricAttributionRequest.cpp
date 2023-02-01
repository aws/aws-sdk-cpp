/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/UpdateMetricAttributionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMetricAttributionRequest::UpdateMetricAttributionRequest() : 
    m_addMetricsHasBeenSet(false),
    m_removeMetricsHasBeenSet(false),
    m_metricsOutputConfigHasBeenSet(false),
    m_metricAttributionArnHasBeenSet(false)
{
}

Aws::String UpdateMetricAttributionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_addMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addMetricsJsonList(m_addMetrics.size());
   for(unsigned addMetricsIndex = 0; addMetricsIndex < addMetricsJsonList.GetLength(); ++addMetricsIndex)
   {
     addMetricsJsonList[addMetricsIndex].AsObject(m_addMetrics[addMetricsIndex].Jsonize());
   }
   payload.WithArray("addMetrics", std::move(addMetricsJsonList));

  }

  if(m_removeMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> removeMetricsJsonList(m_removeMetrics.size());
   for(unsigned removeMetricsIndex = 0; removeMetricsIndex < removeMetricsJsonList.GetLength(); ++removeMetricsIndex)
   {
     removeMetricsJsonList[removeMetricsIndex].AsString(m_removeMetrics[removeMetricsIndex]);
   }
   payload.WithArray("removeMetrics", std::move(removeMetricsJsonList));

  }

  if(m_metricsOutputConfigHasBeenSet)
  {
   payload.WithObject("metricsOutputConfig", m_metricsOutputConfig.Jsonize());

  }

  if(m_metricAttributionArnHasBeenSet)
  {
   payload.WithString("metricAttributionArn", m_metricAttributionArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateMetricAttributionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.UpdateMetricAttribution"));
  return headers;

}




