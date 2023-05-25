/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeProcessingJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeProcessingJobRequest::DescribeProcessingJobRequest() : 
    m_processingJobNameHasBeenSet(false)
{
}

Aws::String DescribeProcessingJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_processingJobNameHasBeenSet)
  {
   payload.WithString("ProcessingJobName", m_processingJobName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeProcessingJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeProcessingJob"));
  return headers;

}




