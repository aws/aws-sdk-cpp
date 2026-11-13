/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/FirewallRulesSource.h>
#include <aws/network-firewall/model/ReferenceSets.h>
#include <aws/network-firewall/model/RuleVariables.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>The object that defines a firewall engine rule group, for use in a Next
 * Generation policy. A firewall engine rule group provides access-control rules
 * that the firewall engine evaluates at connection-state hooks. You provide the
 * rules as a Suricata-compatible rule string, as structured firewall rules, or
 * generated from a list of domain names. For more information, see <a
 * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/rule-groups-v2.html">Rule
 * groups for a firewall using a Next Generation policy</a> in the <i>Network
 * Firewall Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/FirewallRuleGroup">AWS
 * API Reference</a></p>
 */
class FirewallRuleGroup {
 public:
  AWS_NETWORKFIREWALL_API FirewallRuleGroup() = default;
  AWS_NETWORKFIREWALL_API FirewallRuleGroup(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API FirewallRuleGroup& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The stateful inspection criteria for the firewall engine rule group.</p>
   */
  inline const FirewallRulesSource& GetRulesSource() const { return m_rulesSource; }
  inline bool RulesSourceHasBeenSet() const { return m_rulesSourceHasBeenSet; }
  template <typename RulesSourceT = FirewallRulesSource>
  void SetRulesSource(RulesSourceT&& value) {
    m_rulesSourceHasBeenSet = true;
    m_rulesSource = std::forward<RulesSourceT>(value);
  }
  template <typename RulesSourceT = FirewallRulesSource>
  FirewallRuleGroup& WithRulesSource(RulesSourceT&& value) {
    SetRulesSource(std::forward<RulesSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Settings that are available for use in the rules in the firewall engine rule
   * group, such as IP set and port variables that the rules reference.</p>
   */
  inline const RuleVariables& GetRuleVariables() const { return m_ruleVariables; }
  inline bool RuleVariablesHasBeenSet() const { return m_ruleVariablesHasBeenSet; }
  template <typename RuleVariablesT = RuleVariables>
  void SetRuleVariables(RuleVariablesT&& value) {
    m_ruleVariablesHasBeenSet = true;
    m_ruleVariables = std::forward<RuleVariablesT>(value);
  }
  template <typename RuleVariablesT = RuleVariables>
  FirewallRuleGroup& WithRuleVariables(RuleVariablesT&& value) {
    SetRuleVariables(std::forward<RuleVariablesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of a rule group's reference sets. Firewall engine rule groups don't
   * support IP set references (reference sets); this setting applies to IPS engine
   * rule groups. To use CIDR ranges in firewall engine rules, use rule variables
   * instead.</p>
   */
  inline const ReferenceSets& GetReferenceSets() const { return m_referenceSets; }
  inline bool ReferenceSetsHasBeenSet() const { return m_referenceSetsHasBeenSet; }
  template <typename ReferenceSetsT = ReferenceSets>
  void SetReferenceSets(ReferenceSetsT&& value) {
    m_referenceSetsHasBeenSet = true;
    m_referenceSets = std::forward<ReferenceSetsT>(value);
  }
  template <typename ReferenceSetsT = ReferenceSets>
  FirewallRuleGroup& WithReferenceSets(ReferenceSetsT&& value) {
    SetReferenceSets(std::forward<ReferenceSetsT>(value));
    return *this;
  }
  ///@}
 private:
  FirewallRulesSource m_rulesSource;

  RuleVariables m_ruleVariables;

  ReferenceSets m_referenceSets;
  bool m_rulesSourceHasBeenSet = false;
  bool m_ruleVariablesHasBeenSet = false;
  bool m_referenceSetsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
