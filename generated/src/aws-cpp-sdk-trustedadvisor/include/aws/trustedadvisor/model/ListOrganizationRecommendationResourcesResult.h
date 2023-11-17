/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/trustedadvisor/model/OrganizationRecommendationResourceSummary.h>
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
  class ListOrganizationRecommendationResourcesResult
  {
  public:
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationResourcesResult();
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline ListOrganizationRecommendationResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline ListOrganizationRecommendationResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline ListOrganizationRecommendationResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of Recommendation Resources</p>
     */
    inline const Aws::Vector<OrganizationRecommendationResourceSummary>& GetOrganizationRecommendationResourceSummaries() const{ return m_organizationRecommendationResourceSummaries; }

    /**
     * <p>A list of Recommendation Resources</p>
     */
    inline void SetOrganizationRecommendationResourceSummaries(const Aws::Vector<OrganizationRecommendationResourceSummary>& value) { m_organizationRecommendationResourceSummaries = value; }

    /**
     * <p>A list of Recommendation Resources</p>
     */
    inline void SetOrganizationRecommendationResourceSummaries(Aws::Vector<OrganizationRecommendationResourceSummary>&& value) { m_organizationRecommendationResourceSummaries = std::move(value); }

    /**
     * <p>A list of Recommendation Resources</p>
     */
    inline ListOrganizationRecommendationResourcesResult& WithOrganizationRecommendationResourceSummaries(const Aws::Vector<OrganizationRecommendationResourceSummary>& value) { SetOrganizationRecommendationResourceSummaries(value); return *this;}

    /**
     * <p>A list of Recommendation Resources</p>
     */
    inline ListOrganizationRecommendationResourcesResult& WithOrganizationRecommendationResourceSummaries(Aws::Vector<OrganizationRecommendationResourceSummary>&& value) { SetOrganizationRecommendationResourceSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of Recommendation Resources</p>
     */
    inline ListOrganizationRecommendationResourcesResult& AddOrganizationRecommendationResourceSummaries(const OrganizationRecommendationResourceSummary& value) { m_organizationRecommendationResourceSummaries.push_back(value); return *this; }

    /**
     * <p>A list of Recommendation Resources</p>
     */
    inline ListOrganizationRecommendationResourcesResult& AddOrganizationRecommendationResourceSummaries(OrganizationRecommendationResourceSummary&& value) { m_organizationRecommendationResourceSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListOrganizationRecommendationResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListOrganizationRecommendationResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListOrganizationRecommendationResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<OrganizationRecommendationResourceSummary> m_organizationRecommendationResourceSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
