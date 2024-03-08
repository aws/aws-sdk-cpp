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
    AWS_TRUSTEDADVISOR_API GetRecommendationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRecommendation"; }

    AWS_TRUSTEDADVISOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The Recommendation identifier</p>
     */
    inline const Aws::String& GetRecommendationIdentifier() const{ return m_recommendationIdentifier; }

    /**
     * <p>The Recommendation identifier</p>
     */
    inline bool RecommendationIdentifierHasBeenSet() const { return m_recommendationIdentifierHasBeenSet; }

    /**
     * <p>The Recommendation identifier</p>
     */
    inline void SetRecommendationIdentifier(const Aws::String& value) { m_recommendationIdentifierHasBeenSet = true; m_recommendationIdentifier = value; }

    /**
     * <p>The Recommendation identifier</p>
     */
    inline void SetRecommendationIdentifier(Aws::String&& value) { m_recommendationIdentifierHasBeenSet = true; m_recommendationIdentifier = std::move(value); }

    /**
     * <p>The Recommendation identifier</p>
     */
    inline void SetRecommendationIdentifier(const char* value) { m_recommendationIdentifierHasBeenSet = true; m_recommendationIdentifier.assign(value); }

    /**
     * <p>The Recommendation identifier</p>
     */
    inline GetRecommendationRequest& WithRecommendationIdentifier(const Aws::String& value) { SetRecommendationIdentifier(value); return *this;}

    /**
     * <p>The Recommendation identifier</p>
     */
    inline GetRecommendationRequest& WithRecommendationIdentifier(Aws::String&& value) { SetRecommendationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Recommendation identifier</p>
     */
    inline GetRecommendationRequest& WithRecommendationIdentifier(const char* value) { SetRecommendationIdentifier(value); return *this;}

  private:

    Aws::String m_recommendationIdentifier;
    bool m_recommendationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
