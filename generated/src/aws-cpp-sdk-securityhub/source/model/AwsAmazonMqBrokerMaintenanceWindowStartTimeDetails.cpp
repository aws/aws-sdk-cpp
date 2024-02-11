/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails::AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails() : 
    m_dayOfWeekHasBeenSet(false),
    m_timeOfDayHasBeenSet(false),
    m_timeZoneHasBeenSet(false)
{
}

AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails::AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails(JsonView jsonValue) : 
    m_dayOfWeekHasBeenSet(false),
    m_timeOfDayHasBeenSet(false),
    m_timeZoneHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails& AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DayOfWeek"))
  {
    m_dayOfWeek = jsonValue.GetString("DayOfWeek");

    m_dayOfWeekHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeOfDay"))
  {
    m_timeOfDay = jsonValue.GetString("TimeOfDay");

    m_timeOfDayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeZone"))
  {
    m_timeZone = jsonValue.GetString("TimeZone");

    m_timeZoneHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsAmazonMqBrokerMaintenanceWindowStartTimeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_dayOfWeekHasBeenSet)
  {
   payload.WithString("DayOfWeek", m_dayOfWeek);

  }

  if(m_timeOfDayHasBeenSet)
  {
   payload.WithString("TimeOfDay", m_timeOfDay);

  }

  if(m_timeZoneHasBeenSet)
  {
   payload.WithString("TimeZone", m_timeZone);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
