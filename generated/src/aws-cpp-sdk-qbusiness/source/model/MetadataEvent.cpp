/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/MetadataEvent.h>
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

MetadataEvent::MetadataEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

MetadataEvent& MetadataEvent::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("sourceAttributions"))
  {
    Aws::Utils::Array<JsonView> sourceAttributionsJsonList = jsonValue.GetArray("sourceAttributions");
    for(unsigned sourceAttributionsIndex = 0; sourceAttributionsIndex < sourceAttributionsJsonList.GetLength(); ++sourceAttributionsIndex)
    {
      m_sourceAttributions.push_back(sourceAttributionsJsonList[sourceAttributionsIndex].AsObject());
    }
    m_sourceAttributionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("finalTextMessage"))
  {
    m_finalTextMessage = jsonValue.GetString("finalTextMessage");
    m_finalTextMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue MetadataEvent::Jsonize() const
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

  if(m_sourceAttributionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceAttributionsJsonList(m_sourceAttributions.size());
   for(unsigned sourceAttributionsIndex = 0; sourceAttributionsIndex < sourceAttributionsJsonList.GetLength(); ++sourceAttributionsIndex)
   {
     sourceAttributionsJsonList[sourceAttributionsIndex].AsObject(m_sourceAttributions[sourceAttributionsIndex].Jsonize());
   }
   payload.WithArray("sourceAttributions", std::move(sourceAttributionsJsonList));

  }

  if(m_finalTextMessageHasBeenSet)
  {
   payload.WithString("finalTextMessage", m_finalTextMessage);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
