/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspacesPoolSession.h>
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
  class DescribeWorkspacesPoolSessionsResult
  {
  public:
    AWS_WORKSPACES_API DescribeWorkspacesPoolSessionsResult();
    AWS_WORKSPACES_API DescribeWorkspacesPoolSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeWorkspacesPoolSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes the pool sessions.</p>
     */
    inline const Aws::Vector<WorkspacesPoolSession>& GetSessions() const{ return m_sessions; }
    inline void SetSessions(const Aws::Vector<WorkspacesPoolSession>& value) { m_sessions = value; }
    inline void SetSessions(Aws::Vector<WorkspacesPoolSession>&& value) { m_sessions = std::move(value); }
    inline DescribeWorkspacesPoolSessionsResult& WithSessions(const Aws::Vector<WorkspacesPoolSession>& value) { SetSessions(value); return *this;}
    inline DescribeWorkspacesPoolSessionsResult& WithSessions(Aws::Vector<WorkspacesPoolSession>&& value) { SetSessions(std::move(value)); return *this;}
    inline DescribeWorkspacesPoolSessionsResult& AddSessions(const WorkspacesPoolSession& value) { m_sessions.push_back(value); return *this; }
    inline DescribeWorkspacesPoolSessionsResult& AddSessions(WorkspacesPoolSession&& value) { m_sessions.push_back(std::move(value)); return *this; }
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
    inline DescribeWorkspacesPoolSessionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeWorkspacesPoolSessionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeWorkspacesPoolSessionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeWorkspacesPoolSessionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeWorkspacesPoolSessionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeWorkspacesPoolSessionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<WorkspacesPoolSession> m_sessions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
