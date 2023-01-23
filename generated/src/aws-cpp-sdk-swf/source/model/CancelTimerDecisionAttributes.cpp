/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/CancelTimerDecisionAttributes.h>
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

CancelTimerDecisionAttributes::CancelTimerDecisionAttributes() : 
    m_timerIdHasBeenSet(false)
{
}

CancelTimerDecisionAttributes::CancelTimerDecisionAttributes(JsonView jsonValue) : 
    m_timerIdHasBeenSet(false)
{
  *this = jsonValue;
}

CancelTimerDecisionAttributes& CancelTimerDecisionAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timerId"))
  {
    m_timerId = jsonValue.GetString("timerId");

    m_timerIdHasBeenSet = true;
  }

  return *this;
}

JsonValue CancelTimerDecisionAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_timerIdHasBeenSet)
  {
   payload.WithString("timerId", m_timerId);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
