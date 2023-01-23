/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-readiness/model/Recommendation.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{
  class GetArchitectureRecommendationsResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API GetArchitectureRecommendationsResult();
    AWS_ROUTE53RECOVERYREADINESS_API GetArchitectureRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API GetArchitectureRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The time that a recovery group was last assessed for recommendations, in UTC
     * ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAuditTimestamp() const{ return m_lastAuditTimestamp; }

    /**
     * <p>The time that a recovery group was last assessed for recommendations, in UTC
     * ISO-8601 format.</p>
     */
    inline void SetLastAuditTimestamp(const Aws::Utils::DateTime& value) { m_lastAuditTimestamp = value; }

    /**
     * <p>The time that a recovery group was last assessed for recommendations, in UTC
     * ISO-8601 format.</p>
     */
    inline void SetLastAuditTimestamp(Aws::Utils::DateTime&& value) { m_lastAuditTimestamp = std::move(value); }

    /**
     * <p>The time that a recovery group was last assessed for recommendations, in UTC
     * ISO-8601 format.</p>
     */
    inline GetArchitectureRecommendationsResult& WithLastAuditTimestamp(const Aws::Utils::DateTime& value) { SetLastAuditTimestamp(value); return *this;}

    /**
     * <p>The time that a recovery group was last assessed for recommendations, in UTC
     * ISO-8601 format.</p>
     */
    inline GetArchitectureRecommendationsResult& WithLastAuditTimestamp(Aws::Utils::DateTime&& value) { SetLastAuditTimestamp(std::move(value)); return *this;}


    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline GetArchitectureRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline GetArchitectureRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline GetArchitectureRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of the recommendations for the customer's application.</p>
     */
    inline const Aws::Vector<Recommendation>& GetRecommendations() const{ return m_recommendations; }

    /**
     * <p>A list of the recommendations for the customer's application.</p>
     */
    inline void SetRecommendations(const Aws::Vector<Recommendation>& value) { m_recommendations = value; }

    /**
     * <p>A list of the recommendations for the customer's application.</p>
     */
    inline void SetRecommendations(Aws::Vector<Recommendation>&& value) { m_recommendations = std::move(value); }

    /**
     * <p>A list of the recommendations for the customer's application.</p>
     */
    inline GetArchitectureRecommendationsResult& WithRecommendations(const Aws::Vector<Recommendation>& value) { SetRecommendations(value); return *this;}

    /**
     * <p>A list of the recommendations for the customer's application.</p>
     */
    inline GetArchitectureRecommendationsResult& WithRecommendations(Aws::Vector<Recommendation>&& value) { SetRecommendations(std::move(value)); return *this;}

    /**
     * <p>A list of the recommendations for the customer's application.</p>
     */
    inline GetArchitectureRecommendationsResult& AddRecommendations(const Recommendation& value) { m_recommendations.push_back(value); return *this; }

    /**
     * <p>A list of the recommendations for the customer's application.</p>
     */
    inline GetArchitectureRecommendationsResult& AddRecommendations(Recommendation&& value) { m_recommendations.push_back(std::move(value)); return *this; }

  private:

    Aws::Utils::DateTime m_lastAuditTimestamp;

    Aws::String m_nextToken;

    Aws::Vector<Recommendation> m_recommendations;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
