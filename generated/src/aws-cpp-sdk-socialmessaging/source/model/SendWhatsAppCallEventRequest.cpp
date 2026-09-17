/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/SendWhatsAppCallEventRequest.h>

#include <utility>

using namespace Aws::SocialMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendWhatsAppCallEventRequest::SerializePayload() const {
  JsonValue payload;

  if (m_originationPhoneNumberIdHasBeenSet) {
    payload.WithString("originationPhoneNumberId", m_originationPhoneNumberId);
  }

  if (m_metaApiVersionHasBeenSet) {
    payload.WithString("metaApiVersion", m_metaApiVersion);
  }

  if (m_callEventHasBeenSet) {
    payload.WithString("callEvent", HashingUtils::Base64Encode(m_callEvent));
  }

  return payload.View().WriteReadable();
}
