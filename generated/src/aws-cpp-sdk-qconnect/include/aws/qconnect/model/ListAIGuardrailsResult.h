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
    AWS_QCONNECT_API ListAIGuardrailsResult() = default;
    AWS_QCONNECT_API ListAIGuardrailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListAIGuardrailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summaries of the AI Guardrails.</p>
     */
    inline const Aws::Vector<AIGuardrailSummary>& GetAiGuardrailSummaries() const { return m_aiGuardrailSummaries; }
    template<typename AiGuardrailSummariesT = Aws::Vector<AIGuardrailSummary>>
    void SetAiGuardrailSummaries(AiGuardrailSummariesT&& value) { m_aiGuardrailSummariesHasBeenSet = true; m_aiGuardrailSummaries = std::forward<AiGuardrailSummariesT>(value); }
    template<typename AiGuardrailSummariesT = Aws::Vector<AIGuardrailSummary>>
    ListAIGuardrailsResult& WithAiGuardrailSummaries(AiGuardrailSummariesT&& value) { SetAiGuardrailSummaries(std::forward<AiGuardrailSummariesT>(value)); return *this;}
    template<typename AiGuardrailSummariesT = AIGuardrailSummary>
    ListAIGuardrailsResult& AddAiGuardrailSummaries(AiGuardrailSummariesT&& value) { m_aiGuardrailSummariesHasBeenSet = true; m_aiGuardrailSummaries.emplace_back(std::forward<AiGuardrailSummariesT>(value)); return *this; }
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
    ListAIGuardrailsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAIGuardrailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AIGuardrailSummary> m_aiGuardrailSummaries;
    bool m_aiGuardrailSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
