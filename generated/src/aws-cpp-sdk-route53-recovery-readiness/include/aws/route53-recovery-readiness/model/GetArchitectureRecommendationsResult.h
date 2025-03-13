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
    AWS_ROUTE53RECOVERYREADINESS_API GetArchitectureRecommendationsResult() = default;
    AWS_ROUTE53RECOVERYREADINESS_API GetArchitectureRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API GetArchitectureRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time that a recovery group was last assessed for recommendations, in UTC
     * ISO-8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAuditTimestamp() const { return m_lastAuditTimestamp; }
    template<typename LastAuditTimestampT = Aws::Utils::DateTime>
    void SetLastAuditTimestamp(LastAuditTimestampT&& value) { m_lastAuditTimestampHasBeenSet = true; m_lastAuditTimestamp = std::forward<LastAuditTimestampT>(value); }
    template<typename LastAuditTimestampT = Aws::Utils::DateTime>
    GetArchitectureRecommendationsResult& WithLastAuditTimestamp(LastAuditTimestampT&& value) { SetLastAuditTimestamp(std::forward<LastAuditTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetArchitectureRecommendationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the recommendations for the customer's application.</p>
     */
    inline const Aws::Vector<Recommendation>& GetRecommendations() const { return m_recommendations; }
    template<typename RecommendationsT = Aws::Vector<Recommendation>>
    void SetRecommendations(RecommendationsT&& value) { m_recommendationsHasBeenSet = true; m_recommendations = std::forward<RecommendationsT>(value); }
    template<typename RecommendationsT = Aws::Vector<Recommendation>>
    GetArchitectureRecommendationsResult& WithRecommendations(RecommendationsT&& value) { SetRecommendations(std::forward<RecommendationsT>(value)); return *this;}
    template<typename RecommendationsT = Recommendation>
    GetArchitectureRecommendationsResult& AddRecommendations(RecommendationsT&& value) { m_recommendationsHasBeenSet = true; m_recommendations.emplace_back(std::forward<RecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetArchitectureRecommendationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastAuditTimestamp{};
    bool m_lastAuditTimestampHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Recommendation> m_recommendations;
    bool m_recommendationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
