/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-readiness/model/Readiness.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-readiness/model/RuleResult.h>
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
  class GetReadinessCheckResourceStatusResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API GetReadinessCheckResourceStatusResult();
    AWS_ROUTE53RECOVERYREADINESS_API GetReadinessCheckResourceStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API GetReadinessCheckResourceStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetReadinessCheckResourceStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline GetReadinessCheckResourceStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline GetReadinessCheckResourceStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The readiness at a rule level.</p>
     */
    inline const Readiness& GetReadiness() const{ return m_readiness; }

    /**
     * <p>The readiness at a rule level.</p>
     */
    inline void SetReadiness(const Readiness& value) { m_readiness = value; }

    /**
     * <p>The readiness at a rule level.</p>
     */
    inline void SetReadiness(Readiness&& value) { m_readiness = std::move(value); }

    /**
     * <p>The readiness at a rule level.</p>
     */
    inline GetReadinessCheckResourceStatusResult& WithReadiness(const Readiness& value) { SetReadiness(value); return *this;}

    /**
     * <p>The readiness at a rule level.</p>
     */
    inline GetReadinessCheckResourceStatusResult& WithReadiness(Readiness&& value) { SetReadiness(std::move(value)); return *this;}


    /**
     * <p>Details of the rule's results.</p>
     */
    inline const Aws::Vector<RuleResult>& GetRules() const{ return m_rules; }

    /**
     * <p>Details of the rule's results.</p>
     */
    inline void SetRules(const Aws::Vector<RuleResult>& value) { m_rules = value; }

    /**
     * <p>Details of the rule's results.</p>
     */
    inline void SetRules(Aws::Vector<RuleResult>&& value) { m_rules = std::move(value); }

    /**
     * <p>Details of the rule's results.</p>
     */
    inline GetReadinessCheckResourceStatusResult& WithRules(const Aws::Vector<RuleResult>& value) { SetRules(value); return *this;}

    /**
     * <p>Details of the rule's results.</p>
     */
    inline GetReadinessCheckResourceStatusResult& WithRules(Aws::Vector<RuleResult>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>Details of the rule's results.</p>
     */
    inline GetReadinessCheckResourceStatusResult& AddRules(const RuleResult& value) { m_rules.push_back(value); return *this; }

    /**
     * <p>Details of the rule's results.</p>
     */
    inline GetReadinessCheckResourceStatusResult& AddRules(RuleResult&& value) { m_rules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Readiness m_readiness;

    Aws::Vector<RuleResult> m_rules;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
