/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/RuleStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AutomationRulesFindingFilters.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AutomationRulesAction.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class CreateAutomationRuleRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API CreateAutomationRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAutomationRule"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p> User-defined tags associated with an automation rule. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> User-defined tags associated with an automation rule. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> User-defined tags associated with an automation rule. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> User-defined tags associated with an automation rule. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> User-defined tags associated with an automation rule. </p>
     */
    inline CreateAutomationRuleRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> User-defined tags associated with an automation rule. </p>
     */
    inline CreateAutomationRuleRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> User-defined tags associated with an automation rule. </p>
     */
    inline CreateAutomationRuleRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> User-defined tags associated with an automation rule. </p>
     */
    inline CreateAutomationRuleRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> User-defined tags associated with an automation rule. </p>
     */
    inline CreateAutomationRuleRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> User-defined tags associated with an automation rule. </p>
     */
    inline CreateAutomationRuleRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> User-defined tags associated with an automation rule. </p>
     */
    inline CreateAutomationRuleRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> User-defined tags associated with an automation rule. </p>
     */
    inline CreateAutomationRuleRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> User-defined tags associated with an automation rule. </p>
     */
    inline CreateAutomationRuleRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p> Whether the rule is active after it is created. If this parameter is equal
     * to <code>ENABLED</code>, Security Hub starts applying the rule to findings and
     * finding updates after the rule is created. To change the value of this parameter
     * after creating a rule, use <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateAutomationRules.html">
     * <code>BatchUpdateAutomationRules</code> </a>. </p>
     */
    inline const RuleStatus& GetRuleStatus() const{ return m_ruleStatus; }

    /**
     * <p> Whether the rule is active after it is created. If this parameter is equal
     * to <code>ENABLED</code>, Security Hub starts applying the rule to findings and
     * finding updates after the rule is created. To change the value of this parameter
     * after creating a rule, use <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateAutomationRules.html">
     * <code>BatchUpdateAutomationRules</code> </a>. </p>
     */
    inline bool RuleStatusHasBeenSet() const { return m_ruleStatusHasBeenSet; }

    /**
     * <p> Whether the rule is active after it is created. If this parameter is equal
     * to <code>ENABLED</code>, Security Hub starts applying the rule to findings and
     * finding updates after the rule is created. To change the value of this parameter
     * after creating a rule, use <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateAutomationRules.html">
     * <code>BatchUpdateAutomationRules</code> </a>. </p>
     */
    inline void SetRuleStatus(const RuleStatus& value) { m_ruleStatusHasBeenSet = true; m_ruleStatus = value; }

    /**
     * <p> Whether the rule is active after it is created. If this parameter is equal
     * to <code>ENABLED</code>, Security Hub starts applying the rule to findings and
     * finding updates after the rule is created. To change the value of this parameter
     * after creating a rule, use <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateAutomationRules.html">
     * <code>BatchUpdateAutomationRules</code> </a>. </p>
     */
    inline void SetRuleStatus(RuleStatus&& value) { m_ruleStatusHasBeenSet = true; m_ruleStatus = std::move(value); }

    /**
     * <p> Whether the rule is active after it is created. If this parameter is equal
     * to <code>ENABLED</code>, Security Hub starts applying the rule to findings and
     * finding updates after the rule is created. To change the value of this parameter
     * after creating a rule, use <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateAutomationRules.html">
     * <code>BatchUpdateAutomationRules</code> </a>. </p>
     */
    inline CreateAutomationRuleRequest& WithRuleStatus(const RuleStatus& value) { SetRuleStatus(value); return *this;}

    /**
     * <p> Whether the rule is active after it is created. If this parameter is equal
     * to <code>ENABLED</code>, Security Hub starts applying the rule to findings and
     * finding updates after the rule is created. To change the value of this parameter
     * after creating a rule, use <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateAutomationRules.html">
     * <code>BatchUpdateAutomationRules</code> </a>. </p>
     */
    inline CreateAutomationRuleRequest& WithRuleStatus(RuleStatus&& value) { SetRuleStatus(std::move(value)); return *this;}


    /**
     * <p>An integer ranging from 1 to 1000 that represents the order in which the rule
     * action is applied to findings. Security Hub applies rules with lower values for
     * this parameter first. </p>
     */
    inline int GetRuleOrder() const{ return m_ruleOrder; }

    /**
     * <p>An integer ranging from 1 to 1000 that represents the order in which the rule
     * action is applied to findings. Security Hub applies rules with lower values for
     * this parameter first. </p>
     */
    inline bool RuleOrderHasBeenSet() const { return m_ruleOrderHasBeenSet; }

    /**
     * <p>An integer ranging from 1 to 1000 that represents the order in which the rule
     * action is applied to findings. Security Hub applies rules with lower values for
     * this parameter first. </p>
     */
    inline void SetRuleOrder(int value) { m_ruleOrderHasBeenSet = true; m_ruleOrder = value; }

    /**
     * <p>An integer ranging from 1 to 1000 that represents the order in which the rule
     * action is applied to findings. Security Hub applies rules with lower values for
     * this parameter first. </p>
     */
    inline CreateAutomationRuleRequest& WithRuleOrder(int value) { SetRuleOrder(value); return *this;}


    /**
     * <p> The name of the rule. </p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p> The name of the rule. </p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p> The name of the rule. </p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p> The name of the rule. </p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p> The name of the rule. </p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p> The name of the rule. </p>
     */
    inline CreateAutomationRuleRequest& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p> The name of the rule. </p>
     */
    inline CreateAutomationRuleRequest& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p> The name of the rule. </p>
     */
    inline CreateAutomationRuleRequest& WithRuleName(const char* value) { SetRuleName(value); return *this;}


    /**
     * <p> A description of the rule. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A description of the rule. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A description of the rule. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A description of the rule. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A description of the rule. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A description of the rule. </p>
     */
    inline CreateAutomationRuleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A description of the rule. </p>
     */
    inline CreateAutomationRuleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A description of the rule. </p>
     */
    inline CreateAutomationRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies whether a rule is the last to be applied with respect to a finding
     * that matches the rule criteria. This is useful when a finding matches the
     * criteria for multiple rules, and each rule has different actions. If a rule is
     * terminal, Security Hub applies the rule action to a finding that matches the
     * rule criteria and doesn't evaluate other rules for the finding. By default, a
     * rule isn't terminal. </p>
     */
    inline bool GetIsTerminal() const{ return m_isTerminal; }

    /**
     * <p>Specifies whether a rule is the last to be applied with respect to a finding
     * that matches the rule criteria. This is useful when a finding matches the
     * criteria for multiple rules, and each rule has different actions. If a rule is
     * terminal, Security Hub applies the rule action to a finding that matches the
     * rule criteria and doesn't evaluate other rules for the finding. By default, a
     * rule isn't terminal. </p>
     */
    inline bool IsTerminalHasBeenSet() const { return m_isTerminalHasBeenSet; }

    /**
     * <p>Specifies whether a rule is the last to be applied with respect to a finding
     * that matches the rule criteria. This is useful when a finding matches the
     * criteria for multiple rules, and each rule has different actions. If a rule is
     * terminal, Security Hub applies the rule action to a finding that matches the
     * rule criteria and doesn't evaluate other rules for the finding. By default, a
     * rule isn't terminal. </p>
     */
    inline void SetIsTerminal(bool value) { m_isTerminalHasBeenSet = true; m_isTerminal = value; }

    /**
     * <p>Specifies whether a rule is the last to be applied with respect to a finding
     * that matches the rule criteria. This is useful when a finding matches the
     * criteria for multiple rules, and each rule has different actions. If a rule is
     * terminal, Security Hub applies the rule action to a finding that matches the
     * rule criteria and doesn't evaluate other rules for the finding. By default, a
     * rule isn't terminal. </p>
     */
    inline CreateAutomationRuleRequest& WithIsTerminal(bool value) { SetIsTerminal(value); return *this;}


    /**
     * <p> A set of ASFF finding field attributes and corresponding expected values
     * that Security Hub uses to filter findings. If a rule is enabled and a finding
     * matches the conditions specified in this parameter, Security Hub applies the
     * rule action to the finding. </p>
     */
    inline const AutomationRulesFindingFilters& GetCriteria() const{ return m_criteria; }

    /**
     * <p> A set of ASFF finding field attributes and corresponding expected values
     * that Security Hub uses to filter findings. If a rule is enabled and a finding
     * matches the conditions specified in this parameter, Security Hub applies the
     * rule action to the finding. </p>
     */
    inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }

    /**
     * <p> A set of ASFF finding field attributes and corresponding expected values
     * that Security Hub uses to filter findings. If a rule is enabled and a finding
     * matches the conditions specified in this parameter, Security Hub applies the
     * rule action to the finding. </p>
     */
    inline void SetCriteria(const AutomationRulesFindingFilters& value) { m_criteriaHasBeenSet = true; m_criteria = value; }

    /**
     * <p> A set of ASFF finding field attributes and corresponding expected values
     * that Security Hub uses to filter findings. If a rule is enabled and a finding
     * matches the conditions specified in this parameter, Security Hub applies the
     * rule action to the finding. </p>
     */
    inline void SetCriteria(AutomationRulesFindingFilters&& value) { m_criteriaHasBeenSet = true; m_criteria = std::move(value); }

    /**
     * <p> A set of ASFF finding field attributes and corresponding expected values
     * that Security Hub uses to filter findings. If a rule is enabled and a finding
     * matches the conditions specified in this parameter, Security Hub applies the
     * rule action to the finding. </p>
     */
    inline CreateAutomationRuleRequest& WithCriteria(const AutomationRulesFindingFilters& value) { SetCriteria(value); return *this;}

    /**
     * <p> A set of ASFF finding field attributes and corresponding expected values
     * that Security Hub uses to filter findings. If a rule is enabled and a finding
     * matches the conditions specified in this parameter, Security Hub applies the
     * rule action to the finding. </p>
     */
    inline CreateAutomationRuleRequest& WithCriteria(AutomationRulesFindingFilters&& value) { SetCriteria(std::move(value)); return *this;}


    /**
     * <p> One or more actions to update finding fields if a finding matches the
     * conditions specified in <code>Criteria</code>. </p>
     */
    inline const Aws::Vector<AutomationRulesAction>& GetActions() const{ return m_actions; }

    /**
     * <p> One or more actions to update finding fields if a finding matches the
     * conditions specified in <code>Criteria</code>. </p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p> One or more actions to update finding fields if a finding matches the
     * conditions specified in <code>Criteria</code>. </p>
     */
    inline void SetActions(const Aws::Vector<AutomationRulesAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p> One or more actions to update finding fields if a finding matches the
     * conditions specified in <code>Criteria</code>. </p>
     */
    inline void SetActions(Aws::Vector<AutomationRulesAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p> One or more actions to update finding fields if a finding matches the
     * conditions specified in <code>Criteria</code>. </p>
     */
    inline CreateAutomationRuleRequest& WithActions(const Aws::Vector<AutomationRulesAction>& value) { SetActions(value); return *this;}

    /**
     * <p> One or more actions to update finding fields if a finding matches the
     * conditions specified in <code>Criteria</code>. </p>
     */
    inline CreateAutomationRuleRequest& WithActions(Aws::Vector<AutomationRulesAction>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p> One or more actions to update finding fields if a finding matches the
     * conditions specified in <code>Criteria</code>. </p>
     */
    inline CreateAutomationRuleRequest& AddActions(const AutomationRulesAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p> One or more actions to update finding fields if a finding matches the
     * conditions specified in <code>Criteria</code>. </p>
     */
    inline CreateAutomationRuleRequest& AddActions(AutomationRulesAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    RuleStatus m_ruleStatus;
    bool m_ruleStatusHasBeenSet = false;

    int m_ruleOrder;
    bool m_ruleOrderHasBeenSet = false;

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_isTerminal;
    bool m_isTerminalHasBeenSet = false;

    AutomationRulesFindingFilters m_criteria;
    bool m_criteriaHasBeenSet = false;

    Aws::Vector<AutomationRulesAction> m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
