/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mpa/model/ListSessionsResponseSession.h>
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
namespace MPA
{
namespace Model
{
  class ListSessionsResult
  {
  public:
    AWS_MPA_API ListSessionsResult() = default;
    AWS_MPA_API ListSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MPA_API ListSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a next call to the operation to get more output. You can repeat this until
     * the <code>NextToken</code> response element returns <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSessionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ListSessionsResponseSession</code> objects. Contains
     * details for the sessions.</p>
     */
    inline const Aws::Vector<ListSessionsResponseSession>& GetSessions() const { return m_sessions; }
    template<typename SessionsT = Aws::Vector<ListSessionsResponseSession>>
    void SetSessions(SessionsT&& value) { m_sessionsHasBeenSet = true; m_sessions = std::forward<SessionsT>(value); }
    template<typename SessionsT = Aws::Vector<ListSessionsResponseSession>>
    ListSessionsResult& WithSessions(SessionsT&& value) { SetSessions(std::forward<SessionsT>(value)); return *this;}
    template<typename SessionsT = ListSessionsResponseSession>
    ListSessionsResult& AddSessions(SessionsT&& value) { m_sessionsHasBeenSet = true; m_sessions.emplace_back(std::forward<SessionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSessionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ListSessionsResponseSession> m_sessions;
    bool m_sessionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
