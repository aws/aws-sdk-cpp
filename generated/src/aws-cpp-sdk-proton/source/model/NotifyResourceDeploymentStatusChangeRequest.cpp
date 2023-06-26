/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/NotifyResourceDeploymentStatusChangeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

NotifyResourceDeploymentStatusChangeRequest::NotifyResourceDeploymentStatusChangeRequest() : 
    m_deploymentIdHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_status(ResourceDeploymentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

Aws::String NotifyResourceDeploymentStatusChangeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_outputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputsJsonList(m_outputs.size());
   for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
   {
     outputsJsonList[outputsIndex].AsObject(m_outputs[outputsIndex].Jsonize());
   }
   payload.WithArray("outputs", std::move(outputsJsonList));

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ResourceDeploymentStatusMapper::GetNameForResourceDeploymentStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection NotifyResourceDeploymentStatusChangeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.NotifyResourceDeploymentStatusChange"));
  return headers;

}




