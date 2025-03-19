/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/ManagedNotificationChildEventOverview.h>
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

ManagedNotificationChildEventOverview::ManagedNotificationChildEventOverview(JsonView jsonValue)
{
  *this = jsonValue;
}

ManagedNotificationChildEventOverview& ManagedNotificationChildEventOverview::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("childEvent"))
  {
    m_childEvent = jsonValue.GetObject("childEvent");
    m_childEventHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregateManagedNotificationEventArn"))
  {
    m_aggregateManagedNotificationEventArn = jsonValue.GetString("aggregateManagedNotificationEventArn");
    m_aggregateManagedNotificationEventArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("organizationalUnitId"))
  {
    m_organizationalUnitId = jsonValue.GetString("organizationalUnitId");
    m_organizationalUnitIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedNotificationChildEventOverview::Jsonize() const
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

  if(m_childEventHasBeenSet)
  {
   payload.WithObject("childEvent", m_childEvent.Jsonize());

  }

  if(m_aggregateManagedNotificationEventArnHasBeenSet)
  {
   payload.WithString("aggregateManagedNotificationEventArn", m_aggregateManagedNotificationEventArn);

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
