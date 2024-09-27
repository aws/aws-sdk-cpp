/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/WafAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/WafOverrideAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/WafExcludedRule.h>
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
   * <p>Details for a rule in an WAF web ACL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafWebAclRule">AWS
   * API Reference</a></p>
   */
  class AwsWafWebAclRule
  {
  public:
    AWS_SECURITYHUB_API AwsWafWebAclRule();
    AWS_SECURITYHUB_API AwsWafWebAclRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafWebAclRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the action that CloudFront or WAF takes when a web request matches
     * the conditions in the rule. </p>
     */
    inline const WafAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const WafAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(WafAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline AwsWafWebAclRule& WithAction(const WafAction& value) { SetAction(value); return *this;}
    inline AwsWafWebAclRule& WithAction(WafAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Rules to exclude from a rule group.</p>
     */
    inline const Aws::Vector<WafExcludedRule>& GetExcludedRules() const{ return m_excludedRules; }
    inline bool ExcludedRulesHasBeenSet() const { return m_excludedRulesHasBeenSet; }
    inline void SetExcludedRules(const Aws::Vector<WafExcludedRule>& value) { m_excludedRulesHasBeenSet = true; m_excludedRules = value; }
    inline void SetExcludedRules(Aws::Vector<WafExcludedRule>&& value) { m_excludedRulesHasBeenSet = true; m_excludedRules = std::move(value); }
    inline AwsWafWebAclRule& WithExcludedRules(const Aws::Vector<WafExcludedRule>& value) { SetExcludedRules(value); return *this;}
    inline AwsWafWebAclRule& WithExcludedRules(Aws::Vector<WafExcludedRule>&& value) { SetExcludedRules(std::move(value)); return *this;}
    inline AwsWafWebAclRule& AddExcludedRules(const WafExcludedRule& value) { m_excludedRulesHasBeenSet = true; m_excludedRules.push_back(value); return *this; }
    inline AwsWafWebAclRule& AddExcludedRules(WafExcludedRule&& value) { m_excludedRulesHasBeenSet = true; m_excludedRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use the <code>OverrideAction</code> to test your <code>RuleGroup</code>.</p>
     * <p>Any rule in a <code>RuleGroup</code> can potentially block a request. If you
     * set the <code>OverrideAction</code> to <code>None</code>, the
     * <code>RuleGroup</code> blocks a request if any individual rule in the
     * <code>RuleGroup</code> matches the request and is configured to block that
     * request.</p> <p>However, if you first want to test the <code>RuleGroup</code>,
     * set the <code>OverrideAction</code> to <code>Count</code>. The
     * <code>RuleGroup</code> then overrides any block action specified by individual
     * rules contained within the group. Instead of blocking matching requests, those
     * requests are counted.</p> <p>
     * <code>ActivatedRule</code>|<code>OverrideAction</code> applies only when
     * updating or adding a <code>RuleGroup</code> to a web ACL. In this case you don't
     * use <code>ActivatedRule</code> <code>Action</code>. For all other update
     * requests, <code>ActivatedRule</code> <code>Action</code> is used instead of
     * <code>ActivatedRule</code> <code>OverrideAction</code>.</p>
     */
    inline const WafOverrideAction& GetOverrideAction() const{ return m_overrideAction; }
    inline bool OverrideActionHasBeenSet() const { return m_overrideActionHasBeenSet; }
    inline void SetOverrideAction(const WafOverrideAction& value) { m_overrideActionHasBeenSet = true; m_overrideAction = value; }
    inline void SetOverrideAction(WafOverrideAction&& value) { m_overrideActionHasBeenSet = true; m_overrideAction = std::move(value); }
    inline AwsWafWebAclRule& WithOverrideAction(const WafOverrideAction& value) { SetOverrideAction(value); return *this;}
    inline AwsWafWebAclRule& WithOverrideAction(WafOverrideAction&& value) { SetOverrideAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the order in which the rules in a web ACL are evaluated. Rules with
     * a lower value for <code>Priority</code> are evaluated before rules with a higher
     * value. The value must be a unique integer. If you add multiple rules to a web
     * ACL, the values don't need to be consecutive.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline AwsWafWebAclRule& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for a rule.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }
    inline AwsWafWebAclRule& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}
    inline AwsWafWebAclRule& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}
    inline AwsWafWebAclRule& WithRuleId(const char* value) { SetRuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule type.</p> <p>Valid values: <code>REGULAR</code> |
     * <code>RATE_BASED</code> | <code>GROUP</code> </p> <p>The default is
     * <code>REGULAR</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline AwsWafWebAclRule& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline AwsWafWebAclRule& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline AwsWafWebAclRule& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    WafAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::Vector<WafExcludedRule> m_excludedRules;
    bool m_excludedRulesHasBeenSet = false;

    WafOverrideAction m_overrideAction;
    bool m_overrideActionHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
