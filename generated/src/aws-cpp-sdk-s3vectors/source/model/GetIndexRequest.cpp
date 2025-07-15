/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3vectors/model/GetIndexRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::S3Vectors::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetIndexRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}




