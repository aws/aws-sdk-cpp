/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/GeneratedRulesType.h>
#include <aws/network-firewall/model/TargetType.h>

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
 * <p>Stateful inspection criteria for a domain list rule group. </p> <p>For HTTPS
 * traffic, domain filtering is SNI-based. It uses the server name indicator
 * extension of the TLS handshake.</p> <p>By default, Network Firewall domain list
 * inspection only includes traffic coming from the VPC where you deploy the
 * firewall. To inspect traffic from IP addresses outside of the deployment VPC,
 * you set the <code>HOME_NET</code> rule variable to include the CIDR range of the
 * deployment VPC plus the other CIDR ranges. For more information, see
 * <a>RuleVariables</a> in this guide and <a
 * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/stateful-rule-groups-domain-names.html">Stateful
 * domain list rule groups in Network Firewall</a> in the <i>Network Firewall
 * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/RulesSourceList">AWS
 * API Reference</a></p>
 */
class RulesSourceList {
 public:
  AWS_NETWORKFIREWALL_API RulesSourceList() = default;
  AWS_NETWORKFIREWALL_API RulesSourceList(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API RulesSourceList& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The domains that you want to inspect for in your traffic flows. Valid domain
   * specifications are the following:</p> <ul> <li> <p>Explicit names. For example,
   * <code>abc.example.com</code> matches only the domain
   * <code>abc.example.com</code>.</p> </li> <li> <p>Names that use a domain
   * wildcard, which you indicate with an initial '<code>.</code>'. For
   * example,<code>.example.com</code> matches <code>example.com</code> and matches
   * all subdomains of <code>example.com</code>, such as <code>abc.example.com</code>
   * and <code>www.example.com</code>. </p> </li> </ul>
   */
  inline const Aws::Vector<Aws::String>& GetTargets() const { return m_targets; }
  inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
  template <typename TargetsT = Aws::Vector<Aws::String>>
  void SetTargets(TargetsT&& value) {
    m_targetsHasBeenSet = true;
    m_targets = std::forward<TargetsT>(value);
  }
  template <typename TargetsT = Aws::Vector<Aws::String>>
  RulesSourceList& WithTargets(TargetsT&& value) {
    SetTargets(std::forward<TargetsT>(value));
    return *this;
  }
  template <typename TargetsT = Aws::String>
  RulesSourceList& AddTargets(TargetsT&& value) {
    m_targetsHasBeenSet = true;
    m_targets.emplace_back(std::forward<TargetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The types of matching to perform against the domains in <code>Targets</code>.
   * You can specify any combination of the following:</p> <ul> <li> <p>
   * <code>AWS_ROUTE_53_RESOLVED_DOMAIN</code> – Match the domain against the domain
   * that the Amazon Route 53 Resolver resolved the connection's destination IP
   * address for.</p> </li> <li> <p> <code>HTTP_HOST</code> – Match the domain
   * against the <code>Host</code> header of HTTP traffic.</p> </li> <li> <p>
   * <code>TLS_SNI</code> – Match the domain against the Server Name Indication (SNI)
   * of HTTPS traffic.</p> </li> </ul> <p> <code>AWS_ROUTE_53_RESOLVED_DOMAIN</code>
   * matches on how the destination IP address was resolved, rather than on the
   * domain that the client asserts in its TLS SNI or HTTP <code>Host</code> header.
   * This target type takes effect when you configure resolved IP validation on the
   * firewall policy. For more information, see
   * <a>Route53ResolvedIPValidation</a>.</p> <p>Whether you include
   * <code>AWS_ROUTE_53_RESOLVED_DOMAIN</code> changes what the generated rules
   * match, together with <code>GeneratedRulesType</code>:</p> <ul> <li> <p>Combining
   * <code>AWS_ROUTE_53_RESOLVED_DOMAIN</code> with <code>TLS_SNI</code> or
   * <code>HTTP_HOST</code> in an <code>ALLOWLIST</code> requires both conditions to
   * match. The SNI or <code>Host</code> header must match the domain, <b>and</b> the
   * Route 53 Resolver must have resolved the destination IP address for that domain.
   * Network Firewall allows traffic only in that case. Traffic that matches one
   * condition, such as a spoofed <code>Host</code> header sent to an unresolved IP
   * address, is not allowed.</p> </li> <li> <p>In a <code>DENYLIST</code>, or when
   * <code>AWS_ROUTE_53_RESOLVED_DOMAIN</code> is the only target type, Network
   * Firewall evaluates each condition independently: a match on either the domain
   * (SNI or <code>Host</code>) or the resolved destination IP address triggers the
   * rule.</p> </li> <li> <p>When you don't include
   * <code>AWS_ROUTE_53_RESOLVED_DOMAIN</code>, the generated rules match only on the
   * SNI or <code>Host</code> header, without checking how the destination IP address
   * was resolved.</p> </li> </ul> <p>An <code>ALLOWLIST</code> whose only target
   * type is <code>AWS_ROUTE_53_RESOLVED_DOMAIN</code> is additive: it allows
   * matching traffic but doesn't generate a default rule that drops non-matching
   * traffic. Only the <code>TLS_SNI</code> and <code>HTTP_HOST</code> target types
   * generate that default drop. To allow only the resolved domains and drop all
   * other traffic, include a protocol target type as well.</p>
   */
  inline const Aws::Vector<TargetType>& GetTargetTypes() const { return m_targetTypes; }
  inline bool TargetTypesHasBeenSet() const { return m_targetTypesHasBeenSet; }
  template <typename TargetTypesT = Aws::Vector<TargetType>>
  void SetTargetTypes(TargetTypesT&& value) {
    m_targetTypesHasBeenSet = true;
    m_targetTypes = std::forward<TargetTypesT>(value);
  }
  template <typename TargetTypesT = Aws::Vector<TargetType>>
  RulesSourceList& WithTargetTypes(TargetTypesT&& value) {
    SetTargetTypes(std::forward<TargetTypesT>(value));
    return *this;
  }
  inline RulesSourceList& AddTargetTypes(TargetType value) {
    m_targetTypesHasBeenSet = true;
    m_targetTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether you want to apply allow, reject, alert, or drop behavior to the
   * domains in your target list.</p>  <p>When logging is enabled and you
   * choose Alert, traffic that matches the domain specifications generates an alert
   * in the firewall's logs. Then, traffic either passes, is rejected, or drops based
   * on other rules in the firewall policy.</p>
   */
  inline GeneratedRulesType GetGeneratedRulesType() const { return m_generatedRulesType; }
  inline bool GeneratedRulesTypeHasBeenSet() const { return m_generatedRulesTypeHasBeenSet; }
  inline void SetGeneratedRulesType(GeneratedRulesType value) {
    m_generatedRulesTypeHasBeenSet = true;
    m_generatedRulesType = value;
  }
  inline RulesSourceList& WithGeneratedRulesType(GeneratedRulesType value) {
    SetGeneratedRulesType(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_targets;

  Aws::Vector<TargetType> m_targetTypes;

  GeneratedRulesType m_generatedRulesType{GeneratedRulesType::NOT_SET};
  bool m_targetsHasBeenSet = false;
  bool m_targetTypesHasBeenSet = false;
  bool m_generatedRulesTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
