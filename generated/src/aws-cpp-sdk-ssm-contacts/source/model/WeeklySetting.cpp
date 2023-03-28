/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/WeeklySetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

WeeklySetting::WeeklySetting() : 
    m_dayOfWeek(DayOfWeek::NOT_SET),
    m_dayOfWeekHasBeenSet(false),
    m_handOffTimeHasBeenSet(false)
{
}

WeeklySetting::WeeklySetting(JsonView jsonValue) : 
    m_dayOfWeek(DayOfWeek::NOT_SET),
    m_dayOfWeekHasBeenSet(false),
    m_handOffTimeHasBeenSet(false)
{
  *this = jsonValue;
}

WeeklySetting& WeeklySetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DayOfWeek"))
  {
    m_dayOfWeek = DayOfWeekMapper::GetDayOfWeekForName(jsonValue.GetString("DayOfWeek"));

    m_dayOfWeekHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HandOffTime"))
  {
    m_handOffTime = jsonValue.GetObject("HandOffTime");

    m_handOffTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue WeeklySetting::Jsonize() const
{
  JsonValue payload;

  if(m_dayOfWeekHasBeenSet)
  {
   payload.WithString("DayOfWeek", DayOfWeekMapper::GetNameForDayOfWeek(m_dayOfWeek));
  }

  if(m_handOffTimeHasBeenSet)
  {
   payload.WithObject("HandOffTime", m_handOffTime.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
