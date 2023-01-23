/**
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
   * identify web requests that you want to allow, block, or count. Each rule
   * includes one top-level <a>Statement</a> that WAF uses to identify matching web
   * requests, and parameters that govern how WAF handles them. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/Rule">AWS API
   * Reference</a></p>
   */
  class Rule
  {
  public:
    AWS_WAFV2_API Rule();
    AWS_WAFV2_API Rule(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the rule. You can't change the name of a <code>Rule</code> after
     * you create it. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rule. You can't change the name of a <code>Rule</code> after
     * you create it. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the rule. You can't change the name of a <code>Rule</code> after
     * you create it. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the rule. You can't change the name of a <code>Rule</code> after
     * you create it. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the rule. You can't change the name of a <code>Rule</code> after
     * you create it. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the rule. You can't change the name of a <code>Rule</code> after
     * you create it. </p>
     */
    inline Rule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rule. You can't change the name of a <code>Rule</code> after
     * you create it. </p>
     */
    inline Rule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule. You can't change the name of a <code>Rule</code> after
     * you create it. </p>
     */
    inline Rule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>If you define more than one <code>Rule</code> in a <code>WebACL</code>, WAF
     * evaluates each request against the <code>Rules</code> in order based on the
     * value of <code>Priority</code>. WAF processes rules with lower priority first.
     * The priorities don't need to be consecutive, but they must all be different.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>If you define more than one <code>Rule</code> in a <code>WebACL</code>, WAF
     * evaluates each request against the <code>Rules</code> in order based on the
     * value of <code>Priority</code>. WAF processes rules with lower priority first.
     * The priorities don't need to be consecutive, but they must all be different.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>If you define more than one <code>Rule</code> in a <code>WebACL</code>, WAF
     * evaluates each request against the <code>Rules</code> in order based on the
     * value of <code>Priority</code>. WAF processes rules with lower priority first.
     * The priorities don't need to be consecutive, but they must all be different.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>If you define more than one <code>Rule</code> in a <code>WebACL</code>, WAF
     * evaluates each request against the <code>Rules</code> in order based on the
     * value of <code>Priority</code>. WAF processes rules with lower priority first.
     * The priorities don't need to be consecutive, but they must all be different.</p>
     */
    inline Rule& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The WAF processing statement for the rule, for example
     * <a>ByteMatchStatement</a> or <a>SizeConstraintStatement</a>. </p>
     */
    inline const Statement& GetStatement() const{ return m_statement; }

    /**
     * <p>The WAF processing statement for the rule, for example
     * <a>ByteMatchStatement</a> or <a>SizeConstraintStatement</a>. </p>
     */
    inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }

    /**
     * <p>The WAF processing statement for the rule, for example
     * <a>ByteMatchStatement</a> or <a>SizeConstraintStatement</a>. </p>
     */
    inline void SetStatement(const Statement& value) { m_statementHasBeenSet = true; m_statement = value; }

    /**
     * <p>The WAF processing statement for the rule, for example
     * <a>ByteMatchStatement</a> or <a>SizeConstraintStatement</a>. </p>
     */
    inline void SetStatement(Statement&& value) { m_statementHasBeenSet = true; m_statement = std::move(value); }

    /**
     * <p>The WAF processing statement for the rule, for example
     * <a>ByteMatchStatement</a> or <a>SizeConstraintStatement</a>. </p>
     */
    inline Rule& WithStatement(const Statement& value) { SetStatement(value); return *this;}

    /**
     * <p>The WAF processing statement for the rule, for example
     * <a>ByteMatchStatement</a> or <a>SizeConstraintStatement</a>. </p>
     */
    inline Rule& WithStatement(Statement&& value) { SetStatement(std::move(value)); return *this;}


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
    inline const RuleAction& GetAction() const{ return m_action; }

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
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

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
    inline void SetAction(const RuleAction& value) { m_actionHasBeenSet = true; m_action = value; }

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
    inline void SetAction(RuleAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

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
    inline Rule& WithAction(const RuleAction& value) { SetAction(value); return *this;}

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
    inline Rule& WithAction(RuleAction&& value) { SetAction(std::move(value)); return *this;}


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
    inline const OverrideAction& GetOverrideAction() const{ return m_overrideAction; }

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
    inline bool OverrideActionHasBeenSet() const { return m_overrideActionHasBeenSet; }

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
    inline void SetOverrideAction(const OverrideAction& value) { m_overrideActionHasBeenSet = true; m_overrideAction = value; }

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
    inline void SetOverrideAction(OverrideAction&& value) { m_overrideActionHasBeenSet = true; m_overrideAction = std::move(value); }

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
    inline Rule& WithOverrideAction(const OverrideAction& value) { SetOverrideAction(value); return *this;}

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
    inline Rule& WithOverrideAction(OverrideAction&& value) { SetOverrideAction(std::move(value)); return *this;}


    /**
     * <p>Labels to apply to web requests that match the rule match statement. WAF
     * applies fully qualified labels to matching web requests. A fully qualified label
     * is the concatenation of a label namespace and a rule label. The rule's rule
     * group or web ACL defines the label namespace. </p> <p>Rules that run after this
     * rule in the web ACL can match against these labels using a
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
    inline const Aws::Vector<Label>& GetRuleLabels() const{ return m_ruleLabels; }

    /**
     * <p>Labels to apply to web requests that match the rule match statement. WAF
     * applies fully qualified labels to matching web requests. A fully qualified label
     * is the concatenation of a label namespace and a rule label. The rule's rule
     * group or web ACL defines the label namespace. </p> <p>Rules that run after this
     * rule in the web ACL can match against these labels using a
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
    inline bool RuleLabelsHasBeenSet() const { return m_ruleLabelsHasBeenSet; }

    /**
     * <p>Labels to apply to web requests that match the rule match statement. WAF
     * applies fully qualified labels to matching web requests. A fully qualified label
     * is the concatenation of a label namespace and a rule label. The rule's rule
     * group or web ACL defines the label namespace. </p> <p>Rules that run after this
     * rule in the web ACL can match against these labels using a
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
    inline void SetRuleLabels(const Aws::Vector<Label>& value) { m_ruleLabelsHasBeenSet = true; m_ruleLabels = value; }

    /**
     * <p>Labels to apply to web requests that match the rule match statement. WAF
     * applies fully qualified labels to matching web requests. A fully qualified label
     * is the concatenation of a label namespace and a rule label. The rule's rule
     * group or web ACL defines the label namespace. </p> <p>Rules that run after this
     * rule in the web ACL can match against these labels using a
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
    inline void SetRuleLabels(Aws::Vector<Label>&& value) { m_ruleLabelsHasBeenSet = true; m_ruleLabels = std::move(value); }

    /**
     * <p>Labels to apply to web requests that match the rule match statement. WAF
     * applies fully qualified labels to matching web requests. A fully qualified label
     * is the concatenation of a label namespace and a rule label. The rule's rule
     * group or web ACL defines the label namespace. </p> <p>Rules that run after this
     * rule in the web ACL can match against these labels using a
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
    inline Rule& WithRuleLabels(const Aws::Vector<Label>& value) { SetRuleLabels(value); return *this;}

    /**
     * <p>Labels to apply to web requests that match the rule match statement. WAF
     * applies fully qualified labels to matching web requests. A fully qualified label
     * is the concatenation of a label namespace and a rule label. The rule's rule
     * group or web ACL defines the label namespace. </p> <p>Rules that run after this
     * rule in the web ACL can match against these labels using a
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
    inline Rule& WithRuleLabels(Aws::Vector<Label>&& value) { SetRuleLabels(std::move(value)); return *this;}

    /**
     * <p>Labels to apply to web requests that match the rule match statement. WAF
     * applies fully qualified labels to matching web requests. A fully qualified label
     * is the concatenation of a label namespace and a rule label. The rule's rule
     * group or web ACL defines the label namespace. </p> <p>Rules that run after this
     * rule in the web ACL can match against these labels using a
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
    inline Rule& AddRuleLabels(const Label& value) { m_ruleLabelsHasBeenSet = true; m_ruleLabels.push_back(value); return *this; }

    /**
     * <p>Labels to apply to web requests that match the rule match statement. WAF
     * applies fully qualified labels to matching web requests. A fully qualified label
     * is the concatenation of a label namespace and a rule label. The rule's rule
     * group or web ACL defines the label namespace. </p> <p>Rules that run after this
     * rule in the web ACL can match against these labels using a
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
    inline Rule& AddRuleLabels(Label&& value) { m_ruleLabelsHasBeenSet = true; m_ruleLabels.push_back(std::move(value)); return *this; }


    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline const VisibilityConfig& GetVisibilityConfig() const{ return m_visibilityConfig; }

    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline bool VisibilityConfigHasBeenSet() const { return m_visibilityConfigHasBeenSet; }

    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline void SetVisibilityConfig(const VisibilityConfig& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = value; }

    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline void SetVisibilityConfig(VisibilityConfig&& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = std::move(value); }

    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline Rule& WithVisibilityConfig(const VisibilityConfig& value) { SetVisibilityConfig(value); return *this;}

    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline Rule& WithVisibilityConfig(VisibilityConfig&& value) { SetVisibilityConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations. If you
     * don't specify this, WAF uses the <code>CAPTCHA</code> configuration that's
     * defined for the web ACL. </p>
     */
    inline const CaptchaConfig& GetCaptchaConfig() const{ return m_captchaConfig; }

    /**
     * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations. If you
     * don't specify this, WAF uses the <code>CAPTCHA</code> configuration that's
     * defined for the web ACL. </p>
     */
    inline bool CaptchaConfigHasBeenSet() const { return m_captchaConfigHasBeenSet; }

    /**
     * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations. If you
     * don't specify this, WAF uses the <code>CAPTCHA</code> configuration that's
     * defined for the web ACL. </p>
     */
    inline void SetCaptchaConfig(const CaptchaConfig& value) { m_captchaConfigHasBeenSet = true; m_captchaConfig = value; }

    /**
     * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations. If you
     * don't specify this, WAF uses the <code>CAPTCHA</code> configuration that's
     * defined for the web ACL. </p>
     */
    inline void SetCaptchaConfig(CaptchaConfig&& value) { m_captchaConfigHasBeenSet = true; m_captchaConfig = std::move(value); }

    /**
     * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations. If you
     * don't specify this, WAF uses the <code>CAPTCHA</code> configuration that's
     * defined for the web ACL. </p>
     */
    inline Rule& WithCaptchaConfig(const CaptchaConfig& value) { SetCaptchaConfig(value); return *this;}

    /**
     * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations. If you
     * don't specify this, WAF uses the <code>CAPTCHA</code> configuration that's
     * defined for the web ACL. </p>
     */
    inline Rule& WithCaptchaConfig(CaptchaConfig&& value) { SetCaptchaConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies how WAF should handle <code>Challenge</code> evaluations. If you
     * don't specify this, WAF uses the challenge configuration that's defined for the
     * web ACL. </p>
     */
    inline const ChallengeConfig& GetChallengeConfig() const{ return m_challengeConfig; }

    /**
     * <p>Specifies how WAF should handle <code>Challenge</code> evaluations. If you
     * don't specify this, WAF uses the challenge configuration that's defined for the
     * web ACL. </p>
     */
    inline bool ChallengeConfigHasBeenSet() const { return m_challengeConfigHasBeenSet; }

    /**
     * <p>Specifies how WAF should handle <code>Challenge</code> evaluations. If you
     * don't specify this, WAF uses the challenge configuration that's defined for the
     * web ACL. </p>
     */
    inline void SetChallengeConfig(const ChallengeConfig& value) { m_challengeConfigHasBeenSet = true; m_challengeConfig = value; }

    /**
     * <p>Specifies how WAF should handle <code>Challenge</code> evaluations. If you
     * don't specify this, WAF uses the challenge configuration that's defined for the
     * web ACL. </p>
     */
    inline void SetChallengeConfig(ChallengeConfig&& value) { m_challengeConfigHasBeenSet = true; m_challengeConfig = std::move(value); }

    /**
     * <p>Specifies how WAF should handle <code>Challenge</code> evaluations. If you
     * don't specify this, WAF uses the challenge configuration that's defined for the
     * web ACL. </p>
     */
    inline Rule& WithChallengeConfig(const ChallengeConfig& value) { SetChallengeConfig(value); return *this;}

    /**
     * <p>Specifies how WAF should handle <code>Challenge</code> evaluations. If you
     * don't specify this, WAF uses the challenge configuration that's defined for the
     * web ACL. </p>
     */
    inline Rule& WithChallengeConfig(ChallengeConfig&& value) { SetChallengeConfig(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_priority;
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
