/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/IpsRulesSource.h>
#include <aws/network-firewall/model/ReferenceSets.h>
#include <aws/network-firewall/model/RuleVariables.h>

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
 * <p>The object that defines an IPS engine rule group, for use in a Next
 * Generation policy. An IPS engine rule group provides threat-detection rules that
 * the IPS engine evaluates in the context of the traffic flow. You provide the
 * rules as a Suricata-compatible rule string. For more information, see <a
 * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/rule-groups-v2.html">Rule
 * groups for a firewall using a Next Generation policy</a> in the <i>Network
 * Firewall Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/IpsRuleGroup">AWS
 * API Reference</a></p>
 */
class IpsRuleGroup {
 public:
  AWS_NETWORKFIREWALL_API IpsRuleGroup() = default;
  AWS_NETWORKFIREWALL_API IpsRuleGroup(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API IpsRuleGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The stateful inspection criteria for the IPS engine rule group.</p>
   */
  inline const IpsRulesSource& GetRulesSource() const { return m_rulesSource; }
  inline bool RulesSourceHasBeenSet() const { return m_rulesSourceHasBeenSet; }
  template <typename RulesSourceT = IpsRulesSource>
  void SetRulesSource(RulesSourceT&& value) {
    m_rulesSourceHasBeenSet = true;
    m_rulesSource = std::forward<RulesSourceT>(value);
  }
  template <typename RulesSourceT = IpsRulesSource>
  IpsRuleGroup& WithRulesSource(RulesSourceT&& value) {
    SetRulesSource(std::forward<RulesSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Settings that are available for use in the rules in the IPS engine rule
   * group.</p>
   */
  inline const RuleVariables& GetRuleVariables() const { return m_ruleVariables; }
  inline bool RuleVariablesHasBeenSet() const { return m_ruleVariablesHasBeenSet; }
  template <typename RuleVariablesT = RuleVariables>
  void SetRuleVariables(RuleVariablesT&& value) {
    m_ruleVariablesHasBeenSet = true;
    m_ruleVariables = std::forward<RuleVariablesT>(value);
  }
  template <typename RuleVariablesT = RuleVariables>
  IpsRuleGroup& WithRuleVariables(RuleVariablesT&& value) {
    SetRuleVariables(std::forward<RuleVariablesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of a rule group's reference sets.</p>
   */
  inline const ReferenceSets& GetReferenceSets() const { return m_referenceSets; }
  inline bool ReferenceSetsHasBeenSet() const { return m_referenceSetsHasBeenSet; }
  template <typename ReferenceSetsT = ReferenceSets>
  void SetReferenceSets(ReferenceSetsT&& value) {
    m_referenceSetsHasBeenSet = true;
    m_referenceSets = std::forward<ReferenceSetsT>(value);
  }
  template <typename ReferenceSetsT = ReferenceSets>
  IpsRuleGroup& WithReferenceSets(ReferenceSetsT&& value) {
    SetReferenceSets(std::forward<ReferenceSetsT>(value));
    return *this;
  }
  ///@}
 private:
  IpsRulesSource m_rulesSource;

  RuleVariables m_ruleVariables;

  ReferenceSets m_referenceSets;
  bool m_rulesSourceHasBeenSet = false;
  bool m_ruleVariablesHasBeenSet = false;
  bool m_referenceSetsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
