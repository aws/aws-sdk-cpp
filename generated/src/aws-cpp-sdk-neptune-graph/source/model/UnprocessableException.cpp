/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/UnprocessableException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

UnprocessableException::UnprocessableException() : 
    m_messageHasBeenSet(false),
    m_reason(UnprocessableExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

UnprocessableException::UnprocessableException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_reason(UnprocessableExceptionReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

UnprocessableException& UnprocessableException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = UnprocessableExceptionReasonMapper::GetUnprocessableExceptionReasonForName(jsonValue.GetString("reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue UnprocessableException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", UnprocessableExceptionReasonMapper::GetNameForUnprocessableExceptionReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
