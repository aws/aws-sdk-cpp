/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/CanaryStatus.h>
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

CanaryStatus::CanaryStatus() : 
    m_state(CanaryState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_stateReasonCode(CanaryStateReasonCode::NOT_SET),
    m_stateReasonCodeHasBeenSet(false)
{
}

CanaryStatus::CanaryStatus(JsonView jsonValue) : 
    m_state(CanaryState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_stateReasonCode(CanaryStateReasonCode::NOT_SET),
    m_stateReasonCodeHasBeenSet(false)
{
  *this = jsonValue;
}

CanaryStatus& CanaryStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("State"))
  {
    m_state = CanaryStateMapper::GetCanaryStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");

    m_stateReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateReasonCode"))
  {
    m_stateReasonCode = CanaryStateReasonCodeMapper::GetCanaryStateReasonCodeForName(jsonValue.GetString("StateReasonCode"));

    m_stateReasonCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue CanaryStatus::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", CanaryStateMapper::GetNameForCanaryState(m_state));
  }

  if(m_stateReasonHasBeenSet)
  {
   payload.WithString("StateReason", m_stateReason);

  }

  if(m_stateReasonCodeHasBeenSet)
  {
   payload.WithString("StateReasonCode", CanaryStateReasonCodeMapper::GetNameForCanaryStateReasonCode(m_stateReasonCode));
  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
