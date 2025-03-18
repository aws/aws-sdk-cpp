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
    AWS_QCONNECT_API ListAIPromptVersionsResult() = default;
    AWS_QCONNECT_API ListAIPromptVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListAIPromptVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summaries of the AI Prompt versions.</p>
     */
    inline const Aws::Vector<AIPromptVersionSummary>& GetAiPromptVersionSummaries() const { return m_aiPromptVersionSummaries; }
    template<typename AiPromptVersionSummariesT = Aws::Vector<AIPromptVersionSummary>>
    void SetAiPromptVersionSummaries(AiPromptVersionSummariesT&& value) { m_aiPromptVersionSummariesHasBeenSet = true; m_aiPromptVersionSummaries = std::forward<AiPromptVersionSummariesT>(value); }
    template<typename AiPromptVersionSummariesT = Aws::Vector<AIPromptVersionSummary>>
    ListAIPromptVersionsResult& WithAiPromptVersionSummaries(AiPromptVersionSummariesT&& value) { SetAiPromptVersionSummaries(std::forward<AiPromptVersionSummariesT>(value)); return *this;}
    template<typename AiPromptVersionSummariesT = AIPromptVersionSummary>
    ListAIPromptVersionsResult& AddAiPromptVersionSummaries(AiPromptVersionSummariesT&& value) { m_aiPromptVersionSummariesHasBeenSet = true; m_aiPromptVersionSummaries.emplace_back(std::forward<AiPromptVersionSummariesT>(value)); return *this; }
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
    ListAIPromptVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAIPromptVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AIPromptVersionSummary> m_aiPromptVersionSummaries;
    bool m_aiPromptVersionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
