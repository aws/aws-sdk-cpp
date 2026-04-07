/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3files/model/PutFileSystemPolicyRequest.h>

#include <utility>

using namespace Aws::S3Files::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutFileSystemPolicyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_policyHasBeenSet) {
    payload.WithString("policy", m_policy);
  }

  return payload.View().WriteReadable();
}
