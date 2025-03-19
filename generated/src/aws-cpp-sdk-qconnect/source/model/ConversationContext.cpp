/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ConversationContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

ConversationContext::ConversationContext(JsonView jsonValue)
{
  *this = jsonValue;
}

ConversationContext& ConversationContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("selfServiceConversationHistory"))
  {
    Aws::Utils::Array<JsonView> selfServiceConversationHistoryJsonList = jsonValue.GetArray("selfServiceConversationHistory");
    for(unsigned selfServiceConversationHistoryIndex = 0; selfServiceConversationHistoryIndex < selfServiceConversationHistoryJsonList.GetLength(); ++selfServiceConversationHistoryIndex)
    {
      m_selfServiceConversationHistory.push_back(selfServiceConversationHistoryJsonList[selfServiceConversationHistoryIndex].AsObject());
    }
    m_selfServiceConversationHistoryHasBeenSet = true;
  }
  return *this;
}

JsonValue ConversationContext::Jsonize() const
{
  JsonValue payload;

  if(m_selfServiceConversationHistoryHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selfServiceConversationHistoryJsonList(m_selfServiceConversationHistory.size());
   for(unsigned selfServiceConversationHistoryIndex = 0; selfServiceConversationHistoryIndex < selfServiceConversationHistoryJsonList.GetLength(); ++selfServiceConversationHistoryIndex)
   {
     selfServiceConversationHistoryJsonList[selfServiceConversationHistoryIndex].AsObject(m_selfServiceConversationHistory[selfServiceConversationHistoryIndex].Jsonize());
   }
   payload.WithArray("selfServiceConversationHistory", std::move(selfServiceConversationHistoryJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
