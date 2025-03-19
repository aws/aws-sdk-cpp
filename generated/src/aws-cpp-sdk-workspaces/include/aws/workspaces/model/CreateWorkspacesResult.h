/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/FailedCreateWorkspaceRequest.h>
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
  class CreateWorkspacesResult
  {
  public:
    AWS_WORKSPACES_API CreateWorkspacesResult() = default;
    AWS_WORKSPACES_API CreateWorkspacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API CreateWorkspacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the WorkSpaces that could not be created.</p>
     */
    inline const Aws::Vector<FailedCreateWorkspaceRequest>& GetFailedRequests() const { return m_failedRequests; }
    template<typename FailedRequestsT = Aws::Vector<FailedCreateWorkspaceRequest>>
    void SetFailedRequests(FailedRequestsT&& value) { m_failedRequestsHasBeenSet = true; m_failedRequests = std::forward<FailedRequestsT>(value); }
    template<typename FailedRequestsT = Aws::Vector<FailedCreateWorkspaceRequest>>
    CreateWorkspacesResult& WithFailedRequests(FailedRequestsT&& value) { SetFailedRequests(std::forward<FailedRequestsT>(value)); return *this;}
    template<typename FailedRequestsT = FailedCreateWorkspaceRequest>
    CreateWorkspacesResult& AddFailedRequests(FailedRequestsT&& value) { m_failedRequestsHasBeenSet = true; m_failedRequests.emplace_back(std::forward<FailedRequestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the WorkSpaces that were created.</p> <p>Because this
     * operation is asynchronous, the identifier returned is not immediately available
     * for use with other operations. For example, if you call
     * <a>DescribeWorkspaces</a> before the WorkSpace is created, the information
     * returned can be incomplete.</p>
     */
    inline const Aws::Vector<Workspace>& GetPendingRequests() const { return m_pendingRequests; }
    template<typename PendingRequestsT = Aws::Vector<Workspace>>
    void SetPendingRequests(PendingRequestsT&& value) { m_pendingRequestsHasBeenSet = true; m_pendingRequests = std::forward<PendingRequestsT>(value); }
    template<typename PendingRequestsT = Aws::Vector<Workspace>>
    CreateWorkspacesResult& WithPendingRequests(PendingRequestsT&& value) { SetPendingRequests(std::forward<PendingRequestsT>(value)); return *this;}
    template<typename PendingRequestsT = Workspace>
    CreateWorkspacesResult& AddPendingRequests(PendingRequestsT&& value) { m_pendingRequestsHasBeenSet = true; m_pendingRequests.emplace_back(std::forward<PendingRequestsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateWorkspacesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FailedCreateWorkspaceRequest> m_failedRequests;
    bool m_failedRequestsHasBeenSet = false;

    Aws::Vector<Workspace> m_pendingRequests;
    bool m_pendingRequestsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
