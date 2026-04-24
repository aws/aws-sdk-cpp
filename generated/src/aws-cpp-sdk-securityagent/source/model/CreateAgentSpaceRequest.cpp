/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/CreateAgentSpaceRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAgentSpaceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_awsResourcesHasBeenSet) {
    payload.WithObject("awsResources", m_awsResources.Jsonize());
  }

  if (m_targetDomainIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> targetDomainIdsJsonList(m_targetDomainIds.size());
    for (unsigned targetDomainIdsIndex = 0; targetDomainIdsIndex < targetDomainIdsJsonList.GetLength(); ++targetDomainIdsIndex) {
      targetDomainIdsJsonList[targetDomainIdsIndex].AsString(m_targetDomainIds[targetDomainIdsIndex]);
    }
    payload.WithArray("targetDomainIds", std::move(targetDomainIdsJsonList));
  }

  if (m_codeReviewSettingsHasBeenSet) {
    payload.WithObject("codeReviewSettings", m_codeReviewSettings.Jsonize());
  }

  if (m_kmsKeyIdHasBeenSet) {
    payload.WithString("kmsKeyId", m_kmsKeyId);
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
