/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/trustedadvisor/model/OrganizationRecommendationSummary.h>
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
  class ListOrganizationRecommendationsResult
  {
  public:
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationsResult() = default;
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOrganizationRecommendationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Recommendations</p>
     */
    inline const Aws::Vector<OrganizationRecommendationSummary>& GetOrganizationRecommendationSummaries() const { return m_organizationRecommendationSummaries; }
    template<typename OrganizationRecommendationSummariesT = Aws::Vector<OrganizationRecommendationSummary>>
    void SetOrganizationRecommendationSummaries(OrganizationRecommendationSummariesT&& value) { m_organizationRecommendationSummariesHasBeenSet = true; m_organizationRecommendationSummaries = std::forward<OrganizationRecommendationSummariesT>(value); }
    template<typename OrganizationRecommendationSummariesT = Aws::Vector<OrganizationRecommendationSummary>>
    ListOrganizationRecommendationsResult& WithOrganizationRecommendationSummaries(OrganizationRecommendationSummariesT&& value) { SetOrganizationRecommendationSummaries(std::forward<OrganizationRecommendationSummariesT>(value)); return *this;}
    template<typename OrganizationRecommendationSummariesT = OrganizationRecommendationSummary>
    ListOrganizationRecommendationsResult& AddOrganizationRecommendationSummaries(OrganizationRecommendationSummariesT&& value) { m_organizationRecommendationSummariesHasBeenSet = true; m_organizationRecommendationSummaries.emplace_back(std::forward<OrganizationRecommendationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOrganizationRecommendationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<OrganizationRecommendationSummary> m_organizationRecommendationSummaries;
    bool m_organizationRecommendationSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
