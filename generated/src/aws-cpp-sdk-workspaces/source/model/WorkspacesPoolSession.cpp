/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkspacesPoolSession.h>
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

WorkspacesPoolSession::WorkspacesPoolSession(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkspacesPoolSession& WorkspacesPoolSession::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuthenticationType"))
  {
    m_authenticationType = AuthenticationTypeMapper::GetAuthenticationTypeForName(jsonValue.GetString("AuthenticationType"));
    m_authenticationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionState"))
  {
    m_connectionState = SessionConnectionStateMapper::GetSessionConnectionStateForName(jsonValue.GetString("ConnectionState"));
    m_connectionStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SessionId"))
  {
    m_sessionId = jsonValue.GetString("SessionId");
    m_sessionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");
    m_instanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PoolId"))
  {
    m_poolId = jsonValue.GetString("PoolId");
    m_poolIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExpirationTime"))
  {
    m_expirationTime = jsonValue.GetDouble("ExpirationTime");
    m_expirationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NetworkAccessConfiguration"))
  {
    m_networkAccessConfiguration = jsonValue.GetObject("NetworkAccessConfiguration");
    m_networkAccessConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");
    m_userIdHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkspacesPoolSession::Jsonize() const
{
  JsonValue payload;

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("AuthenticationType", AuthenticationTypeMapper::GetNameForAuthenticationType(m_authenticationType));
  }

  if(m_connectionStateHasBeenSet)
  {
   payload.WithString("ConnectionState", SessionConnectionStateMapper::GetNameForSessionConnectionState(m_connectionState));
  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("SessionId", m_sessionId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_poolIdHasBeenSet)
  {
   payload.WithString("PoolId", m_poolId);

  }

  if(m_expirationTimeHasBeenSet)
  {
   payload.WithDouble("ExpirationTime", m_expirationTime.SecondsWithMSPrecision());
  }

  if(m_networkAccessConfigurationHasBeenSet)
  {
   payload.WithObject("NetworkAccessConfiguration", m_networkAccessConfiguration.Jsonize());

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
