/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/HandOffTime.h>
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

HandOffTime::HandOffTime() : 
    m_hourOfDay(0),
    m_hourOfDayHasBeenSet(false),
    m_minuteOfHour(0),
    m_minuteOfHourHasBeenSet(false)
{
}

HandOffTime::HandOffTime(JsonView jsonValue) : 
    m_hourOfDay(0),
    m_hourOfDayHasBeenSet(false),
    m_minuteOfHour(0),
    m_minuteOfHourHasBeenSet(false)
{
  *this = jsonValue;
}

HandOffTime& HandOffTime::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HourOfDay"))
  {
    m_hourOfDay = jsonValue.GetInteger("HourOfDay");

    m_hourOfDayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinuteOfHour"))
  {
    m_minuteOfHour = jsonValue.GetInteger("MinuteOfHour");

    m_minuteOfHourHasBeenSet = true;
  }

  return *this;
}

JsonValue HandOffTime::Jsonize() const
{
  JsonValue payload;

  if(m_hourOfDayHasBeenSet)
  {
   payload.WithInteger("HourOfDay", m_hourOfDay);

  }

  if(m_minuteOfHourHasBeenSet)
  {
   payload.WithInteger("MinuteOfHour", m_minuteOfHour);

  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
