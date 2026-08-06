/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/SendWhatsAppConversionEventRequest.h>

#include <utility>

using namespace Aws::SocialMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendWhatsAppConversionEventRequest::SerializePayload() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_datasetIdHasBeenSet) {
    payload.WithString("datasetId", m_datasetId);
  }

  if (m_eventDataHasBeenSet) {
    payload.WithString("eventData", HashingUtils::Base64Encode(m_eventData));
  }

  return payload.View().WriteReadable();
}
