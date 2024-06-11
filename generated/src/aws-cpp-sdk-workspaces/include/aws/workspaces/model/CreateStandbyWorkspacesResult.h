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
    AWS_WORKSPACES_API CreateStandbyWorkspacesResult();
    AWS_WORKSPACES_API CreateStandbyWorkspacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API CreateStandbyWorkspacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the standby WorkSpace that could not be created. </p>
     */
    inline const Aws::Vector<FailedCreateStandbyWorkspacesRequest>& GetFailedStandbyRequests() const{ return m_failedStandbyRequests; }
    inline void SetFailedStandbyRequests(const Aws::Vector<FailedCreateStandbyWorkspacesRequest>& value) { m_failedStandbyRequests = value; }
    inline void SetFailedStandbyRequests(Aws::Vector<FailedCreateStandbyWorkspacesRequest>&& value) { m_failedStandbyRequests = std::move(value); }
    inline CreateStandbyWorkspacesResult& WithFailedStandbyRequests(const Aws::Vector<FailedCreateStandbyWorkspacesRequest>& value) { SetFailedStandbyRequests(value); return *this;}
    inline CreateStandbyWorkspacesResult& WithFailedStandbyRequests(Aws::Vector<FailedCreateStandbyWorkspacesRequest>&& value) { SetFailedStandbyRequests(std::move(value)); return *this;}
    inline CreateStandbyWorkspacesResult& AddFailedStandbyRequests(const FailedCreateStandbyWorkspacesRequest& value) { m_failedStandbyRequests.push_back(value); return *this; }
    inline CreateStandbyWorkspacesResult& AddFailedStandbyRequests(FailedCreateStandbyWorkspacesRequest&& value) { m_failedStandbyRequests.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the standby WorkSpace that was created.</p>
     */
    inline const Aws::Vector<PendingCreateStandbyWorkspacesRequest>& GetPendingStandbyRequests() const{ return m_pendingStandbyRequests; }
    inline void SetPendingStandbyRequests(const Aws::Vector<PendingCreateStandbyWorkspacesRequest>& value) { m_pendingStandbyRequests = value; }
    inline void SetPendingStandbyRequests(Aws::Vector<PendingCreateStandbyWorkspacesRequest>&& value) { m_pendingStandbyRequests = std::move(value); }
    inline CreateStandbyWorkspacesResult& WithPendingStandbyRequests(const Aws::Vector<PendingCreateStandbyWorkspacesRequest>& value) { SetPendingStandbyRequests(value); return *this;}
    inline CreateStandbyWorkspacesResult& WithPendingStandbyRequests(Aws::Vector<PendingCreateStandbyWorkspacesRequest>&& value) { SetPendingStandbyRequests(std::move(value)); return *this;}
    inline CreateStandbyWorkspacesResult& AddPendingStandbyRequests(const PendingCreateStandbyWorkspacesRequest& value) { m_pendingStandbyRequests.push_back(value); return *this; }
    inline CreateStandbyWorkspacesResult& AddPendingStandbyRequests(PendingCreateStandbyWorkspacesRequest&& value) { m_pendingStandbyRequests.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateStandbyWorkspacesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateStandbyWorkspacesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateStandbyWorkspacesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FailedCreateStandbyWorkspacesRequest> m_failedStandbyRequests;

    Aws::Vector<PendingCreateStandbyWorkspacesRequest> m_pendingStandbyRequests;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
