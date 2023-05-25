/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/ThrottlingException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

ThrottlingException::ThrottlingException() : 
    m_codeHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ThrottlingException::ThrottlingException(JsonView jsonValue) : 
    m_codeHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

ThrottlingException& ThrottlingException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetString("code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("context"))
  {
    Aws::Map<Aws::String, JsonView> contextJsonMap = jsonValue.GetObject("context").GetAllObjects();
    for(auto& contextItem : contextJsonMap)
    {
      m_context[contextItem.first] = contextItem.second.AsString();
    }
    m_contextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue ThrottlingException::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  if(m_contextHasBeenSet)
  {
   JsonValue contextJsonMap;
   for(auto& contextItem : m_context)
   {
     contextJsonMap.WithString(contextItem.first, contextItem.second);
   }
   payload.WithObject("context", std::move(contextJsonMap));

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
