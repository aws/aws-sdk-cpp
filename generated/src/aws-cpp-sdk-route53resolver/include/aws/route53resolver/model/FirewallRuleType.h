/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/DnsThreatProtectionRuleTypeConfig.h>
#include <aws/route53resolver/model/FirewallAdvancedContentCategoryConfig.h>
#include <aws/route53resolver/model/FirewallAdvancedThreatCategoryConfig.h>

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
 * <p>The configuration for a rule type in a DNS Firewall rule. This is a union
 * type — exactly one member should be set.</p><p><h3>See Also:</h3>   <a
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
   * <p>The configuration for a content category-based filtering rule.</p>
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
   * <p>The configuration for a threat category-based filtering rule.</p>
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
   * <p>The configuration for a DNS threat protection rule type, such as DGA or DNS
   * tunneling detection.</p>
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
  FirewallAdvancedContentCategoryConfig m_firewallAdvancedContentCategory;

  FirewallAdvancedThreatCategoryConfig m_firewallAdvancedThreatCategory;

  DnsThreatProtectionRuleTypeConfig m_dnsThreatProtection;
  bool m_firewallAdvancedContentCategoryHasBeenSet = false;
  bool m_firewallAdvancedThreatCategoryHasBeenSet = false;
  bool m_dnsThreatProtectionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
