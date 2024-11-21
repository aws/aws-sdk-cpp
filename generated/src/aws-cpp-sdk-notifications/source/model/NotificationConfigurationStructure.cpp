/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/NotificationConfigurationStructure.h>
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

NotificationConfigurationStructure::NotificationConfigurationStructure() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(NotificationConfigurationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_aggregationDuration(AggregationDuration::NOT_SET),
    m_aggregationDurationHasBeenSet(false)
{
}

NotificationConfigurationStructure::NotificationConfigurationStructure(JsonView jsonValue)
  : NotificationConfigurationStructure()
{
  *this = jsonValue;
}

NotificationConfigurationStructure& NotificationConfigurationStructure::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = NotificationConfigurationStatusMapper::GetNotificationConfigurationStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("aggregationDuration"))
  {
    m_aggregationDuration = AggregationDurationMapper::GetAggregationDurationForName(jsonValue.GetString("aggregationDuration"));

    m_aggregationDurationHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationConfigurationStructure::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", NotificationConfigurationStatusMapper::GetNameForNotificationConfigurationStatus(m_status));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_aggregationDurationHasBeenSet)
  {
   payload.WithString("aggregationDuration", AggregationDurationMapper::GetNameForAggregationDuration(m_aggregationDuration));
  }

  return payload;
}

} // namespace Model
} // namespace Notifications
} // namespace Aws
