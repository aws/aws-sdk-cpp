﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/UpdateFailoverConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

UpdateFailoverConfig::UpdateFailoverConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateFailoverConfig& UpdateFailoverConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("failoverMode"))
  {
    m_failoverMode = FailoverModeMapper::GetFailoverModeForName(jsonValue.GetString("failoverMode"));
    m_failoverModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recoveryWindow"))
  {
    m_recoveryWindow = jsonValue.GetInteger("recoveryWindow");
    m_recoveryWindowHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourcePriority"))
  {
    m_sourcePriority = jsonValue.GetObject("sourcePriority");
    m_sourcePriorityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateFailoverConfig::Jsonize() const
{
  JsonValue payload;

  if(m_failoverModeHasBeenSet)
  {
   payload.WithString("failoverMode", FailoverModeMapper::GetNameForFailoverMode(m_failoverMode));
  }

  if(m_recoveryWindowHasBeenSet)
  {
   payload.WithInteger("recoveryWindow", m_recoveryWindow);

  }

  if(m_sourcePriorityHasBeenSet)
  {
   payload.WithObject("sourcePriority", m_sourcePriority.Jsonize());

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", StateMapper::GetNameForState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
