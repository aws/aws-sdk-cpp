/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/TextInputEvent.h>
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

TextInputEvent::TextInputEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

TextInputEvent& TextInputEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userMessage"))
  {
    m_userMessage = jsonValue.GetString("userMessage");
    m_userMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue TextInputEvent::Jsonize() const
{
  JsonValue payload;

  if(m_userMessageHasBeenSet)
  {
   payload.WithString("userMessage", m_userMessage);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
