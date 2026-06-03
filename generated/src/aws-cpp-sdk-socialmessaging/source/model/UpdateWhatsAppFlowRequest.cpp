/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/UpdateWhatsAppFlowRequest.h>

#include <utility>

using namespace Aws::SocialMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateWhatsAppFlowRequest::SerializePayload() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_flowIdHasBeenSet) {
    payload.WithString("flowId", m_flowId);
  }

  if (m_flowNameHasBeenSet) {
    payload.WithString("flowName", m_flowName);
  }

  if (m_categoriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> categoriesJsonList(m_categories.size());
    for (unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex) {
      categoriesJsonList[categoriesIndex].AsString(MetaFlowCategoryMapper::GetNameForMetaFlowCategory(m_categories[categoriesIndex]));
    }
    payload.WithArray("categories", std::move(categoriesJsonList));
  }

  return payload.View().WriteReadable();
}
