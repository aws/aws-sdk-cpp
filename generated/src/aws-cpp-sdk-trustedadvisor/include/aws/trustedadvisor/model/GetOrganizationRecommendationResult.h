/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/model/OrganizationRecommendation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetOrganizationRecommendationResult
  {
  public:
    AWS_TRUSTEDADVISOR_API GetOrganizationRecommendationResult() = default;
    AWS_TRUSTEDADVISOR_API GetOrganizationRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRUSTEDADVISOR_API GetOrganizationRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Recommendation</p>
     */
    inline const OrganizationRecommendation& GetOrganizationRecommendation() const { return m_organizationRecommendation; }
    template<typename OrganizationRecommendationT = OrganizationRecommendation>
    void SetOrganizationRecommendation(OrganizationRecommendationT&& value) { m_organizationRecommendationHasBeenSet = true; m_organizationRecommendation = std::forward<OrganizationRecommendationT>(value); }
    template<typename OrganizationRecommendationT = OrganizationRecommendation>
    GetOrganizationRecommendationResult& WithOrganizationRecommendation(OrganizationRecommendationT&& value) { SetOrganizationRecommendation(std::forward<OrganizationRecommendationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOrganizationRecommendationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    OrganizationRecommendation m_organizationRecommendation;
    bool m_organizationRecommendationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
