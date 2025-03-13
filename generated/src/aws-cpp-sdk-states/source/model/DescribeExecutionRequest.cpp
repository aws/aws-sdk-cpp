/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/DescribeExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_executionArnHasBeenSet)
  {
   payload.WithString("executionArn", m_executionArn);

  }

  if(m_includedDataHasBeenSet)
  {
   payload.WithString("includedData", IncludedDataMapper::GetNameForIncludedData(m_includedData));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeExecutionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSStepFunctions.DescribeExecution"));
  return headers;

}




