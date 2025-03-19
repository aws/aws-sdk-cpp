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
    AWS_QCONNECT_API ListAIPromptsResult() = default;
    AWS_QCONNECT_API ListAIPromptsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListAIPromptsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summaries of the AI Prompts.</p>
     */
    inline const Aws::Vector<AIPromptSummary>& GetAiPromptSummaries() const { return m_aiPromptSummaries; }
    template<typename AiPromptSummariesT = Aws::Vector<AIPromptSummary>>
    void SetAiPromptSummaries(AiPromptSummariesT&& value) { m_aiPromptSummariesHasBeenSet = true; m_aiPromptSummaries = std::forward<AiPromptSummariesT>(value); }
    template<typename AiPromptSummariesT = Aws::Vector<AIPromptSummary>>
    ListAIPromptsResult& WithAiPromptSummaries(AiPromptSummariesT&& value) { SetAiPromptSummaries(std::forward<AiPromptSummariesT>(value)); return *this;}
    template<typename AiPromptSummariesT = AIPromptSummary>
    ListAIPromptsResult& AddAiPromptSummaries(AiPromptSummariesT&& value) { m_aiPromptSummariesHasBeenSet = true; m_aiPromptSummaries.emplace_back(std::forward<AiPromptSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAIPromptsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAIPromptsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AIPromptSummary> m_aiPromptSummaries;
    bool m_aiPromptSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
