/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/AppDefinitionInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QApps
{
namespace Model
{

AppDefinitionInput::AppDefinitionInput(JsonView jsonValue)
{
  *this = jsonValue;
}

AppDefinitionInput& AppDefinitionInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cards"))
  {
    Aws::Utils::Array<JsonView> cardsJsonList = jsonValue.GetArray("cards");
    for(unsigned cardsIndex = 0; cardsIndex < cardsJsonList.GetLength(); ++cardsIndex)
    {
      m_cards.push_back(cardsJsonList[cardsIndex].AsObject());
    }
    m_cardsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("initialPrompt"))
  {
    m_initialPrompt = jsonValue.GetString("initialPrompt");
    m_initialPromptHasBeenSet = true;
  }
  return *this;
}

JsonValue AppDefinitionInput::Jsonize() const
{
  JsonValue payload;

  if(m_cardsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cardsJsonList(m_cards.size());
   for(unsigned cardsIndex = 0; cardsIndex < cardsJsonList.GetLength(); ++cardsIndex)
   {
     cardsJsonList[cardsIndex].AsObject(m_cards[cardsIndex].Jsonize());
   }
   payload.WithArray("cards", std::move(cardsJsonList));

  }

  if(m_initialPromptHasBeenSet)
  {
   payload.WithString("initialPrompt", m_initialPrompt);

  }

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
