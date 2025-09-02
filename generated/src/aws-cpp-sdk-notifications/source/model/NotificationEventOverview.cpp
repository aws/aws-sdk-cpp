/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/NotificationEventOverview.h>
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

NotificationEventOverview::NotificationEventOverview(JsonView jsonValue)
{
  *this = jsonValue;
}

NotificationEventOverview& NotificationEventOverview::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notificationConfigurationArn"))
  {
    m_notificationConfigurationArn = jsonValue.GetString("notificationConfigurationArn");
    m_notificationConfigurationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("relatedAccount"))
  {
    m_relatedAccount = jsonValue.GetString("relatedAccount");
    m_relatedAccountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notificationEvent"))
  {
    m_notificationEvent = jsonValue.GetObject("notificationEvent");
    m_notificationEventHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregationEventType"))
  {
    m_aggregationEventType = AggregationEventTypeMapper::GetAggregationEventTypeForName(jsonValue.GetString("aggregationEventType"));
    m_aggregationEventTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregateNotificationEventArn"))
  {
    m_aggregateNotificationEventArn = jsonValue.GetString("aggregateNotificationEventArn");
    m_aggregateNotificationEventArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregationSummary"))
  {
    m_aggregationSummary = jsonValue.GetObject("aggregationSummary");
    m_aggregationSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("organizationalUnitId"))
  {
    m_organizationalUnitId = jsonValue.GetString("organizationalUnitId");
    m_organizationalUnitIdHasBeenSet = true;
  }
  return *this;
}

JsonValue NotificationEventOverview::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_notificationConfigurationArnHasBeenSet)
  {
   payload.WithString("notificationConfigurationArn", m_notificationConfigurationArn);

  }

  if(m_relatedAccountHasBeenSet)
  {
   payload.WithString("relatedAccount", m_relatedAccount);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_notificationEventHasBeenSet)
  {
   payload.WithObject("notificationEvent", m_notificationEvent.Jsonize());

  }

  if(m_aggregationEventTypeHasBeenSet)
  {
   payload.WithString("aggregationEventType", AggregationEventTypeMapper::GetNameForAggregationEventType(m_aggregationEventType));
  }

  if(m_aggregateNotificationEventArnHasBeenSet)
  {
   payload.WithString("aggregateNotificationEventArn", m_aggregateNotificationEventArn);

  }

  if(m_aggregationSummaryHasBeenSet)
  {
   payload.WithObject("aggregationSummary", m_aggregationSummary.Jsonize());

  }

  if(m_organizationalUnitIdHasBeenSet)
  {
   payload.WithString("organizationalUnitId", m_organizationalUnitId);

  }

  return payload;
}

} // namespace Model
} // namespace Notifications
} // namespace Aws
