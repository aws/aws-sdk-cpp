/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/uxc/model/UpdateAccountCustomizationsRequest.h>

#include <utility>

using namespace Aws::uxc::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAccountCustomizationsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_accountColorHasBeenSet) {
    payload.WithString("accountColor", AccountColorMapper::GetNameForAccountColor(m_accountColor));
  }

  if (m_visibleServicesHasBeenSet) {
    Aws::Utils::Array<JsonValue> visibleServicesJsonList(m_visibleServices.size());
    for (unsigned visibleServicesIndex = 0; visibleServicesIndex < visibleServicesJsonList.GetLength(); ++visibleServicesIndex) {
      visibleServicesJsonList[visibleServicesIndex].AsString(m_visibleServices[visibleServicesIndex]);
    }
    payload.WithArray("visibleServices", std::move(visibleServicesJsonList));
  }

  if (m_visibleRegionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> visibleRegionsJsonList(m_visibleRegions.size());
    for (unsigned visibleRegionsIndex = 0; visibleRegionsIndex < visibleRegionsJsonList.GetLength(); ++visibleRegionsIndex) {
      visibleRegionsJsonList[visibleRegionsIndex].AsString(m_visibleRegions[visibleRegionsIndex]);
    }
    payload.WithArray("visibleRegions", std::move(visibleRegionsJsonList));
  }

  return payload.View().WriteReadable();
}
