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
    AWS_WORKSPACES_API WorkspaceConnectionStatus() = default;
    AWS_WORKSPACES_API WorkspaceConnectionStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkspaceConnectionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    WorkspaceConnectionStatus& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection state of the WorkSpace. The connection state is unknown if the
     * WorkSpace is stopped.</p>
     */
    inline ConnectionState GetConnectionState() const { return m_connectionState; }
    inline bool ConnectionStateHasBeenSet() const { return m_connectionStateHasBeenSet; }
    inline void SetConnectionState(ConnectionState value) { m_connectionStateHasBeenSet = true; m_connectionState = value; }
    inline WorkspaceConnectionStatus& WithConnectionState(ConnectionState value) { SetConnectionState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the connection status check.</p>
     */
    inline const Aws::Utils::DateTime& GetConnectionStateCheckTimestamp() const { return m_connectionStateCheckTimestamp; }
    inline bool ConnectionStateCheckTimestampHasBeenSet() const { return m_connectionStateCheckTimestampHasBeenSet; }
    template<typename ConnectionStateCheckTimestampT = Aws::Utils::DateTime>
    void SetConnectionStateCheckTimestamp(ConnectionStateCheckTimestampT&& value) { m_connectionStateCheckTimestampHasBeenSet = true; m_connectionStateCheckTimestamp = std::forward<ConnectionStateCheckTimestampT>(value); }
    template<typename ConnectionStateCheckTimestampT = Aws::Utils::DateTime>
    WorkspaceConnectionStatus& WithConnectionStateCheckTimestamp(ConnectionStateCheckTimestampT&& value) { SetConnectionStateCheckTimestamp(std::forward<ConnectionStateCheckTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last known user connection.</p>
     */
    inline const Aws::Utils::DateTime& GetLastKnownUserConnectionTimestamp() const { return m_lastKnownUserConnectionTimestamp; }
    inline bool LastKnownUserConnectionTimestampHasBeenSet() const { return m_lastKnownUserConnectionTimestampHasBeenSet; }
    template<typename LastKnownUserConnectionTimestampT = Aws::Utils::DateTime>
    void SetLastKnownUserConnectionTimestamp(LastKnownUserConnectionTimestampT&& value) { m_lastKnownUserConnectionTimestampHasBeenSet = true; m_lastKnownUserConnectionTimestamp = std::forward<LastKnownUserConnectionTimestampT>(value); }
    template<typename LastKnownUserConnectionTimestampT = Aws::Utils::DateTime>
    WorkspaceConnectionStatus& WithLastKnownUserConnectionTimestamp(LastKnownUserConnectionTimestampT&& value) { SetLastKnownUserConnectionTimestamp(std::forward<LastKnownUserConnectionTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    ConnectionState m_connectionState{ConnectionState::NOT_SET};
    bool m_connectionStateHasBeenSet = false;

    Aws::Utils::DateTime m_connectionStateCheckTimestamp{};
    bool m_connectionStateCheckTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastKnownUserConnectionTimestamp{};
    bool m_lastKnownUserConnectionTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
