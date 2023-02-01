/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/CreateMetricAttributionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMetricAttributionRequest::CreateMetricAttributionRequest() : 
    m_nameHasBeenSet(false),
    m_datasetGroupArnHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_metricsOutputConfigHasBeenSet(false)
{
}

Aws::String CreateMetricAttributionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_datasetGroupArnHasBeenSet)
  {
   payload.WithString("datasetGroupArn", m_datasetGroupArn);

  }

  if(m_metricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricsJsonList(m_metrics.size());
   for(unsigned metricsIndex = 0; metricsIndex < metricsJsonList.GetLength(); ++metricsIndex)
   {
     metricsJsonList[metricsIndex].AsObject(m_metrics[metricsIndex].Jsonize());
   }
   payload.WithArray("metrics", std::move(metricsJsonList));

  }

  if(m_metricsOutputConfigHasBeenSet)
  {
   payload.WithObject("metricsOutputConfig", m_metricsOutputConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateMetricAttributionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.CreateMetricAttribution"));
  return headers;

}




