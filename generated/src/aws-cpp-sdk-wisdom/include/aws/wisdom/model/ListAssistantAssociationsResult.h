/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/AssistantAssociationSummary.h>
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
  class ListAssistantAssociationsResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API ListAssistantAssociationsResult() = default;
    AWS_CONNECTWISDOMSERVICE_API ListAssistantAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API ListAssistantAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information about assistant associations.</p>
     */
    inline const Aws::Vector<AssistantAssociationSummary>& GetAssistantAssociationSummaries() const { return m_assistantAssociationSummaries; }
    template<typename AssistantAssociationSummariesT = Aws::Vector<AssistantAssociationSummary>>
    void SetAssistantAssociationSummaries(AssistantAssociationSummariesT&& value) { m_assistantAssociationSummariesHasBeenSet = true; m_assistantAssociationSummaries = std::forward<AssistantAssociationSummariesT>(value); }
    template<typename AssistantAssociationSummariesT = Aws::Vector<AssistantAssociationSummary>>
    ListAssistantAssociationsResult& WithAssistantAssociationSummaries(AssistantAssociationSummariesT&& value) { SetAssistantAssociationSummaries(std::forward<AssistantAssociationSummariesT>(value)); return *this;}
    template<typename AssistantAssociationSummariesT = AssistantAssociationSummary>
    ListAssistantAssociationsResult& AddAssistantAssociationSummaries(AssistantAssociationSummariesT&& value) { m_assistantAssociationSummariesHasBeenSet = true; m_assistantAssociationSummaries.emplace_back(std::forward<AssistantAssociationSummariesT>(value)); return *this; }
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
    ListAssistantAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssistantAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssistantAssociationSummary> m_assistantAssociationSummaries;
    bool m_assistantAssociationSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
