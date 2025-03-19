/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/QPluginCardInput.h>
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

QPluginCardInput::QPluginCardInput(JsonView jsonValue)
{
  *this = jsonValue;
}

QPluginCardInput& QPluginCardInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
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

JsonValue QPluginCardInput::Jsonize() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", CardTypeMapper::GetNameForCardType(m_type));
  }

  if(m_promptHasBeenSet)
  {
   payload.WithString("prompt", m_prompt);

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
