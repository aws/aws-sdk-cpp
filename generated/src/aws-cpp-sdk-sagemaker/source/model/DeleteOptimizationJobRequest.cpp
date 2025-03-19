/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeleteOptimizationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteOptimizationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_optimizationJobNameHasBeenSet)
  {
   payload.WithString("OptimizationJobName", m_optimizationJobName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteOptimizationJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteOptimizationJob"));
  return headers;

}




