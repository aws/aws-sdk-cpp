/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/trustedadvisor/model/OrganizationRecommendationSummary.h>
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
  class ListOrganizationRecommendationsResult
  {
  public:
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationsResult();
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListOrganizationRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListOrganizationRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListOrganizationRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Recommendations</p>
     */
    inline const Aws::Vector<OrganizationRecommendationSummary>& GetOrganizationRecommendationSummaries() const{ return m_organizationRecommendationSummaries; }
    inline void SetOrganizationRecommendationSummaries(const Aws::Vector<OrganizationRecommendationSummary>& value) { m_organizationRecommendationSummaries = value; }
    inline void SetOrganizationRecommendationSummaries(Aws::Vector<OrganizationRecommendationSummary>&& value) { m_organizationRecommendationSummaries = std::move(value); }
    inline ListOrganizationRecommendationsResult& WithOrganizationRecommendationSummaries(const Aws::Vector<OrganizationRecommendationSummary>& value) { SetOrganizationRecommendationSummaries(value); return *this;}
    inline ListOrganizationRecommendationsResult& WithOrganizationRecommendationSummaries(Aws::Vector<OrganizationRecommendationSummary>&& value) { SetOrganizationRecommendationSummaries(std::move(value)); return *this;}
    inline ListOrganizationRecommendationsResult& AddOrganizationRecommendationSummaries(const OrganizationRecommendationSummary& value) { m_organizationRecommendationSummaries.push_back(value); return *this; }
    inline ListOrganizationRecommendationsResult& AddOrganizationRecommendationSummaries(OrganizationRecommendationSummary&& value) { m_organizationRecommendationSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListOrganizationRecommendationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListOrganizationRecommendationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListOrganizationRecommendationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<OrganizationRecommendationSummary> m_organizationRecommendationSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
