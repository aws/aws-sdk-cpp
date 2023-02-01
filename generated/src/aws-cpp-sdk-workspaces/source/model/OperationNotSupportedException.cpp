/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/OperationNotSupportedException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

OperationNotSupportedException::OperationNotSupportedException() : 
    m_messageHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

OperationNotSupportedException::OperationNotSupportedException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

OperationNotSupportedException& OperationNotSupportedException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue OperationNotSupportedException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
