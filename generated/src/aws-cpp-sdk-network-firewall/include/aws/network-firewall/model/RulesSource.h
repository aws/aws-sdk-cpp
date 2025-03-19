/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/RulesSourceList.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/StatelessRulesAndCustomActions.h>
#include <aws/network-firewall/model/StatefulRule.h>
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
   * <p>The stateless or stateful rules definitions for use in a single rule group.
   * Each rule group requires a single <code>RulesSource</code>. You can use an
   * instance of this for either stateless rules or stateful rules. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/RulesSource">AWS
   * API Reference</a></p>
   */
  class RulesSource
  {
  public:
    AWS_NETWORKFIREWALL_API RulesSource() = default;
    AWS_NETWORKFIREWALL_API RulesSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API RulesSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Stateful inspection criteria, provided in Suricata compatible rules. Suricata
     * is an open-source threat detection framework that includes a standard rule-based
     * language for network traffic inspection.</p> <p>These rules contain the
     * inspection criteria and the action to take for traffic that matches the
     * criteria, so this type of rule group doesn't have a separate action setting.</p>
     *  <p>You can't use the <code>priority</code> keyword if the
     * <code>RuleOrder</code> option in <a>StatefulRuleOptions</a> is set to
     * <code>STRICT_ORDER</code>.</p> 
     */
    inline const Aws::String& GetRulesString() const { return m_rulesString; }
    inline bool RulesStringHasBeenSet() const { return m_rulesStringHasBeenSet; }
    template<typename RulesStringT = Aws::String>
    void SetRulesString(RulesStringT&& value) { m_rulesStringHasBeenSet = true; m_rulesString = std::forward<RulesStringT>(value); }
    template<typename RulesStringT = Aws::String>
    RulesSource& WithRulesString(RulesStringT&& value) { SetRulesString(std::forward<RulesStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stateful inspection criteria for a domain list rule group. </p>
     */
    inline const RulesSourceList& GetRulesSourceList() const { return m_rulesSourceList; }
    inline bool RulesSourceListHasBeenSet() const { return m_rulesSourceListHasBeenSet; }
    template<typename RulesSourceListT = RulesSourceList>
    void SetRulesSourceList(RulesSourceListT&& value) { m_rulesSourceListHasBeenSet = true; m_rulesSourceList = std::forward<RulesSourceListT>(value); }
    template<typename RulesSourceListT = RulesSourceList>
    RulesSource& WithRulesSourceList(RulesSourceListT&& value) { SetRulesSourceList(std::forward<RulesSourceListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of individual stateful rules inspection criteria to be used together
     * in a stateful rule group. Use this option to specify simple Suricata rules with
     * protocol, source and destination, ports, direction, and rule options. For
     * information about the Suricata <code>Rules</code> format, see <a
     * href="https://suricata.readthedocs.io/en/suricata-7.0.3/rules/intro.html">Rules
     * Format</a>. </p>
     */
    inline const Aws::Vector<StatefulRule>& GetStatefulRules() const { return m_statefulRules; }
    inline bool StatefulRulesHasBeenSet() const { return m_statefulRulesHasBeenSet; }
    template<typename StatefulRulesT = Aws::Vector<StatefulRule>>
    void SetStatefulRules(StatefulRulesT&& value) { m_statefulRulesHasBeenSet = true; m_statefulRules = std::forward<StatefulRulesT>(value); }
    template<typename StatefulRulesT = Aws::Vector<StatefulRule>>
    RulesSource& WithStatefulRules(StatefulRulesT&& value) { SetStatefulRules(std::forward<StatefulRulesT>(value)); return *this;}
    template<typename StatefulRulesT = StatefulRule>
    RulesSource& AddStatefulRules(StatefulRulesT&& value) { m_statefulRulesHasBeenSet = true; m_statefulRules.emplace_back(std::forward<StatefulRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Stateless inspection criteria to be used in a stateless rule group. </p>
     */
    inline const StatelessRulesAndCustomActions& GetStatelessRulesAndCustomActions() const { return m_statelessRulesAndCustomActions; }
    inline bool StatelessRulesAndCustomActionsHasBeenSet() const { return m_statelessRulesAndCustomActionsHasBeenSet; }
    template<typename StatelessRulesAndCustomActionsT = StatelessRulesAndCustomActions>
    void SetStatelessRulesAndCustomActions(StatelessRulesAndCustomActionsT&& value) { m_statelessRulesAndCustomActionsHasBeenSet = true; m_statelessRulesAndCustomActions = std::forward<StatelessRulesAndCustomActionsT>(value); }
    template<typename StatelessRulesAndCustomActionsT = StatelessRulesAndCustomActions>
    RulesSource& WithStatelessRulesAndCustomActions(StatelessRulesAndCustomActionsT&& value) { SetStatelessRulesAndCustomActions(std::forward<StatelessRulesAndCustomActionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_rulesString;
    bool m_rulesStringHasBeenSet = false;

    RulesSourceList m_rulesSourceList;
    bool m_rulesSourceListHasBeenSet = false;

    Aws::Vector<StatefulRule> m_statefulRules;
    bool m_statefulRulesHasBeenSet = false;

    StatelessRulesAndCustomActions m_statelessRulesAndCustomActions;
    bool m_statelessRulesAndCustomActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
