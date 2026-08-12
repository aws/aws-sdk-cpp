/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UpdateLimitsProfileRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateLimitsProfileRequest::SerializePayload() const {
  JsonValue payload;

  if (m_profileNameHasBeenSet) {
    payload.WithString("profileName", m_profileName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_resourceLimitsHasBeenSet) {
    JsonValue resourceLimitsJsonMap;
    for (auto& resourceLimitsItem : m_resourceLimits) {
      resourceLimitsJsonMap.WithObject(ResourceTypeMapper::GetNameForResourceType(resourceLimitsItem.first),
                                       resourceLimitsItem.second.Jsonize());
    }
    payload.WithObject("resourceLimits", std::move(resourceLimitsJsonMap));
  }

  return payload.View().WriteReadable();
}
