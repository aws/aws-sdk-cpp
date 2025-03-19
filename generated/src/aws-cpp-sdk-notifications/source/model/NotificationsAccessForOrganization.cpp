/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/NotificationsAccessForOrganization.h>
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

NotificationsAccessForOrganization::NotificationsAccessForOrganization(JsonView jsonValue)
{
  *this = jsonValue;
}

NotificationsAccessForOrganization& NotificationsAccessForOrganization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessStatus"))
  {
    m_accessStatus = AccessStatusMapper::GetAccessStatusForName(jsonValue.GetString("accessStatus"));
    m_accessStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue NotificationsAccessForOrganization::Jsonize() const
{
  JsonValue payload;

  if(m_accessStatusHasBeenSet)
  {
   payload.WithString("accessStatus", AccessStatusMapper::GetNameForAccessStatus(m_accessStatus));
  }

  return payload;
}

} // namespace Model
} // namespace Notifications
} // namespace Aws
