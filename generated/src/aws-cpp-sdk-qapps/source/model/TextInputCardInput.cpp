/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/TextInputCardInput.h>
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

TextInputCardInput::TextInputCardInput(JsonView jsonValue)
{
  *this = jsonValue;
}

TextInputCardInput& TextInputCardInput::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("placeholder"))
  {
    m_placeholder = jsonValue.GetString("placeholder");
    m_placeholderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = jsonValue.GetString("defaultValue");
    m_defaultValueHasBeenSet = true;
  }
  return *this;
}

JsonValue TextInputCardInput::Jsonize() const
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

  if(m_placeholderHasBeenSet)
  {
   payload.WithString("placeholder", m_placeholder);

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("defaultValue", m_defaultValue);

  }

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
