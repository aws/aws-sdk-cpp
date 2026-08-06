/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/CreateWhatsAppDatasetRequest.h>

#include <utility>

using namespace Aws::SocialMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateWhatsAppDatasetRequest::SerializePayload() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  return payload.View().WriteReadable();
}
