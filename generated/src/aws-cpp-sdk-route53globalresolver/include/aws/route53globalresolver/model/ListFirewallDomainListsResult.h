/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/FirewallDomainListsItem.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Route53GlobalResolver {
namespace Model {
class ListFirewallDomainListsResult {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API ListFirewallDomainListsResult() = default;
  AWS_ROUTE53GLOBALRESOLVER_API ListFirewallDomainListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53GLOBALRESOLVER_API ListFirewallDomainListsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A pagination token used for large sets of results that can't be returned in a
   * single response. Provide this token in the next call to get the results not
   * returned in this call.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListFirewallDomainListsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of the DNS Firewall domain lists.</p>
   */
  inline const Aws::Vector<FirewallDomainListsItem>& GetFirewallDomainLists() const { return m_firewallDomainLists; }
  template <typename FirewallDomainListsT = Aws::Vector<FirewallDomainListsItem>>
  void SetFirewallDomainLists(FirewallDomainListsT&& value) {
    m_firewallDomainListsHasBeenSet = true;
    m_firewallDomainLists = std::forward<FirewallDomainListsT>(value);
  }
  template <typename FirewallDomainListsT = Aws::Vector<FirewallDomainListsItem>>
  ListFirewallDomainListsResult& WithFirewallDomainLists(FirewallDomainListsT&& value) {
    SetFirewallDomainLists(std::forward<FirewallDomainListsT>(value));
    return *this;
  }
  template <typename FirewallDomainListsT = FirewallDomainListsItem>
  ListFirewallDomainListsResult& AddFirewallDomainLists(FirewallDomainListsT&& value) {
    m_firewallDomainListsHasBeenSet = true;
    m_firewallDomainLists.emplace_back(std::forward<FirewallDomainListsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListFirewallDomainListsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::Vector<FirewallDomainListsItem> m_firewallDomainLists;
  bool m_firewallDomainListsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
