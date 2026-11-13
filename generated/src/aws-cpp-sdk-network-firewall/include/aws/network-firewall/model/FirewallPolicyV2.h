/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/FirewallRuleGroupEntry.h>
#include <aws/network-firewall/model/IpsRuleGroupEntry.h>
#include <aws/network-firewall/model/PolicyDefaultAction.h>
#include <aws/network-firewall/model/PolicyMode.h>
#include <aws/network-firewall/model/PolicyVariables.h>
#include <aws/network-firewall/model/Route53ResolvedIPValidation.h>
#include <aws/network-firewall/model/StatefulEngineOptionsV2.h>

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
 * <p>The object that defines a Next Generation policy. This, along with the
 * <a>FirewallPolicyV2Response</a>, define the policy.</p> <p>A Next Generation
 * policy defines how the firewall engine and IPS engine inspect and control your
 * VPC network traffic. You define the policy as a firewall section and an IPS
 * section, each a collection of rule groups, along with policy-wide settings such
 * as the policy mode and default actions. For more information, see <a
 * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/firewall-policies-v2.html">Next
 * Generation policies</a> in the <i>Network Firewall Developer
 * Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/FirewallPolicyV2">AWS
 * API Reference</a></p>
 */
class FirewallPolicyV2 {
 public:
  AWS_NETWORKFIREWALL_API FirewallPolicyV2() = default;
  AWS_NETWORKFIREWALL_API FirewallPolicyV2(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API FirewallPolicyV2& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The firewall section of the policy—the rule groups that the firewall engine
   * evaluates. Each entry references an existing firewall engine rule group or
   * embeds a rule group directly in the policy, and each entry has a unique priority
   * that sets its evaluation order within the section.</p>
   */
  inline const Aws::Vector<FirewallRuleGroupEntry>& GetFirewallRuleGroupEntries() const { return m_firewallRuleGroupEntries; }
  inline bool FirewallRuleGroupEntriesHasBeenSet() const { return m_firewallRuleGroupEntriesHasBeenSet; }
  template <typename FirewallRuleGroupEntriesT = Aws::Vector<FirewallRuleGroupEntry>>
  void SetFirewallRuleGroupEntries(FirewallRuleGroupEntriesT&& value) {
    m_firewallRuleGroupEntriesHasBeenSet = true;
    m_firewallRuleGroupEntries = std::forward<FirewallRuleGroupEntriesT>(value);
  }
  template <typename FirewallRuleGroupEntriesT = Aws::Vector<FirewallRuleGroupEntry>>
  FirewallPolicyV2& WithFirewallRuleGroupEntries(FirewallRuleGroupEntriesT&& value) {
    SetFirewallRuleGroupEntries(std::forward<FirewallRuleGroupEntriesT>(value));
    return *this;
  }
  template <typename FirewallRuleGroupEntriesT = FirewallRuleGroupEntry>
  FirewallPolicyV2& AddFirewallRuleGroupEntries(FirewallRuleGroupEntriesT&& value) {
    m_firewallRuleGroupEntriesHasBeenSet = true;
    m_firewallRuleGroupEntries.emplace_back(std::forward<FirewallRuleGroupEntriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPS section of the policy—the rule groups that the IPS engine evaluates.
   * Each entry references an existing IPS engine rule group or embeds a rule group
   * directly in the policy. IPS section entries don't use a priority.</p>
   */
  inline const Aws::Vector<IpsRuleGroupEntry>& GetIpsRuleGroupEntries() const { return m_ipsRuleGroupEntries; }
  inline bool IpsRuleGroupEntriesHasBeenSet() const { return m_ipsRuleGroupEntriesHasBeenSet; }
  template <typename IpsRuleGroupEntriesT = Aws::Vector<IpsRuleGroupEntry>>
  void SetIpsRuleGroupEntries(IpsRuleGroupEntriesT&& value) {
    m_ipsRuleGroupEntriesHasBeenSet = true;
    m_ipsRuleGroupEntries = std::forward<IpsRuleGroupEntriesT>(value);
  }
  template <typename IpsRuleGroupEntriesT = Aws::Vector<IpsRuleGroupEntry>>
  FirewallPolicyV2& WithIpsRuleGroupEntries(IpsRuleGroupEntriesT&& value) {
    SetIpsRuleGroupEntries(std::forward<IpsRuleGroupEntriesT>(value));
    return *this;
  }
  template <typename IpsRuleGroupEntriesT = IpsRuleGroupEntry>
  FirewallPolicyV2& AddIpsRuleGroupEntries(IpsRuleGroupEntriesT&& value) {
    m_ipsRuleGroupEntriesHasBeenSet = true;
    m_ipsRuleGroupEntries.emplace_back(std::forward<IpsRuleGroupEntriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the policy's engines enforce their verdicts or only report
   * them. In <code>ENFORCE</code> mode, the firewall engine and IPS engine apply
   * their verdicts to traffic. In <code>MONITOR</code> mode, the engines evaluate
   * traffic and generate logs and metrics, but don't block traffic, so you can
   * observe how a policy would behave before you enforce it. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/firewall-policies-v2.html">Next
   * Generation policies</a> in the <i>Network Firewall Developer Guide</i>.</p>
   */
  inline PolicyMode GetPolicyMode() const { return m_policyMode; }
  inline bool PolicyModeHasBeenSet() const { return m_policyModeHasBeenSet; }
  inline void SetPolicyMode(PolicyMode value) {
    m_policyModeHasBeenSet = true;
    m_policyMode = value;
  }
  inline FirewallPolicyV2& WithPolicyMode(PolicyMode value) {
    SetPolicyMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action that the firewall engine takes on traffic that doesn't match any
   * firewall engine rule at a hook. The firewall engine is drop by default. You can
   * set the default action to one of the following:</p> <ul> <li> <p>
   * <code>DROP</code> - Block the traffic.</p> </li> <li> <p> <code>ACCEPT</code> -
   * Allow the traffic.</p> </li> <li> <p> <code>REJECT</code> - Block the traffic
   * and send a TCP reset packet back to the client.</p> </li> <li> <p>
   * <code>ALERT</code> - Allow the traffic and generate an alert log for the traffic
   * that reaches the default action at every hook. This is distinct from setting the
   * policy mode to <code>MONITOR</code>.</p> </li> </ul> <p>For more information,
   * see <a
   * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/firewall-policies-v2.html">Next
   * Generation policies</a> in the <i>Network Firewall Developer Guide</i>.</p>
   */
  inline PolicyDefaultAction GetFirewallDefaultAction() const { return m_firewallDefaultAction; }
  inline bool FirewallDefaultActionHasBeenSet() const { return m_firewallDefaultActionHasBeenSet; }
  inline void SetFirewallDefaultAction(PolicyDefaultAction value) {
    m_firewallDefaultActionHasBeenSet = true;
    m_firewallDefaultAction = value;
  }
  inline FirewallPolicyV2& WithFirewallDefaultAction(PolicyDefaultAction value) {
    SetFirewallDefaultAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional options governing how the engines handle stateful traffic, such as
   * the stream exception policy and flow timeouts.</p>
   */
  inline const StatefulEngineOptionsV2& GetStatefulEngineOptions() const { return m_statefulEngineOptions; }
  inline bool StatefulEngineOptionsHasBeenSet() const { return m_statefulEngineOptionsHasBeenSet; }
  template <typename StatefulEngineOptionsT = StatefulEngineOptionsV2>
  void SetStatefulEngineOptions(StatefulEngineOptionsT&& value) {
    m_statefulEngineOptionsHasBeenSet = true;
    m_statefulEngineOptions = std::forward<StatefulEngineOptionsT>(value);
  }
  template <typename StatefulEngineOptionsT = StatefulEngineOptionsV2>
  FirewallPolicyV2& WithStatefulEngineOptions(StatefulEngineOptionsT&& value) {
    SetStatefulEngineOptions(std::forward<StatefulEngineOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the TLS inspection configuration to use to
   * decrypt traffic for inspection. Next Generation policies support session holding
   * only. For more information, see <a
   * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection.html">Inspecting
   * SSL/TLS traffic with TLS inspection configurations</a> in the <i>Network
   * Firewall Developer Guide</i>.</p>
   */
  inline const Aws::String& GetTLSInspectionConfigurationArn() const { return m_tLSInspectionConfigurationArn; }
  inline bool TLSInspectionConfigurationArnHasBeenSet() const { return m_tLSInspectionConfigurationArnHasBeenSet; }
  template <typename TLSInspectionConfigurationArnT = Aws::String>
  void SetTLSInspectionConfigurationArn(TLSInspectionConfigurationArnT&& value) {
    m_tLSInspectionConfigurationArnHasBeenSet = true;
    m_tLSInspectionConfigurationArn = std::forward<TLSInspectionConfigurationArnT>(value);
  }
  template <typename TLSInspectionConfigurationArnT = Aws::String>
  FirewallPolicyV2& WithTLSInspectionConfigurationArn(TLSInspectionConfigurationArnT&& value) {
    SetTLSInspectionConfigurationArn(std::forward<TLSInspectionConfigurationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains variables that you can use to override default Suricata settings in
   * your Next Generation policy.</p>
   */
  inline const PolicyVariables& GetPolicyVariables() const { return m_policyVariables; }
  inline bool PolicyVariablesHasBeenSet() const { return m_policyVariablesHasBeenSet; }
  template <typename PolicyVariablesT = PolicyVariables>
  void SetPolicyVariables(PolicyVariablesT&& value) {
    m_policyVariablesHasBeenSet = true;
    m_policyVariables = std::forward<PolicyVariablesT>(value);
  }
  template <typename PolicyVariablesT = PolicyVariables>
  FirewallPolicyV2& WithPolicyVariables(PolicyVariablesT&& value) {
    SetPolicyVariables(std::forward<PolicyVariablesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The settings that enable resolved IP validation for the Next Generation
   * policy. Resolved IP validation verifies that a connection's destination IP
   * address is one that the Amazon Route 53 Resolver returned in a DNS response for
   * a domain. A VPC that's associated with the Route 53 Resolver DNS Firewall rule
   * group that you specify must send the response. This checks how the destination
   * IP address was obtained, instead of relying only on the domain that the client
   * asserts in its TLS Server Name Indication (SNI) or HTTP <code>Host</code>
   * header. For more information, see <a>Route53ResolvedIPValidation</a>.</p>
   */
  inline const Route53ResolvedIPValidation& GetRoute53ResolvedIPValidation() const { return m_route53ResolvedIPValidation; }
  inline bool Route53ResolvedIPValidationHasBeenSet() const { return m_route53ResolvedIPValidationHasBeenSet; }
  template <typename Route53ResolvedIPValidationT = Route53ResolvedIPValidation>
  void SetRoute53ResolvedIPValidation(Route53ResolvedIPValidationT&& value) {
    m_route53ResolvedIPValidationHasBeenSet = true;
    m_route53ResolvedIPValidation = std::forward<Route53ResolvedIPValidationT>(value);
  }
  template <typename Route53ResolvedIPValidationT = Route53ResolvedIPValidation>
  FirewallPolicyV2& WithRoute53ResolvedIPValidation(Route53ResolvedIPValidationT&& value) {
    SetRoute53ResolvedIPValidation(std::forward<Route53ResolvedIPValidationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<FirewallRuleGroupEntry> m_firewallRuleGroupEntries;

  Aws::Vector<IpsRuleGroupEntry> m_ipsRuleGroupEntries;

  PolicyMode m_policyMode{PolicyMode::NOT_SET};

  PolicyDefaultAction m_firewallDefaultAction{PolicyDefaultAction::NOT_SET};

  StatefulEngineOptionsV2 m_statefulEngineOptions;

  Aws::String m_tLSInspectionConfigurationArn;

  PolicyVariables m_policyVariables;

  Route53ResolvedIPValidation m_route53ResolvedIPValidation;
  bool m_firewallRuleGroupEntriesHasBeenSet = false;
  bool m_ipsRuleGroupEntriesHasBeenSet = false;
  bool m_policyModeHasBeenSet = false;
  bool m_firewallDefaultActionHasBeenSet = false;
  bool m_statefulEngineOptionsHasBeenSet = false;
  bool m_tLSInspectionConfigurationArnHasBeenSet = false;
  bool m_policyVariablesHasBeenSet = false;
  bool m_route53ResolvedIPValidationHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
