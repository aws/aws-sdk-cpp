/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/FailedAttachmentEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

FailedAttachmentEvent::FailedAttachmentEvent() : 
    m_conversationIdHasBeenSet(false),
    m_userMessageIdHasBeenSet(false),
    m_systemMessageIdHasBeenSet(false),
    m_attachmentHasBeenSet(false)
{
}

FailedAttachmentEvent::FailedAttachmentEvent(JsonView jsonValue) : 
    m_conversationIdHasBeenSet(false),
    m_userMessageIdHasBeenSet(false),
    m_systemMessageIdHasBeenSet(false),
    m_attachmentHasBeenSet(false)
{
  *this = jsonValue;
}

FailedAttachmentEvent& FailedAttachmentEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("conversationId"))
  {
    m_conversationId = jsonValue.GetString("conversationId");

    m_conversationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userMessageId"))
  {
    m_userMessageId = jsonValue.GetString("userMessageId");

    m_userMessageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("systemMessageId"))
  {
    m_systemMessageId = jsonValue.GetString("systemMessageId");

    m_systemMessageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attachment"))
  {
    m_attachment = jsonValue.GetObject("attachment");

    m_attachmentHasBeenSet = true;
  }

  return *this;
}

JsonValue FailedAttachmentEvent::Jsonize() const
{
  JsonValue payload;

  if(m_conversationIdHasBeenSet)
  {
   payload.WithString("conversationId", m_conversationId);

  }

  if(m_userMessageIdHasBeenSet)
  {
   payload.WithString("userMessageId", m_userMessageId);

  }

  if(m_systemMessageIdHasBeenSet)
  {
   payload.WithString("systemMessageId", m_systemMessageId);

  }

  if(m_attachmentHasBeenSet)
  {
   payload.WithObject("attachment", m_attachment.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
