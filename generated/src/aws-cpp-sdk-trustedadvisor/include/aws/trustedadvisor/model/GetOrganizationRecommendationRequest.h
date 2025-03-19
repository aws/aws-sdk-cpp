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
    AWS_TRUSTEDADVISOR_API GetOrganizationRecommendationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOrganizationRecommendation"; }

    AWS_TRUSTEDADVISOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Recommendation identifier</p>
     */
    inline const Aws::String& GetOrganizationRecommendationIdentifier() const { return m_organizationRecommendationIdentifier; }
    inline bool OrganizationRecommendationIdentifierHasBeenSet() const { return m_organizationRecommendationIdentifierHasBeenSet; }
    template<typename OrganizationRecommendationIdentifierT = Aws::String>
    void SetOrganizationRecommendationIdentifier(OrganizationRecommendationIdentifierT&& value) { m_organizationRecommendationIdentifierHasBeenSet = true; m_organizationRecommendationIdentifier = std::forward<OrganizationRecommendationIdentifierT>(value); }
    template<typename OrganizationRecommendationIdentifierT = Aws::String>
    GetOrganizationRecommendationRequest& WithOrganizationRecommendationIdentifier(OrganizationRecommendationIdentifierT&& value) { SetOrganizationRecommendationIdentifier(std::forward<OrganizationRecommendationIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationRecommendationIdentifier;
    bool m_organizationRecommendationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
