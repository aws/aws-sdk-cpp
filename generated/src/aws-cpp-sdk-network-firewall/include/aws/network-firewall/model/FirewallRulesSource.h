/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/FirewallRule.h>
#include <aws/network-firewall/model/RulesSourceList.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>The source of the rules for a firewall engine rule group. You provide the
 * rules as a single Suricata-compatible rule string, as a list of structured
 * firewall rules, or as a list of domain names to generate rules
 * from.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/FirewallRulesSource">AWS
 * API Reference</a></p>
 */
class FirewallRulesSource {
 public:
  AWS_NETWORKFIREWALL_API FirewallRulesSource() = default;
  AWS_NETWORKFIREWALL_API FirewallRulesSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API FirewallRulesSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Firewall engine rules, provided as a single Suricata-compatible rule string
   * in firewall mode. Use this to provide rules that you've already written in the
   * Suricata firewall-mode format. For the rule format, see <a
   * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/rule-groups-v2.html">Rule
   * groups for a firewall using a Next Generation policy</a> in the <i>Network
   * Firewall Developer Guide</i>.</p>
   */
  inline const Aws::String& GetRulesString() const { return m_rulesString; }
  inline bool RulesStringHasBeenSet() const { return m_rulesStringHasBeenSet; }
  template <typename RulesStringT = Aws::String>
  void SetRulesString(RulesStringT&& value) {
    m_rulesStringHasBeenSet = true;
    m_rulesString = std::forward<RulesStringT>(value);
  }
  template <typename RulesStringT = Aws::String>
  FirewallRulesSource& WithRulesString(RulesStringT&& value) {
    SetRulesString(std::forward<RulesStringT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of individual firewall engine rules, provided as structured rules
   * rather than as a rule string.</p>
   */
  inline const Aws::Vector<FirewallRule>& GetFirewallRules() const { return m_firewallRules; }
  inline bool FirewallRulesHasBeenSet() const { return m_firewallRulesHasBeenSet; }
  template <typename FirewallRulesT = Aws::Vector<FirewallRule>>
  void SetFirewallRules(FirewallRulesT&& value) {
    m_firewallRulesHasBeenSet = true;
    m_firewallRules = std::forward<FirewallRulesT>(value);
  }
  template <typename FirewallRulesT = Aws::Vector<FirewallRule>>
  FirewallRulesSource& WithFirewallRules(FirewallRulesT&& value) {
    SetFirewallRules(std::forward<FirewallRulesT>(value));
    return *this;
  }
  template <typename FirewallRulesT = FirewallRule>
  FirewallRulesSource& AddFirewallRules(FirewallRulesT&& value) {
    m_firewallRulesHasBeenSet = true;
    m_firewallRules.emplace_back(std::forward<FirewallRulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Stateful inspection criteria for a domain list, specified as the list of
   * domain names that Network Firewall generates firewall engine rules from.</p>
   */
  inline const RulesSourceList& GetRulesSourceList() const { return m_rulesSourceList; }
  inline bool RulesSourceListHasBeenSet() const { return m_rulesSourceListHasBeenSet; }
  template <typename RulesSourceListT = RulesSourceList>
  void SetRulesSourceList(RulesSourceListT&& value) {
    m_rulesSourceListHasBeenSet = true;
    m_rulesSourceList = std::forward<RulesSourceListT>(value);
  }
  template <typename RulesSourceListT = RulesSourceList>
  FirewallRulesSource& WithRulesSourceList(RulesSourceListT&& value) {
    SetRulesSourceList(std::forward<RulesSourceListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_rulesString;

  Aws::Vector<FirewallRule> m_firewallRules;

  RulesSourceList m_rulesSourceList;
  bool m_rulesStringHasBeenSet = false;
  bool m_firewallRulesHasBeenSet = false;
  bool m_rulesSourceListHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
