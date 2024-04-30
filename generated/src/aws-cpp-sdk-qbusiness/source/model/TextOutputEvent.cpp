/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/TextOutputEvent.h>
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

TextOutputEvent::TextOutputEvent() : 
    m_conversationIdHasBeenSet(false),
    m_userMessageIdHasBeenSet(false),
    m_systemMessageIdHasBeenSet(false),
    m_systemMessageHasBeenSet(false)
{
}

TextOutputEvent::TextOutputEvent(JsonView jsonValue) : 
    m_conversationIdHasBeenSet(false),
    m_userMessageIdHasBeenSet(false),
    m_systemMessageIdHasBeenSet(false),
    m_systemMessageHasBeenSet(false)
{
  *this = jsonValue;
}

TextOutputEvent& TextOutputEvent::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("systemMessage"))
  {
    m_systemMessage = jsonValue.GetString("systemMessage");

    m_systemMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue TextOutputEvent::Jsonize() const
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

  if(m_systemMessageHasBeenSet)
  {
   payload.WithString("systemMessage", m_systemMessage);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
