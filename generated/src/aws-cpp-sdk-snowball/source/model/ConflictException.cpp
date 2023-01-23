/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/ConflictException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

ConflictException::ConflictException() : 
    m_conflictResourceHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ConflictException::ConflictException(JsonView jsonValue) : 
    m_conflictResourceHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

ConflictException& ConflictException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConflictResource"))
  {
    m_conflictResource = jsonValue.GetString("ConflictResource");

    m_conflictResourceHasBeenSet = true;
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

  if(m_conflictResourceHasBeenSet)
  {
   payload.WithString("ConflictResource", m_conflictResource);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
