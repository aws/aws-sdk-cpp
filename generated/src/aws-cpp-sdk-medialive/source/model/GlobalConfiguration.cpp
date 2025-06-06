﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/GlobalConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

GlobalConfiguration::GlobalConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

GlobalConfiguration& GlobalConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("initialAudioGain"))
  {
    m_initialAudioGain = jsonValue.GetInteger("initialAudioGain");
    m_initialAudioGainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputEndAction"))
  {
    m_inputEndAction = GlobalConfigurationInputEndActionMapper::GetGlobalConfigurationInputEndActionForName(jsonValue.GetString("inputEndAction"));
    m_inputEndActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputLossBehavior"))
  {
    m_inputLossBehavior = jsonValue.GetObject("inputLossBehavior");
    m_inputLossBehaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputLockingMode"))
  {
    m_outputLockingMode = GlobalConfigurationOutputLockingModeMapper::GetGlobalConfigurationOutputLockingModeForName(jsonValue.GetString("outputLockingMode"));
    m_outputLockingModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputTimingSource"))
  {
    m_outputTimingSource = GlobalConfigurationOutputTimingSourceMapper::GetGlobalConfigurationOutputTimingSourceForName(jsonValue.GetString("outputTimingSource"));
    m_outputTimingSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("supportLowFramerateInputs"))
  {
    m_supportLowFramerateInputs = GlobalConfigurationLowFramerateInputsMapper::GetGlobalConfigurationLowFramerateInputsForName(jsonValue.GetString("supportLowFramerateInputs"));
    m_supportLowFramerateInputsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputLockingSettings"))
  {
    m_outputLockingSettings = jsonValue.GetObject("outputLockingSettings");
    m_outputLockingSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue GlobalConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_initialAudioGainHasBeenSet)
  {
   payload.WithInteger("initialAudioGain", m_initialAudioGain);

  }

  if(m_inputEndActionHasBeenSet)
  {
   payload.WithString("inputEndAction", GlobalConfigurationInputEndActionMapper::GetNameForGlobalConfigurationInputEndAction(m_inputEndAction));
  }

  if(m_inputLossBehaviorHasBeenSet)
  {
   payload.WithObject("inputLossBehavior", m_inputLossBehavior.Jsonize());

  }

  if(m_outputLockingModeHasBeenSet)
  {
   payload.WithString("outputLockingMode", GlobalConfigurationOutputLockingModeMapper::GetNameForGlobalConfigurationOutputLockingMode(m_outputLockingMode));
  }

  if(m_outputTimingSourceHasBeenSet)
  {
   payload.WithString("outputTimingSource", GlobalConfigurationOutputTimingSourceMapper::GetNameForGlobalConfigurationOutputTimingSource(m_outputTimingSource));
  }

  if(m_supportLowFramerateInputsHasBeenSet)
  {
   payload.WithString("supportLowFramerateInputs", GlobalConfigurationLowFramerateInputsMapper::GetNameForGlobalConfigurationLowFramerateInputs(m_supportLowFramerateInputs));
  }

  if(m_outputLockingSettingsHasBeenSet)
  {
   payload.WithObject("outputLockingSettings", m_outputLockingSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
