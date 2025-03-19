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
  class DescribeWorkspacesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API DescribeWorkspacesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeWorkspaces"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifiers of the WorkSpaces. You cannot combine this parameter with any
     * other filter.</p> <p>Because the <a>CreateWorkspaces</a> operation is
     * asynchronous, the identifier it returns is not immediately available. If you
     * immediately call <a>DescribeWorkspaces</a> with this identifier, no information
     * is returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWorkspaceIds() const { return m_workspaceIds; }
    inline bool WorkspaceIdsHasBeenSet() const { return m_workspaceIdsHasBeenSet; }
    template<typename WorkspaceIdsT = Aws::Vector<Aws::String>>
    void SetWorkspaceIds(WorkspaceIdsT&& value) { m_workspaceIdsHasBeenSet = true; m_workspaceIds = std::forward<WorkspaceIdsT>(value); }
    template<typename WorkspaceIdsT = Aws::Vector<Aws::String>>
    DescribeWorkspacesRequest& WithWorkspaceIds(WorkspaceIdsT&& value) { SetWorkspaceIds(std::forward<WorkspaceIdsT>(value)); return *this;}
    template<typename WorkspaceIdsT = Aws::String>
    DescribeWorkspacesRequest& AddWorkspaceIds(WorkspaceIdsT&& value) { m_workspaceIdsHasBeenSet = true; m_workspaceIds.emplace_back(std::forward<WorkspaceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the directory. In addition, you can optionally specify a
     * specific directory user (see <code>UserName</code>). You cannot combine this
     * parameter with any other filter.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    DescribeWorkspacesRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the directory user. You must specify this parameter with
     * <code>DirectoryId</code>.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    DescribeWorkspacesRequest& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bundle. All WorkSpaces that are created from this
     * bundle are retrieved. You cannot combine this parameter with any other
     * filter.</p>
     */
    inline const Aws::String& GetBundleId() const { return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    template<typename BundleIdT = Aws::String>
    void SetBundleId(BundleIdT&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::forward<BundleIdT>(value); }
    template<typename BundleIdT = Aws::String>
    DescribeWorkspacesRequest& WithBundleId(BundleIdT&& value) { SetBundleId(std::forward<BundleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeWorkspacesRequest& WithLimit(int value) { SetLimit(value); return *this;}
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
    DescribeWorkspacesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user-decoupled WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
    inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
    template<typename WorkspaceNameT = Aws::String>
    void SetWorkspaceName(WorkspaceNameT&& value) { m_workspaceNameHasBeenSet = true; m_workspaceName = std::forward<WorkspaceNameT>(value); }
    template<typename WorkspaceNameT = Aws::String>
    DescribeWorkspacesRequest& WithWorkspaceName(WorkspaceNameT&& value) { SetWorkspaceName(std::forward<WorkspaceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_workspaceIds;
    bool m_workspaceIdsHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_workspaceName;
    bool m_workspaceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
