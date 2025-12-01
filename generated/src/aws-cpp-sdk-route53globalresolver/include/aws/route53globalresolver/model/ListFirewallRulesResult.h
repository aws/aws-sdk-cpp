/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/FirewallRulesItem.h>

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
class ListFirewallRulesResult {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API ListFirewallRulesResult() = default;
  AWS_ROUTE53GLOBALRESOLVER_API ListFirewallRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53GLOBALRESOLVER_API ListFirewallRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  ListFirewallRulesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of the firewall rules and information about them.</p>
   */
  inline const Aws::Vector<FirewallRulesItem>& GetFirewallRules() const { return m_firewallRules; }
  template <typename FirewallRulesT = Aws::Vector<FirewallRulesItem>>
  void SetFirewallRules(FirewallRulesT&& value) {
    m_firewallRulesHasBeenSet = true;
    m_firewallRules = std::forward<FirewallRulesT>(value);
  }
  template <typename FirewallRulesT = Aws::Vector<FirewallRulesItem>>
  ListFirewallRulesResult& WithFirewallRules(FirewallRulesT&& value) {
    SetFirewallRules(std::forward<FirewallRulesT>(value));
    return *this;
  }
  template <typename FirewallRulesT = FirewallRulesItem>
  ListFirewallRulesResult& AddFirewallRules(FirewallRulesT&& value) {
    m_firewallRulesHasBeenSet = true;
    m_firewallRules.emplace_back(std::forward<FirewallRulesT>(value));
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
  ListFirewallRulesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::Vector<FirewallRulesItem> m_firewallRules;
  bool m_firewallRulesHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
