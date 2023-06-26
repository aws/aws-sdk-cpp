/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/PendingCreateStandbyWorkspacesRequest.h>
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

PendingCreateStandbyWorkspacesRequest::PendingCreateStandbyWorkspacesRequest() : 
    m_userNameHasBeenSet(false),
    m_directoryIdHasBeenSet(false),
    m_state(WorkspaceState::NOT_SET),
    m_stateHasBeenSet(false),
    m_workspaceIdHasBeenSet(false)
{
}

PendingCreateStandbyWorkspacesRequest::PendingCreateStandbyWorkspacesRequest(JsonView jsonValue) : 
    m_userNameHasBeenSet(false),
    m_directoryIdHasBeenSet(false),
    m_state(WorkspaceState::NOT_SET),
    m_stateHasBeenSet(false),
    m_workspaceIdHasBeenSet(false)
{
  *this = jsonValue;
}

PendingCreateStandbyWorkspacesRequest& PendingCreateStandbyWorkspacesRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserName"))
  {
    m_userName = jsonValue.GetString("UserName");

    m_userNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

    m_directoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = WorkspaceStateMapper::GetWorkspaceStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkspaceId"))
  {
    m_workspaceId = jsonValue.GetString("WorkspaceId");

    m_workspaceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PendingCreateStandbyWorkspacesRequest::Jsonize() const
{
  JsonValue payload;

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", WorkspaceStateMapper::GetNameForWorkspaceState(m_state));
  }

  if(m_workspaceIdHasBeenSet)
  {
   payload.WithString("WorkspaceId", m_workspaceId);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
