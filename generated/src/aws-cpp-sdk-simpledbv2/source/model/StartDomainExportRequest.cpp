/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/simpledbv2/model/StartDomainExportRequest.h>

#include <utility>

using namespace Aws::SimpleDBv2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartDomainExportRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_domainNameHasBeenSet) {
    payload.WithString("domainName", m_domainName);
  }

  if (m_s3BucketHasBeenSet) {
    payload.WithString("s3Bucket", m_s3Bucket);
  }

  if (m_s3KeyPrefixHasBeenSet) {
    payload.WithString("s3KeyPrefix", m_s3KeyPrefix);
  }

  if (m_s3SseAlgorithmHasBeenSet) {
    payload.WithString("s3SseAlgorithm", S3SseAlgorithmMapper::GetNameForS3SseAlgorithm(m_s3SseAlgorithm));
  }

  if (m_s3SseKmsKeyIdHasBeenSet) {
    payload.WithString("s3SseKmsKeyId", m_s3SseKmsKeyId);
  }

  if (m_s3BucketOwnerHasBeenSet) {
    payload.WithString("s3BucketOwner", m_s3BucketOwner);
  }

  return payload.View().WriteReadable();
}
