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
namespace Http {
class URI;
}  // namespace Http
namespace Route53GlobalResolver {
namespace Model {

/**
 */
class ListManagedFirewallDomainListsRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API ListManagedFirewallDomainListsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListManagedFirewallDomainLists"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  AWS_ROUTE53GLOBALRESOLVER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The maximum number of results to retrieve in a single call.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListManagedFirewallDomainListsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token used for large sets of results that can't be returned in a
   * single response.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListManagedFirewallDomainListsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The category of the Manage DNS list either <code>THREAT</code> or
   * <code>CONTENT</code>.</p>
   */
  inline const Aws::String& GetManagedFirewallDomainListType() const { return m_managedFirewallDomainListType; }
  inline bool ManagedFirewallDomainListTypeHasBeenSet() const { return m_managedFirewallDomainListTypeHasBeenSet; }
  template <typename ManagedFirewallDomainListTypeT = Aws::String>
  void SetManagedFirewallDomainListType(ManagedFirewallDomainListTypeT&& value) {
    m_managedFirewallDomainListTypeHasBeenSet = true;
    m_managedFirewallDomainListType = std::forward<ManagedFirewallDomainListTypeT>(value);
  }
  template <typename ManagedFirewallDomainListTypeT = Aws::String>
  ListManagedFirewallDomainListsRequest& WithManagedFirewallDomainListType(ManagedFirewallDomainListTypeT&& value) {
    SetManagedFirewallDomainListType(std::forward<ManagedFirewallDomainListTypeT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_managedFirewallDomainListType;
  bool m_managedFirewallDomainListTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
