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
class GetManagedFirewallDomainListRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API GetManagedFirewallDomainListRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetManagedFirewallDomainList"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>ID of the Managed Domain List.</p>
   */
  inline const Aws::String& GetManagedFirewallDomainListId() const { return m_managedFirewallDomainListId; }
  inline bool ManagedFirewallDomainListIdHasBeenSet() const { return m_managedFirewallDomainListIdHasBeenSet; }
  template <typename ManagedFirewallDomainListIdT = Aws::String>
  void SetManagedFirewallDomainListId(ManagedFirewallDomainListIdT&& value) {
    m_managedFirewallDomainListIdHasBeenSet = true;
    m_managedFirewallDomainListId = std::forward<ManagedFirewallDomainListIdT>(value);
  }
  template <typename ManagedFirewallDomainListIdT = Aws::String>
  GetManagedFirewallDomainListRequest& WithManagedFirewallDomainListId(ManagedFirewallDomainListIdT&& value) {
    SetManagedFirewallDomainListId(std::forward<ManagedFirewallDomainListIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_managedFirewallDomainListId;
  bool m_managedFirewallDomainListIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
