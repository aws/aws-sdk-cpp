/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/Workspace.h>
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
  class DescribeWorkspacesResult
  {
  public:
    AWS_WORKSPACES_API DescribeWorkspacesResult() = default;
    AWS_WORKSPACES_API DescribeWorkspacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeWorkspacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the WorkSpaces.</p> <p>Because <a>CreateWorkspaces</a> is
     * an asynchronous operation, some of the returned information could be
     * incomplete.</p>
     */
    inline const Aws::Vector<Workspace>& GetWorkspaces() const { return m_workspaces; }
    template<typename WorkspacesT = Aws::Vector<Workspace>>
    void SetWorkspaces(WorkspacesT&& value) { m_workspacesHasBeenSet = true; m_workspaces = std::forward<WorkspacesT>(value); }
    template<typename WorkspacesT = Aws::Vector<Workspace>>
    DescribeWorkspacesResult& WithWorkspaces(WorkspacesT&& value) { SetWorkspaces(std::forward<WorkspacesT>(value)); return *this;}
    template<typename WorkspacesT = Workspace>
    DescribeWorkspacesResult& AddWorkspaces(WorkspacesT&& value) { m_workspacesHasBeenSet = true; m_workspaces.emplace_back(std::forward<WorkspacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeWorkspacesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeWorkspacesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Workspace> m_workspaces;
    bool m_workspacesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
