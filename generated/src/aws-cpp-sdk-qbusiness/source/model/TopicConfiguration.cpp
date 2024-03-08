/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/TopicConfiguration.h>
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

TopicConfiguration::TopicConfiguration() : 
    m_descriptionHasBeenSet(false),
    m_exampleChatMessagesHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
}

TopicConfiguration::TopicConfiguration(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_exampleChatMessagesHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
  *this = jsonValue;
}

TopicConfiguration& TopicConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exampleChatMessages"))
  {
    Aws::Utils::Array<JsonView> exampleChatMessagesJsonList = jsonValue.GetArray("exampleChatMessages");
    for(unsigned exampleChatMessagesIndex = 0; exampleChatMessagesIndex < exampleChatMessagesJsonList.GetLength(); ++exampleChatMessagesIndex)
    {
      m_exampleChatMessages.push_back(exampleChatMessagesJsonList[exampleChatMessagesIndex].AsString());
    }
    m_exampleChatMessagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rules"))
  {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }

  return *this;
}

JsonValue TopicConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_exampleChatMessagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exampleChatMessagesJsonList(m_exampleChatMessages.size());
   for(unsigned exampleChatMessagesIndex = 0; exampleChatMessagesIndex < exampleChatMessagesJsonList.GetLength(); ++exampleChatMessagesIndex)
   {
     exampleChatMessagesJsonList[exampleChatMessagesIndex].AsString(m_exampleChatMessages[exampleChatMessagesIndex]);
   }
   payload.WithArray("exampleChatMessages", std::move(exampleChatMessagesJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_rulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("rules", std::move(rulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
