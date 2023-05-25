/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/StartLambdaFunctionFailedEventAttributes.h>
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

StartLambdaFunctionFailedEventAttributes::StartLambdaFunctionFailedEventAttributes() : 
    m_scheduledEventId(0),
    m_scheduledEventIdHasBeenSet(false),
    m_cause(StartLambdaFunctionFailedCause::NOT_SET),
    m_causeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

StartLambdaFunctionFailedEventAttributes::StartLambdaFunctionFailedEventAttributes(JsonView jsonValue) : 
    m_scheduledEventId(0),
    m_scheduledEventIdHasBeenSet(false),
    m_cause(StartLambdaFunctionFailedCause::NOT_SET),
    m_causeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

StartLambdaFunctionFailedEventAttributes& StartLambdaFunctionFailedEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scheduledEventId"))
  {
    m_scheduledEventId = jsonValue.GetInt64("scheduledEventId");

    m_scheduledEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cause"))
  {
    m_cause = StartLambdaFunctionFailedCauseMapper::GetStartLambdaFunctionFailedCauseForName(jsonValue.GetString("cause"));

    m_causeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue StartLambdaFunctionFailedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_scheduledEventIdHasBeenSet)
  {
   payload.WithInt64("scheduledEventId", m_scheduledEventId);

  }

  if(m_causeHasBeenSet)
  {
   payload.WithString("cause", StartLambdaFunctionFailedCauseMapper::GetNameForStartLambdaFunctionFailedCause(m_cause));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
