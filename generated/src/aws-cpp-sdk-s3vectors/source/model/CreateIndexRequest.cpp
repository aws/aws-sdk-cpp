/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3vectors/model/CreateIndexRequest.h>

#include <utility>

using namespace Aws::S3Vectors::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateIndexRequest::SerializePayload() const {
  JsonValue payload;

  if (m_vectorBucketNameHasBeenSet) {
    payload.WithString("vectorBucketName", m_vectorBucketName);
  }

  if (m_vectorBucketArnHasBeenSet) {
    payload.WithString("vectorBucketArn", m_vectorBucketArn);
  }

  if (m_indexNameHasBeenSet) {
    payload.WithString("indexName", m_indexName);
  }

  if (m_dataTypeHasBeenSet) {
    payload.WithString("dataType", DataTypeMapper::GetNameForDataType(m_dataType));
  }

  if (m_dimensionHasBeenSet) {
    payload.WithInteger("dimension", m_dimension);
  }

  if (m_distanceMetricHasBeenSet) {
    payload.WithString("distanceMetric", DistanceMetricMapper::GetNameForDistanceMetric(m_distanceMetric));
  }

  if (m_metadataConfigurationHasBeenSet) {
    payload.WithObject("metadataConfiguration", m_metadataConfiguration.Jsonize());
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
