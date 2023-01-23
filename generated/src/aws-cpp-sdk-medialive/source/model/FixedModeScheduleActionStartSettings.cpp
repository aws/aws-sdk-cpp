/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/FixedModeScheduleActionStartSettings.h>
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

FixedModeScheduleActionStartSettings::FixedModeScheduleActionStartSettings() : 
    m_timeHasBeenSet(false)
{
}

FixedModeScheduleActionStartSettings::FixedModeScheduleActionStartSettings(JsonView jsonValue) : 
    m_timeHasBeenSet(false)
{
  *this = jsonValue;
}

FixedModeScheduleActionStartSettings& FixedModeScheduleActionStartSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("time"))
  {
    m_time = jsonValue.GetString("time");

    m_timeHasBeenSet = true;
  }

  return *this;
}

JsonValue FixedModeScheduleActionStartSettings::Jsonize() const
{
  JsonValue payload;

  if(m_timeHasBeenSet)
  {
   payload.WithString("time", m_time);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
