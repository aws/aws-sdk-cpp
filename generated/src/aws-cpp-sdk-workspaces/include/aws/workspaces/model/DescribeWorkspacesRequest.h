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
    AWS_WORKSPACES_API DescribeWorkspacesRequest();

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
    inline const Aws::Vector<Aws::String>& GetWorkspaceIds() const{ return m_workspaceIds; }
    inline bool WorkspaceIdsHasBeenSet() const { return m_workspaceIdsHasBeenSet; }
    inline void SetWorkspaceIds(const Aws::Vector<Aws::String>& value) { m_workspaceIdsHasBeenSet = true; m_workspaceIds = value; }
    inline void SetWorkspaceIds(Aws::Vector<Aws::String>&& value) { m_workspaceIdsHasBeenSet = true; m_workspaceIds = std::move(value); }
    inline DescribeWorkspacesRequest& WithWorkspaceIds(const Aws::Vector<Aws::String>& value) { SetWorkspaceIds(value); return *this;}
    inline DescribeWorkspacesRequest& WithWorkspaceIds(Aws::Vector<Aws::String>&& value) { SetWorkspaceIds(std::move(value)); return *this;}
    inline DescribeWorkspacesRequest& AddWorkspaceIds(const Aws::String& value) { m_workspaceIdsHasBeenSet = true; m_workspaceIds.push_back(value); return *this; }
    inline DescribeWorkspacesRequest& AddWorkspaceIds(Aws::String&& value) { m_workspaceIdsHasBeenSet = true; m_workspaceIds.push_back(std::move(value)); return *this; }
    inline DescribeWorkspacesRequest& AddWorkspaceIds(const char* value) { m_workspaceIdsHasBeenSet = true; m_workspaceIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the directory. In addition, you can optionally specify a
     * specific directory user (see <code>UserName</code>). You cannot combine this
     * parameter with any other filter.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline DescribeWorkspacesRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline DescribeWorkspacesRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline DescribeWorkspacesRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the directory user. You must specify this parameter with
     * <code>DirectoryId</code>.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }
    inline DescribeWorkspacesRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline DescribeWorkspacesRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline DescribeWorkspacesRequest& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bundle. All WorkSpaces that are created from this
     * bundle are retrieved. You cannot combine this parameter with any other
     * filter.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }
    inline DescribeWorkspacesRequest& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}
    inline DescribeWorkspacesRequest& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}
    inline DescribeWorkspacesRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeWorkspacesRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeWorkspacesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeWorkspacesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeWorkspacesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user-decoupled WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceName() const{ return m_workspaceName; }
    inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
    inline void SetWorkspaceName(const Aws::String& value) { m_workspaceNameHasBeenSet = true; m_workspaceName = value; }
    inline void SetWorkspaceName(Aws::String&& value) { m_workspaceNameHasBeenSet = true; m_workspaceName = std::move(value); }
    inline void SetWorkspaceName(const char* value) { m_workspaceNameHasBeenSet = true; m_workspaceName.assign(value); }
    inline DescribeWorkspacesRequest& WithWorkspaceName(const Aws::String& value) { SetWorkspaceName(value); return *this;}
    inline DescribeWorkspacesRequest& WithWorkspaceName(Aws::String&& value) { SetWorkspaceName(std::move(value)); return *this;}
    inline DescribeWorkspacesRequest& WithWorkspaceName(const char* value) { SetWorkspaceName(value); return *this;}
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

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_workspaceName;
    bool m_workspaceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
