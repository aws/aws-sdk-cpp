/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/UpdateApplicationRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateApplicationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_applicationIdHasBeenSet) {
    payload.WithString("applicationId", m_applicationId);
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  if (m_defaultKmsKeyIdHasBeenSet) {
    payload.WithString("defaultKmsKeyId", m_defaultKmsKeyId);
  }

  return payload.View().WriteReadable();
}
