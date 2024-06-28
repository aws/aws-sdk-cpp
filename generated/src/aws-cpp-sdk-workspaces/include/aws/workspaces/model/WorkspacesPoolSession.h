/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/AuthenticationType.h>
#include <aws/workspaces/model/SessionConnectionState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/workspaces/model/NetworkAccessConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes a pool session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkspacesPoolSession">AWS
   * API Reference</a></p>
   */
  class WorkspacesPoolSession
  {
  public:
    AWS_WORKSPACES_API WorkspacesPoolSession();
    AWS_WORKSPACES_API WorkspacesPoolSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkspacesPoolSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authentication method. The user is authenticated using a WorkSpaces Pools
     * URL (API) or SAML 2.0 federation (SAML).</p>
     */
    inline const AuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(const AuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline void SetAuthenticationType(AuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }
    inline WorkspacesPoolSession& WithAuthenticationType(const AuthenticationType& value) { SetAuthenticationType(value); return *this;}
    inline WorkspacesPoolSession& WithAuthenticationType(AuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a user is connected to the pool session.</p>
     */
    inline const SessionConnectionState& GetConnectionState() const{ return m_connectionState; }
    inline bool ConnectionStateHasBeenSet() const { return m_connectionStateHasBeenSet; }
    inline void SetConnectionState(const SessionConnectionState& value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }
    inline void SetConnectionState(SessionConnectionState&& value) { m_connectionStateHasBeenSet = true; m_connectionState = std::move(value); }
    inline WorkspacesPoolSession& WithConnectionState(const SessionConnectionState& value) { SetConnectionState(value); return *this;}
    inline WorkspacesPoolSession& WithConnectionState(SessionConnectionState&& value) { SetConnectionState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline WorkspacesPoolSession& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline WorkspacesPoolSession& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline WorkspacesPoolSession& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the instance hosting the session.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline WorkspacesPoolSession& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline WorkspacesPoolSession& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline WorkspacesPoolSession& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the pool.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
    inline void SetPoolId(const Aws::String& value) { m_poolIdHasBeenSet = true; m_poolId = value; }
    inline void SetPoolId(Aws::String&& value) { m_poolIdHasBeenSet = true; m_poolId = std::move(value); }
    inline void SetPoolId(const char* value) { m_poolIdHasBeenSet = true; m_poolId.assign(value); }
    inline WorkspacesPoolSession& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}
    inline WorkspacesPoolSession& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}
    inline WorkspacesPoolSession& WithPoolId(const char* value) { SetPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the pool session ended.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTime() const{ return m_expirationTime; }
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
    inline void SetExpirationTime(const Aws::Utils::DateTime& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = value; }
    inline void SetExpirationTime(Aws::Utils::DateTime&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::move(value); }
    inline WorkspacesPoolSession& WithExpirationTime(const Aws::Utils::DateTime& value) { SetExpirationTime(value); return *this;}
    inline WorkspacesPoolSession& WithExpirationTime(Aws::Utils::DateTime&& value) { SetExpirationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the network details of the pool.</p>
     */
    inline const NetworkAccessConfiguration& GetNetworkAccessConfiguration() const{ return m_networkAccessConfiguration; }
    inline bool NetworkAccessConfigurationHasBeenSet() const { return m_networkAccessConfigurationHasBeenSet; }
    inline void SetNetworkAccessConfiguration(const NetworkAccessConfiguration& value) { m_networkAccessConfigurationHasBeenSet = true; m_networkAccessConfiguration = value; }
    inline void SetNetworkAccessConfiguration(NetworkAccessConfiguration&& value) { m_networkAccessConfigurationHasBeenSet = true; m_networkAccessConfiguration = std::move(value); }
    inline WorkspacesPoolSession& WithNetworkAccessConfiguration(const NetworkAccessConfiguration& value) { SetNetworkAccessConfiguration(value); return *this;}
    inline WorkspacesPoolSession& WithNetworkAccessConfiguration(NetworkAccessConfiguration&& value) { SetNetworkAccessConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the pool sission started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline WorkspacesPoolSession& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline WorkspacesPoolSession& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline WorkspacesPoolSession& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline WorkspacesPoolSession& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline WorkspacesPoolSession& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}
  private:

    AuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    SessionConnectionState m_connectionState;
    bool m_connectionStateHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    Aws::Utils::DateTime m_expirationTime;
    bool m_expirationTimeHasBeenSet = false;

    NetworkAccessConfiguration m_networkAccessConfiguration;
    bool m_networkAccessConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
