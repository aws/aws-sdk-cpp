/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/SessionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

SessionSummary::SessionSummary() : 
    m_endTimeHasBeenSet(false),
    m_portalArnHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(SessionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

SessionSummary::SessionSummary(JsonView jsonValue)
  : SessionSummary()
{
  *this = jsonValue;
}

SessionSummary& SessionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("portalArn"))
  {
    m_portalArn = jsonValue.GetString("portalArn");

    m_portalArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");

    m_sessionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SessionStatusMapper::GetSessionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("username"))
  {
    m_username = jsonValue.GetString("username");

    m_usernameHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_portalArnHasBeenSet)
  {
   payload.WithString("portalArn", m_portalArn);

  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SessionStatusMapper::GetNameForSessionStatus(m_status));
  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
