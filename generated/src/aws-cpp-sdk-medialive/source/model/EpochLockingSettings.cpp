/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/EpochLockingSettings.h>
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

EpochLockingSettings::EpochLockingSettings() : 
    m_customEpochHasBeenSet(false),
    m_jamSyncTimeHasBeenSet(false)
{
}

EpochLockingSettings::EpochLockingSettings(JsonView jsonValue) : 
    m_customEpochHasBeenSet(false),
    m_jamSyncTimeHasBeenSet(false)
{
  *this = jsonValue;
}

EpochLockingSettings& EpochLockingSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customEpoch"))
  {
    m_customEpoch = jsonValue.GetString("customEpoch");

    m_customEpochHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jamSyncTime"))
  {
    m_jamSyncTime = jsonValue.GetString("jamSyncTime");

    m_jamSyncTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue EpochLockingSettings::Jsonize() const
{
  JsonValue payload;

  if(m_customEpochHasBeenSet)
  {
   payload.WithString("customEpoch", m_customEpoch);

  }

  if(m_jamSyncTimeHasBeenSet)
  {
   payload.WithString("jamSyncTime", m_jamSyncTime);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
