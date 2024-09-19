/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-web/model/SessionSummary.h>
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
namespace WorkSpacesWeb
{
namespace Model
{
  class ListSessionsResult
  {
  public:
    AWS_WORKSPACESWEB_API ListSessionsResult();
    AWS_WORKSPACESWEB_API ListSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API ListSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSessionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSessionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSessionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sessions in a list.</p>
     */
    inline const Aws::Vector<SessionSummary>& GetSessions() const{ return m_sessions; }
    inline void SetSessions(const Aws::Vector<SessionSummary>& value) { m_sessions = value; }
    inline void SetSessions(Aws::Vector<SessionSummary>&& value) { m_sessions = std::move(value); }
    inline ListSessionsResult& WithSessions(const Aws::Vector<SessionSummary>& value) { SetSessions(value); return *this;}
    inline ListSessionsResult& WithSessions(Aws::Vector<SessionSummary>&& value) { SetSessions(std::move(value)); return *this;}
    inline ListSessionsResult& AddSessions(const SessionSummary& value) { m_sessions.push_back(value); return *this; }
    inline ListSessionsResult& AddSessions(SessionSummary&& value) { m_sessions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSessionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSessionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSessionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<SessionSummary> m_sessions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
