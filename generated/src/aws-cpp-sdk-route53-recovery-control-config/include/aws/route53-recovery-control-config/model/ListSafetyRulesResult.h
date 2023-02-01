/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-control-config/model/Rule.h>
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
namespace Route53RecoveryControlConfig
{
namespace Model
{
  class ListSafetyRulesResult
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListSafetyRulesResult();
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListSafetyRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListSafetyRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListSafetyRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListSafetyRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline ListSafetyRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of safety rules in a control panel.</p>
     */
    inline const Aws::Vector<Rule>& GetSafetyRules() const{ return m_safetyRules; }

    /**
     * <p>The list of safety rules in a control panel.</p>
     */
    inline void SetSafetyRules(const Aws::Vector<Rule>& value) { m_safetyRules = value; }

    /**
     * <p>The list of safety rules in a control panel.</p>
     */
    inline void SetSafetyRules(Aws::Vector<Rule>&& value) { m_safetyRules = std::move(value); }

    /**
     * <p>The list of safety rules in a control panel.</p>
     */
    inline ListSafetyRulesResult& WithSafetyRules(const Aws::Vector<Rule>& value) { SetSafetyRules(value); return *this;}

    /**
     * <p>The list of safety rules in a control panel.</p>
     */
    inline ListSafetyRulesResult& WithSafetyRules(Aws::Vector<Rule>&& value) { SetSafetyRules(std::move(value)); return *this;}

    /**
     * <p>The list of safety rules in a control panel.</p>
     */
    inline ListSafetyRulesResult& AddSafetyRules(const Rule& value) { m_safetyRules.push_back(value); return *this; }

    /**
     * <p>The list of safety rules in a control panel.</p>
     */
    inline ListSafetyRulesResult& AddSafetyRules(Rule&& value) { m_safetyRules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Rule> m_safetyRules;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
