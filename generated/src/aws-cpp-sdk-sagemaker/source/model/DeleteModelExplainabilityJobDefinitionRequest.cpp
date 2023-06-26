/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeleteModelExplainabilityJobDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteModelExplainabilityJobDefinitionRequest::DeleteModelExplainabilityJobDefinitionRequest() : 
    m_jobDefinitionNameHasBeenSet(false)
{
}

Aws::String DeleteModelExplainabilityJobDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobDefinitionNameHasBeenSet)
  {
   payload.WithString("JobDefinitionName", m_jobDefinitionName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteModelExplainabilityJobDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteModelExplainabilityJobDefinition"));
  return headers;

}




