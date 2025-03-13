/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/KnowledgeBaseSummary.h>
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
  class ListKnowledgeBasesResult
  {
  public:
    AWS_QCONNECT_API ListKnowledgeBasesResult() = default;
    AWS_QCONNECT_API ListKnowledgeBasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListKnowledgeBasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the knowledge bases.</p>
     */
    inline const Aws::Vector<KnowledgeBaseSummary>& GetKnowledgeBaseSummaries() const { return m_knowledgeBaseSummaries; }
    template<typename KnowledgeBaseSummariesT = Aws::Vector<KnowledgeBaseSummary>>
    void SetKnowledgeBaseSummaries(KnowledgeBaseSummariesT&& value) { m_knowledgeBaseSummariesHasBeenSet = true; m_knowledgeBaseSummaries = std::forward<KnowledgeBaseSummariesT>(value); }
    template<typename KnowledgeBaseSummariesT = Aws::Vector<KnowledgeBaseSummary>>
    ListKnowledgeBasesResult& WithKnowledgeBaseSummaries(KnowledgeBaseSummariesT&& value) { SetKnowledgeBaseSummaries(std::forward<KnowledgeBaseSummariesT>(value)); return *this;}
    template<typename KnowledgeBaseSummariesT = KnowledgeBaseSummary>
    ListKnowledgeBasesResult& AddKnowledgeBaseSummaries(KnowledgeBaseSummariesT&& value) { m_knowledgeBaseSummariesHasBeenSet = true; m_knowledgeBaseSummaries.emplace_back(std::forward<KnowledgeBaseSummariesT>(value)); return *this; }
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
    ListKnowledgeBasesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListKnowledgeBasesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<KnowledgeBaseSummary> m_knowledgeBaseSummaries;
    bool m_knowledgeBaseSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
