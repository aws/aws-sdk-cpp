/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53globalresolver/Route53GlobalResolverRequest.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/BatchUpdateFirewallRuleInputItem.h>

#include <utility>

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

/**
 */
class BatchUpdateFirewallRuleRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API BatchUpdateFirewallRuleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateFirewallRule"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The DNS Firewall rule IDs to be updated.</p>
   */
  inline const Aws::Vector<BatchUpdateFirewallRuleInputItem>& GetFirewallRules() const { return m_firewallRules; }
  inline bool FirewallRulesHasBeenSet() const { return m_firewallRulesHasBeenSet; }
  template <typename FirewallRulesT = Aws::Vector<BatchUpdateFirewallRuleInputItem>>
  void SetFirewallRules(FirewallRulesT&& value) {
    m_firewallRulesHasBeenSet = true;
    m_firewallRules = std::forward<FirewallRulesT>(value);
  }
  template <typename FirewallRulesT = Aws::Vector<BatchUpdateFirewallRuleInputItem>>
  BatchUpdateFirewallRuleRequest& WithFirewallRules(FirewallRulesT&& value) {
    SetFirewallRules(std::forward<FirewallRulesT>(value));
    return *this;
  }
  template <typename FirewallRulesT = BatchUpdateFirewallRuleInputItem>
  BatchUpdateFirewallRuleRequest& AddFirewallRules(FirewallRulesT&& value) {
    m_firewallRulesHasBeenSet = true;
    m_firewallRules.emplace_back(std::forward<FirewallRulesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<BatchUpdateFirewallRuleInputItem> m_firewallRules;
  bool m_firewallRulesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
