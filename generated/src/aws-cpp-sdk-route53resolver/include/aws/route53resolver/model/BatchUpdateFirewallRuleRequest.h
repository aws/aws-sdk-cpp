/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/UpdateFirewallRuleEntry.h>

#include <utility>

namespace Aws {
namespace Route53Resolver {
namespace Model {

/**
 */
class BatchUpdateFirewallRuleRequest : public Route53ResolverRequest {
 public:
  AWS_ROUTE53RESOLVER_API BatchUpdateFirewallRuleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateFirewallRule"; }

  AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

  AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The list of firewall rules to update.</p>
   */
  inline const Aws::Vector<UpdateFirewallRuleEntry>& GetUpdateFirewallRuleEntries() const { return m_updateFirewallRuleEntries; }
  inline bool UpdateFirewallRuleEntriesHasBeenSet() const { return m_updateFirewallRuleEntriesHasBeenSet; }
  template <typename UpdateFirewallRuleEntriesT = Aws::Vector<UpdateFirewallRuleEntry>>
  void SetUpdateFirewallRuleEntries(UpdateFirewallRuleEntriesT&& value) {
    m_updateFirewallRuleEntriesHasBeenSet = true;
    m_updateFirewallRuleEntries = std::forward<UpdateFirewallRuleEntriesT>(value);
  }
  template <typename UpdateFirewallRuleEntriesT = Aws::Vector<UpdateFirewallRuleEntry>>
  BatchUpdateFirewallRuleRequest& WithUpdateFirewallRuleEntries(UpdateFirewallRuleEntriesT&& value) {
    SetUpdateFirewallRuleEntries(std::forward<UpdateFirewallRuleEntriesT>(value));
    return *this;
  }
  template <typename UpdateFirewallRuleEntriesT = UpdateFirewallRuleEntry>
  BatchUpdateFirewallRuleRequest& AddUpdateFirewallRuleEntries(UpdateFirewallRuleEntriesT&& value) {
    m_updateFirewallRuleEntriesHasBeenSet = true;
    m_updateFirewallRuleEntries.emplace_back(std::forward<UpdateFirewallRuleEntriesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<UpdateFirewallRuleEntry> m_updateFirewallRuleEntries;
  bool m_updateFirewallRuleEntriesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
