/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/DescribeDatasetExportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDatasetExportJobRequest::DescribeDatasetExportJobRequest() : 
    m_datasetExportJobArnHasBeenSet(false)
{
}

Aws::String DescribeDatasetExportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datasetExportJobArnHasBeenSet)
  {
   payload.WithString("datasetExportJobArn", m_datasetExportJobArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeDatasetExportJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.DescribeDatasetExportJob"));
  return headers;

}




