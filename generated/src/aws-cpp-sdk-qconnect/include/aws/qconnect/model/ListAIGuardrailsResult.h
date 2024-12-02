/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/AIGuardrailSummary.h>
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
  class ListAIGuardrailsResult
  {
  public:
    AWS_QCONNECT_API ListAIGuardrailsResult();
    AWS_QCONNECT_API ListAIGuardrailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListAIGuardrailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summaries of the AI Guardrails.</p>
     */
    inline const Aws::Vector<AIGuardrailSummary>& GetAiGuardrailSummaries() const{ return m_aiGuardrailSummaries; }
    inline void SetAiGuardrailSummaries(const Aws::Vector<AIGuardrailSummary>& value) { m_aiGuardrailSummaries = value; }
    inline void SetAiGuardrailSummaries(Aws::Vector<AIGuardrailSummary>&& value) { m_aiGuardrailSummaries = std::move(value); }
    inline ListAIGuardrailsResult& WithAiGuardrailSummaries(const Aws::Vector<AIGuardrailSummary>& value) { SetAiGuardrailSummaries(value); return *this;}
    inline ListAIGuardrailsResult& WithAiGuardrailSummaries(Aws::Vector<AIGuardrailSummary>&& value) { SetAiGuardrailSummaries(std::move(value)); return *this;}
    inline ListAIGuardrailsResult& AddAiGuardrailSummaries(const AIGuardrailSummary& value) { m_aiGuardrailSummaries.push_back(value); return *this; }
    inline ListAIGuardrailsResult& AddAiGuardrailSummaries(AIGuardrailSummary&& value) { m_aiGuardrailSummaries.push_back(std::move(value)); return *this; }
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
    inline ListAIGuardrailsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAIGuardrailsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAIGuardrailsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAIGuardrailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAIGuardrailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAIGuardrailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AIGuardrailSummary> m_aiGuardrailSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
