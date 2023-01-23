/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeContextRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeContextRequest::DescribeContextRequest() : 
    m_contextNameHasBeenSet(false)
{
}

Aws::String DescribeContextRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contextNameHasBeenSet)
  {
   payload.WithString("ContextName", m_contextName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeContextRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeContext"));
  return headers;

}




