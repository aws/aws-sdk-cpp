/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListDevicesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListDevicesRequest::ListDevicesRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_latestHeartbeatAfterHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_deviceFleetNameHasBeenSet(false)
{
}

Aws::String ListDevicesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_latestHeartbeatAfterHasBeenSet)
  {
   payload.WithDouble("LatestHeartbeatAfter", m_latestHeartbeatAfter.SecondsWithMSPrecision());
  }

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_deviceFleetNameHasBeenSet)
  {
   payload.WithString("DeviceFleetName", m_deviceFleetName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListDevicesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListDevices"));
  return headers;

}




