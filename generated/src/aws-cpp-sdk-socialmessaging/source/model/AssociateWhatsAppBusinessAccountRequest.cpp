/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/AssociateWhatsAppBusinessAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SocialMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateWhatsAppBusinessAccountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_signupCallbackHasBeenSet)
  {
   payload.WithObject("signupCallback", m_signupCallback.Jsonize());

  }

  if(m_setupFinalizationHasBeenSet)
  {
   payload.WithObject("setupFinalization", m_setupFinalization.Jsonize());

  }

  return payload.View().WriteReadable();
}




