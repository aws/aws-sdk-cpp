/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/DeleteMetricAttributionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteMetricAttributionRequest::DeleteMetricAttributionRequest() : 
    m_metricAttributionArnHasBeenSet(false)
{
}

Aws::String DeleteMetricAttributionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_metricAttributionArnHasBeenSet)
  {
   payload.WithString("metricAttributionArn", m_metricAttributionArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteMetricAttributionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.DeleteMetricAttribution"));
  return headers;

}




