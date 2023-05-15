/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/NotificationSettingKey.h>
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

NotificationSettingKey::NotificationSettingKey() : 
    m_channel(NotificationChannel::NOT_SET),
    m_channelHasBeenSet(false),
    m_event(NotificationEvent::NOT_SET),
    m_eventHasBeenSet(false)
{
}

NotificationSettingKey::NotificationSettingKey(JsonView jsonValue) : 
    m_channel(NotificationChannel::NOT_SET),
    m_channelHasBeenSet(false),
    m_event(NotificationEvent::NOT_SET),
    m_eventHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationSettingKey& NotificationSettingKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channel"))
  {
    m_channel = NotificationChannelMapper::GetNotificationChannelForName(jsonValue.GetString("channel"));

    m_channelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("event"))
  {
    m_event = NotificationEventMapper::GetNotificationEventForName(jsonValue.GetString("event"));

    m_eventHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationSettingKey::Jsonize() const
{
  JsonValue payload;

  if(m_channelHasBeenSet)
  {
   payload.WithString("channel", NotificationChannelMapper::GetNameForNotificationChannel(m_channel));
  }

  if(m_eventHasBeenSet)
  {
   payload.WithString("event", NotificationEventMapper::GetNameForNotificationEvent(m_event));
  }

  return payload;
}

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
