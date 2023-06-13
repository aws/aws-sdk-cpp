/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AutomationRulesConfig.h>
#include <aws/securityhub/model/UnprocessedAutomationRule.h>
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
namespace SecurityHub
{
namespace Model
{
  class BatchGetAutomationRulesResult
  {
  public:
    AWS_SECURITYHUB_API BatchGetAutomationRulesResult();
    AWS_SECURITYHUB_API BatchGetAutomationRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API BatchGetAutomationRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of rule details for the provided rule ARNs. </p>
     */
    inline const Aws::Vector<AutomationRulesConfig>& GetRules() const{ return m_rules; }

    /**
     * <p> A list of rule details for the provided rule ARNs. </p>
     */
    inline void SetRules(const Aws::Vector<AutomationRulesConfig>& value) { m_rules = value; }

    /**
     * <p> A list of rule details for the provided rule ARNs. </p>
     */
    inline void SetRules(Aws::Vector<AutomationRulesConfig>&& value) { m_rules = std::move(value); }

    /**
     * <p> A list of rule details for the provided rule ARNs. </p>
     */
    inline BatchGetAutomationRulesResult& WithRules(const Aws::Vector<AutomationRulesConfig>& value) { SetRules(value); return *this;}

    /**
     * <p> A list of rule details for the provided rule ARNs. </p>
     */
    inline BatchGetAutomationRulesResult& WithRules(Aws::Vector<AutomationRulesConfig>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p> A list of rule details for the provided rule ARNs. </p>
     */
    inline BatchGetAutomationRulesResult& AddRules(const AutomationRulesConfig& value) { m_rules.push_back(value); return *this; }

    /**
     * <p> A list of rule details for the provided rule ARNs. </p>
     */
    inline BatchGetAutomationRulesResult& AddRules(AutomationRulesConfig&& value) { m_rules.push_back(std::move(value)); return *this; }


    /**
     * <p> A list of objects containing <code>RuleArn</code>, <code>ErrorCode</code>,
     * and <code>ErrorMessage</code>. This parameter tells you which automation rules
     * the request didn't retrieve and why. </p>
     */
    inline const Aws::Vector<UnprocessedAutomationRule>& GetUnprocessedAutomationRules() const{ return m_unprocessedAutomationRules; }

    /**
     * <p> A list of objects containing <code>RuleArn</code>, <code>ErrorCode</code>,
     * and <code>ErrorMessage</code>. This parameter tells you which automation rules
     * the request didn't retrieve and why. </p>
     */
    inline void SetUnprocessedAutomationRules(const Aws::Vector<UnprocessedAutomationRule>& value) { m_unprocessedAutomationRules = value; }

    /**
     * <p> A list of objects containing <code>RuleArn</code>, <code>ErrorCode</code>,
     * and <code>ErrorMessage</code>. This parameter tells you which automation rules
     * the request didn't retrieve and why. </p>
     */
    inline void SetUnprocessedAutomationRules(Aws::Vector<UnprocessedAutomationRule>&& value) { m_unprocessedAutomationRules = std::move(value); }

    /**
     * <p> A list of objects containing <code>RuleArn</code>, <code>ErrorCode</code>,
     * and <code>ErrorMessage</code>. This parameter tells you which automation rules
     * the request didn't retrieve and why. </p>
     */
    inline BatchGetAutomationRulesResult& WithUnprocessedAutomationRules(const Aws::Vector<UnprocessedAutomationRule>& value) { SetUnprocessedAutomationRules(value); return *this;}

    /**
     * <p> A list of objects containing <code>RuleArn</code>, <code>ErrorCode</code>,
     * and <code>ErrorMessage</code>. This parameter tells you which automation rules
     * the request didn't retrieve and why. </p>
     */
    inline BatchGetAutomationRulesResult& WithUnprocessedAutomationRules(Aws::Vector<UnprocessedAutomationRule>&& value) { SetUnprocessedAutomationRules(std::move(value)); return *this;}

    /**
     * <p> A list of objects containing <code>RuleArn</code>, <code>ErrorCode</code>,
     * and <code>ErrorMessage</code>. This parameter tells you which automation rules
     * the request didn't retrieve and why. </p>
     */
    inline BatchGetAutomationRulesResult& AddUnprocessedAutomationRules(const UnprocessedAutomationRule& value) { m_unprocessedAutomationRules.push_back(value); return *this; }

    /**
     * <p> A list of objects containing <code>RuleArn</code>, <code>ErrorCode</code>,
     * and <code>ErrorMessage</code>. This parameter tells you which automation rules
     * the request didn't retrieve and why. </p>
     */
    inline BatchGetAutomationRulesResult& AddUnprocessedAutomationRules(UnprocessedAutomationRule&& value) { m_unprocessedAutomationRules.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetAutomationRulesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetAutomationRulesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetAutomationRulesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AutomationRulesConfig> m_rules;

    Aws::Vector<UnprocessedAutomationRule> m_unprocessedAutomationRules;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
