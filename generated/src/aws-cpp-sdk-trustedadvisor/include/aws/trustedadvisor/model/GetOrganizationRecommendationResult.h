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
    AWS_TRUSTEDADVISOR_API GetOrganizationRecommendationResult();
    AWS_TRUSTEDADVISOR_API GetOrganizationRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRUSTEDADVISOR_API GetOrganizationRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Recommendation</p>
     */
    inline const OrganizationRecommendation& GetOrganizationRecommendation() const{ return m_organizationRecommendation; }

    /**
     * <p>The Recommendation</p>
     */
    inline void SetOrganizationRecommendation(const OrganizationRecommendation& value) { m_organizationRecommendation = value; }

    /**
     * <p>The Recommendation</p>
     */
    inline void SetOrganizationRecommendation(OrganizationRecommendation&& value) { m_organizationRecommendation = std::move(value); }

    /**
     * <p>The Recommendation</p>
     */
    inline GetOrganizationRecommendationResult& WithOrganizationRecommendation(const OrganizationRecommendation& value) { SetOrganizationRecommendation(value); return *this;}

    /**
     * <p>The Recommendation</p>
     */
    inline GetOrganizationRecommendationResult& WithOrganizationRecommendation(OrganizationRecommendation&& value) { SetOrganizationRecommendation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetOrganizationRecommendationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetOrganizationRecommendationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetOrganizationRecommendationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    OrganizationRecommendation m_organizationRecommendation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
