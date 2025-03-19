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
    AWS_QCONNECT_API ListAIAgentVersionsResult() = default;
    AWS_QCONNECT_API ListAIAgentVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListAIAgentVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summaries of AI Agent versions.</p>
     */
    inline const Aws::Vector<AIAgentVersionSummary>& GetAiAgentVersionSummaries() const { return m_aiAgentVersionSummaries; }
    template<typename AiAgentVersionSummariesT = Aws::Vector<AIAgentVersionSummary>>
    void SetAiAgentVersionSummaries(AiAgentVersionSummariesT&& value) { m_aiAgentVersionSummariesHasBeenSet = true; m_aiAgentVersionSummaries = std::forward<AiAgentVersionSummariesT>(value); }
    template<typename AiAgentVersionSummariesT = Aws::Vector<AIAgentVersionSummary>>
    ListAIAgentVersionsResult& WithAiAgentVersionSummaries(AiAgentVersionSummariesT&& value) { SetAiAgentVersionSummaries(std::forward<AiAgentVersionSummariesT>(value)); return *this;}
    template<typename AiAgentVersionSummariesT = AIAgentVersionSummary>
    ListAIAgentVersionsResult& AddAiAgentVersionSummaries(AiAgentVersionSummariesT&& value) { m_aiAgentVersionSummariesHasBeenSet = true; m_aiAgentVersionSummaries.emplace_back(std::forward<AiAgentVersionSummariesT>(value)); return *this; }
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
    ListAIAgentVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAIAgentVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AIAgentVersionSummary> m_aiAgentVersionSummaries;
    bool m_aiAgentVersionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
