/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/TrustedAdvisorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace TrustedAdvisor
{
namespace Model
{

  /**
   */
  class GetRecommendationRequest : public TrustedAdvisorRequest
  {
  public:
    AWS_TRUSTEDADVISOR_API GetRecommendationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRecommendation"; }

    AWS_TRUSTEDADVISOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Recommendation identifier</p>
     */
    inline const Aws::String& GetRecommendationIdentifier() const { return m_recommendationIdentifier; }
    inline bool RecommendationIdentifierHasBeenSet() const { return m_recommendationIdentifierHasBeenSet; }
    template<typename RecommendationIdentifierT = Aws::String>
    void SetRecommendationIdentifier(RecommendationIdentifierT&& value) { m_recommendationIdentifierHasBeenSet = true; m_recommendationIdentifier = std::forward<RecommendationIdentifierT>(value); }
    template<typename RecommendationIdentifierT = Aws::String>
    GetRecommendationRequest& WithRecommendationIdentifier(RecommendationIdentifierT&& value) { SetRecommendationIdentifier(std::forward<RecommendationIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recommendationIdentifier;
    bool m_recommendationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
