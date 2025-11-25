/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ProxyRuleGroupPriorityResult.h>

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
class UpdateProxyRuleGroupPrioritiesResult {
 public:
  AWS_NETWORKFIREWALL_API UpdateProxyRuleGroupPrioritiesResult() = default;
  AWS_NETWORKFIREWALL_API UpdateProxyRuleGroupPrioritiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKFIREWALL_API UpdateProxyRuleGroupPrioritiesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The updated proxy rule group hierarchy that reflects the updates from the
   * request.</p>
   */
  inline const Aws::Vector<ProxyRuleGroupPriorityResult>& GetProxyRuleGroups() const { return m_proxyRuleGroups; }
  template <typename ProxyRuleGroupsT = Aws::Vector<ProxyRuleGroupPriorityResult>>
  void SetProxyRuleGroups(ProxyRuleGroupsT&& value) {
    m_proxyRuleGroupsHasBeenSet = true;
    m_proxyRuleGroups = std::forward<ProxyRuleGroupsT>(value);
  }
  template <typename ProxyRuleGroupsT = Aws::Vector<ProxyRuleGroupPriorityResult>>
  UpdateProxyRuleGroupPrioritiesResult& WithProxyRuleGroups(ProxyRuleGroupsT&& value) {
    SetProxyRuleGroups(std::forward<ProxyRuleGroupsT>(value));
    return *this;
  }
  template <typename ProxyRuleGroupsT = ProxyRuleGroupPriorityResult>
  UpdateProxyRuleGroupPrioritiesResult& AddProxyRuleGroups(ProxyRuleGroupsT&& value) {
    m_proxyRuleGroupsHasBeenSet = true;
    m_proxyRuleGroups.emplace_back(std::forward<ProxyRuleGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token used for optimistic locking. Network Firewall returns a token to your
   * requests that access the proxy configuration. The token marks the state of the
   * proxy configuration resource at the time of the request. </p> <p>To make changes
   * to the proxy configuration, you provide the token in your request. Network
   * Firewall uses the token to ensure that the proxy configuration hasn't changed
   * since you last retrieved it. If it has changed, the operation fails with an
   * <code>InvalidTokenException</code>. If this happens, retrieve the proxy
   * configuration again to get a current copy of it with a current token. Reapply
   * your changes as needed, then try the operation again using the new token. </p>
   */
  inline const Aws::String& GetUpdateToken() const { return m_updateToken; }
  template <typename UpdateTokenT = Aws::String>
  void SetUpdateToken(UpdateTokenT&& value) {
    m_updateTokenHasBeenSet = true;
    m_updateToken = std::forward<UpdateTokenT>(value);
  }
  template <typename UpdateTokenT = Aws::String>
  UpdateProxyRuleGroupPrioritiesResult& WithUpdateToken(UpdateTokenT&& value) {
    SetUpdateToken(std::forward<UpdateTokenT>(value));
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
  UpdateProxyRuleGroupPrioritiesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ProxyRuleGroupPriorityResult> m_proxyRuleGroups;
  bool m_proxyRuleGroupsHasBeenSet = false;

  Aws::String m_updateToken;
  bool m_updateTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
