/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/InvalidInputException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

InvalidInputException::InvalidInputException() : 
    m_messageHasBeenSet(false),
    m_reason(InvalidInputExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

InvalidInputException::InvalidInputException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_reason(InvalidInputExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidInputException& InvalidInputException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = InvalidInputExceptionReasonMapper::GetInvalidInputExceptionReasonForName(jsonValue.GetString("Reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidInputException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", InvalidInputExceptionReasonMapper::GetNameForInvalidInputExceptionReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws
