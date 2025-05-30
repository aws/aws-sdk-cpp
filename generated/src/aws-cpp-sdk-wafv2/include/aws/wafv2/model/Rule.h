﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/Statement.h>
#include <aws/wafv2/model/RuleAction.h>
#include <aws/wafv2/model/OverrideAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/VisibilityConfig.h>
#include <aws/wafv2/model/CaptchaConfig.h>
#include <aws/wafv2/model/ChallengeConfig.h>
#include <aws/wafv2/model/Label.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>A single rule, which you can use in a <a>WebACL</a> or <a>RuleGroup</a> to
   * identify web requests that you want to manage in some way. Each rule includes
   * one top-level <a>Statement</a> that WAF uses to identify matching web requests,
   * and parameters that govern how WAF handles them. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/Rule">AWS API
   * Reference</a></p>
   */
  class Rule
  {
  public:
    AWS_WAFV2_API Rule() = default;
    AWS_WAFV2_API Rule(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the rule. </p> <p>If you change the name of a <code>Rule</code>
     * after you create it and you want the rule's metric name to reflect the change,
     * update the metric name in the rule's <code>VisibilityConfig</code> settings. WAF
     * doesn't automatically update the metric name when you update the rule name. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Rule& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you define more than one <code>Rule</code> in a <code>WebACL</code>, WAF
     * evaluates each request against the <code>Rules</code> in order based on the
     * value of <code>Priority</code>. WAF processes rules with lower priority first.
     * The priorities don't need to be consecutive, but they must all be different.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline Rule& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The WAF processing statement for the rule, for example
     * <a>ByteMatchStatement</a> or <a>SizeConstraintStatement</a>. </p>
     */
    inline const Statement& GetStatement() const { return m_statement; }
    inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }
    template<typename StatementT = Statement>
    void SetStatement(StatementT&& value) { m_statementHasBeenSet = true; m_statement = std::forward<StatementT>(value); }
    template<typename StatementT = Statement>
    Rule& WithStatement(StatementT&& value) { SetStatement(std::forward<StatementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that WAF should take on a web request when it matches the rule
     * statement. Settings at the web ACL level can override the rule action setting.
     * </p> <p>This is used only for rules whose statements do not reference a rule
     * group. Rule statements that reference a rule group include
     * <code>RuleGroupReferenceStatement</code> and
     * <code>ManagedRuleGroupStatement</code>. </p> <p>You must specify either this
     * <code>Action</code> setting or the rule <code>OverrideAction</code> setting, but
     * not both:</p> <ul> <li> <p>If the rule statement does not reference a rule
     * group, use this rule action setting and not the rule override action setting.
     * </p> </li> <li> <p>If the rule statement references a rule group, use the
     * override action setting and not this action setting. </p> </li> </ul>
     */
    inline const RuleAction& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = RuleAction>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = RuleAction>
    Rule& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to use in the place of the action that results from the rule group
     * evaluation. Set the override action to none to leave the result of the rule
     * group alone. Set it to count to override the result to count only. </p> <p>You
     * can only use this for rule statements that reference a rule group, like
     * <code>RuleGroupReferenceStatement</code> and
     * <code>ManagedRuleGroupStatement</code>. </p>  <p>This option is usually
     * set to none. It does not affect how the rules in the rule group are evaluated.
     * If you want the rules in the rule group to only count matches, do not use this
     * and instead use the rule action override option, with <code>Count</code> action,
     * in your rule group reference statement settings. </p> 
     */
    inline const OverrideAction& GetOverrideAction() const { return m_overrideAction; }
    inline bool OverrideActionHasBeenSet() const { return m_overrideActionHasBeenSet; }
    template<typename OverrideActionT = OverrideAction>
    void SetOverrideAction(OverrideActionT&& value) { m_overrideActionHasBeenSet = true; m_overrideAction = std::forward<OverrideActionT>(value); }
    template<typename OverrideActionT = OverrideAction>
    Rule& WithOverrideAction(OverrideActionT&& value) { SetOverrideAction(std::forward<OverrideActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Labels to apply to web requests that match the rule match statement. WAF
     * applies fully qualified labels to matching web requests. A fully qualified label
     * is the concatenation of a label namespace and a rule label. The rule's rule
     * group or web ACL defines the label namespace. </p>  <p>Any rule that isn't
     * a rule group reference statement or managed rule group statement can add labels
     * to matching web requests.</p>  <p>Rules that run after this rule in the
     * web ACL can match against these labels using a
     * <code>LabelMatchStatement</code>.</p> <p>For each label, provide a
     * case-sensitive string containing optional namespaces and a label name, according
     * to the following guidelines:</p> <ul> <li> <p>Separate each component of the
     * label with a colon. </p> </li> <li> <p>Each namespace or name can have up to 128
     * characters.</p> </li> <li> <p>You can specify up to 5 namespaces in a label.</p>
     * </li> <li> <p>Don't use the following reserved words in your label
     * specification: <code>aws</code>, <code>waf</code>, <code>managed</code>,
     * <code>rulegroup</code>, <code>webacl</code>, <code>regexpatternset</code>, or
     * <code>ipset</code>.</p> </li> </ul> <p>For example, <code>myLabelName</code> or
     * <code>nameSpace1:nameSpace2:myLabelName</code>. </p>
     */
    inline const Aws::Vector<Label>& GetRuleLabels() const { return m_ruleLabels; }
    inline bool RuleLabelsHasBeenSet() const { return m_ruleLabelsHasBeenSet; }
    template<typename RuleLabelsT = Aws::Vector<Label>>
    void SetRuleLabels(RuleLabelsT&& value) { m_ruleLabelsHasBeenSet = true; m_ruleLabels = std::forward<RuleLabelsT>(value); }
    template<typename RuleLabelsT = Aws::Vector<Label>>
    Rule& WithRuleLabels(RuleLabelsT&& value) { SetRuleLabels(std::forward<RuleLabelsT>(value)); return *this;}
    template<typename RuleLabelsT = Label>
    Rule& AddRuleLabels(RuleLabelsT&& value) { m_ruleLabelsHasBeenSet = true; m_ruleLabels.emplace_back(std::forward<RuleLabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p> <p>If you change the name of a <code>Rule</code> after you
     * create it and you want the rule's metric name to reflect the change, update the
     * metric name as well. WAF doesn't automatically update the metric name. </p>
     */
    inline const VisibilityConfig& GetVisibilityConfig() const { return m_visibilityConfig; }
    inline bool VisibilityConfigHasBeenSet() const { return m_visibilityConfigHasBeenSet; }
    template<typename VisibilityConfigT = VisibilityConfig>
    void SetVisibilityConfig(VisibilityConfigT&& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = std::forward<VisibilityConfigT>(value); }
    template<typename VisibilityConfigT = VisibilityConfig>
    Rule& WithVisibilityConfig(VisibilityConfigT&& value) { SetVisibilityConfig(std::forward<VisibilityConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations. If you
     * don't specify this, WAF uses the <code>CAPTCHA</code> configuration that's
     * defined for the web ACL. </p>
     */
    inline const CaptchaConfig& GetCaptchaConfig() const { return m_captchaConfig; }
    inline bool CaptchaConfigHasBeenSet() const { return m_captchaConfigHasBeenSet; }
    template<typename CaptchaConfigT = CaptchaConfig>
    void SetCaptchaConfig(CaptchaConfigT&& value) { m_captchaConfigHasBeenSet = true; m_captchaConfig = std::forward<CaptchaConfigT>(value); }
    template<typename CaptchaConfigT = CaptchaConfig>
    Rule& WithCaptchaConfig(CaptchaConfigT&& value) { SetCaptchaConfig(std::forward<CaptchaConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how WAF should handle <code>Challenge</code> evaluations. If you
     * don't specify this, WAF uses the challenge configuration that's defined for the
     * web ACL. </p>
     */
    inline const ChallengeConfig& GetChallengeConfig() const { return m_challengeConfig; }
    inline bool ChallengeConfigHasBeenSet() const { return m_challengeConfigHasBeenSet; }
    template<typename ChallengeConfigT = ChallengeConfig>
    void SetChallengeConfig(ChallengeConfigT&& value) { m_challengeConfigHasBeenSet = true; m_challengeConfig = std::forward<ChallengeConfigT>(value); }
    template<typename ChallengeConfigT = ChallengeConfig>
    Rule& WithChallengeConfig(ChallengeConfigT&& value) { SetChallengeConfig(std::forward<ChallengeConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    Statement m_statement;
    bool m_statementHasBeenSet = false;

    RuleAction m_action;
    bool m_actionHasBeenSet = false;

    OverrideAction m_overrideAction;
    bool m_overrideActionHasBeenSet = false;

    Aws::Vector<Label> m_ruleLabels;
    bool m_ruleLabelsHasBeenSet = false;

    VisibilityConfig m_visibilityConfig;
    bool m_visibilityConfigHasBeenSet = false;

    CaptchaConfig m_captchaConfig;
    bool m_captchaConfigHasBeenSet = false;

    ChallengeConfig m_challengeConfig;
    bool m_challengeConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
