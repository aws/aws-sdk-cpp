/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeInferenceComponentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeInferenceComponentRequest::DescribeInferenceComponentRequest() : 
    m_inferenceComponentNameHasBeenSet(false)
{
}

Aws::String DescribeInferenceComponentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inferenceComponentNameHasBeenSet)
  {
   payload.WithString("InferenceComponentName", m_inferenceComponentName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeInferenceComponentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeInferenceComponent"));
  return headers;

}




