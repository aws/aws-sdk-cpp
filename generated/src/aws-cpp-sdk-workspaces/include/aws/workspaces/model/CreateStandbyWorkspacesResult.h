/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/FailedCreateStandbyWorkspacesRequest.h>
#include <aws/workspaces/model/PendingCreateStandbyWorkspacesRequest.h>
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
  class CreateStandbyWorkspacesResult
  {
  public:
    AWS_WORKSPACES_API CreateStandbyWorkspacesResult() = default;
    AWS_WORKSPACES_API CreateStandbyWorkspacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API CreateStandbyWorkspacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the standby WorkSpace that could not be created. </p>
     */
    inline const Aws::Vector<FailedCreateStandbyWorkspacesRequest>& GetFailedStandbyRequests() const { return m_failedStandbyRequests; }
    template<typename FailedStandbyRequestsT = Aws::Vector<FailedCreateStandbyWorkspacesRequest>>
    void SetFailedStandbyRequests(FailedStandbyRequestsT&& value) { m_failedStandbyRequestsHasBeenSet = true; m_failedStandbyRequests = std::forward<FailedStandbyRequestsT>(value); }
    template<typename FailedStandbyRequestsT = Aws::Vector<FailedCreateStandbyWorkspacesRequest>>
    CreateStandbyWorkspacesResult& WithFailedStandbyRequests(FailedStandbyRequestsT&& value) { SetFailedStandbyRequests(std::forward<FailedStandbyRequestsT>(value)); return *this;}
    template<typename FailedStandbyRequestsT = FailedCreateStandbyWorkspacesRequest>
    CreateStandbyWorkspacesResult& AddFailedStandbyRequests(FailedStandbyRequestsT&& value) { m_failedStandbyRequestsHasBeenSet = true; m_failedStandbyRequests.emplace_back(std::forward<FailedStandbyRequestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the standby WorkSpace that was created.</p>
     */
    inline const Aws::Vector<PendingCreateStandbyWorkspacesRequest>& GetPendingStandbyRequests() const { return m_pendingStandbyRequests; }
    template<typename PendingStandbyRequestsT = Aws::Vector<PendingCreateStandbyWorkspacesRequest>>
    void SetPendingStandbyRequests(PendingStandbyRequestsT&& value) { m_pendingStandbyRequestsHasBeenSet = true; m_pendingStandbyRequests = std::forward<PendingStandbyRequestsT>(value); }
    template<typename PendingStandbyRequestsT = Aws::Vector<PendingCreateStandbyWorkspacesRequest>>
    CreateStandbyWorkspacesResult& WithPendingStandbyRequests(PendingStandbyRequestsT&& value) { SetPendingStandbyRequests(std::forward<PendingStandbyRequestsT>(value)); return *this;}
    template<typename PendingStandbyRequestsT = PendingCreateStandbyWorkspacesRequest>
    CreateStandbyWorkspacesResult& AddPendingStandbyRequests(PendingStandbyRequestsT&& value) { m_pendingStandbyRequestsHasBeenSet = true; m_pendingStandbyRequests.emplace_back(std::forward<PendingStandbyRequestsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateStandbyWorkspacesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FailedCreateStandbyWorkspacesRequest> m_failedStandbyRequests;
    bool m_failedStandbyRequestsHasBeenSet = false;

    Aws::Vector<PendingCreateStandbyWorkspacesRequest> m_pendingStandbyRequests;
    bool m_pendingStandbyRequestsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
