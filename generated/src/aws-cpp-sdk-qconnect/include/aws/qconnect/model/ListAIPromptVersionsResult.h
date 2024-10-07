/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/AIPromptVersionSummary.h>
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
  class ListAIPromptVersionsResult
  {
  public:
    AWS_QCONNECT_API ListAIPromptVersionsResult();
    AWS_QCONNECT_API ListAIPromptVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListAIPromptVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summaries of the AI Prompt versions.</p>
     */
    inline const Aws::Vector<AIPromptVersionSummary>& GetAiPromptVersionSummaries() const{ return m_aiPromptVersionSummaries; }
    inline void SetAiPromptVersionSummaries(const Aws::Vector<AIPromptVersionSummary>& value) { m_aiPromptVersionSummaries = value; }
    inline void SetAiPromptVersionSummaries(Aws::Vector<AIPromptVersionSummary>&& value) { m_aiPromptVersionSummaries = std::move(value); }
    inline ListAIPromptVersionsResult& WithAiPromptVersionSummaries(const Aws::Vector<AIPromptVersionSummary>& value) { SetAiPromptVersionSummaries(value); return *this;}
    inline ListAIPromptVersionsResult& WithAiPromptVersionSummaries(Aws::Vector<AIPromptVersionSummary>&& value) { SetAiPromptVersionSummaries(std::move(value)); return *this;}
    inline ListAIPromptVersionsResult& AddAiPromptVersionSummaries(const AIPromptVersionSummary& value) { m_aiPromptVersionSummaries.push_back(value); return *this; }
    inline ListAIPromptVersionsResult& AddAiPromptVersionSummaries(AIPromptVersionSummary&& value) { m_aiPromptVersionSummaries.push_back(std::move(value)); return *this; }
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
    inline ListAIPromptVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAIPromptVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAIPromptVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAIPromptVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAIPromptVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAIPromptVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AIPromptVersionSummary> m_aiPromptVersionSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
