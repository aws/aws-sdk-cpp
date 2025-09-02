/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/MemberAccount.h>
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

MemberAccount::MemberAccount(JsonView jsonValue)
{
  *this = jsonValue;
}

MemberAccount& MemberAccount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("notificationConfigurationArn"))
  {
    m_notificationConfigurationArn = jsonValue.GetString("notificationConfigurationArn");
    m_notificationConfigurationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = MemberAccountNotificationConfigurationStatusMapper::GetMemberAccountNotificationConfigurationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("organizationalUnitId"))
  {
    m_organizationalUnitId = jsonValue.GetString("organizationalUnitId");
    m_organizationalUnitIdHasBeenSet = true;
  }
  return *this;
}

JsonValue MemberAccount::Jsonize() const
{
  JsonValue payload;

  if(m_notificationConfigurationArnHasBeenSet)
  {
   payload.WithString("notificationConfigurationArn", m_notificationConfigurationArn);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", MemberAccountNotificationConfigurationStatusMapper::GetNameForMemberAccountNotificationConfigurationStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

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
