/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ScheduleAction.h>
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

ScheduleAction::ScheduleAction() : 
    m_actionNameHasBeenSet(false),
    m_scheduleActionSettingsHasBeenSet(false),
    m_scheduleActionStartSettingsHasBeenSet(false)
{
}

ScheduleAction::ScheduleAction(JsonView jsonValue) : 
    m_actionNameHasBeenSet(false),
    m_scheduleActionSettingsHasBeenSet(false),
    m_scheduleActionStartSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleAction& ScheduleAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionName"))
  {
    m_actionName = jsonValue.GetString("actionName");

    m_actionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduleActionSettings"))
  {
    m_scheduleActionSettings = jsonValue.GetObject("scheduleActionSettings");

    m_scheduleActionSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduleActionStartSettings"))
  {
    m_scheduleActionStartSettings = jsonValue.GetObject("scheduleActionStartSettings");

    m_scheduleActionStartSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduleAction::Jsonize() const
{
  JsonValue payload;

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("actionName", m_actionName);

  }

  if(m_scheduleActionSettingsHasBeenSet)
  {
   payload.WithObject("scheduleActionSettings", m_scheduleActionSettings.Jsonize());

  }

  if(m_scheduleActionStartSettingsHasBeenSet)
  {
   payload.WithObject("scheduleActionStartSettings", m_scheduleActionStartSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
