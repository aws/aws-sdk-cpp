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
    AWS_QCONNECT_API ListAIGuardrailVersionsResult() = default;
    AWS_QCONNECT_API ListAIGuardrailVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListAIGuardrailVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summaries of the AI Guardrail versions.</p>
     */
    inline const Aws::Vector<AIGuardrailVersionSummary>& GetAiGuardrailVersionSummaries() const { return m_aiGuardrailVersionSummaries; }
    template<typename AiGuardrailVersionSummariesT = Aws::Vector<AIGuardrailVersionSummary>>
    void SetAiGuardrailVersionSummaries(AiGuardrailVersionSummariesT&& value) { m_aiGuardrailVersionSummariesHasBeenSet = true; m_aiGuardrailVersionSummaries = std::forward<AiGuardrailVersionSummariesT>(value); }
    template<typename AiGuardrailVersionSummariesT = Aws::Vector<AIGuardrailVersionSummary>>
    ListAIGuardrailVersionsResult& WithAiGuardrailVersionSummaries(AiGuardrailVersionSummariesT&& value) { SetAiGuardrailVersionSummaries(std::forward<AiGuardrailVersionSummariesT>(value)); return *this;}
    template<typename AiGuardrailVersionSummariesT = AIGuardrailVersionSummary>
    ListAIGuardrailVersionsResult& AddAiGuardrailVersionSummaries(AiGuardrailVersionSummariesT&& value) { m_aiGuardrailVersionSummariesHasBeenSet = true; m_aiGuardrailVersionSummaries.emplace_back(std::forward<AiGuardrailVersionSummariesT>(value)); return *this; }
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
    ListAIGuardrailVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAIGuardrailVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AIGuardrailVersionSummary> m_aiGuardrailVersionSummaries;
    bool m_aiGuardrailVersionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
