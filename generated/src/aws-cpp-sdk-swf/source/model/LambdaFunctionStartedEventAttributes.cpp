/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/LambdaFunctionStartedEventAttributes.h>
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

LambdaFunctionStartedEventAttributes::LambdaFunctionStartedEventAttributes() : 
    m_scheduledEventId(0),
    m_scheduledEventIdHasBeenSet(false)
{
}

LambdaFunctionStartedEventAttributes::LambdaFunctionStartedEventAttributes(JsonView jsonValue) : 
    m_scheduledEventId(0),
    m_scheduledEventIdHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaFunctionStartedEventAttributes& LambdaFunctionStartedEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scheduledEventId"))
  {
    m_scheduledEventId = jsonValue.GetInt64("scheduledEventId");

    m_scheduledEventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaFunctionStartedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_scheduledEventIdHasBeenSet)
  {
   payload.WithInt64("scheduledEventId", m_scheduledEventId);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
