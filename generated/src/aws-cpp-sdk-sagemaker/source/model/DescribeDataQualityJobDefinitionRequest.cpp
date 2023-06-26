/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeDataQualityJobDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDataQualityJobDefinitionRequest::DescribeDataQualityJobDefinitionRequest() : 
    m_jobDefinitionNameHasBeenSet(false)
{
}

Aws::String DescribeDataQualityJobDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobDefinitionNameHasBeenSet)
  {
   payload.WithString("JobDefinitionName", m_jobDefinitionName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeDataQualityJobDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeDataQualityJobDefinition"));
  return headers;

}




