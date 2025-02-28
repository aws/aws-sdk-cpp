﻿/**
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
    AWS_NETWORKFIREWALL_API RulesSource();
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
    inline const Aws::String& GetRulesString() const{ return m_rulesString; }
    inline bool RulesStringHasBeenSet() const { return m_rulesStringHasBeenSet; }
    inline void SetRulesString(const Aws::String& value) { m_rulesStringHasBeenSet = true; m_rulesString = value; }
    inline void SetRulesString(Aws::String&& value) { m_rulesStringHasBeenSet = true; m_rulesString = std::move(value); }
    inline void SetRulesString(const char* value) { m_rulesStringHasBeenSet = true; m_rulesString.assign(value); }
    inline RulesSource& WithRulesString(const Aws::String& value) { SetRulesString(value); return *this;}
    inline RulesSource& WithRulesString(Aws::String&& value) { SetRulesString(std::move(value)); return *this;}
    inline RulesSource& WithRulesString(const char* value) { SetRulesString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stateful inspection criteria for a domain list rule group. </p>
     */
    inline const RulesSourceList& GetRulesSourceList() const{ return m_rulesSourceList; }
    inline bool RulesSourceListHasBeenSet() const { return m_rulesSourceListHasBeenSet; }
    inline void SetRulesSourceList(const RulesSourceList& value) { m_rulesSourceListHasBeenSet = true; m_rulesSourceList = value; }
    inline void SetRulesSourceList(RulesSourceList&& value) { m_rulesSourceListHasBeenSet = true; m_rulesSourceList = std::move(value); }
    inline RulesSource& WithRulesSourceList(const RulesSourceList& value) { SetRulesSourceList(value); return *this;}
    inline RulesSource& WithRulesSourceList(RulesSourceList&& value) { SetRulesSourceList(std::move(value)); return *this;}
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
    inline const Aws::Vector<StatefulRule>& GetStatefulRules() const{ return m_statefulRules; }
    inline bool StatefulRulesHasBeenSet() const { return m_statefulRulesHasBeenSet; }
    inline void SetStatefulRules(const Aws::Vector<StatefulRule>& value) { m_statefulRulesHasBeenSet = true; m_statefulRules = value; }
    inline void SetStatefulRules(Aws::Vector<StatefulRule>&& value) { m_statefulRulesHasBeenSet = true; m_statefulRules = std::move(value); }
    inline RulesSource& WithStatefulRules(const Aws::Vector<StatefulRule>& value) { SetStatefulRules(value); return *this;}
    inline RulesSource& WithStatefulRules(Aws::Vector<StatefulRule>&& value) { SetStatefulRules(std::move(value)); return *this;}
    inline RulesSource& AddStatefulRules(const StatefulRule& value) { m_statefulRulesHasBeenSet = true; m_statefulRules.push_back(value); return *this; }
    inline RulesSource& AddStatefulRules(StatefulRule&& value) { m_statefulRulesHasBeenSet = true; m_statefulRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Stateless inspection criteria to be used in a stateless rule group. </p>
     */
    inline const StatelessRulesAndCustomActions& GetStatelessRulesAndCustomActions() const{ return m_statelessRulesAndCustomActions; }
    inline bool StatelessRulesAndCustomActionsHasBeenSet() const { return m_statelessRulesAndCustomActionsHasBeenSet; }
    inline void SetStatelessRulesAndCustomActions(const StatelessRulesAndCustomActions& value) { m_statelessRulesAndCustomActionsHasBeenSet = true; m_statelessRulesAndCustomActions = value; }
    inline void SetStatelessRulesAndCustomActions(StatelessRulesAndCustomActions&& value) { m_statelessRulesAndCustomActionsHasBeenSet = true; m_statelessRulesAndCustomActions = std::move(value); }
    inline RulesSource& WithStatelessRulesAndCustomActions(const StatelessRulesAndCustomActions& value) { SetStatelessRulesAndCustomActions(value); return *this;}
    inline RulesSource& WithStatelessRulesAndCustomActions(StatelessRulesAndCustomActions&& value) { SetStatelessRulesAndCustomActions(std::move(value)); return *this;}
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
