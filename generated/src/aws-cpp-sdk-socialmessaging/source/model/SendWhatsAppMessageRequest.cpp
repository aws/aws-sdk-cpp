/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/SendWhatsAppMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::SocialMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendWhatsAppMessageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_originationPhoneNumberIdHasBeenSet)
  {
   payload.WithString("originationPhoneNumberId", m_originationPhoneNumberId);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", HashingUtils::Base64Encode(m_message));
  }

  if(m_metaApiVersionHasBeenSet)
  {
   payload.WithString("metaApiVersion", m_metaApiVersion);

  }

  return payload.View().WriteReadable();
}




