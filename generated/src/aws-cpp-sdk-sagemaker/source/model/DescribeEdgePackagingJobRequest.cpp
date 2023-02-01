/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeEdgePackagingJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeEdgePackagingJobRequest::DescribeEdgePackagingJobRequest() : 
    m_edgePackagingJobNameHasBeenSet(false)
{
}

Aws::String DescribeEdgePackagingJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_edgePackagingJobNameHasBeenSet)
  {
   payload.WithString("EdgePackagingJobName", m_edgePackagingJobName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEdgePackagingJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeEdgePackagingJob"));
  return headers;

}




