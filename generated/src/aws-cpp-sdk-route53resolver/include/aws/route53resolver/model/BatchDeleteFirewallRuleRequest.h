/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/DeleteFirewallRuleEntry.h>

#include <utility>

namespace Aws {
namespace Route53Resolver {
namespace Model {

/**
 */
class BatchDeleteFirewallRuleRequest : public Route53ResolverRequest {
 public:
  AWS_ROUTE53RESOLVER_API BatchDeleteFirewallRuleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteFirewallRule"; }

  AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

  AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The list of firewall rules to delete.</p>
   */
  inline const Aws::Vector<DeleteFirewallRuleEntry>& GetDeleteFirewallRuleEntries() const { return m_deleteFirewallRuleEntries; }
  inline bool DeleteFirewallRuleEntriesHasBeenSet() const { return m_deleteFirewallRuleEntriesHasBeenSet; }
  template <typename DeleteFirewallRuleEntriesT = Aws::Vector<DeleteFirewallRuleEntry>>
  void SetDeleteFirewallRuleEntries(DeleteFirewallRuleEntriesT&& value) {
    m_deleteFirewallRuleEntriesHasBeenSet = true;
    m_deleteFirewallRuleEntries = std::forward<DeleteFirewallRuleEntriesT>(value);
  }
  template <typename DeleteFirewallRuleEntriesT = Aws::Vector<DeleteFirewallRuleEntry>>
  BatchDeleteFirewallRuleRequest& WithDeleteFirewallRuleEntries(DeleteFirewallRuleEntriesT&& value) {
    SetDeleteFirewallRuleEntries(std::forward<DeleteFirewallRuleEntriesT>(value));
    return *this;
  }
  template <typename DeleteFirewallRuleEntriesT = DeleteFirewallRuleEntry>
  BatchDeleteFirewallRuleRequest& AddDeleteFirewallRuleEntries(DeleteFirewallRuleEntriesT&& value) {
    m_deleteFirewallRuleEntriesHasBeenSet = true;
    m_deleteFirewallRuleEntries.emplace_back(std::forward<DeleteFirewallRuleEntriesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<DeleteFirewallRuleEntry> m_deleteFirewallRuleEntries;
  bool m_deleteFirewallRuleEntriesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
