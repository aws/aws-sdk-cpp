/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/AccessDeniedForDependencyException.h>
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

AccessDeniedForDependencyException::AccessDeniedForDependencyException() : 
    m_messageHasBeenSet(false),
    m_reason(AccessDeniedForDependencyExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

AccessDeniedForDependencyException::AccessDeniedForDependencyException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_reason(AccessDeniedForDependencyExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

AccessDeniedForDependencyException& AccessDeniedForDependencyException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = AccessDeniedForDependencyExceptionReasonMapper::GetAccessDeniedForDependencyExceptionReasonForName(jsonValue.GetString("Reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessDeniedForDependencyException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", AccessDeniedForDependencyExceptionReasonMapper::GetNameForAccessDeniedForDependencyExceptionReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws
