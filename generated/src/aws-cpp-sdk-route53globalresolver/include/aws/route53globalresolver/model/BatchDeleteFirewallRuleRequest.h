/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53globalresolver/Route53GlobalResolverRequest.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/BatchDeleteFirewallRuleInputItem.h>

#include <utility>

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

/**
 */
class BatchDeleteFirewallRuleRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API BatchDeleteFirewallRuleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteFirewallRule"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>An array of the DNS Firewall IDs to be deleted.</p>
   */
  inline const Aws::Vector<BatchDeleteFirewallRuleInputItem>& GetFirewallRules() const { return m_firewallRules; }
  inline bool FirewallRulesHasBeenSet() const { return m_firewallRulesHasBeenSet; }
  template <typename FirewallRulesT = Aws::Vector<BatchDeleteFirewallRuleInputItem>>
  void SetFirewallRules(FirewallRulesT&& value) {
    m_firewallRulesHasBeenSet = true;
    m_firewallRules = std::forward<FirewallRulesT>(value);
  }
  template <typename FirewallRulesT = Aws::Vector<BatchDeleteFirewallRuleInputItem>>
  BatchDeleteFirewallRuleRequest& WithFirewallRules(FirewallRulesT&& value) {
    SetFirewallRules(std::forward<FirewallRulesT>(value));
    return *this;
  }
  template <typename FirewallRulesT = BatchDeleteFirewallRuleInputItem>
  BatchDeleteFirewallRuleRequest& AddFirewallRules(FirewallRulesT&& value) {
    m_firewallRulesHasBeenSet = true;
    m_firewallRules.emplace_back(std::forward<FirewallRulesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<BatchDeleteFirewallRuleInputItem> m_firewallRules;
  bool m_firewallRulesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
