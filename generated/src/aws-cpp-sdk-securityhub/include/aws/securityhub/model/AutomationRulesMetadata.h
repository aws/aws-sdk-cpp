/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/RuleStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p> Metadata for automation rules in the calling account. The response includes
   * rules with a <code>RuleStatus</code> of <code>ENABLED</code> and
   * <code>DISABLED</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AutomationRulesMetadata">AWS
   * API Reference</a></p>
   */
  class AutomationRulesMetadata
  {
  public:
    AWS_SECURITYHUB_API AutomationRulesMetadata();
    AWS_SECURITYHUB_API AutomationRulesMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AutomationRulesMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) for the rule. </p>
     */
    inline const Aws::String& GetRuleArn() const{ return m_ruleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) for the rule. </p>
     */
    inline bool RuleArnHasBeenSet() const { return m_ruleArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) for the rule. </p>
     */
    inline void SetRuleArn(const Aws::String& value) { m_ruleArnHasBeenSet = true; m_ruleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) for the rule. </p>
     */
    inline void SetRuleArn(Aws::String&& value) { m_ruleArnHasBeenSet = true; m_ruleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for the rule. </p>
     */
    inline void SetRuleArn(const char* value) { m_ruleArnHasBeenSet = true; m_ruleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for the rule. </p>
     */
    inline AutomationRulesMetadata& WithRuleArn(const Aws::String& value) { SetRuleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for the rule. </p>
     */
    inline AutomationRulesMetadata& WithRuleArn(Aws::String&& value) { SetRuleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for the rule. </p>
     */
    inline AutomationRulesMetadata& WithRuleArn(const char* value) { SetRuleArn(value); return *this;}


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
    inline AutomationRulesMetadata& WithRuleStatus(const RuleStatus& value) { SetRuleStatus(value); return *this;}

    /**
     * <p> Whether the rule is active after it is created. If this parameter is equal
     * to <code>ENABLED</code>, Security Hub starts applying the rule to findings and
     * finding updates after the rule is created. To change the value of this parameter
     * after creating a rule, use <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateAutomationRules.html">
     * <code>BatchUpdateAutomationRules</code> </a>. </p>
     */
    inline AutomationRulesMetadata& WithRuleStatus(RuleStatus&& value) { SetRuleStatus(std::move(value)); return *this;}


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
    inline AutomationRulesMetadata& WithRuleOrder(int value) { SetRuleOrder(value); return *this;}


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
    inline AutomationRulesMetadata& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p> The name of the rule. </p>
     */
    inline AutomationRulesMetadata& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p> The name of the rule. </p>
     */
    inline AutomationRulesMetadata& WithRuleName(const char* value) { SetRuleName(value); return *this;}


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
    inline AutomationRulesMetadata& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A description of the rule. </p>
     */
    inline AutomationRulesMetadata& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A description of the rule. </p>
     */
    inline AutomationRulesMetadata& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline AutomationRulesMetadata& WithIsTerminal(bool value) { SetIsTerminal(value); return *this;}


    /**
     * <p> A timestamp that indicates when the rule was created. </p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p> A timestamp that indicates when the rule was created. </p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p> A timestamp that indicates when the rule was created. </p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p> A timestamp that indicates when the rule was created. </p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p> A timestamp that indicates when the rule was created. </p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AutomationRulesMetadata& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p> A timestamp that indicates when the rule was created. </p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AutomationRulesMetadata& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p> A timestamp that indicates when the rule was most recently updated. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p> A timestamp that indicates when the rule was most recently updated. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p> A timestamp that indicates when the rule was most recently updated. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p> A timestamp that indicates when the rule was most recently updated. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p> A timestamp that indicates when the rule was most recently updated. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AutomationRulesMetadata& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p> A timestamp that indicates when the rule was most recently updated. </p>
     * <p>Uses the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AutomationRulesMetadata& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p> The principal that created a rule. </p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p> The principal that created a rule. </p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p> The principal that created a rule. </p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p> The principal that created a rule. </p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p> The principal that created a rule. </p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p> The principal that created a rule. </p>
     */
    inline AutomationRulesMetadata& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p> The principal that created a rule. </p>
     */
    inline AutomationRulesMetadata& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p> The principal that created a rule. </p>
     */
    inline AutomationRulesMetadata& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}

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
