﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/FailedWorkspaceChangeRequest.h>
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
  class RebuildWorkspacesResult
  {
  public:
    AWS_WORKSPACES_API RebuildWorkspacesResult();
    AWS_WORKSPACES_API RebuildWorkspacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API RebuildWorkspacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the WorkSpace that could not be rebuilt.</p>
     */
    inline const Aws::Vector<FailedWorkspaceChangeRequest>& GetFailedRequests() const{ return m_failedRequests; }
    inline void SetFailedRequests(const Aws::Vector<FailedWorkspaceChangeRequest>& value) { m_failedRequests = value; }
    inline void SetFailedRequests(Aws::Vector<FailedWorkspaceChangeRequest>&& value) { m_failedRequests = std::move(value); }
    inline RebuildWorkspacesResult& WithFailedRequests(const Aws::Vector<FailedWorkspaceChangeRequest>& value) { SetFailedRequests(value); return *this;}
    inline RebuildWorkspacesResult& WithFailedRequests(Aws::Vector<FailedWorkspaceChangeRequest>&& value) { SetFailedRequests(std::move(value)); return *this;}
    inline RebuildWorkspacesResult& AddFailedRequests(const FailedWorkspaceChangeRequest& value) { m_failedRequests.push_back(value); return *this; }
    inline RebuildWorkspacesResult& AddFailedRequests(FailedWorkspaceChangeRequest&& value) { m_failedRequests.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RebuildWorkspacesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RebuildWorkspacesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RebuildWorkspacesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FailedWorkspaceChangeRequest> m_failedRequests;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
