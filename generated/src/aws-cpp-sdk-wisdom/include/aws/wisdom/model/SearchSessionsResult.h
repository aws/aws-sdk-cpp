/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wisdom/model/SessionSummary.h>
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
namespace ConnectWisdomService
{
namespace Model
{
  class SearchSessionsResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API SearchSessionsResult() = default;
    AWS_CONNECTWISDOMSERVICE_API SearchSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API SearchSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchSessionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary information about the sessions.</p>
     */
    inline const Aws::Vector<SessionSummary>& GetSessionSummaries() const { return m_sessionSummaries; }
    template<typename SessionSummariesT = Aws::Vector<SessionSummary>>
    void SetSessionSummaries(SessionSummariesT&& value) { m_sessionSummariesHasBeenSet = true; m_sessionSummaries = std::forward<SessionSummariesT>(value); }
    template<typename SessionSummariesT = Aws::Vector<SessionSummary>>
    SearchSessionsResult& WithSessionSummaries(SessionSummariesT&& value) { SetSessionSummaries(std::forward<SessionSummariesT>(value)); return *this;}
    template<typename SessionSummariesT = SessionSummary>
    SearchSessionsResult& AddSessionSummaries(SessionSummariesT&& value) { m_sessionSummariesHasBeenSet = true; m_sessionSummaries.emplace_back(std::forward<SessionSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchSessionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SessionSummary> m_sessionSummaries;
    bool m_sessionSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
