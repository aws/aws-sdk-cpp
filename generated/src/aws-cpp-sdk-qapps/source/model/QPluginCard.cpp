/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/QPluginCard.h>
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

QPluginCard::QPluginCard(JsonView jsonValue)
{
  *this = jsonValue;
}

QPluginCard& QPluginCard::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dependencies"))
  {
    Aws::Utils::Array<JsonView> dependenciesJsonList = jsonValue.GetArray("dependencies");
    for(unsigned dependenciesIndex = 0; dependenciesIndex < dependenciesJsonList.GetLength(); ++dependenciesIndex)
    {
      m_dependencies.push_back(dependenciesJsonList[dependenciesIndex].AsString());
    }
    m_dependenciesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = CardTypeMapper::GetCardTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("prompt"))
  {
    m_prompt = jsonValue.GetString("prompt");
    m_promptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pluginType"))
  {
    m_pluginType = PluginTypeMapper::GetPluginTypeForName(jsonValue.GetString("pluginType"));
    m_pluginTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pluginId"))
  {
    m_pluginId = jsonValue.GetString("pluginId");
    m_pluginIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionIdentifier"))
  {
    m_actionIdentifier = jsonValue.GetString("actionIdentifier");
    m_actionIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue QPluginCard::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_dependenciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dependenciesJsonList(m_dependencies.size());
   for(unsigned dependenciesIndex = 0; dependenciesIndex < dependenciesJsonList.GetLength(); ++dependenciesIndex)
   {
     dependenciesJsonList[dependenciesIndex].AsString(m_dependencies[dependenciesIndex]);
   }
   payload.WithArray("dependencies", std::move(dependenciesJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", CardTypeMapper::GetNameForCardType(m_type));
  }

  if(m_promptHasBeenSet)
  {
   payload.WithString("prompt", m_prompt);

  }

  if(m_pluginTypeHasBeenSet)
  {
   payload.WithString("pluginType", PluginTypeMapper::GetNameForPluginType(m_pluginType));
  }

  if(m_pluginIdHasBeenSet)
  {
   payload.WithString("pluginId", m_pluginId);

  }

  if(m_actionIdentifierHasBeenSet)
  {
   payload.WithString("actionIdentifier", m_actionIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
