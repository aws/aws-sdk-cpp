/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/AIAgentSummary.h>
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
namespace QConnect
{
namespace Model
{
  class ListAIAgentsResult
  {
  public:
    AWS_QCONNECT_API ListAIAgentsResult();
    AWS_QCONNECT_API ListAIAgentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListAIAgentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summaries of AI Agents.</p>
     */
    inline const Aws::Vector<AIAgentSummary>& GetAiAgentSummaries() const{ return m_aiAgentSummaries; }
    inline void SetAiAgentSummaries(const Aws::Vector<AIAgentSummary>& value) { m_aiAgentSummaries = value; }
    inline void SetAiAgentSummaries(Aws::Vector<AIAgentSummary>&& value) { m_aiAgentSummaries = std::move(value); }
    inline ListAIAgentsResult& WithAiAgentSummaries(const Aws::Vector<AIAgentSummary>& value) { SetAiAgentSummaries(value); return *this;}
    inline ListAIAgentsResult& WithAiAgentSummaries(Aws::Vector<AIAgentSummary>&& value) { SetAiAgentSummaries(std::move(value)); return *this;}
    inline ListAIAgentsResult& AddAiAgentSummaries(const AIAgentSummary& value) { m_aiAgentSummaries.push_back(value); return *this; }
    inline ListAIAgentsResult& AddAiAgentSummaries(AIAgentSummary&& value) { m_aiAgentSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAIAgentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAIAgentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAIAgentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAIAgentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAIAgentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAIAgentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AIAgentSummary> m_aiAgentSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
