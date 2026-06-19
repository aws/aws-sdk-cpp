/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/DnsThreatProtectionRuleTypeConfig.h>
#include <aws/route53resolver/model/FirewallAdvancedContentCategoryConfig.h>
#include <aws/route53resolver/model/FirewallAdvancedThreatCategoryConfig.h>
#include <aws/route53resolver/model/PartnerThreatProtectionConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Route53Resolver {
namespace Model {

/**
 * <p>The rule-type configuration for a DNS Firewall rule.
 * <code>FirewallRuleType</code> is a tagged union — exactly one member must be set
 * per rule, and the member determines what the rule matches against. This shape is
 * mutually exclusive with the top-level <code>FirewallDomainListId</code> and
 * <code>DnsThreatProtection</code> fields on <a>CreateFirewallRule</a> and
 * <a>UpdateFirewallRule</a>.</p> <p>Call <a>ListFirewallRuleTypes</a> to discover
 * which rule-type variants and which values within each variant are available in
 * your account and Region.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/FirewallRuleType">AWS
 * API Reference</a></p>
 */
class FirewallRuleType {
 public:
  AWS_ROUTE53RESOLVER_API FirewallRuleType() = default;
  AWS_ROUTE53RESOLVER_API FirewallRuleType(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API FirewallRuleType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configures the rule to match a third-party threat feed delivered through AWS
   * Marketplace. The calling account must hold an active subscription to the partner
   * product named in <code>Partner</code>; if the subscription is missing or
   * revoked, the rule is created with <code>Status</code>
   * <code>CREATION_FAILED</code> and cannot be modified — only deleted. See
   * <a>PartnerThreatProtectionConfig</a>.</p>
   */
  inline const PartnerThreatProtectionConfig& GetPartnerThreatProtection() const { return m_partnerThreatProtection; }
  inline bool PartnerThreatProtectionHasBeenSet() const { return m_partnerThreatProtectionHasBeenSet; }
  template <typename PartnerThreatProtectionT = PartnerThreatProtectionConfig>
  void SetPartnerThreatProtection(PartnerThreatProtectionT&& value) {
    m_partnerThreatProtectionHasBeenSet = true;
    m_partnerThreatProtection = std::forward<PartnerThreatProtectionT>(value);
  }
  template <typename PartnerThreatProtectionT = PartnerThreatProtectionConfig>
  FirewallRuleType& WithPartnerThreatProtection(PartnerThreatProtectionT&& value) {
    SetPartnerThreatProtection(std::forward<PartnerThreatProtectionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configures the rule to match an AWS-managed content category (for example,
   * <code>VIOLENCE_AND_HATE_SPEECH</code>). See
   * <a>FirewallAdvancedContentCategoryConfig</a>.</p>
   */
  inline const FirewallAdvancedContentCategoryConfig& GetFirewallAdvancedContentCategory() const {
    return m_firewallAdvancedContentCategory;
  }
  inline bool FirewallAdvancedContentCategoryHasBeenSet() const { return m_firewallAdvancedContentCategoryHasBeenSet; }
  template <typename FirewallAdvancedContentCategoryT = FirewallAdvancedContentCategoryConfig>
  void SetFirewallAdvancedContentCategory(FirewallAdvancedContentCategoryT&& value) {
    m_firewallAdvancedContentCategoryHasBeenSet = true;
    m_firewallAdvancedContentCategory = std::forward<FirewallAdvancedContentCategoryT>(value);
  }
  template <typename FirewallAdvancedContentCategoryT = FirewallAdvancedContentCategoryConfig>
  FirewallRuleType& WithFirewallAdvancedContentCategory(FirewallAdvancedContentCategoryT&& value) {
    SetFirewallAdvancedContentCategory(std::forward<FirewallAdvancedContentCategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configures the rule to match an AWS-managed advanced threat category (for
   * example, <code>PHISHING</code>). See
   * <a>FirewallAdvancedThreatCategoryConfig</a>.</p>
   */
  inline const FirewallAdvancedThreatCategoryConfig& GetFirewallAdvancedThreatCategory() const { return m_firewallAdvancedThreatCategory; }
  inline bool FirewallAdvancedThreatCategoryHasBeenSet() const { return m_firewallAdvancedThreatCategoryHasBeenSet; }
  template <typename FirewallAdvancedThreatCategoryT = FirewallAdvancedThreatCategoryConfig>
  void SetFirewallAdvancedThreatCategory(FirewallAdvancedThreatCategoryT&& value) {
    m_firewallAdvancedThreatCategoryHasBeenSet = true;
    m_firewallAdvancedThreatCategory = std::forward<FirewallAdvancedThreatCategoryT>(value);
  }
  template <typename FirewallAdvancedThreatCategoryT = FirewallAdvancedThreatCategoryConfig>
  FirewallRuleType& WithFirewallAdvancedThreatCategory(FirewallAdvancedThreatCategoryT&& value) {
    SetFirewallAdvancedThreatCategory(std::forward<FirewallAdvancedThreatCategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configures the rule to match a built-in DNS Firewall Advanced threat detector
   * — <code>DGA</code>, <code>DNS_TUNNELING</code>, or <code>DICTIONARY_DGA</code>.
   * See <a>DnsThreatProtectionRuleTypeConfig</a>.</p>
   */
  inline const DnsThreatProtectionRuleTypeConfig& GetDnsThreatProtection() const { return m_dnsThreatProtection; }
  inline bool DnsThreatProtectionHasBeenSet() const { return m_dnsThreatProtectionHasBeenSet; }
  template <typename DnsThreatProtectionT = DnsThreatProtectionRuleTypeConfig>
  void SetDnsThreatProtection(DnsThreatProtectionT&& value) {
    m_dnsThreatProtectionHasBeenSet = true;
    m_dnsThreatProtection = std::forward<DnsThreatProtectionT>(value);
  }
  template <typename DnsThreatProtectionT = DnsThreatProtectionRuleTypeConfig>
  FirewallRuleType& WithDnsThreatProtection(DnsThreatProtectionT&& value) {
    SetDnsThreatProtection(std::forward<DnsThreatProtectionT>(value));
    return *this;
  }
  ///@}
 private:
  PartnerThreatProtectionConfig m_partnerThreatProtection;

  FirewallAdvancedContentCategoryConfig m_firewallAdvancedContentCategory;

  FirewallAdvancedThreatCategoryConfig m_firewallAdvancedThreatCategory;

  DnsThreatProtectionRuleTypeConfig m_dnsThreatProtection;
  bool m_partnerThreatProtectionHasBeenSet = false;
  bool m_firewallAdvancedContentCategoryHasBeenSet = false;
  bool m_firewallAdvancedThreatCategoryHasBeenSet = false;
  bool m_dnsThreatProtectionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
