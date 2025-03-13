/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspacesPool.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{
  class DescribeWorkspacesPoolsResult
  {
  public:
    AWS_WORKSPACES_API DescribeWorkspacesPoolsResult() = default;
    AWS_WORKSPACES_API DescribeWorkspacesPoolsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeWorkspacesPoolsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the WorkSpaces Pools.</p>
     */
    inline const Aws::Vector<WorkspacesPool>& GetWorkspacesPools() const { return m_workspacesPools; }
    template<typename WorkspacesPoolsT = Aws::Vector<WorkspacesPool>>
    void SetWorkspacesPools(WorkspacesPoolsT&& value) { m_workspacesPoolsHasBeenSet = true; m_workspacesPools = std::forward<WorkspacesPoolsT>(value); }
    template<typename WorkspacesPoolsT = Aws::Vector<WorkspacesPool>>
    DescribeWorkspacesPoolsResult& WithWorkspacesPools(WorkspacesPoolsT&& value) { SetWorkspacesPools(std::forward<WorkspacesPoolsT>(value)); return *this;}
    template<typename WorkspacesPoolsT = WorkspacesPool>
    DescribeWorkspacesPoolsResult& AddWorkspacesPools(WorkspacesPoolsT&& value) { m_workspacesPoolsHasBeenSet = true; m_workspacesPools.emplace_back(std::forward<WorkspacesPoolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeWorkspacesPoolsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeWorkspacesPoolsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<WorkspacesPool> m_workspacesPools;
    bool m_workspacesPoolsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
