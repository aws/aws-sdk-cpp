/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/EngagementSummary.h>
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
namespace PartnerCentralSelling
{
namespace Model
{
  class ListEngagementsResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListEngagementsResult() = default;
    AWS_PARTNERCENTRALSELLING_API ListEngagementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API ListEngagementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of engagement summary objects.</p>
     */
    inline const Aws::Vector<EngagementSummary>& GetEngagementSummaryList() const { return m_engagementSummaryList; }
    template<typename EngagementSummaryListT = Aws::Vector<EngagementSummary>>
    void SetEngagementSummaryList(EngagementSummaryListT&& value) { m_engagementSummaryListHasBeenSet = true; m_engagementSummaryList = std::forward<EngagementSummaryListT>(value); }
    template<typename EngagementSummaryListT = Aws::Vector<EngagementSummary>>
    ListEngagementsResult& WithEngagementSummaryList(EngagementSummaryListT&& value) { SetEngagementSummaryList(std::forward<EngagementSummaryListT>(value)); return *this;}
    template<typename EngagementSummaryListT = EngagementSummary>
    ListEngagementsResult& AddEngagementSummaryList(EngagementSummaryListT&& value) { m_engagementSummaryListHasBeenSet = true; m_engagementSummaryList.emplace_back(std::forward<EngagementSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results. This field will be null if
     * there are no more results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEngagementsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEngagementsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EngagementSummary> m_engagementSummaryList;
    bool m_engagementSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
