/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3vectors/model/GetVectorsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::S3Vectors::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetVectorsRequest::SerializePayload() const
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

  if(m_keysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keysJsonList(m_keys.size());
   for(unsigned keysIndex = 0; keysIndex < keysJsonList.GetLength(); ++keysIndex)
   {
     keysJsonList[keysIndex].AsString(m_keys[keysIndex]);
   }
   payload.WithArray("keys", std::move(keysJsonList));

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




