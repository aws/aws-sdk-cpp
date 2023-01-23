/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/ConflictException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VoiceID
{
namespace Model
{

ConflictException::ConflictException() : 
    m_conflictType(ConflictType::NOT_SET),
    m_conflictTypeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ConflictException::ConflictException(JsonView jsonValue) : 
    m_conflictType(ConflictType::NOT_SET),
    m_conflictTypeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

ConflictException& ConflictException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConflictType"))
  {
    m_conflictType = ConflictTypeMapper::GetConflictTypeForName(jsonValue.GetString("ConflictType"));

    m_conflictTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue ConflictException::Jsonize() const
{
  JsonValue payload;

  if(m_conflictTypeHasBeenSet)
  {
   payload.WithString("ConflictType", ConflictTypeMapper::GetNameForConflictType(m_conflictType));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace VoiceID
} // namespace Aws
