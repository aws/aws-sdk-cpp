﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/ConflictException.h>
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

ConflictException::ConflictException(JsonView jsonValue)
{
  *this = jsonValue;
}

ConflictException& ConflictException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reason"))
  {
    m_reason = ConflictExceptionReasonMapper::GetConflictExceptionReasonForName(jsonValue.GetString("reason"));
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ConflictException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", ConflictExceptionReasonMapper::GetNameForConflictExceptionReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
