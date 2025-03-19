/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/CapacityStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

CapacityStatus::CapacityStatus(JsonView jsonValue)
{
  *this = jsonValue;
}

CapacityStatus& CapacityStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AvailableUserSessions"))
  {
    m_availableUserSessions = jsonValue.GetInteger("AvailableUserSessions");
    m_availableUserSessionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DesiredUserSessions"))
  {
    m_desiredUserSessions = jsonValue.GetInteger("DesiredUserSessions");
    m_desiredUserSessionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActualUserSessions"))
  {
    m_actualUserSessions = jsonValue.GetInteger("ActualUserSessions");
    m_actualUserSessionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActiveUserSessions"))
  {
    m_activeUserSessions = jsonValue.GetInteger("ActiveUserSessions");
    m_activeUserSessionsHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityStatus::Jsonize() const
{
  JsonValue payload;

  if(m_availableUserSessionsHasBeenSet)
  {
   payload.WithInteger("AvailableUserSessions", m_availableUserSessions);

  }

  if(m_desiredUserSessionsHasBeenSet)
  {
   payload.WithInteger("DesiredUserSessions", m_desiredUserSessions);

  }

  if(m_actualUserSessionsHasBeenSet)
  {
   payload.WithInteger("ActualUserSessions", m_actualUserSessions);

  }

  if(m_activeUserSessionsHasBeenSet)
  {
   payload.WithInteger("ActiveUserSessions", m_activeUserSessions);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
