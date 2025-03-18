/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/ManagedNotificationEventOverview.h>
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

ManagedNotificationEventOverview::ManagedNotificationEventOverview(JsonView jsonValue)
{
  *this = jsonValue;
}

ManagedNotificationEventOverview& ManagedNotificationEventOverview::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("managedNotificationConfigurationArn"))
  {
    m_managedNotificationConfigurationArn = jsonValue.GetString("managedNotificationConfigurationArn");
    m_managedNotificationConfigurationArnHasBeenSet = true;
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
  if(jsonValue.ValueExists("organizationalUnitId"))
  {
    m_organizationalUnitId = jsonValue.GetString("organizationalUnitId");
    m_organizationalUnitIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregationSummary"))
  {
    m_aggregationSummary = jsonValue.GetObject("aggregationSummary");
    m_aggregationSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregatedNotificationRegions"))
  {
    Aws::Utils::Array<JsonView> aggregatedNotificationRegionsJsonList = jsonValue.GetArray("aggregatedNotificationRegions");
    for(unsigned aggregatedNotificationRegionsIndex = 0; aggregatedNotificationRegionsIndex < aggregatedNotificationRegionsJsonList.GetLength(); ++aggregatedNotificationRegionsIndex)
    {
      m_aggregatedNotificationRegions.push_back(aggregatedNotificationRegionsJsonList[aggregatedNotificationRegionsIndex].AsString());
    }
    m_aggregatedNotificationRegionsHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedNotificationEventOverview::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_managedNotificationConfigurationArnHasBeenSet)
  {
   payload.WithString("managedNotificationConfigurationArn", m_managedNotificationConfigurationArn);

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

  if(m_organizationalUnitIdHasBeenSet)
  {
   payload.WithString("organizationalUnitId", m_organizationalUnitId);

  }

  if(m_aggregationSummaryHasBeenSet)
  {
   payload.WithObject("aggregationSummary", m_aggregationSummary.Jsonize());

  }

  if(m_aggregatedNotificationRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aggregatedNotificationRegionsJsonList(m_aggregatedNotificationRegions.size());
   for(unsigned aggregatedNotificationRegionsIndex = 0; aggregatedNotificationRegionsIndex < aggregatedNotificationRegionsJsonList.GetLength(); ++aggregatedNotificationRegionsIndex)
   {
     aggregatedNotificationRegionsJsonList[aggregatedNotificationRegionsIndex].AsString(m_aggregatedNotificationRegions[aggregatedNotificationRegionsIndex]);
   }
   payload.WithArray("aggregatedNotificationRegions", std::move(aggregatedNotificationRegionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Notifications
} // namespace Aws
