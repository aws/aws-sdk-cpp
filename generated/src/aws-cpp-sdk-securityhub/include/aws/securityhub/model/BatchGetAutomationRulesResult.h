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
    AWS_SECURITYHUB_API BatchGetAutomationRulesResult() = default;
    AWS_SECURITYHUB_API BatchGetAutomationRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API BatchGetAutomationRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of rule details for the provided rule ARNs. </p>
     */
    inline const Aws::Vector<AutomationRulesConfig>& GetRules() const { return m_rules; }
    template<typename RulesT = Aws::Vector<AutomationRulesConfig>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<AutomationRulesConfig>>
    BatchGetAutomationRulesResult& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = AutomationRulesConfig>
    BatchGetAutomationRulesResult& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of objects containing <code>RuleArn</code>, <code>ErrorCode</code>,
     * and <code>ErrorMessage</code>. This parameter tells you which automation rules
     * the request didn't retrieve and why. </p>
     */
    inline const Aws::Vector<UnprocessedAutomationRule>& GetUnprocessedAutomationRules() const { return m_unprocessedAutomationRules; }
    template<typename UnprocessedAutomationRulesT = Aws::Vector<UnprocessedAutomationRule>>
    void SetUnprocessedAutomationRules(UnprocessedAutomationRulesT&& value) { m_unprocessedAutomationRulesHasBeenSet = true; m_unprocessedAutomationRules = std::forward<UnprocessedAutomationRulesT>(value); }
    template<typename UnprocessedAutomationRulesT = Aws::Vector<UnprocessedAutomationRule>>
    BatchGetAutomationRulesResult& WithUnprocessedAutomationRules(UnprocessedAutomationRulesT&& value) { SetUnprocessedAutomationRules(std::forward<UnprocessedAutomationRulesT>(value)); return *this;}
    template<typename UnprocessedAutomationRulesT = UnprocessedAutomationRule>
    BatchGetAutomationRulesResult& AddUnprocessedAutomationRules(UnprocessedAutomationRulesT&& value) { m_unprocessedAutomationRulesHasBeenSet = true; m_unprocessedAutomationRules.emplace_back(std::forward<UnprocessedAutomationRulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetAutomationRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AutomationRulesConfig> m_rules;
    bool m_rulesHasBeenSet = false;

    Aws::Vector<UnprocessedAutomationRule> m_unprocessedAutomationRules;
    bool m_unprocessedAutomationRulesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
