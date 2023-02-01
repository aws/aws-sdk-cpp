/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/ConstraintViolationException.h>
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

ConstraintViolationException::ConstraintViolationException() : 
    m_messageHasBeenSet(false),
    m_reason(ConstraintViolationExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

ConstraintViolationException::ConstraintViolationException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_reason(ConstraintViolationExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

ConstraintViolationException& ConstraintViolationException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = ConstraintViolationExceptionReasonMapper::GetConstraintViolationExceptionReasonForName(jsonValue.GetString("Reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ConstraintViolationException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", ConstraintViolationExceptionReasonMapper::GetNameForConstraintViolationExceptionReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws
