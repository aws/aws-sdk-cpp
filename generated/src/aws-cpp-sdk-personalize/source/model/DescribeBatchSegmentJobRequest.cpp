/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/DescribeBatchSegmentJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeBatchSegmentJobRequest::DescribeBatchSegmentJobRequest() : 
    m_batchSegmentJobArnHasBeenSet(false)
{
}

Aws::String DescribeBatchSegmentJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_batchSegmentJobArnHasBeenSet)
  {
   payload.WithString("batchSegmentJobArn", m_batchSegmentJobArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeBatchSegmentJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.DescribeBatchSegmentJob"));
  return headers;

}




