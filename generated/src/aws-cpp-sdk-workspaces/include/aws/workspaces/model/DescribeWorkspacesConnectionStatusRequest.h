/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class DescribeWorkspacesConnectionStatusRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API DescribeWorkspacesConnectionStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeWorkspacesConnectionStatus"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifiers of the WorkSpaces. You can specify up to 25 WorkSpaces.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWorkspaceIds() const { return m_workspaceIds; }
    inline bool WorkspaceIdsHasBeenSet() const { return m_workspaceIdsHasBeenSet; }
    template<typename WorkspaceIdsT = Aws::Vector<Aws::String>>
    void SetWorkspaceIds(WorkspaceIdsT&& value) { m_workspaceIdsHasBeenSet = true; m_workspaceIds = std::forward<WorkspaceIdsT>(value); }
    template<typename WorkspaceIdsT = Aws::Vector<Aws::String>>
    DescribeWorkspacesConnectionStatusRequest& WithWorkspaceIds(WorkspaceIdsT&& value) { SetWorkspaceIds(std::forward<WorkspaceIdsT>(value)); return *this;}
    template<typename WorkspaceIdsT = Aws::String>
    DescribeWorkspacesConnectionStatusRequest& AddWorkspaceIds(WorkspaceIdsT&& value) { m_workspaceIdsHasBeenSet = true; m_workspaceIds.emplace_back(std::forward<WorkspaceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeWorkspacesConnectionStatusRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_workspaceIds;
    bool m_workspaceIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
