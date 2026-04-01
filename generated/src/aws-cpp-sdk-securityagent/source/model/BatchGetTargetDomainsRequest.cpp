/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/BatchGetTargetDomainsRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchGetTargetDomainsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_targetDomainIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> targetDomainIdsJsonList(m_targetDomainIds.size());
    for (unsigned targetDomainIdsIndex = 0; targetDomainIdsIndex < targetDomainIdsJsonList.GetLength(); ++targetDomainIdsIndex) {
      targetDomainIdsJsonList[targetDomainIdsIndex].AsString(m_targetDomainIds[targetDomainIdsIndex]);
    }
    payload.WithArray("targetDomainIds", std::move(targetDomainIdsJsonList));
  }

  return payload.View().WriteReadable();
}
