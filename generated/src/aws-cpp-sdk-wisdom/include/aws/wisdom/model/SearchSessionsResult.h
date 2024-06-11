﻿/**
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
    AWS_CONNECTWISDOMSERVICE_API SearchSessionsResult();
    AWS_CONNECTWISDOMSERVICE_API SearchSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API SearchSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SearchSessionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchSessionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchSessionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary information about the sessions.</p>
     */
    inline const Aws::Vector<SessionSummary>& GetSessionSummaries() const{ return m_sessionSummaries; }
    inline void SetSessionSummaries(const Aws::Vector<SessionSummary>& value) { m_sessionSummaries = value; }
    inline void SetSessionSummaries(Aws::Vector<SessionSummary>&& value) { m_sessionSummaries = std::move(value); }
    inline SearchSessionsResult& WithSessionSummaries(const Aws::Vector<SessionSummary>& value) { SetSessionSummaries(value); return *this;}
    inline SearchSessionsResult& WithSessionSummaries(Aws::Vector<SessionSummary>&& value) { SetSessionSummaries(std::move(value)); return *this;}
    inline SearchSessionsResult& AddSessionSummaries(const SessionSummary& value) { m_sessionSummaries.push_back(value); return *this; }
    inline SearchSessionsResult& AddSessionSummaries(SessionSummary&& value) { m_sessionSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchSessionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchSessionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchSessionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<SessionSummary> m_sessionSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
