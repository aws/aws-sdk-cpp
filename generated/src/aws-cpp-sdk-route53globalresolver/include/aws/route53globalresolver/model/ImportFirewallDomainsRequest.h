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
class ImportFirewallDomainsRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API ImportFirewallDomainsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ImportFirewallDomains"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The fully qualified URL of the file in Amazon S3 that contains the list of
   * domains to import. The file should contain one domain per line.</p>
   */
  inline const Aws::String& GetDomainFileUrl() const { return m_domainFileUrl; }
  inline bool DomainFileUrlHasBeenSet() const { return m_domainFileUrlHasBeenSet; }
  template <typename DomainFileUrlT = Aws::String>
  void SetDomainFileUrl(DomainFileUrlT&& value) {
    m_domainFileUrlHasBeenSet = true;
    m_domainFileUrl = std::forward<DomainFileUrlT>(value);
  }
  template <typename DomainFileUrlT = Aws::String>
  ImportFirewallDomainsRequest& WithDomainFileUrl(DomainFileUrlT&& value) {
    SetDomainFileUrl(std::forward<DomainFileUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ID of the DNS Firewall domain list that you want to import the domain list
   * to.</p>
   */
  inline const Aws::String& GetFirewallDomainListId() const { return m_firewallDomainListId; }
  inline bool FirewallDomainListIdHasBeenSet() const { return m_firewallDomainListIdHasBeenSet; }
  template <typename FirewallDomainListIdT = Aws::String>
  void SetFirewallDomainListId(FirewallDomainListIdT&& value) {
    m_firewallDomainListIdHasBeenSet = true;
    m_firewallDomainListId = std::forward<FirewallDomainListIdT>(value);
  }
  template <typename FirewallDomainListIdT = Aws::String>
  ImportFirewallDomainsRequest& WithFirewallDomainListId(FirewallDomainListIdT&& value) {
    SetFirewallDomainListId(std::forward<FirewallDomainListIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This value is <code>REPLACE</code>, and it updates the domain list to match
   * the list of domains in the imported file.</p>
   */
  inline const Aws::String& GetOperation() const { return m_operation; }
  inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
  template <typename OperationT = Aws::String>
  void SetOperation(OperationT&& value) {
    m_operationHasBeenSet = true;
    m_operation = std::forward<OperationT>(value);
  }
  template <typename OperationT = Aws::String>
  ImportFirewallDomainsRequest& WithOperation(OperationT&& value) {
    SetOperation(std::forward<OperationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainFileUrl;
  bool m_domainFileUrlHasBeenSet = false;

  Aws::String m_firewallDomainListId;
  bool m_firewallDomainListIdHasBeenSet = false;

  Aws::String m_operation;
  bool m_operationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
