/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/NotificationHubOverview.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Notifications
{
namespace Model
{

NotificationHubOverview::NotificationHubOverview(JsonView jsonValue)
{
  *this = jsonValue;
}

NotificationHubOverview& NotificationHubOverview::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("notificationHubRegion"))
  {
    m_notificationHubRegion = jsonValue.GetString("notificationHubRegion");
    m_notificationHubRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusSummary"))
  {
    m_statusSummary = jsonValue.GetObject("statusSummary");
    m_statusSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastActivationTime"))
  {
    m_lastActivationTime = jsonValue.GetString("lastActivationTime");
    m_lastActivationTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue NotificationHubOverview::Jsonize() const
{
  JsonValue payload;

  if(m_notificationHubRegionHasBeenSet)
  {
   payload.WithString("notificationHubRegion", m_notificationHubRegion);

  }

  if(m_statusSummaryHasBeenSet)
  {
   payload.WithObject("statusSummary", m_statusSummary.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastActivationTimeHasBeenSet)
  {
   payload.WithString("lastActivationTime", m_lastActivationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Notifications
} // namespace Aws
