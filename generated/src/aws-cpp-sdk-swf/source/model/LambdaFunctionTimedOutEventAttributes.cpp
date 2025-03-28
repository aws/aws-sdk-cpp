﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/LambdaFunctionTimedOutEventAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

LambdaFunctionTimedOutEventAttributes::LambdaFunctionTimedOutEventAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

LambdaFunctionTimedOutEventAttributes& LambdaFunctionTimedOutEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scheduledEventId"))
  {
    m_scheduledEventId = jsonValue.GetInt64("scheduledEventId");
    m_scheduledEventIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startedEventId"))
  {
    m_startedEventId = jsonValue.GetInt64("startedEventId");
    m_startedEventIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeoutType"))
  {
    m_timeoutType = LambdaFunctionTimeoutTypeMapper::GetLambdaFunctionTimeoutTypeForName(jsonValue.GetString("timeoutType"));
    m_timeoutTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue LambdaFunctionTimedOutEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_scheduledEventIdHasBeenSet)
  {
   payload.WithInt64("scheduledEventId", m_scheduledEventId);

  }

  if(m_startedEventIdHasBeenSet)
  {
   payload.WithInt64("startedEventId", m_startedEventId);

  }

  if(m_timeoutTypeHasBeenSet)
  {
   payload.WithString("timeoutType", LambdaFunctionTimeoutTypeMapper::GetNameForLambdaFunctionTimeoutType(m_timeoutType));
  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
