/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/AIPromptSummary.h>
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
  class ListAIPromptsResult
  {
  public:
    AWS_QCONNECT_API ListAIPromptsResult();
    AWS_QCONNECT_API ListAIPromptsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListAIPromptsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summaries of the AI Prompts.</p>
     */
    inline const Aws::Vector<AIPromptSummary>& GetAiPromptSummaries() const{ return m_aiPromptSummaries; }
    inline void SetAiPromptSummaries(const Aws::Vector<AIPromptSummary>& value) { m_aiPromptSummaries = value; }
    inline void SetAiPromptSummaries(Aws::Vector<AIPromptSummary>&& value) { m_aiPromptSummaries = std::move(value); }
    inline ListAIPromptsResult& WithAiPromptSummaries(const Aws::Vector<AIPromptSummary>& value) { SetAiPromptSummaries(value); return *this;}
    inline ListAIPromptsResult& WithAiPromptSummaries(Aws::Vector<AIPromptSummary>&& value) { SetAiPromptSummaries(std::move(value)); return *this;}
    inline ListAIPromptsResult& AddAiPromptSummaries(const AIPromptSummary& value) { m_aiPromptSummaries.push_back(value); return *this; }
    inline ListAIPromptsResult& AddAiPromptSummaries(AIPromptSummary&& value) { m_aiPromptSummaries.push_back(std::move(value)); return *this; }
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
    inline ListAIPromptsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAIPromptsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAIPromptsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAIPromptsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAIPromptsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAIPromptsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AIPromptSummary> m_aiPromptSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
