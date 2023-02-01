/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeModelCardRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeModelCardRequest::DescribeModelCardRequest() : 
    m_modelCardNameHasBeenSet(false),
    m_modelCardVersion(0),
    m_modelCardVersionHasBeenSet(false)
{
}

Aws::String DescribeModelCardRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelCardNameHasBeenSet)
  {
   payload.WithString("ModelCardName", m_modelCardName);

  }

  if(m_modelCardVersionHasBeenSet)
  {
   payload.WithInteger("ModelCardVersion", m_modelCardVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeModelCardRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeModelCard"));
  return headers;

}




