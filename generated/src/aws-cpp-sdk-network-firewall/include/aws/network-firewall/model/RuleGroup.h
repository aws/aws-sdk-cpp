/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/RuleVariables.h>
#include <aws/network-firewall/model/ReferenceSets.h>
#include <aws/network-firewall/model/RulesSource.h>
#include <aws/network-firewall/model/StatefulRuleOptions.h>
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
   * <p>The object that defines the rules in a rule group. This, along with
   * <a>RuleGroupResponse</a>, define the rule group. You can retrieve all objects
   * for a rule group by calling <a>DescribeRuleGroup</a>. </p> <p>Network Firewall
   * uses a rule group to inspect and control network traffic. You define stateless
   * rule groups to inspect individual packets and you define stateful rule groups to
   * inspect packets in the context of their traffic flow. </p> <p>To use a rule
   * group, you include it by reference in an Network Firewall firewall policy, then
   * you use the policy in a firewall. You can reference a rule group from more than
   * one firewall policy, and you can use a firewall policy in more than one
   * firewall. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/RuleGroup">AWS
   * API Reference</a></p>
   */
  class RuleGroup
  {
  public:
    AWS_NETWORKFIREWALL_API RuleGroup();
    AWS_NETWORKFIREWALL_API RuleGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API RuleGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Settings that are available for use in the rules in the rule group. You can
     * only use these for stateful rule groups. </p>
     */
    inline const RuleVariables& GetRuleVariables() const{ return m_ruleVariables; }

    /**
     * <p>Settings that are available for use in the rules in the rule group. You can
     * only use these for stateful rule groups. </p>
     */
    inline bool RuleVariablesHasBeenSet() const { return m_ruleVariablesHasBeenSet; }

    /**
     * <p>Settings that are available for use in the rules in the rule group. You can
     * only use these for stateful rule groups. </p>
     */
    inline void SetRuleVariables(const RuleVariables& value) { m_ruleVariablesHasBeenSet = true; m_ruleVariables = value; }

    /**
     * <p>Settings that are available for use in the rules in the rule group. You can
     * only use these for stateful rule groups. </p>
     */
    inline void SetRuleVariables(RuleVariables&& value) { m_ruleVariablesHasBeenSet = true; m_ruleVariables = std::move(value); }

    /**
     * <p>Settings that are available for use in the rules in the rule group. You can
     * only use these for stateful rule groups. </p>
     */
    inline RuleGroup& WithRuleVariables(const RuleVariables& value) { SetRuleVariables(value); return *this;}

    /**
     * <p>Settings that are available for use in the rules in the rule group. You can
     * only use these for stateful rule groups. </p>
     */
    inline RuleGroup& WithRuleVariables(RuleVariables&& value) { SetRuleVariables(std::move(value)); return *this;}


    /**
     * <p>The list of a rule group's reference sets.</p>
     */
    inline const ReferenceSets& GetReferenceSets() const{ return m_referenceSets; }

    /**
     * <p>The list of a rule group's reference sets.</p>
     */
    inline bool ReferenceSetsHasBeenSet() const { return m_referenceSetsHasBeenSet; }

    /**
     * <p>The list of a rule group's reference sets.</p>
     */
    inline void SetReferenceSets(const ReferenceSets& value) { m_referenceSetsHasBeenSet = true; m_referenceSets = value; }

    /**
     * <p>The list of a rule group's reference sets.</p>
     */
    inline void SetReferenceSets(ReferenceSets&& value) { m_referenceSetsHasBeenSet = true; m_referenceSets = std::move(value); }

    /**
     * <p>The list of a rule group's reference sets.</p>
     */
    inline RuleGroup& WithReferenceSets(const ReferenceSets& value) { SetReferenceSets(value); return *this;}

    /**
     * <p>The list of a rule group's reference sets.</p>
     */
    inline RuleGroup& WithReferenceSets(ReferenceSets&& value) { SetReferenceSets(std::move(value)); return *this;}


    /**
     * <p>The stateful rules or stateless rules for the rule group. </p>
     */
    inline const RulesSource& GetRulesSource() const{ return m_rulesSource; }

    /**
     * <p>The stateful rules or stateless rules for the rule group. </p>
     */
    inline bool RulesSourceHasBeenSet() const { return m_rulesSourceHasBeenSet; }

    /**
     * <p>The stateful rules or stateless rules for the rule group. </p>
     */
    inline void SetRulesSource(const RulesSource& value) { m_rulesSourceHasBeenSet = true; m_rulesSource = value; }

    /**
     * <p>The stateful rules or stateless rules for the rule group. </p>
     */
    inline void SetRulesSource(RulesSource&& value) { m_rulesSourceHasBeenSet = true; m_rulesSource = std::move(value); }

    /**
     * <p>The stateful rules or stateless rules for the rule group. </p>
     */
    inline RuleGroup& WithRulesSource(const RulesSource& value) { SetRulesSource(value); return *this;}

    /**
     * <p>The stateful rules or stateless rules for the rule group. </p>
     */
    inline RuleGroup& WithRulesSource(RulesSource&& value) { SetRulesSource(std::move(value)); return *this;}


    /**
     * <p>Additional options governing how Network Firewall handles stateful rules. The
     * policies where you use your stateful rule group must have stateful rule options
     * settings that are compatible with these settings.</p>
     */
    inline const StatefulRuleOptions& GetStatefulRuleOptions() const{ return m_statefulRuleOptions; }

    /**
     * <p>Additional options governing how Network Firewall handles stateful rules. The
     * policies where you use your stateful rule group must have stateful rule options
     * settings that are compatible with these settings.</p>
     */
    inline bool StatefulRuleOptionsHasBeenSet() const { return m_statefulRuleOptionsHasBeenSet; }

    /**
     * <p>Additional options governing how Network Firewall handles stateful rules. The
     * policies where you use your stateful rule group must have stateful rule options
     * settings that are compatible with these settings.</p>
     */
    inline void SetStatefulRuleOptions(const StatefulRuleOptions& value) { m_statefulRuleOptionsHasBeenSet = true; m_statefulRuleOptions = value; }

    /**
     * <p>Additional options governing how Network Firewall handles stateful rules. The
     * policies where you use your stateful rule group must have stateful rule options
     * settings that are compatible with these settings.</p>
     */
    inline void SetStatefulRuleOptions(StatefulRuleOptions&& value) { m_statefulRuleOptionsHasBeenSet = true; m_statefulRuleOptions = std::move(value); }

    /**
     * <p>Additional options governing how Network Firewall handles stateful rules. The
     * policies where you use your stateful rule group must have stateful rule options
     * settings that are compatible with these settings.</p>
     */
    inline RuleGroup& WithStatefulRuleOptions(const StatefulRuleOptions& value) { SetStatefulRuleOptions(value); return *this;}

    /**
     * <p>Additional options governing how Network Firewall handles stateful rules. The
     * policies where you use your stateful rule group must have stateful rule options
     * settings that are compatible with these settings.</p>
     */
    inline RuleGroup& WithStatefulRuleOptions(StatefulRuleOptions&& value) { SetStatefulRuleOptions(std::move(value)); return *this;}

  private:

    RuleVariables m_ruleVariables;
    bool m_ruleVariablesHasBeenSet = false;

    ReferenceSets m_referenceSets;
    bool m_referenceSetsHasBeenSet = false;

    RulesSource m_rulesSource;
    bool m_rulesSourceHasBeenSet = false;

    StatefulRuleOptions m_statefulRuleOptions;
    bool m_statefulRuleOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
