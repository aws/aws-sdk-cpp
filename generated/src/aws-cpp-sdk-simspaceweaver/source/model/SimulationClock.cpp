/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/SimulationClock.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SimSpaceWeaver
{
namespace Model
{

SimulationClock::SimulationClock() : 
    m_status(ClockStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetStatus(ClockTargetStatus::NOT_SET),
    m_targetStatusHasBeenSet(false)
{
}

SimulationClock::SimulationClock(JsonView jsonValue) : 
    m_status(ClockStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetStatus(ClockTargetStatus::NOT_SET),
    m_targetStatusHasBeenSet(false)
{
  *this = jsonValue;
}

SimulationClock& SimulationClock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ClockStatusMapper::GetClockStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetStatus"))
  {
    m_targetStatus = ClockTargetStatusMapper::GetClockTargetStatusForName(jsonValue.GetString("TargetStatus"));

    m_targetStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue SimulationClock::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ClockStatusMapper::GetNameForClockStatus(m_status));
  }

  if(m_targetStatusHasBeenSet)
  {
   payload.WithString("TargetStatus", ClockTargetStatusMapper::GetNameForClockTargetStatus(m_targetStatus));
  }

  return payload;
}

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
