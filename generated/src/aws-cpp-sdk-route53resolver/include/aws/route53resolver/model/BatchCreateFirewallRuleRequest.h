/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/CreateFirewallRuleEntry.h>

#include <utility>

namespace Aws {
namespace Route53Resolver {
namespace Model {

/**
 */
class BatchCreateFirewallRuleRequest : public Route53ResolverRequest {
 public:
  AWS_ROUTE53RESOLVER_API BatchCreateFirewallRuleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchCreateFirewallRule"; }

  AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

  AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The list of firewall rules to create.</p>
   */
  inline const Aws::Vector<CreateFirewallRuleEntry>& GetCreateFirewallRuleEntries() const { return m_createFirewallRuleEntries; }
  inline bool CreateFirewallRuleEntriesHasBeenSet() const { return m_createFirewallRuleEntriesHasBeenSet; }
  template <typename CreateFirewallRuleEntriesT = Aws::Vector<CreateFirewallRuleEntry>>
  void SetCreateFirewallRuleEntries(CreateFirewallRuleEntriesT&& value) {
    m_createFirewallRuleEntriesHasBeenSet = true;
    m_createFirewallRuleEntries = std::forward<CreateFirewallRuleEntriesT>(value);
  }
  template <typename CreateFirewallRuleEntriesT = Aws::Vector<CreateFirewallRuleEntry>>
  BatchCreateFirewallRuleRequest& WithCreateFirewallRuleEntries(CreateFirewallRuleEntriesT&& value) {
    SetCreateFirewallRuleEntries(std::forward<CreateFirewallRuleEntriesT>(value));
    return *this;
  }
  template <typename CreateFirewallRuleEntriesT = CreateFirewallRuleEntry>
  BatchCreateFirewallRuleRequest& AddCreateFirewallRuleEntries(CreateFirewallRuleEntriesT&& value) {
    m_createFirewallRuleEntriesHasBeenSet = true;
    m_createFirewallRuleEntries.emplace_back(std::forward<CreateFirewallRuleEntriesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CreateFirewallRuleEntry> m_createFirewallRuleEntries;
  bool m_createFirewallRuleEntriesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
