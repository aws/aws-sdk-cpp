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
    AWS_WORKSPACES_API DescribeWorkspacesPoolsResult();
    AWS_WORKSPACES_API DescribeWorkspacesPoolsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeWorkspacesPoolsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the WorkSpaces Pools.</p>
     */
    inline const Aws::Vector<WorkspacesPool>& GetWorkspacesPools() const{ return m_workspacesPools; }
    inline void SetWorkspacesPools(const Aws::Vector<WorkspacesPool>& value) { m_workspacesPools = value; }
    inline void SetWorkspacesPools(Aws::Vector<WorkspacesPool>&& value) { m_workspacesPools = std::move(value); }
    inline DescribeWorkspacesPoolsResult& WithWorkspacesPools(const Aws::Vector<WorkspacesPool>& value) { SetWorkspacesPools(value); return *this;}
    inline DescribeWorkspacesPoolsResult& WithWorkspacesPools(Aws::Vector<WorkspacesPool>&& value) { SetWorkspacesPools(std::move(value)); return *this;}
    inline DescribeWorkspacesPoolsResult& AddWorkspacesPools(const WorkspacesPool& value) { m_workspacesPools.push_back(value); return *this; }
    inline DescribeWorkspacesPoolsResult& AddWorkspacesPools(WorkspacesPool&& value) { m_workspacesPools.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeWorkspacesPoolsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeWorkspacesPoolsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeWorkspacesPoolsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeWorkspacesPoolsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeWorkspacesPoolsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeWorkspacesPoolsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<WorkspacesPool> m_workspacesPools;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
