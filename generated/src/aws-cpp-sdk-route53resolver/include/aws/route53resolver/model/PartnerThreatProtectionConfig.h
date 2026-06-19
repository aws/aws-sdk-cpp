/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>

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
 * <p>The configuration for a partner threat-protection rule. To enumerate the
 * partners available in your account, call <a>ListFirewallRuleTypes</a> with
 * <code>RuleType</code> set to <code>PartnerThreatProtection</code> — each
 * returned <a>FirewallRuleTypeDefinition</a> includes a <a>SubscriptionInfo</a>
 * identifying the AWS Marketplace product that backs it.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PartnerThreatProtectionConfig">AWS
 * API Reference</a></p>
 */
class PartnerThreatProtectionConfig {
 public:
  AWS_ROUTE53RESOLVER_API PartnerThreatProtectionConfig() = default;
  AWS_ROUTE53RESOLVER_API PartnerThreatProtectionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API PartnerThreatProtectionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the partner threat-protection product, exactly as returned
   * in the <code>Value</code> field of a <a>FirewallRuleTypeDefinition</a> with
   * <code>RuleType</code> set to <code>PartnerThreatProtection</code>. The calling
   * account must hold an active AWS Marketplace subscription to this product.</p>
   */
  inline const Aws::String& GetPartner() const { return m_partner; }
  inline bool PartnerHasBeenSet() const { return m_partnerHasBeenSet; }
  template <typename PartnerT = Aws::String>
  void SetPartner(PartnerT&& value) {
    m_partnerHasBeenSet = true;
    m_partner = std::forward<PartnerT>(value);
  }
  template <typename PartnerT = Aws::String>
  PartnerThreatProtectionConfig& WithPartner(PartnerT&& value) {
    SetPartner(std::forward<PartnerT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_partner;
  bool m_partnerHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
