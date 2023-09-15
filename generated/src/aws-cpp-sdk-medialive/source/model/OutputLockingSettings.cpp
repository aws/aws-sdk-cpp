/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/OutputLockingSettings.h>
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

OutputLockingSettings::OutputLockingSettings() : 
    m_epochLockingSettingsHasBeenSet(false),
    m_pipelineLockingSettingsHasBeenSet(false)
{
}

OutputLockingSettings::OutputLockingSettings(JsonView jsonValue) : 
    m_epochLockingSettingsHasBeenSet(false),
    m_pipelineLockingSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

OutputLockingSettings& OutputLockingSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("epochLockingSettings"))
  {
    m_epochLockingSettings = jsonValue.GetObject("epochLockingSettings");

    m_epochLockingSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelineLockingSettings"))
  {
    m_pipelineLockingSettings = jsonValue.GetObject("pipelineLockingSettings");

    m_pipelineLockingSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputLockingSettings::Jsonize() const
{
  JsonValue payload;

  if(m_epochLockingSettingsHasBeenSet)
  {
   payload.WithObject("epochLockingSettings", m_epochLockingSettings.Jsonize());

  }

  if(m_pipelineLockingSettingsHasBeenSet)
  {
   payload.WithObject("pipelineLockingSettings", m_pipelineLockingSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
