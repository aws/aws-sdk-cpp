﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/BlackFrames.h>
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

BlackFrames::BlackFrames() : 
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false),
    m_thresholdSeconds(0),
    m_thresholdSecondsHasBeenSet(false)
{
}

BlackFrames::BlackFrames(JsonView jsonValue)
  : BlackFrames()
{
  *this = jsonValue;
}

BlackFrames& BlackFrames::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("state"))
  {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thresholdSeconds"))
  {
    m_thresholdSeconds = jsonValue.GetInteger("thresholdSeconds");

    m_thresholdSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue BlackFrames::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", StateMapper::GetNameForState(m_state));
  }

  if(m_thresholdSecondsHasBeenSet)
  {
   payload.WithInteger("thresholdSeconds", m_thresholdSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
