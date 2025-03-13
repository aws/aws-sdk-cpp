/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspaceConnectionStatus.h>
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
  class DescribeWorkspacesConnectionStatusResult
  {
  public:
    AWS_WORKSPACES_API DescribeWorkspacesConnectionStatusResult() = default;
    AWS_WORKSPACES_API DescribeWorkspacesConnectionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeWorkspacesConnectionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the connection status of the WorkSpace.</p>
     */
    inline const Aws::Vector<WorkspaceConnectionStatus>& GetWorkspacesConnectionStatus() const { return m_workspacesConnectionStatus; }
    template<typename WorkspacesConnectionStatusT = Aws::Vector<WorkspaceConnectionStatus>>
    void SetWorkspacesConnectionStatus(WorkspacesConnectionStatusT&& value) { m_workspacesConnectionStatusHasBeenSet = true; m_workspacesConnectionStatus = std::forward<WorkspacesConnectionStatusT>(value); }
    template<typename WorkspacesConnectionStatusT = Aws::Vector<WorkspaceConnectionStatus>>
    DescribeWorkspacesConnectionStatusResult& WithWorkspacesConnectionStatus(WorkspacesConnectionStatusT&& value) { SetWorkspacesConnectionStatus(std::forward<WorkspacesConnectionStatusT>(value)); return *this;}
    template<typename WorkspacesConnectionStatusT = WorkspaceConnectionStatus>
    DescribeWorkspacesConnectionStatusResult& AddWorkspacesConnectionStatus(WorkspacesConnectionStatusT&& value) { m_workspacesConnectionStatusHasBeenSet = true; m_workspacesConnectionStatus.emplace_back(std::forward<WorkspacesConnectionStatusT>(value)); return *this; }
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
    DescribeWorkspacesConnectionStatusResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeWorkspacesConnectionStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<WorkspaceConnectionStatus> m_workspacesConnectionStatus;
    bool m_workspacesConnectionStatusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
