/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/Conversation.h>
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

Conversation::Conversation() : 
    m_conversationIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

Conversation::Conversation(JsonView jsonValue) : 
    m_conversationIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_titleHasBeenSet(false)
{
  *this = jsonValue;
}

Conversation& Conversation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("conversationId"))
  {
    m_conversationId = jsonValue.GetString("conversationId");

    m_conversationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  return *this;
}

JsonValue Conversation::Jsonize() const
{
  JsonValue payload;

  if(m_conversationIdHasBeenSet)
  {
   payload.WithString("conversationId", m_conversationId);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
