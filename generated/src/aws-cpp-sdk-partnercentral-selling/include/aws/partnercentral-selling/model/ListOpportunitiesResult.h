/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/OpportunitySummary.h>
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
  class ListOpportunitiesResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListOpportunitiesResult() = default;
    AWS_PARTNERCENTRALSELLING_API ListOpportunitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API ListOpportunitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that contains minimal details for opportunities that match the
     * request criteria. This summary view provides a quick overview of relevant
     * opportunities.</p>
     */
    inline const Aws::Vector<OpportunitySummary>& GetOpportunitySummaries() const { return m_opportunitySummaries; }
    template<typename OpportunitySummariesT = Aws::Vector<OpportunitySummary>>
    void SetOpportunitySummaries(OpportunitySummariesT&& value) { m_opportunitySummariesHasBeenSet = true; m_opportunitySummaries = std::forward<OpportunitySummariesT>(value); }
    template<typename OpportunitySummariesT = Aws::Vector<OpportunitySummary>>
    ListOpportunitiesResult& WithOpportunitySummaries(OpportunitySummariesT&& value) { SetOpportunitySummaries(std::forward<OpportunitySummariesT>(value)); return *this;}
    template<typename OpportunitySummariesT = OpportunitySummary>
    ListOpportunitiesResult& AddOpportunitySummaries(OpportunitySummariesT&& value) { m_opportunitySummariesHasBeenSet = true; m_opportunitySummaries.emplace_back(std::forward<OpportunitySummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token used to retrieve the next set of results in subsequent
     * calls. This token is included in the response only if there are additional
     * result pages available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOpportunitiesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOpportunitiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OpportunitySummary> m_opportunitySummaries;
    bool m_opportunitySummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
