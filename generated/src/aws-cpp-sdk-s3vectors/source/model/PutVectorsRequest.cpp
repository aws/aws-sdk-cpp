/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3vectors/model/PutVectorsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::S3Vectors::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutVectorsRequest::SerializePayload() const
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

  if(m_vectorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vectorsJsonList(m_vectors.size());
   for(unsigned vectorsIndex = 0; vectorsIndex < vectorsJsonList.GetLength(); ++vectorsIndex)
   {
     vectorsJsonList[vectorsIndex].AsObject(m_vectors[vectorsIndex].Jsonize());
   }
   payload.WithArray("vectors", std::move(vectorsJsonList));

  }

  return payload.View().WriteReadable();
}




