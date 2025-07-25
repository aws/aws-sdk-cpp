/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/UpdateWhatsAppMessageTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::SocialMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateWhatsAppMessageTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_metaTemplateIdHasBeenSet)
  {
   payload.WithString("metaTemplateId", m_metaTemplateId);

  }

  if(m_templateCategoryHasBeenSet)
  {
   payload.WithString("templateCategory", m_templateCategory);

  }

  if(m_templateComponentsHasBeenSet)
  {
   payload.WithString("templateComponents", HashingUtils::Base64Encode(m_templateComponents));
  }

  return payload.View().WriteReadable();
}




