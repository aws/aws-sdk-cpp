/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/CreateWhatsAppMessageTemplateFromLibraryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SocialMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateWhatsAppMessageTemplateFromLibraryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_metaLibraryTemplateHasBeenSet)
  {
   payload.WithObject("metaLibraryTemplate", m_metaLibraryTemplate.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  return payload.View().WriteReadable();
}




