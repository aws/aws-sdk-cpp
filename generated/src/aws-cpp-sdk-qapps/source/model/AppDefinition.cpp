/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/AppDefinition.h>
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

AppDefinition::AppDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

AppDefinition& AppDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appDefinitionVersion"))
  {
    m_appDefinitionVersion = jsonValue.GetString("appDefinitionVersion");
    m_appDefinitionVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cards"))
  {
    Aws::Utils::Array<JsonView> cardsJsonList = jsonValue.GetArray("cards");
    for(unsigned cardsIndex = 0; cardsIndex < cardsJsonList.GetLength(); ++cardsIndex)
    {
      m_cards.push_back(cardsJsonList[cardsIndex].AsObject());
    }
    m_cardsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("canEdit"))
  {
    m_canEdit = jsonValue.GetBool("canEdit");
    m_canEditHasBeenSet = true;
  }
  return *this;
}

JsonValue AppDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_appDefinitionVersionHasBeenSet)
  {
   payload.WithString("appDefinitionVersion", m_appDefinitionVersion);

  }

  if(m_cardsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cardsJsonList(m_cards.size());
   for(unsigned cardsIndex = 0; cardsIndex < cardsJsonList.GetLength(); ++cardsIndex)
   {
     cardsJsonList[cardsIndex].AsObject(m_cards[cardsIndex].Jsonize());
   }
   payload.WithArray("cards", std::move(cardsJsonList));

  }

  if(m_canEditHasBeenSet)
  {
   payload.WithBool("canEdit", m_canEdit);

  }

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
