/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53globalresolver/Route53GlobalResolverRequest.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

/**
 */
class UpdateFirewallDomainsRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API UpdateFirewallDomainsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateFirewallDomains"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A list of the domains. You can add up to 1000 domains per request.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDomains() const { return m_domains; }
  inline bool DomainsHasBeenSet() const { return m_domainsHasBeenSet; }
  template <typename DomainsT = Aws::Vector<Aws::String>>
  void SetDomains(DomainsT&& value) {
    m_domainsHasBeenSet = true;
    m_domains = std::forward<DomainsT>(value);
  }
  template <typename DomainsT = Aws::Vector<Aws::String>>
  UpdateFirewallDomainsRequest& WithDomains(DomainsT&& value) {
    SetDomains(std::forward<DomainsT>(value));
    return *this;
  }
  template <typename DomainsT = Aws::String>
  UpdateFirewallDomainsRequest& AddDomains(DomainsT&& value) {
    m_domainsHasBeenSet = true;
    m_domains.emplace_back(std::forward<DomainsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the DNS Firewall domain list to which you want to add the
   * domains.</p>
   */
  inline const Aws::String& GetFirewallDomainListId() const { return m_firewallDomainListId; }
  inline bool FirewallDomainListIdHasBeenSet() const { return m_firewallDomainListIdHasBeenSet; }
  template <typename FirewallDomainListIdT = Aws::String>
  void SetFirewallDomainListId(FirewallDomainListIdT&& value) {
    m_firewallDomainListIdHasBeenSet = true;
    m_firewallDomainListId = std::forward<FirewallDomainListIdT>(value);
  }
  template <typename FirewallDomainListIdT = Aws::String>
  UpdateFirewallDomainsRequest& WithFirewallDomainListId(FirewallDomainListIdT&& value) {
    SetFirewallDomainListId(std::forward<FirewallDomainListIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operation for updating the domain list. The allowed values are ADD,
   * REMOVE, and REPLACE.</p>
   */
  inline const Aws::String& GetOperation() const { return m_operation; }
  inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
  template <typename OperationT = Aws::String>
  void SetOperation(OperationT&& value) {
    m_operationHasBeenSet = true;
    m_operation = std::forward<OperationT>(value);
  }
  template <typename OperationT = Aws::String>
  UpdateFirewallDomainsRequest& WithOperation(OperationT&& value) {
    SetOperation(std::forward<OperationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_domains;

  Aws::String m_firewallDomainListId;

  Aws::String m_operation;
  bool m_domainsHasBeenSet = false;
  bool m_firewallDomainListIdHasBeenSet = false;
  bool m_operationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
