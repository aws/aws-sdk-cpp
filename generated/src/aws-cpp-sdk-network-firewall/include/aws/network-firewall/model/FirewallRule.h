/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ActionScope.h>
#include <aws/network-firewall/model/FirewallRuleAction.h>
#include <aws/network-firewall/model/FirewallRuleProtocol.h>
#include <aws/network-firewall/model/HookKey.h>
#include <aws/network-firewall/model/RuleMetadata.h>
#include <aws/network-firewall/model/RuleOption.h>

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
 * <p>A single structured firewall engine rule, for use in a firewall engine rule
 * group or as an embedded rule in a Next Generation policy. A firewall rule
 * accepts, drops, or rejects traffic at a connection-state hook. For more
 * information about authoring firewall engine rules, see <a
 * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/rule-groups-v2.html">Rule
 * groups for a firewall using a Next Generation policy</a> in the <i>Network
 * Firewall Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/FirewallRule">AWS
 * API Reference</a></p>
 */
class FirewallRule {
 public:
  AWS_NETWORKFIREWALL_API FirewallRule() = default;
  AWS_NETWORKFIREWALL_API FirewallRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API FirewallRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The action that the firewall engine takes on traffic that matches the rule.
   * The firewall engine supports the following actions:</p> <ul> <li> <p>
   * <code>ACCEPT</code> - Allow the traffic.</p> </li> <li> <p> <code>DROP</code> -
   * Block the traffic and discontinue inspection.</p> </li> <li> <p>
   * <code>REJECT</code> - Block the traffic and send a TCP reset packet back to the
   * client.</p> </li> <li> <p> <code>REJECT_DST</code> - Block the traffic and send
   * a TCP reset packet to the destination.</p> </li> <li> <p>
   * <code>REJECT_BOTH</code> - Block the traffic and send a TCP reset packet to both
   * the client and the destination.</p> </li> </ul> <p>You combine the action with
   * an action scope, for example <code>accept:flow</code>. To send accepted traffic
   * straight to its destination and skip the IPS engine, pair an accept action with
   * the <code>BypassIPSEnabled</code> setting. For more information, see <a
   * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/rule-groups-v2.html">Rule
   * groups for a firewall using a Next Generation policy</a> in the <i>Network
   * Firewall Developer Guide</i>.</p>
   */
  inline FirewallRuleAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(FirewallRuleAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline FirewallRule& WithAction(FirewallRuleAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope that controls how much of the matched traffic the action applies
   * to. The valid scopes depend on the action: <code>ACCEPT</code> supports all four
   * scopes, and <code>DROP</code>, <code>REJECT</code>, <code>REJECT_DST</code>, and
   * <code>REJECT_BOTH</code> support only <code>PACKET</code> and
   * <code>FLOW</code>.</p> <ul> <li> <p> <code>PACKET</code> - The current packet
   * only.</p> </li> <li> <p> <code>HOOK</code> - The current hook only. The firewall
   * engine evaluates the connection again at the next hook.</p> </li> <li> <p>
   * <code>TX</code> - The current transaction. The firewall engine continues to
   * evaluate later transactions on the connection.</p> </li> <li> <p>
   * <code>FLOW</code> - The entire connection. For an accept action, the connection
   * skips the firewall engine's remaining hooks and advances to the IPS engine.</p>
   * </li> </ul> <p>In a Suricata-compatible rule string, you write the scope in
   * lowercase, for example <code>accept:flow</code>.</p>
   */
  inline ActionScope GetActionScope() const { return m_actionScope; }
  inline bool ActionScopeHasBeenSet() const { return m_actionScopeHasBeenSet; }
  inline void SetActionScope(ActionScope value) {
    m_actionScopeHasBeenSet = true;
    m_actionScope = value;
  }
  inline FirewallRule& WithActionScope(ActionScope value) {
    SetActionScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connection-state hook at which the firewall engine evaluates the rule.
   * The hook encodes both the protocol and the connection state, for example a TCP
   * hook or a TLS <code>client_hello</code> hook. For the hooks that the firewall
   * engine supports and how they map to the connection lifecycle, see <a
   * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/rule-groups-v2.html">Rule
   * groups for a firewall using a Next Generation policy</a> in the <i>Network
   * Firewall Developer Guide</i> and the <a
   * href="https://suricata.readthedocs.io/en/suricata-8.0.3/firewall/firewall-design.html">Suricata
   * firewall mode documentation</a>.</p>
   */
  inline HookKey GetHook() const { return m_hook; }
  inline bool HookHasBeenSet() const { return m_hookHasBeenSet; }
  inline void SetHook(HookKey value) {
    m_hookHasBeenSet = true;
    m_hook = value;
  }
  inline FirewallRule& WithHook(HookKey value) {
    SetHook(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protocol of the rule's hook. The protocol is derived from the hook and
   * must match the hook's protocol prefix. Network Firewall rejects a rule whose
   * protocol doesn't match its hook.</p>
   */
  inline FirewallRuleProtocol GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  inline void SetProtocol(FirewallRuleProtocol value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline FirewallRule& WithProtocol(FirewallRuleProtocol value) {
    SetProtocol(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source IP addresses and address ranges to inspect for, in CIDR notation.
   * A firewall rule always compiles to a forward-direction rule, so you express
   * inbound compared to outbound traffic through the source and destination
   * addresses.</p>
   */
  inline const Aws::String& GetSourceIPs() const { return m_sourceIPs; }
  inline bool SourceIPsHasBeenSet() const { return m_sourceIPsHasBeenSet; }
  template <typename SourceIPsT = Aws::String>
  void SetSourceIPs(SourceIPsT&& value) {
    m_sourceIPsHasBeenSet = true;
    m_sourceIPs = std::forward<SourceIPsT>(value);
  }
  template <typename SourceIPsT = Aws::String>
  FirewallRule& WithSourceIPs(SourceIPsT&& value) {
    SetSourceIPs(std::forward<SourceIPsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination IP addresses and address ranges to inspect for, in CIDR
   * notation. A firewall rule always compiles to a forward-direction rule, so you
   * express inbound compared to outbound traffic through the source and destination
   * addresses.</p>
   */
  inline const Aws::String& GetDestIPs() const { return m_destIPs; }
  inline bool DestIPsHasBeenSet() const { return m_destIPsHasBeenSet; }
  template <typename DestIPsT = Aws::String>
  void SetDestIPs(DestIPsT&& value) {
    m_destIPsHasBeenSet = true;
    m_destIPs = std::forward<DestIPsT>(value);
  }
  template <typename DestIPsT = Aws::String>
  FirewallRule& WithDestIPs(DestIPsT&& value) {
    SetDestIPs(std::forward<DestIPsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source ports to inspect for.</p>
   */
  inline const Aws::String& GetSourcePorts() const { return m_sourcePorts; }
  inline bool SourcePortsHasBeenSet() const { return m_sourcePortsHasBeenSet; }
  template <typename SourcePortsT = Aws::String>
  void SetSourcePorts(SourcePortsT&& value) {
    m_sourcePortsHasBeenSet = true;
    m_sourcePorts = std::forward<SourcePortsT>(value);
  }
  template <typename SourcePortsT = Aws::String>
  FirewallRule& WithSourcePorts(SourcePortsT&& value) {
    SetSourcePorts(std::forward<SourcePortsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination ports to inspect for.</p>
   */
  inline const Aws::String& GetDestPorts() const { return m_destPorts; }
  inline bool DestPortsHasBeenSet() const { return m_destPortsHasBeenSet; }
  template <typename DestPortsT = Aws::String>
  void SetDestPorts(DestPortsT&& value) {
    m_destPortsHasBeenSet = true;
    m_destPorts = std::forward<DestPortsT>(value);
  }
  template <typename DestPortsT = Aws::String>
  FirewallRule& WithDestPorts(DestPortsT&& value) {
    SetDestPorts(std::forward<DestPortsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional options for the rule. These are the Suricata
   * <code>RuleOptions</code> settings, such as the signature ID (<code>sid</code>)
   * and match keywords.</p>
   */
  inline const Aws::Vector<RuleOption>& GetRuleOptions() const { return m_ruleOptions; }
  inline bool RuleOptionsHasBeenSet() const { return m_ruleOptionsHasBeenSet; }
  template <typename RuleOptionsT = Aws::Vector<RuleOption>>
  void SetRuleOptions(RuleOptionsT&& value) {
    m_ruleOptionsHasBeenSet = true;
    m_ruleOptions = std::forward<RuleOptionsT>(value);
  }
  template <typename RuleOptionsT = Aws::Vector<RuleOption>>
  FirewallRule& WithRuleOptions(RuleOptionsT&& value) {
    SetRuleOptions(std::forward<RuleOptionsT>(value));
    return *this;
  }
  template <typename RuleOptionsT = RuleOption>
  FirewallRule& AddRuleOptions(RuleOptionsT&& value) {
    m_ruleOptionsHasBeenSet = true;
    m_ruleOptions.emplace_back(std::forward<RuleOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether Network Firewall automatically accepts the earlier application-layer
   * hooks that a connection must pass to reach this rule's hook. Because the
   * firewall engine is drop by default, accepting prior hooks lets you author a
   * single rule for the hook you care about, instead of also authoring a rule for
   * each earlier hook. This setting accepts the earlier application-layer hooks
   * only; it doesn't accept the TCP layer. For more information, see <a
   * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/rule-groups-v2.html">Rule
   * groups for a firewall using a Next Generation policy</a> in the <i>Network
   * Firewall Developer Guide</i>.</p>
   */
  inline bool GetAcceptPriorHooks() const { return m_acceptPriorHooks; }
  inline bool AcceptPriorHooksHasBeenSet() const { return m_acceptPriorHooksHasBeenSet; }
  inline void SetAcceptPriorHooks(bool value) {
    m_acceptPriorHooksHasBeenSet = true;
    m_acceptPriorHooks = value;
  }
  inline FirewallRule& WithAcceptPriorHooks(bool value) {
    SetAcceptPriorHooks(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the rule also generates an alert log for the traffic that
   * it matches. Turning on alerting adds a secondary alert action to the rule, so
   * that Network Firewall logs the match in addition to taking the rule's primary
   * action.</p>
   */
  inline bool GetAlertEnabled() const { return m_alertEnabled; }
  inline bool AlertEnabledHasBeenSet() const { return m_alertEnabledHasBeenSet; }
  inline void SetAlertEnabled(bool value) {
    m_alertEnabledHasBeenSet = true;
    m_alertEnabled = value;
  }
  inline FirewallRule& WithAlertEnabled(bool value) {
    SetAlertEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether an accepted connection bypasses the IPS engine. By default,
   * traffic that the firewall engine accepts advances to the IPS engine for threat
   * inspection. When you turn on this setting for an accept rule, the accepted
   * traffic goes straight to its destination without IPS inspection. You can set the
   * bypass only on accept rules, and it uses the same scope as the rule's accept
   * action; only the <code>flow</code> and <code>packet</code> scopes support a
   * bypass. For more information, see <a
   * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/rule-groups-v2.html">Rule
   * groups for a firewall using a Next Generation policy</a> in the <i>Network
   * Firewall Developer Guide</i>.</p>
   */
  inline bool GetBypassIPSEnabled() const { return m_bypassIPSEnabled; }
  inline bool BypassIPSEnabledHasBeenSet() const { return m_bypassIPSEnabledHasBeenSet; }
  inline void SetBypassIPSEnabled(bool value) {
    m_bypassIPSEnabledHasBeenSet = true;
    m_bypassIPSEnabled = value;
  }
  inline FirewallRule& WithBypassIPSEnabled(bool value) {
    SetBypassIPSEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional metadata for the rule: whether the rule is enabled and a
   * description. Metadata doesn't change how the rule matches or acts on
   * traffic.</p>
   */
  inline const RuleMetadata& GetRuleMetadata() const { return m_ruleMetadata; }
  inline bool RuleMetadataHasBeenSet() const { return m_ruleMetadataHasBeenSet; }
  template <typename RuleMetadataT = RuleMetadata>
  void SetRuleMetadata(RuleMetadataT&& value) {
    m_ruleMetadataHasBeenSet = true;
    m_ruleMetadata = std::forward<RuleMetadataT>(value);
  }
  template <typename RuleMetadataT = RuleMetadata>
  FirewallRule& WithRuleMetadata(RuleMetadataT&& value) {
    SetRuleMetadata(std::forward<RuleMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  FirewallRuleAction m_action{FirewallRuleAction::NOT_SET};

  ActionScope m_actionScope{ActionScope::NOT_SET};

  HookKey m_hook{HookKey::NOT_SET};

  FirewallRuleProtocol m_protocol{FirewallRuleProtocol::NOT_SET};

  Aws::String m_sourceIPs;

  Aws::String m_destIPs;

  Aws::String m_sourcePorts;

  Aws::String m_destPorts;

  Aws::Vector<RuleOption> m_ruleOptions;

  bool m_acceptPriorHooks{false};

  bool m_alertEnabled{false};

  bool m_bypassIPSEnabled{false};

  RuleMetadata m_ruleMetadata;
  bool m_actionHasBeenSet = false;
  bool m_actionScopeHasBeenSet = false;
  bool m_hookHasBeenSet = false;
  bool m_protocolHasBeenSet = false;
  bool m_sourceIPsHasBeenSet = false;
  bool m_destIPsHasBeenSet = false;
  bool m_sourcePortsHasBeenSet = false;
  bool m_destPortsHasBeenSet = false;
  bool m_ruleOptionsHasBeenSet = false;
  bool m_acceptPriorHooksHasBeenSet = false;
  bool m_alertEnabledHasBeenSet = false;
  bool m_bypassIPSEnabledHasBeenSet = false;
  bool m_ruleMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
