﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3vectors/model/DeleteVectorBucketPolicyRequest.h>

#include <utility>

using namespace Aws::S3Vectors::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteVectorBucketPolicyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_vectorBucketNameHasBeenSet) {
    payload.WithString("vectorBucketName", m_vectorBucketName);
  }

  if (m_vectorBucketArnHasBeenSet) {
    payload.WithString("vectorBucketArn", m_vectorBucketArn);
  }

  return payload.View().WriteReadable();
}
