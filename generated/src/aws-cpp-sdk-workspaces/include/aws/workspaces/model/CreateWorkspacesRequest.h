﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/WorkspaceRequest.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class CreateWorkspacesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API CreateWorkspacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkspaces"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The WorkSpaces to create. You can specify up to 25 WorkSpaces.</p>
     */
    inline const Aws::Vector<WorkspaceRequest>& GetWorkspaces() const{ return m_workspaces; }
    inline bool WorkspacesHasBeenSet() const { return m_workspacesHasBeenSet; }
    inline void SetWorkspaces(const Aws::Vector<WorkspaceRequest>& value) { m_workspacesHasBeenSet = true; m_workspaces = value; }
    inline void SetWorkspaces(Aws::Vector<WorkspaceRequest>&& value) { m_workspacesHasBeenSet = true; m_workspaces = std::move(value); }
    inline CreateWorkspacesRequest& WithWorkspaces(const Aws::Vector<WorkspaceRequest>& value) { SetWorkspaces(value); return *this;}
    inline CreateWorkspacesRequest& WithWorkspaces(Aws::Vector<WorkspaceRequest>&& value) { SetWorkspaces(std::move(value)); return *this;}
    inline CreateWorkspacesRequest& AddWorkspaces(const WorkspaceRequest& value) { m_workspacesHasBeenSet = true; m_workspaces.push_back(value); return *this; }
    inline CreateWorkspacesRequest& AddWorkspaces(WorkspaceRequest&& value) { m_workspacesHasBeenSet = true; m_workspaces.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<WorkspaceRequest> m_workspaces;
    bool m_workspacesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
