/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/CreateWhatsAppFlowRequest.h>

#include <utility>

using namespace Aws::SocialMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateWhatsAppFlowRequest::SerializePayload() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
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

  if (m_flowJsonHasBeenSet) {
    payload.WithString("flowJson", HashingUtils::Base64Encode(m_flowJson));
  }

  if (m_publishHasBeenSet) {
    payload.WithBool("publish", m_publish);
  }

  if (m_cloneFlowIdHasBeenSet) {
    payload.WithString("cloneFlowId", m_cloneFlowId);
  }

  return payload.View().WriteReadable();
}
