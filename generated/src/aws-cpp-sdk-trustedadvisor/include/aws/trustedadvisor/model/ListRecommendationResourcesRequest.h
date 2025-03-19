/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/TrustedAdvisorRequest.h>
#include <aws/trustedadvisor/model/ExclusionStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/trustedadvisor/model/ResourceStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace TrustedAdvisor
{
namespace Model
{

  /**
   */
  class ListRecommendationResourcesRequest : public TrustedAdvisorRequest
  {
  public:
    AWS_TRUSTEDADVISOR_API ListRecommendationResourcesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRecommendationResources"; }

    AWS_TRUSTEDADVISOR_API Aws::String SerializePayload() const override;

    AWS_TRUSTEDADVISOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The exclusion status of the resource</p>
     */
    inline ExclusionStatus GetExclusionStatus() const { return m_exclusionStatus; }
    inline bool ExclusionStatusHasBeenSet() const { return m_exclusionStatusHasBeenSet; }
    inline void SetExclusionStatus(ExclusionStatus value) { m_exclusionStatusHasBeenSet = true; m_exclusionStatus = value; }
    inline ListRecommendationResourcesRequest& WithExclusionStatus(ExclusionStatus value) { SetExclusionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRecommendationResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRecommendationResourcesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Recommendation identifier</p>
     */
    inline const Aws::String& GetRecommendationIdentifier() const { return m_recommendationIdentifier; }
    inline bool RecommendationIdentifierHasBeenSet() const { return m_recommendationIdentifierHasBeenSet; }
    template<typename RecommendationIdentifierT = Aws::String>
    void SetRecommendationIdentifier(RecommendationIdentifierT&& value) { m_recommendationIdentifierHasBeenSet = true; m_recommendationIdentifier = std::forward<RecommendationIdentifierT>(value); }
    template<typename RecommendationIdentifierT = Aws::String>
    ListRecommendationResourcesRequest& WithRecommendationIdentifier(RecommendationIdentifierT&& value) { SetRecommendationIdentifier(std::forward<RecommendationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Region code of the resource</p>
     */
    inline const Aws::String& GetRegionCode() const { return m_regionCode; }
    inline bool RegionCodeHasBeenSet() const { return m_regionCodeHasBeenSet; }
    template<typename RegionCodeT = Aws::String>
    void SetRegionCode(RegionCodeT&& value) { m_regionCodeHasBeenSet = true; m_regionCode = std::forward<RegionCodeT>(value); }
    template<typename RegionCodeT = Aws::String>
    ListRecommendationResourcesRequest& WithRegionCode(RegionCodeT&& value) { SetRegionCode(std::forward<RegionCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the resource</p>
     */
    inline ResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListRecommendationResourcesRequest& WithStatus(ResourceStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    ExclusionStatus m_exclusionStatus{ExclusionStatus::NOT_SET};
    bool m_exclusionStatusHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_recommendationIdentifier;
    bool m_recommendationIdentifierHasBeenSet = false;

    Aws::String m_regionCode;
    bool m_regionCodeHasBeenSet = false;

    ResourceStatus m_status{ResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
