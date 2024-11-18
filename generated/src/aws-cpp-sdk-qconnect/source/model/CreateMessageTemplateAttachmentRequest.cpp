/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/CreateMessageTemplateAttachmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMessageTemplateAttachmentRequest::CreateMessageTemplateAttachmentRequest() : 
    m_clientTokenHasBeenSet(false),
    m_contentDisposition(ContentDisposition::NOT_SET),
    m_contentDispositionHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false),
    m_messageTemplateIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_requestBodyHasBeenSet(false)
{
}

Aws::String CreateMessageTemplateAttachmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_contentDispositionHasBeenSet)
  {
   payload.WithString("contentDisposition", ContentDispositionMapper::GetNameForContentDisposition(m_contentDisposition));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_requestBodyHasBeenSet)
  {
   payload.WithString("body", m_requestBody);

  }

  return payload.View().WriteReadable();
}




