﻿/**
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
    AWS_WORKSPACES_API DescribeWorkspacesConnectionStatusResult();
    AWS_WORKSPACES_API DescribeWorkspacesConnectionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeWorkspacesConnectionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the connection status of the WorkSpace.</p>
     */
    inline const Aws::Vector<WorkspaceConnectionStatus>& GetWorkspacesConnectionStatus() const{ return m_workspacesConnectionStatus; }
    inline void SetWorkspacesConnectionStatus(const Aws::Vector<WorkspaceConnectionStatus>& value) { m_workspacesConnectionStatus = value; }
    inline void SetWorkspacesConnectionStatus(Aws::Vector<WorkspaceConnectionStatus>&& value) { m_workspacesConnectionStatus = std::move(value); }
    inline DescribeWorkspacesConnectionStatusResult& WithWorkspacesConnectionStatus(const Aws::Vector<WorkspaceConnectionStatus>& value) { SetWorkspacesConnectionStatus(value); return *this;}
    inline DescribeWorkspacesConnectionStatusResult& WithWorkspacesConnectionStatus(Aws::Vector<WorkspaceConnectionStatus>&& value) { SetWorkspacesConnectionStatus(std::move(value)); return *this;}
    inline DescribeWorkspacesConnectionStatusResult& AddWorkspacesConnectionStatus(const WorkspaceConnectionStatus& value) { m_workspacesConnectionStatus.push_back(value); return *this; }
    inline DescribeWorkspacesConnectionStatusResult& AddWorkspacesConnectionStatus(WorkspaceConnectionStatus&& value) { m_workspacesConnectionStatus.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeWorkspacesConnectionStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeWorkspacesConnectionStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeWorkspacesConnectionStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeWorkspacesConnectionStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeWorkspacesConnectionStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeWorkspacesConnectionStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<WorkspaceConnectionStatus> m_workspacesConnectionStatus;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
