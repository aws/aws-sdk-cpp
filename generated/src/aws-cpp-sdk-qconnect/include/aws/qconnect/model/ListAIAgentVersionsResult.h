/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/AIAgentVersionSummary.h>
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
  class ListAIAgentVersionsResult
  {
  public:
    AWS_QCONNECT_API ListAIAgentVersionsResult();
    AWS_QCONNECT_API ListAIAgentVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListAIAgentVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summaries of AI Agent versions.</p>
     */
    inline const Aws::Vector<AIAgentVersionSummary>& GetAiAgentVersionSummaries() const{ return m_aiAgentVersionSummaries; }
    inline void SetAiAgentVersionSummaries(const Aws::Vector<AIAgentVersionSummary>& value) { m_aiAgentVersionSummaries = value; }
    inline void SetAiAgentVersionSummaries(Aws::Vector<AIAgentVersionSummary>&& value) { m_aiAgentVersionSummaries = std::move(value); }
    inline ListAIAgentVersionsResult& WithAiAgentVersionSummaries(const Aws::Vector<AIAgentVersionSummary>& value) { SetAiAgentVersionSummaries(value); return *this;}
    inline ListAIAgentVersionsResult& WithAiAgentVersionSummaries(Aws::Vector<AIAgentVersionSummary>&& value) { SetAiAgentVersionSummaries(std::move(value)); return *this;}
    inline ListAIAgentVersionsResult& AddAiAgentVersionSummaries(const AIAgentVersionSummary& value) { m_aiAgentVersionSummaries.push_back(value); return *this; }
    inline ListAIAgentVersionsResult& AddAiAgentVersionSummaries(AIAgentVersionSummary&& value) { m_aiAgentVersionSummaries.push_back(std::move(value)); return *this; }
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
    inline ListAIAgentVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAIAgentVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAIAgentVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAIAgentVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAIAgentVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAIAgentVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AIAgentVersionSummary> m_aiAgentVersionSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
