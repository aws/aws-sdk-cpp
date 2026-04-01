/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/CreateIntegrationRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateIntegrationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_providerHasBeenSet) {
    payload.WithString("provider", ProviderMapper::GetNameForProvider(m_provider));
  }

  if (m_inputHasBeenSet) {
    payload.WithObject("input", m_input.Jsonize());
  }

  if (m_integrationDisplayNameHasBeenSet) {
    payload.WithString("integrationDisplayName", m_integrationDisplayName);
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
