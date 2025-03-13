/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/ConflictException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

ConflictException::ConflictException(JsonView jsonValue)
{
  *this = jsonValue;
}

ConflictException& ConflictException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConflictExceptionType"))
  {
    m_conflictExceptionType = ConflictExceptionTypeMapper::GetConflictExceptionTypeForName(jsonValue.GetString("ConflictExceptionType"));
    m_conflictExceptionTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ConflictException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_conflictExceptionTypeHasBeenSet)
  {
   payload.WithString("ConflictExceptionType", ConflictExceptionTypeMapper::GetNameForConflictExceptionType(m_conflictExceptionType));
  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
