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
    AWS_QCONNECT_API ListAIAgentsResult() = default;
    AWS_QCONNECT_API ListAIAgentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListAIAgentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summaries of AI Agents.</p>
     */
    inline const Aws::Vector<AIAgentSummary>& GetAiAgentSummaries() const { return m_aiAgentSummaries; }
    template<typename AiAgentSummariesT = Aws::Vector<AIAgentSummary>>
    void SetAiAgentSummaries(AiAgentSummariesT&& value) { m_aiAgentSummariesHasBeenSet = true; m_aiAgentSummaries = std::forward<AiAgentSummariesT>(value); }
    template<typename AiAgentSummariesT = Aws::Vector<AIAgentSummary>>
    ListAIAgentsResult& WithAiAgentSummaries(AiAgentSummariesT&& value) { SetAiAgentSummaries(std::forward<AiAgentSummariesT>(value)); return *this;}
    template<typename AiAgentSummariesT = AIAgentSummary>
    ListAIAgentsResult& AddAiAgentSummaries(AiAgentSummariesT&& value) { m_aiAgentSummariesHasBeenSet = true; m_aiAgentSummaries.emplace_back(std::forward<AiAgentSummariesT>(value)); return *this; }
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
    ListAIAgentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAIAgentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AIAgentSummary> m_aiAgentSummaries;
    bool m_aiAgentSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
