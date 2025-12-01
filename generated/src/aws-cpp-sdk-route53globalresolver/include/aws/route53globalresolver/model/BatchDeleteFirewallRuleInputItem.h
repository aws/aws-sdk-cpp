/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Route53GlobalResolver {
namespace Model {

/**
 * <p>Information about a DNS Firewall rule to delete in a batch
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/BatchDeleteFirewallRuleInputItem">AWS
 * API Reference</a></p>
 */
class BatchDeleteFirewallRuleInputItem {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API BatchDeleteFirewallRuleInputItem() = default;
  AWS_ROUTE53GLOBALRESOLVER_API BatchDeleteFirewallRuleInputItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53GLOBALRESOLVER_API BatchDeleteFirewallRuleInputItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53GLOBALRESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the DNS Firewall rule to delete.</p>
   */
  inline const Aws::String& GetFirewallRuleId() const { return m_firewallRuleId; }
  inline bool FirewallRuleIdHasBeenSet() const { return m_firewallRuleIdHasBeenSet; }
  template <typename FirewallRuleIdT = Aws::String>
  void SetFirewallRuleId(FirewallRuleIdT&& value) {
    m_firewallRuleIdHasBeenSet = true;
    m_firewallRuleId = std::forward<FirewallRuleIdT>(value);
  }
  template <typename FirewallRuleIdT = Aws::String>
  BatchDeleteFirewallRuleInputItem& WithFirewallRuleId(FirewallRuleIdT&& value) {
    SetFirewallRuleId(std::forward<FirewallRuleIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_firewallRuleId;
  bool m_firewallRuleIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
