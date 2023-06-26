/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/ForbiddenException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

ForbiddenException::ForbiddenException() : 
    m_messageHasBeenSet(false),
    m_requestIDHasBeenSet(false)
{
}

ForbiddenException::ForbiddenException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_requestIDHasBeenSet(false)
{
  *this = jsonValue;
}

ForbiddenException& ForbiddenException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestID"))
  {
    m_requestID = jsonValue.GetString("RequestID");

    m_requestIDHasBeenSet = true;
  }

  return *this;
}

JsonValue ForbiddenException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_requestIDHasBeenSet)
  {
   payload.WithString("RequestID", m_requestID);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
