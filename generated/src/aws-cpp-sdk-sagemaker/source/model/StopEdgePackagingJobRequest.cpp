/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/StopEdgePackagingJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopEdgePackagingJobRequest::StopEdgePackagingJobRequest() : 
    m_edgePackagingJobNameHasBeenSet(false)
{
}

Aws::String StopEdgePackagingJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_edgePackagingJobNameHasBeenSet)
  {
   payload.WithString("EdgePackagingJobName", m_edgePackagingJobName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StopEdgePackagingJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.StopEdgePackagingJob"));
  return headers;

}




