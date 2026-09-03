/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/PutWhatsAppBusinessPublicKeyRequest.h>

#include <utility>

using namespace Aws::SocialMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutWhatsAppBusinessPublicKeyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_originationPhoneNumberIdHasBeenSet) {
    payload.WithString("originationPhoneNumberId", m_originationPhoneNumberId);
  }

  if (m_businessPublicKeyHasBeenSet) {
    payload.WithString("businessPublicKey", m_businessPublicKey);
  }

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("kmsKeyArn", m_kmsKeyArn);
  }

  return payload.View().WriteReadable();
}
