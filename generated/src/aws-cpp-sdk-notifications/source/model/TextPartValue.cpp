/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/TextPartValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Notifications
{
namespace Model
{

TextPartValue::TextPartValue(JsonView jsonValue)
{
  *this = jsonValue;
}

TextPartValue& TextPartValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = TextPartTypeMapper::GetTextPartTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayText"))
  {
    m_displayText = jsonValue.GetString("displayText");
    m_displayTextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("textByLocale"))
  {
    Aws::Map<Aws::String, JsonView> textByLocaleJsonMap = jsonValue.GetObject("textByLocale").GetAllObjects();
    for(auto& textByLocaleItem : textByLocaleJsonMap)
    {
      m_textByLocale[LocaleCodeMapper::GetLocaleCodeForName(textByLocaleItem.first)] = textByLocaleItem.second.AsString();
    }
    m_textByLocaleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  return *this;
}

JsonValue TextPartValue::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TextPartTypeMapper::GetNameForTextPartType(m_type));
  }

  if(m_displayTextHasBeenSet)
  {
   payload.WithString("displayText", m_displayText);

  }

  if(m_textByLocaleHasBeenSet)
  {
   JsonValue textByLocaleJsonMap;
   for(auto& textByLocaleItem : m_textByLocale)
   {
     textByLocaleJsonMap.WithString(LocaleCodeMapper::GetNameForLocaleCode(textByLocaleItem.first), textByLocaleItem.second);
   }
   payload.WithObject("textByLocale", std::move(textByLocaleJsonMap));

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace Notifications
} // namespace Aws
