/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeModelCardExportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeModelCardExportJobRequest::DescribeModelCardExportJobRequest() : 
    m_modelCardExportJobArnHasBeenSet(false)
{
}

Aws::String DescribeModelCardExportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelCardExportJobArnHasBeenSet)
  {
   payload.WithString("ModelCardExportJobArn", m_modelCardExportJobArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeModelCardExportJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DescribeModelCardExportJob"));
  return headers;

}




