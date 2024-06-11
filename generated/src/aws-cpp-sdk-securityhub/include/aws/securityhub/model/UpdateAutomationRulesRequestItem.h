/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/RuleStatus.h>
#include <aws/securityhub/model/AutomationRulesFindingFilters.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AutomationRulesAction.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Specifies the parameters to update in an existing automation rule.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UpdateAutomationRulesRequestItem">AWS
   * API Reference</a></p>
   */
  class UpdateAutomationRulesRequestItem
  {
  public:
    AWS_SECURITYHUB_API UpdateAutomationRulesRequestItem();
    AWS_SECURITYHUB_API UpdateAutomationRulesRequestItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API UpdateAutomationRulesRequestItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for the rule. </p>
     */
    inline const Aws::String& GetRuleArn() const{ return m_ruleArn; }
    inline bool RuleArnHasBeenSet() const { return m_ruleArnHasBeenSet; }
    inline void SetRuleArn(const Aws::String& value) { m_ruleArnHasBeenSet = true; m_ruleArn = value; }
    inline void SetRuleArn(Aws::String&& value) { m_ruleArnHasBeenSet = true; m_ruleArn = std::move(value); }
    inline void SetRuleArn(const char* value) { m_ruleArnHasBeenSet = true; m_ruleArn.assign(value); }
    inline UpdateAutomationRulesRequestItem& WithRuleArn(const Aws::String& value) { SetRuleArn(value); return *this;}
    inline UpdateAutomationRulesRequestItem& WithRuleArn(Aws::String&& value) { SetRuleArn(std::move(value)); return *this;}
    inline UpdateAutomationRulesRequestItem& WithRuleArn(const char* value) { SetRuleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Whether the rule is active after it is created. If this parameter is equal
     * to <code>ENABLED</code>, Security Hub starts applying the rule to findings and
     * finding updates after the rule is created. To change the value of this parameter
     * after creating a rule, use <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateAutomationRules.html">
     * <code>BatchUpdateAutomationRules</code> </a>. </p>
     */
    inline const RuleStatus& GetRuleStatus() const{ return m_ruleStatus; }
    inline bool RuleStatusHasBeenSet() const { return m_ruleStatusHasBeenSet; }
    inline void SetRuleStatus(const RuleStatus& value) { m_ruleStatusHasBeenSet = true; m_ruleStatus = value; }
    inline void SetRuleStatus(RuleStatus&& value) { m_ruleStatusHasBeenSet = true; m_ruleStatus = std::move(value); }
    inline UpdateAutomationRulesRequestItem& WithRuleStatus(const RuleStatus& value) { SetRuleStatus(value); return *this;}
    inline UpdateAutomationRulesRequestItem& WithRuleStatus(RuleStatus&& value) { SetRuleStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An integer ranging from 1 to 1000 that represents the order in which the
     * rule action is applied to findings. Security Hub applies rules with lower values
     * for this parameter first. </p>
     */
    inline int GetRuleOrder() const{ return m_ruleOrder; }
    inline bool RuleOrderHasBeenSet() const { return m_ruleOrderHasBeenSet; }
    inline void SetRuleOrder(int value) { m_ruleOrderHasBeenSet = true; m_ruleOrder = value; }
    inline UpdateAutomationRulesRequestItem& WithRuleOrder(int value) { SetRuleOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the rule. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateAutomationRulesRequestItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateAutomationRulesRequestItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateAutomationRulesRequestItem& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the rule. </p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }
    inline UpdateAutomationRulesRequestItem& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}
    inline UpdateAutomationRulesRequestItem& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}
    inline UpdateAutomationRulesRequestItem& WithRuleName(const char* value) { SetRuleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether a rule is the last to be applied with respect to a finding
     * that matches the rule criteria. This is useful when a finding matches the
     * criteria for multiple rules, and each rule has different actions. If a rule is
     * terminal, Security Hub applies the rule action to a finding that matches the
     * rule criteria and doesn't evaluate other rules for the finding. By default, a
     * rule isn't terminal. </p>
     */
    inline bool GetIsTerminal() const{ return m_isTerminal; }
    inline bool IsTerminalHasBeenSet() const { return m_isTerminalHasBeenSet; }
    inline void SetIsTerminal(bool value) { m_isTerminalHasBeenSet = true; m_isTerminal = value; }
    inline UpdateAutomationRulesRequestItem& WithIsTerminal(bool value) { SetIsTerminal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A set of ASFF finding field attributes and corresponding expected values
     * that Security Hub uses to filter findings. If a rule is enabled and a finding
     * matches the conditions specified in this parameter, Security Hub applies the
     * rule action to the finding. </p>
     */
    inline const AutomationRulesFindingFilters& GetCriteria() const{ return m_criteria; }
    inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }
    inline void SetCriteria(const AutomationRulesFindingFilters& value) { m_criteriaHasBeenSet = true; m_criteria = value; }
    inline void SetCriteria(AutomationRulesFindingFilters&& value) { m_criteriaHasBeenSet = true; m_criteria = std::move(value); }
    inline UpdateAutomationRulesRequestItem& WithCriteria(const AutomationRulesFindingFilters& value) { SetCriteria(value); return *this;}
    inline UpdateAutomationRulesRequestItem& WithCriteria(AutomationRulesFindingFilters&& value) { SetCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> One or more actions to update finding fields if a finding matches the
     * conditions specified in <code>Criteria</code>. </p>
     */
    inline const Aws::Vector<AutomationRulesAction>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<AutomationRulesAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<AutomationRulesAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline UpdateAutomationRulesRequestItem& WithActions(const Aws::Vector<AutomationRulesAction>& value) { SetActions(value); return *this;}
    inline UpdateAutomationRulesRequestItem& WithActions(Aws::Vector<AutomationRulesAction>&& value) { SetActions(std::move(value)); return *this;}
    inline UpdateAutomationRulesRequestItem& AddActions(const AutomationRulesAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline UpdateAutomationRulesRequestItem& AddActions(AutomationRulesAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_ruleArn;
    bool m_ruleArnHasBeenSet = false;

    RuleStatus m_ruleStatus;
    bool m_ruleStatusHasBeenSet = false;

    int m_ruleOrder;
    bool m_ruleOrderHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

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
