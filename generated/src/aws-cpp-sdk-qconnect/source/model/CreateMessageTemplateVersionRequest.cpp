/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/CreateMessageTemplateVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateMessageTemplateVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_messageTemplateContentSha256HasBeenSet)
  {
   payload.WithString("messageTemplateContentSha256", m_messageTemplateContentSha256);

  }

  return payload.View().WriteReadable();
}




