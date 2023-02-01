/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/BatchGetMetricDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetMetricDataRequest::BatchGetMetricDataRequest() : 
    m_queriesHasBeenSet(false)
{
}

Aws::String BatchGetMetricDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queriesJsonList(m_queries.size());
   for(unsigned queriesIndex = 0; queriesIndex < queriesJsonList.GetLength(); ++queriesIndex)
   {
     queriesJsonList[queriesIndex].AsObject(m_queries[queriesIndex].Jsonize());
   }
   payload.WithArray("Queries", std::move(queriesJsonList));

  }

  return payload.View().WriteReadable();
}




