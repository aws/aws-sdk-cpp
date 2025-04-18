/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/UpdateMessageTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateMessageTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithObject("content", m_content.Jsonize());

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("language", m_language);

  }

  if(m_defaultAttributesHasBeenSet)
  {
   payload.WithObject("defaultAttributes", m_defaultAttributes.Jsonize());

  }

  return payload.View().WriteReadable();
}




