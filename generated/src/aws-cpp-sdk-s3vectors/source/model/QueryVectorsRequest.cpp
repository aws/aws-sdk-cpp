/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3vectors/model/QueryVectorsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::S3Vectors::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String QueryVectorsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vectorBucketNameHasBeenSet)
  {
   payload.WithString("vectorBucketName", m_vectorBucketName);

  }

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("indexName", m_indexName);

  }

  if(m_indexArnHasBeenSet)
  {
   payload.WithString("indexArn", m_indexArn);

  }

  if(m_topKHasBeenSet)
  {
   payload.WithInteger("topK", m_topK);

  }

  if(m_queryVectorHasBeenSet)
  {
   payload.WithObject("queryVector", m_queryVector.Jsonize());

  }

  if(m_filterHasBeenSet)
  {
    if(!m_filter.View().IsNull())
    {
       payload.WithObject("filter", JsonValue(m_filter.View()));
    }
  }

  if(m_returnMetadataHasBeenSet)
  {
   payload.WithBool("returnMetadata", m_returnMetadata);

  }

  if(m_returnDistanceHasBeenSet)
  {
   payload.WithBool("returnDistance", m_returnDistance);

  }

  return payload.View().WriteReadable();
}




