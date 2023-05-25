/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/CanaryScheduleOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

CanaryScheduleOutput::CanaryScheduleOutput() : 
    m_expressionHasBeenSet(false),
    m_durationInSeconds(0),
    m_durationInSecondsHasBeenSet(false)
{
}

CanaryScheduleOutput::CanaryScheduleOutput(JsonView jsonValue) : 
    m_expressionHasBeenSet(false),
    m_durationInSeconds(0),
    m_durationInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

CanaryScheduleOutput& CanaryScheduleOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Expression"))
  {
    m_expression = jsonValue.GetString("Expression");

    m_expressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DurationInSeconds"))
  {
    m_durationInSeconds = jsonValue.GetInt64("DurationInSeconds");

    m_durationInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue CanaryScheduleOutput::Jsonize() const
{
  JsonValue payload;

  if(m_expressionHasBeenSet)
  {
   payload.WithString("Expression", m_expression);

  }

  if(m_durationInSecondsHasBeenSet)
  {
   payload.WithInt64("DurationInSeconds", m_durationInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
