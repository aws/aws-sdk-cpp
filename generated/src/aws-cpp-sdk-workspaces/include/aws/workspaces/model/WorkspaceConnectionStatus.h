/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/ConnectionState.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Describes the connection status of a WorkSpace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkspaceConnectionStatus">AWS
   * API Reference</a></p>
   */
  class WorkspaceConnectionStatus
  {
  public:
    AWS_WORKSPACES_API WorkspaceConnectionStatus();
    AWS_WORKSPACES_API WorkspaceConnectionStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkspaceConnectionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }
    inline WorkspaceConnectionStatus& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline WorkspaceConnectionStatus& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline WorkspaceConnectionStatus& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection state of the WorkSpace. The connection state is unknown if the
     * WorkSpace is stopped.</p>
     */
    inline const ConnectionState& GetConnectionState() const{ return m_connectionState; }
    inline bool ConnectionStateHasBeenSet() const { return m_connectionStateHasBeenSet; }
    inline void SetConnectionState(const ConnectionState& value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }
    inline void SetConnectionState(ConnectionState&& value) { m_connectionStateHasBeenSet = true; m_connectionState = std::move(value); }
    inline WorkspaceConnectionStatus& WithConnectionState(const ConnectionState& value) { SetConnectionState(value); return *this;}
    inline WorkspaceConnectionStatus& WithConnectionState(ConnectionState&& value) { SetConnectionState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the connection status check.</p>
     */
    inline const Aws::Utils::DateTime& GetConnectionStateCheckTimestamp() const{ return m_connectionStateCheckTimestamp; }
    inline bool ConnectionStateCheckTimestampHasBeenSet() const { return m_connectionStateCheckTimestampHasBeenSet; }
    inline void SetConnectionStateCheckTimestamp(const Aws::Utils::DateTime& value) { m_connectionStateCheckTimestampHasBeenSet = true; m_connectionStateCheckTimestamp = value; }
    inline void SetConnectionStateCheckTimestamp(Aws::Utils::DateTime&& value) { m_connectionStateCheckTimestampHasBeenSet = true; m_connectionStateCheckTimestamp = std::move(value); }
    inline WorkspaceConnectionStatus& WithConnectionStateCheckTimestamp(const Aws::Utils::DateTime& value) { SetConnectionStateCheckTimestamp(value); return *this;}
    inline WorkspaceConnectionStatus& WithConnectionStateCheckTimestamp(Aws::Utils::DateTime&& value) { SetConnectionStateCheckTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last known user connection.</p>
     */
    inline const Aws::Utils::DateTime& GetLastKnownUserConnectionTimestamp() const{ return m_lastKnownUserConnectionTimestamp; }
    inline bool LastKnownUserConnectionTimestampHasBeenSet() const { return m_lastKnownUserConnectionTimestampHasBeenSet; }
    inline void SetLastKnownUserConnectionTimestamp(const Aws::Utils::DateTime& value) { m_lastKnownUserConnectionTimestampHasBeenSet = true; m_lastKnownUserConnectionTimestamp = value; }
    inline void SetLastKnownUserConnectionTimestamp(Aws::Utils::DateTime&& value) { m_lastKnownUserConnectionTimestampHasBeenSet = true; m_lastKnownUserConnectionTimestamp = std::move(value); }
    inline WorkspaceConnectionStatus& WithLastKnownUserConnectionTimestamp(const Aws::Utils::DateTime& value) { SetLastKnownUserConnectionTimestamp(value); return *this;}
    inline WorkspaceConnectionStatus& WithLastKnownUserConnectionTimestamp(Aws::Utils::DateTime&& value) { SetLastKnownUserConnectionTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    ConnectionState m_connectionState;
    bool m_connectionStateHasBeenSet = false;

    Aws::Utils::DateTime m_connectionStateCheckTimestamp;
    bool m_connectionStateCheckTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastKnownUserConnectionTimestamp;
    bool m_lastKnownUserConnectionTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
