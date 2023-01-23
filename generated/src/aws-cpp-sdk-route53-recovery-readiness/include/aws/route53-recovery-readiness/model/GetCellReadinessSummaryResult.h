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
  class GetCellReadinessSummaryResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API GetCellReadinessSummaryResult();
    AWS_ROUTE53RECOVERYREADINESS_API GetCellReadinessSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API GetCellReadinessSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetCellReadinessSummaryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline GetCellReadinessSummaryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline GetCellReadinessSummaryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The readiness at a cell level.</p>
     */
    inline const Readiness& GetReadiness() const{ return m_readiness; }

    /**
     * <p>The readiness at a cell level.</p>
     */
    inline void SetReadiness(const Readiness& value) { m_readiness = value; }

    /**
     * <p>The readiness at a cell level.</p>
     */
    inline void SetReadiness(Readiness&& value) { m_readiness = std::move(value); }

    /**
     * <p>The readiness at a cell level.</p>
     */
    inline GetCellReadinessSummaryResult& WithReadiness(const Readiness& value) { SetReadiness(value); return *this;}

    /**
     * <p>The readiness at a cell level.</p>
     */
    inline GetCellReadinessSummaryResult& WithReadiness(Readiness&& value) { SetReadiness(std::move(value)); return *this;}


    /**
     * <p>Summaries for the readiness checks that make up the cell.</p>
     */
    inline const Aws::Vector<ReadinessCheckSummary>& GetReadinessChecks() const{ return m_readinessChecks; }

    /**
     * <p>Summaries for the readiness checks that make up the cell.</p>
     */
    inline void SetReadinessChecks(const Aws::Vector<ReadinessCheckSummary>& value) { m_readinessChecks = value; }

    /**
     * <p>Summaries for the readiness checks that make up the cell.</p>
     */
    inline void SetReadinessChecks(Aws::Vector<ReadinessCheckSummary>&& value) { m_readinessChecks = std::move(value); }

    /**
     * <p>Summaries for the readiness checks that make up the cell.</p>
     */
    inline GetCellReadinessSummaryResult& WithReadinessChecks(const Aws::Vector<ReadinessCheckSummary>& value) { SetReadinessChecks(value); return *this;}

    /**
     * <p>Summaries for the readiness checks that make up the cell.</p>
     */
    inline GetCellReadinessSummaryResult& WithReadinessChecks(Aws::Vector<ReadinessCheckSummary>&& value) { SetReadinessChecks(std::move(value)); return *this;}

    /**
     * <p>Summaries for the readiness checks that make up the cell.</p>
     */
    inline GetCellReadinessSummaryResult& AddReadinessChecks(const ReadinessCheckSummary& value) { m_readinessChecks.push_back(value); return *this; }

    /**
     * <p>Summaries for the readiness checks that make up the cell.</p>
     */
    inline GetCellReadinessSummaryResult& AddReadinessChecks(ReadinessCheckSummary&& value) { m_readinessChecks.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Readiness m_readiness;

    Aws::Vector<ReadinessCheckSummary> m_readinessChecks;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
