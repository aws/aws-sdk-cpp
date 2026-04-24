/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53-recovery-readiness/model/UpdateReadinessCheckRequest.h>

#include <utility>

using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateReadinessCheckRequest::SerializePayload() const {
  JsonValue payload;

  if (m_resourceSetNameHasBeenSet) {
    payload.WithString("resourceSetName", m_resourceSetName);
  }

  return payload.View().WriteReadable();
}
