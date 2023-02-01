/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class TerminateWorkspacesResult
  {
  public:
    AWS_WORKSPACES_API TerminateWorkspacesResult();
    AWS_WORKSPACES_API TerminateWorkspacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API TerminateWorkspacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the WorkSpaces that could not be terminated.</p>
     */
    inline const Aws::Vector<FailedWorkspaceChangeRequest>& GetFailedRequests() const{ return m_failedRequests; }

    /**
     * <p>Information about the WorkSpaces that could not be terminated.</p>
     */
    inline void SetFailedRequests(const Aws::Vector<FailedWorkspaceChangeRequest>& value) { m_failedRequests = value; }

    /**
     * <p>Information about the WorkSpaces that could not be terminated.</p>
     */
    inline void SetFailedRequests(Aws::Vector<FailedWorkspaceChangeRequest>&& value) { m_failedRequests = std::move(value); }

    /**
     * <p>Information about the WorkSpaces that could not be terminated.</p>
     */
    inline TerminateWorkspacesResult& WithFailedRequests(const Aws::Vector<FailedWorkspaceChangeRequest>& value) { SetFailedRequests(value); return *this;}

    /**
     * <p>Information about the WorkSpaces that could not be terminated.</p>
     */
    inline TerminateWorkspacesResult& WithFailedRequests(Aws::Vector<FailedWorkspaceChangeRequest>&& value) { SetFailedRequests(std::move(value)); return *this;}

    /**
     * <p>Information about the WorkSpaces that could not be terminated.</p>
     */
    inline TerminateWorkspacesResult& AddFailedRequests(const FailedWorkspaceChangeRequest& value) { m_failedRequests.push_back(value); return *this; }

    /**
     * <p>Information about the WorkSpaces that could not be terminated.</p>
     */
    inline TerminateWorkspacesResult& AddFailedRequests(FailedWorkspaceChangeRequest&& value) { m_failedRequests.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FailedWorkspaceChangeRequest> m_failedRequests;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
