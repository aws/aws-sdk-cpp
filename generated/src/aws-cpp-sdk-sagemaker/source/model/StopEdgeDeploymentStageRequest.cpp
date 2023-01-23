/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/StopEdgeDeploymentStageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopEdgeDeploymentStageRequest::StopEdgeDeploymentStageRequest() : 
    m_edgeDeploymentPlanNameHasBeenSet(false),
    m_stageNameHasBeenSet(false)
{
}

Aws::String StopEdgeDeploymentStageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_edgeDeploymentPlanNameHasBeenSet)
  {
   payload.WithString("EdgeDeploymentPlanName", m_edgeDeploymentPlanName);

  }

  if(m_stageNameHasBeenSet)
  {
   payload.WithString("StageName", m_stageName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopEdgeDeploymentStageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.StopEdgeDeploymentStage"));
  return headers;

}




