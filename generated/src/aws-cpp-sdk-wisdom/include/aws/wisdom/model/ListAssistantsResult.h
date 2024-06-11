﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/AssistantSummary.h>
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
  class ListAssistantsResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API ListAssistantsResult();
    AWS_CONNECTWISDOMSERVICE_API ListAssistantsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API ListAssistantsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the assistants.</p>
     */
    inline const Aws::Vector<AssistantSummary>& GetAssistantSummaries() const{ return m_assistantSummaries; }
    inline void SetAssistantSummaries(const Aws::Vector<AssistantSummary>& value) { m_assistantSummaries = value; }
    inline void SetAssistantSummaries(Aws::Vector<AssistantSummary>&& value) { m_assistantSummaries = std::move(value); }
    inline ListAssistantsResult& WithAssistantSummaries(const Aws::Vector<AssistantSummary>& value) { SetAssistantSummaries(value); return *this;}
    inline ListAssistantsResult& WithAssistantSummaries(Aws::Vector<AssistantSummary>&& value) { SetAssistantSummaries(std::move(value)); return *this;}
    inline ListAssistantsResult& AddAssistantSummaries(const AssistantSummary& value) { m_assistantSummaries.push_back(value); return *this; }
    inline ListAssistantsResult& AddAssistantSummaries(AssistantSummary&& value) { m_assistantSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAssistantsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssistantsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssistantsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAssistantsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAssistantsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAssistantsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssistantSummary> m_assistantSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
