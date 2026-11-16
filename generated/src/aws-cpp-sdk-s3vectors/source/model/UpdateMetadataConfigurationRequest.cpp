/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3vectors/model/UpdateMetadataConfigurationRequest.h>

#include <utility>

using namespace Aws::S3Vectors::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateMetadataConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_vectorBucketNameHasBeenSet) {
    payload.WithString("vectorBucketName", m_vectorBucketName);
  }

  if (m_indexNameHasBeenSet) {
    payload.WithString("indexName", m_indexName);
  }

  if (m_indexArnHasBeenSet) {
    payload.WithString("indexArn", m_indexArn);
  }

  if (m_addHasBeenSet) {
    payload.WithObject("add", m_add.Jsonize());
  }

  if (m_deleteHasBeenSet) {
    payload.WithObject("delete", m_delete.Jsonize());
  }

  return payload.View().WriteReadable();
}
