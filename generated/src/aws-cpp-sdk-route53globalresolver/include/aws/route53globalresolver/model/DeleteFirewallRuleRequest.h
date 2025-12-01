/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53globalresolver/Route53GlobalResolverRequest.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

/**
 */
class DeleteFirewallRuleRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API DeleteFirewallRuleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteFirewallRule"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the firewall rule to delete.</p>
   */
  inline const Aws::String& GetFirewallRuleId() const { return m_firewallRuleId; }
  inline bool FirewallRuleIdHasBeenSet() const { return m_firewallRuleIdHasBeenSet; }
  template <typename FirewallRuleIdT = Aws::String>
  void SetFirewallRuleId(FirewallRuleIdT&& value) {
    m_firewallRuleIdHasBeenSet = true;
    m_firewallRuleId = std::forward<FirewallRuleIdT>(value);
  }
  template <typename FirewallRuleIdT = Aws::String>
  DeleteFirewallRuleRequest& WithFirewallRuleId(FirewallRuleIdT&& value) {
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
