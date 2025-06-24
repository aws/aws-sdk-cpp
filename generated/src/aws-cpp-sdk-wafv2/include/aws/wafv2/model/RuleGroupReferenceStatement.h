/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/ExcludedRule.h>
#include <aws/wafv2/model/RuleActionOverride.h>
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
   * <p>A rule statement used to run the rules that are defined in a
   * <a>RuleGroup</a>. To use this, create a rule group with your rules, then provide
   * the ARN of the rule group in this statement.</p> <p>You cannot nest a
   * <code>RuleGroupReferenceStatement</code>, for example for use inside a
   * <code>NotStatement</code> or <code>OrStatement</code>. You cannot use a rule
   * group reference statement inside another rule group. You can only reference a
   * rule group as a top-level statement within a rule that you define in a web
   * ACL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RuleGroupReferenceStatement">AWS
   * API Reference</a></p>
   */
  class RuleGroupReferenceStatement
  {
  public:
    AWS_WAFV2_API RuleGroupReferenceStatement() = default;
    AWS_WAFV2_API RuleGroupReferenceStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RuleGroupReferenceStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    RuleGroupReferenceStatement& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Rules in the referenced rule group whose actions are set to
     * <code>Count</code>. </p>  <p>Instead of this option, use
     * <code>RuleActionOverrides</code>. It accepts any valid action setting, including
     * <code>Count</code>.</p> 
     */
    inline const Aws::Vector<ExcludedRule>& GetExcludedRules() const { return m_excludedRules; }
    inline bool ExcludedRulesHasBeenSet() const { return m_excludedRulesHasBeenSet; }
    template<typename ExcludedRulesT = Aws::Vector<ExcludedRule>>
    void SetExcludedRules(ExcludedRulesT&& value) { m_excludedRulesHasBeenSet = true; m_excludedRules = std::forward<ExcludedRulesT>(value); }
    template<typename ExcludedRulesT = Aws::Vector<ExcludedRule>>
    RuleGroupReferenceStatement& WithExcludedRules(ExcludedRulesT&& value) { SetExcludedRules(std::forward<ExcludedRulesT>(value)); return *this;}
    template<typename ExcludedRulesT = ExcludedRule>
    RuleGroupReferenceStatement& AddExcludedRules(ExcludedRulesT&& value) { m_excludedRulesHasBeenSet = true; m_excludedRules.emplace_back(std::forward<ExcludedRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Action settings to use in the place of the rule actions that are configured
     * inside the rule group. You specify one override for each rule whose action you
     * want to change. </p>  <p>Verify the rule names in your overrides
     * carefully. With managed rule groups, WAF silently ignores any override that uses
     * an invalid rule name. With customer-owned rule groups, invalid rule names in
     * your overrides will cause web ACL updates to fail. An invalid rule name is any
     * name that doesn't exactly match the case-sensitive name of an existing rule in
     * the rule group.</p>  <p>You can use overrides for testing, for example
     * you can override all of rule actions to <code>Count</code> and then monitor the
     * resulting count metrics to understand how the rule group would handle your web
     * traffic. You can also permanently override some or all actions, to modify how
     * the rule group manages your web traffic.</p>
     */
    inline const Aws::Vector<RuleActionOverride>& GetRuleActionOverrides() const { return m_ruleActionOverrides; }
    inline bool RuleActionOverridesHasBeenSet() const { return m_ruleActionOverridesHasBeenSet; }
    template<typename RuleActionOverridesT = Aws::Vector<RuleActionOverride>>
    void SetRuleActionOverrides(RuleActionOverridesT&& value) { m_ruleActionOverridesHasBeenSet = true; m_ruleActionOverrides = std::forward<RuleActionOverridesT>(value); }
    template<typename RuleActionOverridesT = Aws::Vector<RuleActionOverride>>
    RuleGroupReferenceStatement& WithRuleActionOverrides(RuleActionOverridesT&& value) { SetRuleActionOverrides(std::forward<RuleActionOverridesT>(value)); return *this;}
    template<typename RuleActionOverridesT = RuleActionOverride>
    RuleGroupReferenceStatement& AddRuleActionOverrides(RuleActionOverridesT&& value) { m_ruleActionOverridesHasBeenSet = true; m_ruleActionOverrides.emplace_back(std::forward<RuleActionOverridesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::Vector<ExcludedRule> m_excludedRules;
    bool m_excludedRulesHasBeenSet = false;

    Aws::Vector<RuleActionOverride> m_ruleActionOverrides;
    bool m_ruleActionOverridesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
