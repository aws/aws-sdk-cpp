/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ProxyRuleGroupMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {
class ListProxyRuleGroupsResult {
 public:
  AWS_NETWORKFIREWALL_API ListProxyRuleGroupsResult() = default;
  AWS_NETWORKFIREWALL_API ListProxyRuleGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKFIREWALL_API ListProxyRuleGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The metadata for the proxy rule groups. Depending on your setting for max
   * results and the number of proxy rule groups that you have, this might not be the
   * full list. </p>
   */
  inline const Aws::Vector<ProxyRuleGroupMetadata>& GetProxyRuleGroups() const { return m_proxyRuleGroups; }
  template <typename ProxyRuleGroupsT = Aws::Vector<ProxyRuleGroupMetadata>>
  void SetProxyRuleGroups(ProxyRuleGroupsT&& value) {
    m_proxyRuleGroupsHasBeenSet = true;
    m_proxyRuleGroups = std::forward<ProxyRuleGroupsT>(value);
  }
  template <typename ProxyRuleGroupsT = Aws::Vector<ProxyRuleGroupMetadata>>
  ListProxyRuleGroupsResult& WithProxyRuleGroups(ProxyRuleGroupsT&& value) {
    SetProxyRuleGroups(std::forward<ProxyRuleGroupsT>(value));
    return *this;
  }
  template <typename ProxyRuleGroupsT = ProxyRuleGroupMetadata>
  ListProxyRuleGroupsResult& AddProxyRuleGroups(ProxyRuleGroupsT&& value) {
    m_proxyRuleGroupsHasBeenSet = true;
    m_proxyRuleGroups.emplace_back(std::forward<ProxyRuleGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
   * the number of objects that are still available for retrieval exceeds the maximum
   * you requested, Network Firewall returns a <code>NextToken</code> value in the
   * response. To retrieve the next batch of objects, use the token returned from the
   * prior request in your next request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListProxyRuleGroupsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListProxyRuleGroupsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ProxyRuleGroupMetadata> m_proxyRuleGroups;
  bool m_proxyRuleGroupsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
