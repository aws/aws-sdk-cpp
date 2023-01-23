/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/DescribeDatasetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDatasetRequest::DescribeDatasetRequest() : 
    m_datasetArnHasBeenSet(false)
{
}

Aws::String DescribeDatasetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("datasetArn", m_datasetArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeDatasetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.DescribeDataset"));
  return headers;

}




