/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/TimeoutSettings.h>
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

TimeoutSettings::TimeoutSettings() : 
    m_disconnectTimeoutInSeconds(0),
    m_disconnectTimeoutInSecondsHasBeenSet(false),
    m_idleDisconnectTimeoutInSeconds(0),
    m_idleDisconnectTimeoutInSecondsHasBeenSet(false),
    m_maxUserDurationInSeconds(0),
    m_maxUserDurationInSecondsHasBeenSet(false)
{
}

TimeoutSettings::TimeoutSettings(JsonView jsonValue)
  : TimeoutSettings()
{
  *this = jsonValue;
}

TimeoutSettings& TimeoutSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DisconnectTimeoutInSeconds"))
  {
    m_disconnectTimeoutInSeconds = jsonValue.GetInteger("DisconnectTimeoutInSeconds");

    m_disconnectTimeoutInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdleDisconnectTimeoutInSeconds"))
  {
    m_idleDisconnectTimeoutInSeconds = jsonValue.GetInteger("IdleDisconnectTimeoutInSeconds");

    m_idleDisconnectTimeoutInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxUserDurationInSeconds"))
  {
    m_maxUserDurationInSeconds = jsonValue.GetInteger("MaxUserDurationInSeconds");

    m_maxUserDurationInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeoutSettings::Jsonize() const
{
  JsonValue payload;

  if(m_disconnectTimeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("DisconnectTimeoutInSeconds", m_disconnectTimeoutInSeconds);

  }

  if(m_idleDisconnectTimeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("IdleDisconnectTimeoutInSeconds", m_idleDisconnectTimeoutInSeconds);

  }

  if(m_maxUserDurationInSecondsHasBeenSet)
  {
   payload.WithInteger("MaxUserDurationInSeconds", m_maxUserDurationInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
