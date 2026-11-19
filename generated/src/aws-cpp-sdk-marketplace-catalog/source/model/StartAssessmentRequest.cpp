/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/StartAssessmentRequest.h>

#include <utility>

using namespace Aws::MarketplaceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartAssessmentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  if (m_frameworkIdHasBeenSet) {
    payload.WithString("FrameworkId", m_frameworkId);
  }

  if (m_entityIdHasBeenSet) {
    payload.WithString("EntityId", m_entityId);
  }

  if (m_controlsHasBeenSet) {
    Aws::Utils::Array<JsonValue> controlsJsonList(m_controls.size());
    for (unsigned controlsIndex = 0; controlsIndex < controlsJsonList.GetLength(); ++controlsIndex) {
      controlsJsonList[controlsIndex].AsObject(m_controls[controlsIndex].Jsonize());
    }
    payload.WithArray("Controls", std::move(controlsJsonList));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
