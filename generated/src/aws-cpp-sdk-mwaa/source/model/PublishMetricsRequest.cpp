/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/PublishMetricsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MWAA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PublishMetricsRequest::PublishMetricsRequest() : 
    m_environmentNameHasBeenSet(false),
    m_metricDataHasBeenSet(false)
{
}

Aws::String PublishMetricsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_metricDataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricDataJsonList(m_metricData.size());
   for(unsigned metricDataIndex = 0; metricDataIndex < metricDataJsonList.GetLength(); ++metricDataIndex)
   {
     metricDataJsonList[metricDataIndex].AsObject(m_metricData[metricDataIndex].Jsonize());
   }
   payload.WithArray("MetricData", std::move(metricDataJsonList));

  }

  return payload.View().WriteReadable();
}




