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
  class GetOrganizationRecommendationRequest : public TrustedAdvisorRequest
  {
  public:
    AWS_TRUSTEDADVISOR_API GetOrganizationRecommendationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOrganizationRecommendation"; }

    AWS_TRUSTEDADVISOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The Recommendation identifier</p>
     */
    inline const Aws::String& GetOrganizationRecommendationIdentifier() const{ return m_organizationRecommendationIdentifier; }

    /**
     * <p>The Recommendation identifier</p>
     */
    inline bool OrganizationRecommendationIdentifierHasBeenSet() const { return m_organizationRecommendationIdentifierHasBeenSet; }

    /**
     * <p>The Recommendation identifier</p>
     */
    inline void SetOrganizationRecommendationIdentifier(const Aws::String& value) { m_organizationRecommendationIdentifierHasBeenSet = true; m_organizationRecommendationIdentifier = value; }

    /**
     * <p>The Recommendation identifier</p>
     */
    inline void SetOrganizationRecommendationIdentifier(Aws::String&& value) { m_organizationRecommendationIdentifierHasBeenSet = true; m_organizationRecommendationIdentifier = std::move(value); }

    /**
     * <p>The Recommendation identifier</p>
     */
    inline void SetOrganizationRecommendationIdentifier(const char* value) { m_organizationRecommendationIdentifierHasBeenSet = true; m_organizationRecommendationIdentifier.assign(value); }

    /**
     * <p>The Recommendation identifier</p>
     */
    inline GetOrganizationRecommendationRequest& WithOrganizationRecommendationIdentifier(const Aws::String& value) { SetOrganizationRecommendationIdentifier(value); return *this;}

    /**
     * <p>The Recommendation identifier</p>
     */
    inline GetOrganizationRecommendationRequest& WithOrganizationRecommendationIdentifier(Aws::String&& value) { SetOrganizationRecommendationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Recommendation identifier</p>
     */
    inline GetOrganizationRecommendationRequest& WithOrganizationRecommendationIdentifier(const char* value) { SetOrganizationRecommendationIdentifier(value); return *this;}

  private:

    Aws::String m_organizationRecommendationIdentifier;
    bool m_organizationRecommendationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
