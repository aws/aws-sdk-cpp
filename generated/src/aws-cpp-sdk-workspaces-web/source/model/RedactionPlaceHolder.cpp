/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/RedactionPlaceHolder.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

RedactionPlaceHolder::RedactionPlaceHolder() : 
    m_redactionPlaceHolderTextHasBeenSet(false),
    m_redactionPlaceHolderType(RedactionPlaceHolderType::NOT_SET),
    m_redactionPlaceHolderTypeHasBeenSet(false)
{
}

RedactionPlaceHolder::RedactionPlaceHolder(JsonView jsonValue)
  : RedactionPlaceHolder()
{
  *this = jsonValue;
}

RedactionPlaceHolder& RedactionPlaceHolder::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("redactionPlaceHolderText"))
  {
    m_redactionPlaceHolderText = jsonValue.GetString("redactionPlaceHolderText");

    m_redactionPlaceHolderTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("redactionPlaceHolderType"))
  {
    m_redactionPlaceHolderType = RedactionPlaceHolderTypeMapper::GetRedactionPlaceHolderTypeForName(jsonValue.GetString("redactionPlaceHolderType"));

    m_redactionPlaceHolderTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue RedactionPlaceHolder::Jsonize() const
{
  JsonValue payload;

  if(m_redactionPlaceHolderTextHasBeenSet)
  {
   payload.WithString("redactionPlaceHolderText", m_redactionPlaceHolderText);

  }

  if(m_redactionPlaceHolderTypeHasBeenSet)
  {
   payload.WithString("redactionPlaceHolderType", RedactionPlaceHolderTypeMapper::GetNameForRedactionPlaceHolderType(m_redactionPlaceHolderType));
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
