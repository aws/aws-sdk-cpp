/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/VerifyTargetDomainRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String VerifyTargetDomainRequest::SerializePayload() const {
  JsonValue payload;

  if (m_targetDomainIdHasBeenSet) {
    payload.WithString("targetDomainId", m_targetDomainId);
  }

  return payload.View().WriteReadable();
}
