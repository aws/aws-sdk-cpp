/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/StopProcessingJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopProcessingJobRequest::StopProcessingJobRequest() : 
    m_processingJobNameHasBeenSet(false)
{
}

Aws::String StopProcessingJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_processingJobNameHasBeenSet)
  {
   payload.WithString("ProcessingJobName", m_processingJobName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopProcessingJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.StopProcessingJob"));
  return headers;

}




