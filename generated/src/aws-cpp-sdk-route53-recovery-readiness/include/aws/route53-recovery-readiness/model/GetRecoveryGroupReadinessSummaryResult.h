/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-readiness/model/Readiness.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-readiness/model/ReadinessCheckSummary.h>
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
  class GetRecoveryGroupReadinessSummaryResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API GetRecoveryGroupReadinessSummaryResult() = default;
    AWS_ROUTE53RECOVERYREADINESS_API GetRecoveryGroupReadinessSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API GetRecoveryGroupReadinessSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetRecoveryGroupReadinessSummaryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The readiness status at a recovery group level.</p>
     */
    inline Readiness GetReadiness() const { return m_readiness; }
    inline void SetReadiness(Readiness value) { m_readinessHasBeenSet = true; m_readiness = value; }
    inline GetRecoveryGroupReadinessSummaryResult& WithReadiness(Readiness value) { SetReadiness(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summaries of the readiness checks for the recovery group.</p>
     */
    inline const Aws::Vector<ReadinessCheckSummary>& GetReadinessChecks() const { return m_readinessChecks; }
    template<typename ReadinessChecksT = Aws::Vector<ReadinessCheckSummary>>
    void SetReadinessChecks(ReadinessChecksT&& value) { m_readinessChecksHasBeenSet = true; m_readinessChecks = std::forward<ReadinessChecksT>(value); }
    template<typename ReadinessChecksT = Aws::Vector<ReadinessCheckSummary>>
    GetRecoveryGroupReadinessSummaryResult& WithReadinessChecks(ReadinessChecksT&& value) { SetReadinessChecks(std::forward<ReadinessChecksT>(value)); return *this;}
    template<typename ReadinessChecksT = ReadinessCheckSummary>
    GetRecoveryGroupReadinessSummaryResult& AddReadinessChecks(ReadinessChecksT&& value) { m_readinessChecksHasBeenSet = true; m_readinessChecks.emplace_back(std::forward<ReadinessChecksT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRecoveryGroupReadinessSummaryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Readiness m_readiness{Readiness::NOT_SET};
    bool m_readinessHasBeenSet = false;

    Aws::Vector<ReadinessCheckSummary> m_readinessChecks;
    bool m_readinessChecksHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
