/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/ContentAssociationSummary.h>
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
  class ListContentAssociationsResult
  {
  public:
    AWS_QCONNECT_API ListContentAssociationsResult() = default;
    AWS_QCONNECT_API ListContentAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListContentAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information about content associations.</p>
     */
    inline const Aws::Vector<ContentAssociationSummary>& GetContentAssociationSummaries() const { return m_contentAssociationSummaries; }
    template<typename ContentAssociationSummariesT = Aws::Vector<ContentAssociationSummary>>
    void SetContentAssociationSummaries(ContentAssociationSummariesT&& value) { m_contentAssociationSummariesHasBeenSet = true; m_contentAssociationSummaries = std::forward<ContentAssociationSummariesT>(value); }
    template<typename ContentAssociationSummariesT = Aws::Vector<ContentAssociationSummary>>
    ListContentAssociationsResult& WithContentAssociationSummaries(ContentAssociationSummariesT&& value) { SetContentAssociationSummaries(std::forward<ContentAssociationSummariesT>(value)); return *this;}
    template<typename ContentAssociationSummariesT = ContentAssociationSummary>
    ListContentAssociationsResult& AddContentAssociationSummaries(ContentAssociationSummariesT&& value) { m_contentAssociationSummariesHasBeenSet = true; m_contentAssociationSummaries.emplace_back(std::forward<ContentAssociationSummariesT>(value)); return *this; }
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
    ListContentAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListContentAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContentAssociationSummary> m_contentAssociationSummaries;
    bool m_contentAssociationSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
