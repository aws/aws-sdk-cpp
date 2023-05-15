/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/NotificationSetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

NotificationSetting::NotificationSetting() : 
    m_channel(NotificationChannel::NOT_SET),
    m_channelHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_event(NotificationEvent::NOT_SET),
    m_eventHasBeenSet(false),
    m_threshold(0),
    m_thresholdHasBeenSet(false)
{
}

NotificationSetting::NotificationSetting(JsonView jsonValue) : 
    m_channel(NotificationChannel::NOT_SET),
    m_channelHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_event(NotificationEvent::NOT_SET),
    m_eventHasBeenSet(false),
    m_threshold(0),
    m_thresholdHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationSetting& NotificationSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channel"))
  {
    m_channel = NotificationChannelMapper::GetNotificationChannelForName(jsonValue.GetString("channel"));

    m_channelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("event"))
  {
    m_event = NotificationEventMapper::GetNotificationEventForName(jsonValue.GetString("event"));

    m_eventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("threshold"))
  {
    m_threshold = jsonValue.GetInteger("threshold");

    m_thresholdHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationSetting::Jsonize() const
{
  JsonValue payload;

  if(m_channelHasBeenSet)
  {
   payload.WithString("channel", NotificationChannelMapper::GetNameForNotificationChannel(m_channel));
  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_eventHasBeenSet)
  {
   payload.WithString("event", NotificationEventMapper::GetNameForNotificationEvent(m_event));
  }

  if(m_thresholdHasBeenSet)
  {
   payload.WithInteger("threshold", m_threshold);

  }

  return payload;
}

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
