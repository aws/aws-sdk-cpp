/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/AIGuardrailVersionSummary.h>
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
  class ListAIGuardrailVersionsResult
  {
  public:
    AWS_QCONNECT_API ListAIGuardrailVersionsResult();
    AWS_QCONNECT_API ListAIGuardrailVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListAIGuardrailVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summaries of the AI Guardrail versions.</p>
     */
    inline const Aws::Vector<AIGuardrailVersionSummary>& GetAiGuardrailVersionSummaries() const{ return m_aiGuardrailVersionSummaries; }
    inline void SetAiGuardrailVersionSummaries(const Aws::Vector<AIGuardrailVersionSummary>& value) { m_aiGuardrailVersionSummaries = value; }
    inline void SetAiGuardrailVersionSummaries(Aws::Vector<AIGuardrailVersionSummary>&& value) { m_aiGuardrailVersionSummaries = std::move(value); }
    inline ListAIGuardrailVersionsResult& WithAiGuardrailVersionSummaries(const Aws::Vector<AIGuardrailVersionSummary>& value) { SetAiGuardrailVersionSummaries(value); return *this;}
    inline ListAIGuardrailVersionsResult& WithAiGuardrailVersionSummaries(Aws::Vector<AIGuardrailVersionSummary>&& value) { SetAiGuardrailVersionSummaries(std::move(value)); return *this;}
    inline ListAIGuardrailVersionsResult& AddAiGuardrailVersionSummaries(const AIGuardrailVersionSummary& value) { m_aiGuardrailVersionSummaries.push_back(value); return *this; }
    inline ListAIGuardrailVersionsResult& AddAiGuardrailVersionSummaries(AIGuardrailVersionSummary&& value) { m_aiGuardrailVersionSummaries.push_back(std::move(value)); return *this; }
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
    inline ListAIGuardrailVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAIGuardrailVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAIGuardrailVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAIGuardrailVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAIGuardrailVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAIGuardrailVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AIGuardrailVersionSummary> m_aiGuardrailVersionSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
