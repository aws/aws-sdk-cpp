﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspaceState.h>
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
   * <p>Information about the standby WorkSpace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/PendingCreateStandbyWorkspacesRequest">AWS
   * API Reference</a></p>
   */
  class PendingCreateStandbyWorkspacesRequest
  {
  public:
    AWS_WORKSPACES_API PendingCreateStandbyWorkspacesRequest();
    AWS_WORKSPACES_API PendingCreateStandbyWorkspacesRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API PendingCreateStandbyWorkspacesRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the standby WorkSpace that was created.</p> <p>Because this
     * operation is asynchronous, the identifier returned is not immediately available
     * for use with other operations. For example, if you call <a
     * href="https://docs.aws.amazon.com/workspaces/latest/api/API_DescribeWorkspaces.html">
     * DescribeWorkspaces</a> before the WorkSpace is created, the information returned
     * can be incomplete. </p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }
    inline PendingCreateStandbyWorkspacesRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline PendingCreateStandbyWorkspacesRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline PendingCreateStandbyWorkspacesRequest& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the directory for the standby WorkSpace.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline PendingCreateStandbyWorkspacesRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline PendingCreateStandbyWorkspacesRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline PendingCreateStandbyWorkspacesRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operational state of the standby WorkSpace.</p>
     */
    inline const WorkspaceState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const WorkspaceState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(WorkspaceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline PendingCreateStandbyWorkspacesRequest& WithState(const WorkspaceState& value) { SetState(value); return *this;}
    inline PendingCreateStandbyWorkspacesRequest& WithState(WorkspaceState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the standby WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }
    inline PendingCreateStandbyWorkspacesRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline PendingCreateStandbyWorkspacesRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline PendingCreateStandbyWorkspacesRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}
  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    WorkspaceState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
