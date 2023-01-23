/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/ChatChannel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

ChatChannel::ChatChannel() : 
    m_chatbotSnsHasBeenSet(false),
    m_emptyHasBeenSet(false)
{
}

ChatChannel::ChatChannel(JsonView jsonValue) : 
    m_chatbotSnsHasBeenSet(false),
    m_emptyHasBeenSet(false)
{
  *this = jsonValue;
}

ChatChannel& ChatChannel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("chatbotSns"))
  {
    Aws::Utils::Array<JsonView> chatbotSnsJsonList = jsonValue.GetArray("chatbotSns");
    for(unsigned chatbotSnsIndex = 0; chatbotSnsIndex < chatbotSnsJsonList.GetLength(); ++chatbotSnsIndex)
    {
      m_chatbotSns.push_back(chatbotSnsJsonList[chatbotSnsIndex].AsString());
    }
    m_chatbotSnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("empty"))
  {
    m_empty = jsonValue.GetObject("empty");

    m_emptyHasBeenSet = true;
  }

  return *this;
}

JsonValue ChatChannel::Jsonize() const
{
  JsonValue payload;

  if(m_chatbotSnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> chatbotSnsJsonList(m_chatbotSns.size());
   for(unsigned chatbotSnsIndex = 0; chatbotSnsIndex < chatbotSnsJsonList.GetLength(); ++chatbotSnsIndex)
   {
     chatbotSnsJsonList[chatbotSnsIndex].AsString(m_chatbotSns[chatbotSnsIndex]);
   }
   payload.WithArray("chatbotSns", std::move(chatbotSnsJsonList));

  }

  if(m_emptyHasBeenSet)
  {
   payload.WithObject("empty", m_empty.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
