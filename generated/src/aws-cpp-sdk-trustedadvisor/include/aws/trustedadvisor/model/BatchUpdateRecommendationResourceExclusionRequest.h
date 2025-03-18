/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/TrustedAdvisorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/trustedadvisor/model/RecommendationResourceExclusion.h>
#include <utility>

namespace Aws
{
namespace TrustedAdvisor
{
namespace Model
{

  /**
   */
  class BatchUpdateRecommendationResourceExclusionRequest : public TrustedAdvisorRequest
  {
  public:
    AWS_TRUSTEDADVISOR_API BatchUpdateRecommendationResourceExclusionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateRecommendationResourceExclusion"; }

    AWS_TRUSTEDADVISOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of recommendation resource ARNs and exclusion status to update</p>
     */
    inline const Aws::Vector<RecommendationResourceExclusion>& GetRecommendationResourceExclusions() const { return m_recommendationResourceExclusions; }
    inline bool RecommendationResourceExclusionsHasBeenSet() const { return m_recommendationResourceExclusionsHasBeenSet; }
    template<typename RecommendationResourceExclusionsT = Aws::Vector<RecommendationResourceExclusion>>
    void SetRecommendationResourceExclusions(RecommendationResourceExclusionsT&& value) { m_recommendationResourceExclusionsHasBeenSet = true; m_recommendationResourceExclusions = std::forward<RecommendationResourceExclusionsT>(value); }
    template<typename RecommendationResourceExclusionsT = Aws::Vector<RecommendationResourceExclusion>>
    BatchUpdateRecommendationResourceExclusionRequest& WithRecommendationResourceExclusions(RecommendationResourceExclusionsT&& value) { SetRecommendationResourceExclusions(std::forward<RecommendationResourceExclusionsT>(value)); return *this;}
    template<typename RecommendationResourceExclusionsT = RecommendationResourceExclusion>
    BatchUpdateRecommendationResourceExclusionRequest& AddRecommendationResourceExclusions(RecommendationResourceExclusionsT&& value) { m_recommendationResourceExclusionsHasBeenSet = true; m_recommendationResourceExclusions.emplace_back(std::forward<RecommendationResourceExclusionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RecommendationResourceExclusion> m_recommendationResourceExclusions;
    bool m_recommendationResourceExclusionsHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
