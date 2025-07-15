/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdatePipelineVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdatePipelineVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineArnHasBeenSet)
  {
   payload.WithString("PipelineArn", m_pipelineArn);

  }

  if(m_pipelineVersionIdHasBeenSet)
  {
   payload.WithInt64("PipelineVersionId", m_pipelineVersionId);

  }

  if(m_pipelineVersionDisplayNameHasBeenSet)
  {
   payload.WithString("PipelineVersionDisplayName", m_pipelineVersionDisplayName);

  }

  if(m_pipelineVersionDescriptionHasBeenSet)
  {
   payload.WithString("PipelineVersionDescription", m_pipelineVersionDescription);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePipelineVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdatePipelineVersion"));
  return headers;

}




