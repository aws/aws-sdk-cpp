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
    AWS_TRUSTEDADVISOR_API BatchUpdateRecommendationResourceExclusionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateRecommendationResourceExclusion"; }

    AWS_TRUSTEDADVISOR_API Aws::String SerializePayload() const override;


    /**
     * <p>A list of recommendation resource ARNs and exclusion status to update</p>
     */
    inline const Aws::Vector<RecommendationResourceExclusion>& GetRecommendationResourceExclusions() const{ return m_recommendationResourceExclusions; }

    /**
     * <p>A list of recommendation resource ARNs and exclusion status to update</p>
     */
    inline bool RecommendationResourceExclusionsHasBeenSet() const { return m_recommendationResourceExclusionsHasBeenSet; }

    /**
     * <p>A list of recommendation resource ARNs and exclusion status to update</p>
     */
    inline void SetRecommendationResourceExclusions(const Aws::Vector<RecommendationResourceExclusion>& value) { m_recommendationResourceExclusionsHasBeenSet = true; m_recommendationResourceExclusions = value; }

    /**
     * <p>A list of recommendation resource ARNs and exclusion status to update</p>
     */
    inline void SetRecommendationResourceExclusions(Aws::Vector<RecommendationResourceExclusion>&& value) { m_recommendationResourceExclusionsHasBeenSet = true; m_recommendationResourceExclusions = std::move(value); }

    /**
     * <p>A list of recommendation resource ARNs and exclusion status to update</p>
     */
    inline BatchUpdateRecommendationResourceExclusionRequest& WithRecommendationResourceExclusions(const Aws::Vector<RecommendationResourceExclusion>& value) { SetRecommendationResourceExclusions(value); return *this;}

    /**
     * <p>A list of recommendation resource ARNs and exclusion status to update</p>
     */
    inline BatchUpdateRecommendationResourceExclusionRequest& WithRecommendationResourceExclusions(Aws::Vector<RecommendationResourceExclusion>&& value) { SetRecommendationResourceExclusions(std::move(value)); return *this;}

    /**
     * <p>A list of recommendation resource ARNs and exclusion status to update</p>
     */
    inline BatchUpdateRecommendationResourceExclusionRequest& AddRecommendationResourceExclusions(const RecommendationResourceExclusion& value) { m_recommendationResourceExclusionsHasBeenSet = true; m_recommendationResourceExclusions.push_back(value); return *this; }

    /**
     * <p>A list of recommendation resource ARNs and exclusion status to update</p>
     */
    inline BatchUpdateRecommendationResourceExclusionRequest& AddRecommendationResourceExclusions(RecommendationResourceExclusion&& value) { m_recommendationResourceExclusionsHasBeenSet = true; m_recommendationResourceExclusions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RecommendationResourceExclusion> m_recommendationResourceExclusions;
    bool m_recommendationResourceExclusionsHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
