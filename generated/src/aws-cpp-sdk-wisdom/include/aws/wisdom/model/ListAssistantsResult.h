/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/AssistantSummary.h>
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
namespace ConnectWisdomService
{
namespace Model
{
  class ListAssistantsResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API ListAssistantsResult() = default;
    AWS_CONNECTWISDOMSERVICE_API ListAssistantsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API ListAssistantsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the assistants.</p>
     */
    inline const Aws::Vector<AssistantSummary>& GetAssistantSummaries() const { return m_assistantSummaries; }
    template<typename AssistantSummariesT = Aws::Vector<AssistantSummary>>
    void SetAssistantSummaries(AssistantSummariesT&& value) { m_assistantSummariesHasBeenSet = true; m_assistantSummaries = std::forward<AssistantSummariesT>(value); }
    template<typename AssistantSummariesT = Aws::Vector<AssistantSummary>>
    ListAssistantsResult& WithAssistantSummaries(AssistantSummariesT&& value) { SetAssistantSummaries(std::forward<AssistantSummariesT>(value)); return *this;}
    template<typename AssistantSummariesT = AssistantSummary>
    ListAssistantsResult& AddAssistantSummaries(AssistantSummariesT&& value) { m_assistantSummariesHasBeenSet = true; m_assistantSummaries.emplace_back(std::forward<AssistantSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssistantsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssistantsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssistantSummary> m_assistantSummaries;
    bool m_assistantSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
