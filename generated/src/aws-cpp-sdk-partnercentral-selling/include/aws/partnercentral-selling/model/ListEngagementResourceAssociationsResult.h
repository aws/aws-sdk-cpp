/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/EngagementResourceAssociationSummary.h>
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
  class ListEngagementResourceAssociationsResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListEngagementResourceAssociationsResult() = default;
    AWS_PARTNERCENTRALSELLING_API ListEngagementResourceAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API ListEngagementResourceAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of engagement-resource association summaries. </p>
     */
    inline const Aws::Vector<EngagementResourceAssociationSummary>& GetEngagementResourceAssociationSummaries() const { return m_engagementResourceAssociationSummaries; }
    template<typename EngagementResourceAssociationSummariesT = Aws::Vector<EngagementResourceAssociationSummary>>
    void SetEngagementResourceAssociationSummaries(EngagementResourceAssociationSummariesT&& value) { m_engagementResourceAssociationSummariesHasBeenSet = true; m_engagementResourceAssociationSummaries = std::forward<EngagementResourceAssociationSummariesT>(value); }
    template<typename EngagementResourceAssociationSummariesT = Aws::Vector<EngagementResourceAssociationSummary>>
    ListEngagementResourceAssociationsResult& WithEngagementResourceAssociationSummaries(EngagementResourceAssociationSummariesT&& value) { SetEngagementResourceAssociationSummaries(std::forward<EngagementResourceAssociationSummariesT>(value)); return *this;}
    template<typename EngagementResourceAssociationSummariesT = EngagementResourceAssociationSummary>
    ListEngagementResourceAssociationsResult& AddEngagementResourceAssociationSummaries(EngagementResourceAssociationSummariesT&& value) { m_engagementResourceAssociationSummariesHasBeenSet = true; m_engagementResourceAssociationSummaries.emplace_back(std::forward<EngagementResourceAssociationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token to retrieve the next set of results. Use this token in a subsequent
     * request to retrieve additional results if the response was truncated. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEngagementResourceAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEngagementResourceAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EngagementResourceAssociationSummary> m_engagementResourceAssociationSummaries;
    bool m_engagementResourceAssociationSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
