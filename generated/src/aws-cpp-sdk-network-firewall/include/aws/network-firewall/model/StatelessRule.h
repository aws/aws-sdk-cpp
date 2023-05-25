/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/RuleDefinition.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>A single stateless rule. This is used in
   * <a>StatelessRulesAndCustomActions</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/StatelessRule">AWS
   * API Reference</a></p>
   */
  class StatelessRule
  {
  public:
    AWS_NETWORKFIREWALL_API StatelessRule();
    AWS_NETWORKFIREWALL_API StatelessRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API StatelessRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the stateless 5-tuple packet inspection criteria and the action to
     * take on a packet that matches the criteria. </p>
     */
    inline const RuleDefinition& GetRuleDefinition() const{ return m_ruleDefinition; }

    /**
     * <p>Defines the stateless 5-tuple packet inspection criteria and the action to
     * take on a packet that matches the criteria. </p>
     */
    inline bool RuleDefinitionHasBeenSet() const { return m_ruleDefinitionHasBeenSet; }

    /**
     * <p>Defines the stateless 5-tuple packet inspection criteria and the action to
     * take on a packet that matches the criteria. </p>
     */
    inline void SetRuleDefinition(const RuleDefinition& value) { m_ruleDefinitionHasBeenSet = true; m_ruleDefinition = value; }

    /**
     * <p>Defines the stateless 5-tuple packet inspection criteria and the action to
     * take on a packet that matches the criteria. </p>
     */
    inline void SetRuleDefinition(RuleDefinition&& value) { m_ruleDefinitionHasBeenSet = true; m_ruleDefinition = std::move(value); }

    /**
     * <p>Defines the stateless 5-tuple packet inspection criteria and the action to
     * take on a packet that matches the criteria. </p>
     */
    inline StatelessRule& WithRuleDefinition(const RuleDefinition& value) { SetRuleDefinition(value); return *this;}

    /**
     * <p>Defines the stateless 5-tuple packet inspection criteria and the action to
     * take on a packet that matches the criteria. </p>
     */
    inline StatelessRule& WithRuleDefinition(RuleDefinition&& value) { SetRuleDefinition(std::move(value)); return *this;}


    /**
     * <p>Indicates the order in which to run this rule relative to all of the rules
     * that are defined for a stateless rule group. Network Firewall evaluates the
     * rules in a rule group starting with the lowest priority setting. You must ensure
     * that the priority settings are unique for the rule group. </p> <p>Each stateless
     * rule group uses exactly one <code>StatelessRulesAndCustomActions</code> object,
     * and each <code>StatelessRulesAndCustomActions</code> contains exactly one
     * <code>StatelessRules</code> object. To ensure unique priority settings for your
     * rule groups, set unique priorities for the stateless rules that you define
     * inside any single <code>StatelessRules</code> object.</p> <p>You can change the
     * priority settings of your rules at any time. To make it easier to insert rules
     * later, number them so there's a wide range in between, for example use 100, 200,
     * and so on. </p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>Indicates the order in which to run this rule relative to all of the rules
     * that are defined for a stateless rule group. Network Firewall evaluates the
     * rules in a rule group starting with the lowest priority setting. You must ensure
     * that the priority settings are unique for the rule group. </p> <p>Each stateless
     * rule group uses exactly one <code>StatelessRulesAndCustomActions</code> object,
     * and each <code>StatelessRulesAndCustomActions</code> contains exactly one
     * <code>StatelessRules</code> object. To ensure unique priority settings for your
     * rule groups, set unique priorities for the stateless rules that you define
     * inside any single <code>StatelessRules</code> object.</p> <p>You can change the
     * priority settings of your rules at any time. To make it easier to insert rules
     * later, number them so there's a wide range in between, for example use 100, 200,
     * and so on. </p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>Indicates the order in which to run this rule relative to all of the rules
     * that are defined for a stateless rule group. Network Firewall evaluates the
     * rules in a rule group starting with the lowest priority setting. You must ensure
     * that the priority settings are unique for the rule group. </p> <p>Each stateless
     * rule group uses exactly one <code>StatelessRulesAndCustomActions</code> object,
     * and each <code>StatelessRulesAndCustomActions</code> contains exactly one
     * <code>StatelessRules</code> object. To ensure unique priority settings for your
     * rule groups, set unique priorities for the stateless rules that you define
     * inside any single <code>StatelessRules</code> object.</p> <p>You can change the
     * priority settings of your rules at any time. To make it easier to insert rules
     * later, number them so there's a wide range in between, for example use 100, 200,
     * and so on. </p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>Indicates the order in which to run this rule relative to all of the rules
     * that are defined for a stateless rule group. Network Firewall evaluates the
     * rules in a rule group starting with the lowest priority setting. You must ensure
     * that the priority settings are unique for the rule group. </p> <p>Each stateless
     * rule group uses exactly one <code>StatelessRulesAndCustomActions</code> object,
     * and each <code>StatelessRulesAndCustomActions</code> contains exactly one
     * <code>StatelessRules</code> object. To ensure unique priority settings for your
     * rule groups, set unique priorities for the stateless rules that you define
     * inside any single <code>StatelessRules</code> object.</p> <p>You can change the
     * priority settings of your rules at any time. To make it easier to insert rules
     * later, number them so there's a wide range in between, for example use 100, 200,
     * and so on. </p>
     */
    inline StatelessRule& WithPriority(int value) { SetPriority(value); return *this;}

  private:

    RuleDefinition m_ruleDefinition;
    bool m_ruleDefinitionHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
