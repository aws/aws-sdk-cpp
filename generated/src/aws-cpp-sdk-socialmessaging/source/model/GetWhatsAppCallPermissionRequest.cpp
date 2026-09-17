/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/GetWhatsAppCallPermissionRequest.h>

#include <utility>

using namespace Aws::SocialMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetWhatsAppCallPermissionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_originationPhoneNumberIdHasBeenSet) {
    payload.WithString("originationPhoneNumberId", m_originationPhoneNumberId);
  }

  if (m_destinationPhoneNumberHasBeenSet) {
    payload.WithString("destinationPhoneNumber", m_destinationPhoneNumber);
  }

  if (m_endUserBsuidHasBeenSet) {
    payload.WithString("endUserBsuid", m_endUserBsuid);
  }

  return payload.View().WriteReadable();
}
