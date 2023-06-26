/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/FirewallManagerStatement.h>
#include <aws/wafv2/model/OverrideAction.h>
#include <aws/wafv2/model/VisibilityConfig.h>
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
   * <p>A rule group that's defined for an Firewall Manager WAF policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/FirewallManagerRuleGroup">AWS
   * API Reference</a></p>
   */
  class FirewallManagerRuleGroup
  {
  public:
    AWS_WAFV2_API FirewallManagerRuleGroup();
    AWS_WAFV2_API FirewallManagerRuleGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API FirewallManagerRuleGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the rule group. You cannot change the name of a rule group after
     * you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rule group. You cannot change the name of a rule group after
     * you create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the rule group. You cannot change the name of a rule group after
     * you create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the rule group. You cannot change the name of a rule group after
     * you create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the rule group. You cannot change the name of a rule group after
     * you create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the rule group. You cannot change the name of a rule group after
     * you create it.</p>
     */
    inline FirewallManagerRuleGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rule group. You cannot change the name of a rule group after
     * you create it.</p>
     */
    inline FirewallManagerRuleGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule group. You cannot change the name of a rule group after
     * you create it.</p>
     */
    inline FirewallManagerRuleGroup& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>If you define more than one rule group in the first or last Firewall Manager
     * rule groups, WAF evaluates each request against the rule groups in order,
     * starting from the lowest priority setting. The priorities don't need to be
     * consecutive, but they must all be different.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>If you define more than one rule group in the first or last Firewall Manager
     * rule groups, WAF evaluates each request against the rule groups in order,
     * starting from the lowest priority setting. The priorities don't need to be
     * consecutive, but they must all be different.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>If you define more than one rule group in the first or last Firewall Manager
     * rule groups, WAF evaluates each request against the rule groups in order,
     * starting from the lowest priority setting. The priorities don't need to be
     * consecutive, but they must all be different.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>If you define more than one rule group in the first or last Firewall Manager
     * rule groups, WAF evaluates each request against the rule groups in order,
     * starting from the lowest priority setting. The priorities don't need to be
     * consecutive, but they must all be different.</p>
     */
    inline FirewallManagerRuleGroup& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The processing guidance for an Firewall Manager rule. This is like a regular
     * rule <a>Statement</a>, but it can only contain a rule group reference.</p>
     */
    inline const FirewallManagerStatement& GetFirewallManagerStatement() const{ return m_firewallManagerStatement; }

    /**
     * <p>The processing guidance for an Firewall Manager rule. This is like a regular
     * rule <a>Statement</a>, but it can only contain a rule group reference.</p>
     */
    inline bool FirewallManagerStatementHasBeenSet() const { return m_firewallManagerStatementHasBeenSet; }

    /**
     * <p>The processing guidance for an Firewall Manager rule. This is like a regular
     * rule <a>Statement</a>, but it can only contain a rule group reference.</p>
     */
    inline void SetFirewallManagerStatement(const FirewallManagerStatement& value) { m_firewallManagerStatementHasBeenSet = true; m_firewallManagerStatement = value; }

    /**
     * <p>The processing guidance for an Firewall Manager rule. This is like a regular
     * rule <a>Statement</a>, but it can only contain a rule group reference.</p>
     */
    inline void SetFirewallManagerStatement(FirewallManagerStatement&& value) { m_firewallManagerStatementHasBeenSet = true; m_firewallManagerStatement = std::move(value); }

    /**
     * <p>The processing guidance for an Firewall Manager rule. This is like a regular
     * rule <a>Statement</a>, but it can only contain a rule group reference.</p>
     */
    inline FirewallManagerRuleGroup& WithFirewallManagerStatement(const FirewallManagerStatement& value) { SetFirewallManagerStatement(value); return *this;}

    /**
     * <p>The processing guidance for an Firewall Manager rule. This is like a regular
     * rule <a>Statement</a>, but it can only contain a rule group reference.</p>
     */
    inline FirewallManagerRuleGroup& WithFirewallManagerStatement(FirewallManagerStatement&& value) { SetFirewallManagerStatement(std::move(value)); return *this;}


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
    inline FirewallManagerRuleGroup& WithOverrideAction(const OverrideAction& value) { SetOverrideAction(value); return *this;}

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
    inline FirewallManagerRuleGroup& WithOverrideAction(OverrideAction&& value) { SetOverrideAction(std::move(value)); return *this;}


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
    inline FirewallManagerRuleGroup& WithVisibilityConfig(const VisibilityConfig& value) { SetVisibilityConfig(value); return *this;}

    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline FirewallManagerRuleGroup& WithVisibilityConfig(VisibilityConfig&& value) { SetVisibilityConfig(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    FirewallManagerStatement m_firewallManagerStatement;
    bool m_firewallManagerStatementHasBeenSet = false;

    OverrideAction m_overrideAction;
    bool m_overrideActionHasBeenSet = false;

    VisibilityConfig m_visibilityConfig;
    bool m_visibilityConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
