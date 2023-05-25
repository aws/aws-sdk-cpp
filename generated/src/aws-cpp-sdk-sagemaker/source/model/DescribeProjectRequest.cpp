/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeProjectRequest::DescribeProjectRequest() : 
    m_projectNameHasBeenSet(false)
{
}

Aws::String DescribeProjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("ProjectName", m_projectName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeProjectRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeProject"));
  return headers;

}




