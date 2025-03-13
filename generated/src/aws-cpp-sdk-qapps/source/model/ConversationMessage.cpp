/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/ConversationMessage.h>
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

ConversationMessage::ConversationMessage(JsonView jsonValue)
{
  *this = jsonValue;
}

ConversationMessage& ConversationMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("body"))
  {
    m_body = jsonValue.GetString("body");
    m_bodyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = SenderMapper::GetSenderForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue ConversationMessage::Jsonize() const
{
  JsonValue payload;

  if(m_bodyHasBeenSet)
  {
   payload.WithString("body", m_body);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SenderMapper::GetNameForSender(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
