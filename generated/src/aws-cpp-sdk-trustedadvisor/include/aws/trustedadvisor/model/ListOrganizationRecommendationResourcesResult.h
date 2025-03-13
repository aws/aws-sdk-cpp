/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/trustedadvisor/model/OrganizationRecommendationResourceSummary.h>
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
namespace TrustedAdvisor
{
namespace Model
{
  class ListOrganizationRecommendationResourcesResult
  {
  public:
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationResourcesResult() = default;
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOrganizationRecommendationResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Recommendation Resources</p>
     */
    inline const Aws::Vector<OrganizationRecommendationResourceSummary>& GetOrganizationRecommendationResourceSummaries() const { return m_organizationRecommendationResourceSummaries; }
    template<typename OrganizationRecommendationResourceSummariesT = Aws::Vector<OrganizationRecommendationResourceSummary>>
    void SetOrganizationRecommendationResourceSummaries(OrganizationRecommendationResourceSummariesT&& value) { m_organizationRecommendationResourceSummariesHasBeenSet = true; m_organizationRecommendationResourceSummaries = std::forward<OrganizationRecommendationResourceSummariesT>(value); }
    template<typename OrganizationRecommendationResourceSummariesT = Aws::Vector<OrganizationRecommendationResourceSummary>>
    ListOrganizationRecommendationResourcesResult& WithOrganizationRecommendationResourceSummaries(OrganizationRecommendationResourceSummariesT&& value) { SetOrganizationRecommendationResourceSummaries(std::forward<OrganizationRecommendationResourceSummariesT>(value)); return *this;}
    template<typename OrganizationRecommendationResourceSummariesT = OrganizationRecommendationResourceSummary>
    ListOrganizationRecommendationResourcesResult& AddOrganizationRecommendationResourceSummaries(OrganizationRecommendationResourceSummariesT&& value) { m_organizationRecommendationResourceSummariesHasBeenSet = true; m_organizationRecommendationResourceSummaries.emplace_back(std::forward<OrganizationRecommendationResourceSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOrganizationRecommendationResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<OrganizationRecommendationResourceSummary> m_organizationRecommendationResourceSummaries;
    bool m_organizationRecommendationResourceSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
