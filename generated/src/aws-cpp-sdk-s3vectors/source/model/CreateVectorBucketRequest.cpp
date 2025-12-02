/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3vectors/model/CreateVectorBucketRequest.h>

#include <utility>

using namespace Aws::S3Vectors::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateVectorBucketRequest::SerializePayload() const {
  JsonValue payload;

  if (m_vectorBucketNameHasBeenSet) {
    payload.WithString("vectorBucketName", m_vectorBucketName);
  }

  if (m_encryptionConfigurationHasBeenSet) {
    payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
