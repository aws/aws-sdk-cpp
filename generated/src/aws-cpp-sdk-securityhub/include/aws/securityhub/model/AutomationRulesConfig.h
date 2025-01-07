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
#include <aws/core/utils/DateTime.h>
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
   * <p> Defines the configuration of an automation rule. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AutomationRulesConfig">AWS
   * API Reference</a></p>
   */
  class AutomationRulesConfig
  {
  public:
    AWS_SECURITYHUB_API AutomationRulesConfig();
    AWS_SECURITYHUB_API AutomationRulesConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AutomationRulesConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of a rule. </p>
     */
    inline const Aws::String& GetRuleArn() const{ return m_ruleArn; }
    inline bool RuleArnHasBeenSet() const { return m_ruleArnHasBeenSet; }
    inline void SetRuleArn(const Aws::String& value) { m_ruleArnHasBeenSet = true; m_ruleArn = value; }
    inline void SetRuleArn(Aws::String&& value) { m_ruleArnHasBeenSet = true; m_ruleArn = std::move(value); }
    inline void SetRuleArn(const char* value) { m_ruleArnHasBeenSet = true; m_ruleArn.assign(value); }
    inline AutomationRulesConfig& WithRuleArn(const Aws::String& value) { SetRuleArn(value); return *this;}
    inline AutomationRulesConfig& WithRuleArn(Aws::String&& value) { SetRuleArn(std::move(value)); return *this;}
    inline AutomationRulesConfig& WithRuleArn(const char* value) { SetRuleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Whether the rule is active after it is created. If this parameter is equal
     * to <code>ENABLED</code>, Security Hub starts applying the rule to findings and
     * finding updates after the rule is created. </p>
     */
    inline const RuleStatus& GetRuleStatus() const{ return m_ruleStatus; }
    inline bool RuleStatusHasBeenSet() const { return m_ruleStatusHasBeenSet; }
    inline void SetRuleStatus(const RuleStatus& value) { m_ruleStatusHasBeenSet = true; m_ruleStatus = value; }
    inline void SetRuleStatus(RuleStatus&& value) { m_ruleStatusHasBeenSet = true; m_ruleStatus = std::move(value); }
    inline AutomationRulesConfig& WithRuleStatus(const RuleStatus& value) { SetRuleStatus(value); return *this;}
    inline AutomationRulesConfig& WithRuleStatus(RuleStatus&& value) { SetRuleStatus(std::move(value)); return *this;}
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
    inline AutomationRulesConfig& WithRuleOrder(int value) { SetRuleOrder(value); return *this;}
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
    inline AutomationRulesConfig& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}
    inline AutomationRulesConfig& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}
    inline AutomationRulesConfig& WithRuleName(const char* value) { SetRuleName(value); return *this;}
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
    inline AutomationRulesConfig& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AutomationRulesConfig& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AutomationRulesConfig& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline AutomationRulesConfig& WithIsTerminal(bool value) { SetIsTerminal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A set of <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format.html">Amazon
     * Web Services Security Finding Format</a> finding field attributes and
     * corresponding expected values that Security Hub uses to filter findings. If a
     * rule is enabled and a finding matches the conditions specified in this
     * parameter, Security Hub applies the rule action to the finding. </p>
     */
    inline const AutomationRulesFindingFilters& GetCriteria() const{ return m_criteria; }
    inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }
    inline void SetCriteria(const AutomationRulesFindingFilters& value) { m_criteriaHasBeenSet = true; m_criteria = value; }
    inline void SetCriteria(AutomationRulesFindingFilters&& value) { m_criteriaHasBeenSet = true; m_criteria = std::move(value); }
    inline AutomationRulesConfig& WithCriteria(const AutomationRulesFindingFilters& value) { SetCriteria(value); return *this;}
    inline AutomationRulesConfig& WithCriteria(AutomationRulesFindingFilters&& value) { SetCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> One or more actions to update finding fields if a finding matches the
     * defined criteria of the rule. </p>
     */
    inline const Aws::Vector<AutomationRulesAction>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<AutomationRulesAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<AutomationRulesAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline AutomationRulesConfig& WithActions(const Aws::Vector<AutomationRulesAction>& value) { SetActions(value); return *this;}
    inline AutomationRulesConfig& WithActions(Aws::Vector<AutomationRulesAction>&& value) { SetActions(std::move(value)); return *this;}
    inline AutomationRulesConfig& AddActions(const AutomationRulesAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline AutomationRulesConfig& AddActions(AutomationRulesAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A timestamp that indicates when the rule was created. </p> <p>For more
     * information about the validation and formatting of timestamp fields in Security
     * Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline AutomationRulesConfig& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline AutomationRulesConfig& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A timestamp that indicates when the rule was most recently updated. </p>
     * <p>For more information about the validation and formatting of timestamp fields
     * in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline AutomationRulesConfig& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline AutomationRulesConfig& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The principal that created a rule. </p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline AutomationRulesConfig& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline AutomationRulesConfig& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline AutomationRulesConfig& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}
  private:

    Aws::String m_ruleArn;
    bool m_ruleArnHasBeenSet = false;

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

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
