/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/Address.h>
#include <aws/network-firewall/model/DNSExpiryExceptionPolicy.h>
#include <aws/network-firewall/model/Route53ResolvedIPValidationAction.h>

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
 * <p>The policy-level configuration for resolved IP validation. When you set this
 * on a firewall policy, you require that the destination IP address of a
 * connection is one that the Amazon Route 53 Resolver returned in a DNS response
 * for a domain. The Route 53 Resolver must have returned the response in a VPC
 * that's associated with the Route 53 Resolver DNS Firewall rule group identified
 * by <code>DNSFirewallRuleGroupId</code>. At the policy level, this verifies that
 * the destination IP address was resolved for some domain. To match specific
 * domains, also configure stateful rule groups that use the
 * <code>AWS_ROUTE_53_RESOLVED_DOMAIN</code> target type or the
 * <code>aws_route_53_resolved_domain</code> rule keyword.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/Route53ResolvedIPValidation">AWS
 * API Reference</a></p>
 */
class Route53ResolvedIPValidation {
 public:
  AWS_NETWORKFIREWALL_API Route53ResolvedIPValidation() = default;
  AWS_NETWORKFIREWALL_API Route53ResolvedIPValidation(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Route53ResolvedIPValidation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The action that Network Firewall takes for a connection whose destination IP
   * address fails resolved IP validation. A destination IP address fails validation
   * when the Route 53 Resolver didn't return it in a DNS response in an associated
   * VPC. Valid values are the following:</p> <ul> <li> <p> <code>ALERT</code> – Tags
   * the matching connection in the firewall's flow logs without blocking it, when
   * you enable logging. Use this to observe the effect of resolved IP validation
   * before you enforce it.</p> </li> <li> <p> <code>DROP</code> – Silently blocks
   * the connection without sending any response to the client.</p> </li> <li> <p>
   * <code>REJECT</code> – Blocks the connection and sends a TCP reset (RST) to the
   * client. Because a TCP reset applies only to TCP connections, Network Firewall
   * drops non-TCP traffic instead of resetting it.</p> </li> </ul>
   */
  inline Route53ResolvedIPValidationAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(Route53ResolvedIPValidationAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline Route53ResolvedIPValidation& WithAction(Route53ResolvedIPValidationAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Route 53 Resolver DNS Firewall rule group that determines which
   * VPCs' DNS resolutions count for resolved IP validation. A destination IP address
   * counts as resolved for a domain only when the Route 53 Resolver returned it in a
   * DNS response within a VPC that's associated with this rule group. Associate the
   * rule group with the VPCs that send traffic to the firewall. The ID must match
   * the pattern <code>^rslvr-frg-[0-9a-f]+$</code>. It must also exist and be
   * accessible from your account. Network Firewall validates this when you create or
   * update the policy.</p> <p>Changing this value swaps the managed rule group
   * association. Network Firewall processes the swap asynchronously. Each policy can
   * have only one managed Route 53 Resolver DNS Firewall association. While a swap
   * is in progress, Network Firewall rejects further changes to this setting. Wait
   * until the swap completes, then retry.</p>
   */
  inline const Aws::String& GetDNSFirewallRuleGroupId() const { return m_dNSFirewallRuleGroupId; }
  inline bool DNSFirewallRuleGroupIdHasBeenSet() const { return m_dNSFirewallRuleGroupIdHasBeenSet; }
  template <typename DNSFirewallRuleGroupIdT = Aws::String>
  void SetDNSFirewallRuleGroupId(DNSFirewallRuleGroupIdT&& value) {
    m_dNSFirewallRuleGroupIdHasBeenSet = true;
    m_dNSFirewallRuleGroupId = std::forward<DNSFirewallRuleGroupIdT>(value);
  }
  template <typename DNSFirewallRuleGroupIdT = Aws::String>
  Route53ResolvedIPValidation& WithDNSFirewallRuleGroupId(DNSFirewallRuleGroupIdT&& value) {
    SetDNSFirewallRuleGroupId(std::forward<DNSFirewallRuleGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action that Network Firewall takes when the DNS resolution recorded for a
   * destination IP address has expired from the resolved IP cache. This applies when
   * Network Firewall still sees traffic to that IP address after the expiry. Network
   * Firewall keeps a resolution for longer than the DNS record's time to live (TTL).
   * Valid values are the following:</p> <ul> <li> <p> <code>CONTINUE</code> – Treats
   * the expired resolution as still valid and doesn't block the connection because
   * of expiry.</p> </li> <li> <p> <code>DROP</code> – Silently blocks traffic to the
   * IP address after its resolution has expired, without sending any response to the
   * client.</p> </li> <li> <p> <code>REJECT</code> – Blocks traffic to the IP
   * address after its resolution has expired and sends a TCP reset (RST) to the
   * client. Network Firewall drops non-TCP traffic instead of resetting it.</p>
   * </li> </ul>
   */
  inline DNSExpiryExceptionPolicy GetDNSExpiryExceptionPolicy() const { return m_dNSExpiryExceptionPolicy; }
  inline bool DNSExpiryExceptionPolicyHasBeenSet() const { return m_dNSExpiryExceptionPolicyHasBeenSet; }
  inline void SetDNSExpiryExceptionPolicy(DNSExpiryExceptionPolicy value) {
    m_dNSExpiryExceptionPolicyHasBeenSet = true;
    m_dNSExpiryExceptionPolicy = value;
  }
  inline Route53ResolvedIPValidation& WithDNSExpiryExceptionPolicy(DNSExpiryExceptionPolicy value) {
    SetDNSExpiryExceptionPolicy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination IP address ranges that are exempt from the policy-level
   * resolved IP check. Network Firewall doesn't apply the <code>Action</code> in
   * this configuration to a connection whose destination falls in these ranges, even
   * if the Route 53 Resolver didn't return that IP address in an associated VPC.
   * Specify each entry as an IPv4 or IPv6 address or CIDR range, up to 100
   * entries.</p> <p>This exemption applies only to the policy-level check. Stateful
   * rules that use the <code>AWS_ROUTE_53_RESOLVED_DOMAIN</code> target type or the
   * <code>aws_route_53_resolved_domain</code> keyword still evaluate connections to
   * these destinations and match them independently of this list.</p>
   */
  inline const Aws::Vector<Address>& GetBypassDestinationValidationIPRanges() const { return m_bypassDestinationValidationIPRanges; }
  inline bool BypassDestinationValidationIPRangesHasBeenSet() const { return m_bypassDestinationValidationIPRangesHasBeenSet; }
  template <typename BypassDestinationValidationIPRangesT = Aws::Vector<Address>>
  void SetBypassDestinationValidationIPRanges(BypassDestinationValidationIPRangesT&& value) {
    m_bypassDestinationValidationIPRangesHasBeenSet = true;
    m_bypassDestinationValidationIPRanges = std::forward<BypassDestinationValidationIPRangesT>(value);
  }
  template <typename BypassDestinationValidationIPRangesT = Aws::Vector<Address>>
  Route53ResolvedIPValidation& WithBypassDestinationValidationIPRanges(BypassDestinationValidationIPRangesT&& value) {
    SetBypassDestinationValidationIPRanges(std::forward<BypassDestinationValidationIPRangesT>(value));
    return *this;
  }
  template <typename BypassDestinationValidationIPRangesT = Address>
  Route53ResolvedIPValidation& AddBypassDestinationValidationIPRanges(BypassDestinationValidationIPRangesT&& value) {
    m_bypassDestinationValidationIPRangesHasBeenSet = true;
    m_bypassDestinationValidationIPRanges.emplace_back(std::forward<BypassDestinationValidationIPRangesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client source IP address ranges whose connections are subject to resolved
   * IP validation. Specify each entry as an IPv4 or IPv6 address or CIDR range, up
   * to 100 entries. If you omit this field, resolved IP validation applies to the
   * CIDR ranges of the firewall's VPC and of any additional VPCs attached to the
   * firewall. Specifying an empty list is not the same as omitting the field: an
   * empty list means that Network Firewall doesn't validate any source
   * addresses.</p> <p>This scope applies to the policy-level check only. Stateful
   * rules that use the <code>AWS_ROUTE_53_RESOLVED_DOMAIN</code> target type or the
   * <code>aws_route_53_resolved_domain</code> keyword still evaluate their
   * destinations regardless of <code>SourceIPRanges</code>.</p>
   */
  inline const Aws::Vector<Address>& GetSourceIPRanges() const { return m_sourceIPRanges; }
  inline bool SourceIPRangesHasBeenSet() const { return m_sourceIPRangesHasBeenSet; }
  template <typename SourceIPRangesT = Aws::Vector<Address>>
  void SetSourceIPRanges(SourceIPRangesT&& value) {
    m_sourceIPRangesHasBeenSet = true;
    m_sourceIPRanges = std::forward<SourceIPRangesT>(value);
  }
  template <typename SourceIPRangesT = Aws::Vector<Address>>
  Route53ResolvedIPValidation& WithSourceIPRanges(SourceIPRangesT&& value) {
    SetSourceIPRanges(std::forward<SourceIPRangesT>(value));
    return *this;
  }
  template <typename SourceIPRangesT = Address>
  Route53ResolvedIPValidation& AddSourceIPRanges(SourceIPRangesT&& value) {
    m_sourceIPRangesHasBeenSet = true;
    m_sourceIPRanges.emplace_back(std::forward<SourceIPRangesT>(value));
    return *this;
  }
  ///@}
 private:
  Route53ResolvedIPValidationAction m_action{Route53ResolvedIPValidationAction::NOT_SET};

  Aws::String m_dNSFirewallRuleGroupId;

  DNSExpiryExceptionPolicy m_dNSExpiryExceptionPolicy{DNSExpiryExceptionPolicy::NOT_SET};

  Aws::Vector<Address> m_bypassDestinationValidationIPRanges;

  Aws::Vector<Address> m_sourceIPRanges;
  bool m_actionHasBeenSet = false;
  bool m_dNSFirewallRuleGroupIdHasBeenSet = false;
  bool m_dNSExpiryExceptionPolicyHasBeenSet = false;
  bool m_bypassDestinationValidationIPRangesHasBeenSet = false;
  bool m_sourceIPRangesHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
