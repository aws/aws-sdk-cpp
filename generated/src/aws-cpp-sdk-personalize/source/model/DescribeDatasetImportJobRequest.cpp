/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/DescribeDatasetImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDatasetImportJobRequest::DescribeDatasetImportJobRequest() : 
    m_datasetImportJobArnHasBeenSet(false)
{
}

Aws::String DescribeDatasetImportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datasetImportJobArnHasBeenSet)
  {
   payload.WithString("datasetImportJobArn", m_datasetImportJobArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeDatasetImportJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.DescribeDatasetImportJob"));
  return headers;

}




