/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/SendMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendMessageRequest::SendMessageRequest() : 
    m_assistantIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_conversationContextHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_type(MessageType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String SendMessageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_conversationContextHasBeenSet)
  {
   payload.WithObject("conversationContext", m_conversationContext.Jsonize());

  }

  if(m_messageHasBeenSet)
  {
   payload.WithObject("message", m_message.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", MessageTypeMapper::GetNameForMessageType(m_type));
  }

  return payload.View().WriteReadable();
}




