/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3vectors/model/ListVectorsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::S3Vectors::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListVectorsRequest::SerializePayload() const
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

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_segmentCountHasBeenSet)
  {
   payload.WithInteger("segmentCount", m_segmentCount);

  }

  if(m_segmentIndexHasBeenSet)
  {
   payload.WithInteger("segmentIndex", m_segmentIndex);

  }

  if(m_returnDataHasBeenSet)
  {
   payload.WithBool("returnData", m_returnData);

  }

  if(m_returnMetadataHasBeenSet)
  {
   payload.WithBool("returnMetadata", m_returnMetadata);

  }

  return payload.View().WriteReadable();
}




