/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ListServicePipelineOutputsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListServicePipelineOutputsRequest::ListServicePipelineOutputsRequest() : 
    m_deploymentIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
}

Aws::String ListServicePipelineOutputsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListServicePipelineOutputsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.ListServicePipelineOutputs"));
  return headers;

}




