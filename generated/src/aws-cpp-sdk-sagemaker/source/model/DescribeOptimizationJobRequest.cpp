/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeOptimizationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeOptimizationJobRequest::DescribeOptimizationJobRequest() : 
    m_optimizationJobNameHasBeenSet(false)
{
}

Aws::String DescribeOptimizationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_optimizationJobNameHasBeenSet)
  {
   payload.WithString("OptimizationJobName", m_optimizationJobName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeOptimizationJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeOptimizationJob"));
  return headers;

}




