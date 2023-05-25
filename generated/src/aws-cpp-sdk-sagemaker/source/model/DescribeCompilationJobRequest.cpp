/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeCompilationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeCompilationJobRequest::DescribeCompilationJobRequest() : 
    m_compilationJobNameHasBeenSet(false)
{
}

Aws::String DescribeCompilationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_compilationJobNameHasBeenSet)
  {
   payload.WithString("CompilationJobName", m_compilationJobName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeCompilationJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeCompilationJob"));
  return headers;

}




