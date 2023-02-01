/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/DescribeAlgorithmRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAlgorithmRequest::DescribeAlgorithmRequest() : 
    m_algorithmArnHasBeenSet(false)
{
}

Aws::String DescribeAlgorithmRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_algorithmArnHasBeenSet)
  {
   payload.WithString("algorithmArn", m_algorithmArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAlgorithmRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.DescribeAlgorithm"));
  return headers;

}




