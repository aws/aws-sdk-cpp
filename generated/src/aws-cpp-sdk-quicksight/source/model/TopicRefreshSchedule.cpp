/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicRefreshSchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

TopicRefreshSchedule::TopicRefreshSchedule() : 
    m_isEnabled(false),
    m_isEnabledHasBeenSet(false),
    m_basedOnSpiceSchedule(false),
    m_basedOnSpiceScheduleHasBeenSet(false),
    m_startingAtHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_repeatAtHasBeenSet(false),
    m_topicScheduleType(TopicScheduleType::NOT_SET),
    m_topicScheduleTypeHasBeenSet(false)
{
}

TopicRefreshSchedule::TopicRefreshSchedule(JsonView jsonValue) : 
    m_isEnabled(false),
    m_isEnabledHasBeenSet(false),
    m_basedOnSpiceSchedule(false),
    m_basedOnSpiceScheduleHasBeenSet(false),
    m_startingAtHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_repeatAtHasBeenSet(false),
    m_topicScheduleType(TopicScheduleType::NOT_SET),
    m_topicScheduleTypeHasBeenSet(false)
{
  *this = jsonValue;
}

TopicRefreshSchedule& TopicRefreshSchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IsEnabled"))
  {
    m_isEnabled = jsonValue.GetBool("IsEnabled");

    m_isEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BasedOnSpiceSchedule"))
  {
    m_basedOnSpiceSchedule = jsonValue.GetBool("BasedOnSpiceSchedule");

    m_basedOnSpiceScheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartingAt"))
  {
    m_startingAt = jsonValue.GetDouble("StartingAt");

    m_startingAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timezone"))
  {
    m_timezone = jsonValue.GetString("Timezone");

    m_timezoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RepeatAt"))
  {
    m_repeatAt = jsonValue.GetString("RepeatAt");

    m_repeatAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TopicScheduleType"))
  {
    m_topicScheduleType = TopicScheduleTypeMapper::GetTopicScheduleTypeForName(jsonValue.GetString("TopicScheduleType"));

    m_topicScheduleTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue TopicRefreshSchedule::Jsonize() const
{
  JsonValue payload;

  if(m_isEnabledHasBeenSet)
  {
   payload.WithBool("IsEnabled", m_isEnabled);

  }

  if(m_basedOnSpiceScheduleHasBeenSet)
  {
   payload.WithBool("BasedOnSpiceSchedule", m_basedOnSpiceSchedule);

  }

  if(m_startingAtHasBeenSet)
  {
   payload.WithDouble("StartingAt", m_startingAt.SecondsWithMSPrecision());
  }

  if(m_timezoneHasBeenSet)
  {
   payload.WithString("Timezone", m_timezone);

  }

  if(m_repeatAtHasBeenSet)
  {
   payload.WithString("RepeatAt", m_repeatAt);

  }

  if(m_topicScheduleTypeHasBeenSet)
  {
   payload.WithString("TopicScheduleType", TopicScheduleTypeMapper::GetNameForTopicScheduleType(m_topicScheduleType));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
