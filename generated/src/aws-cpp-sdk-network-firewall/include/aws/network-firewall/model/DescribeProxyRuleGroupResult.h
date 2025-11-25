/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ProxyRuleGroup.h>

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
class DescribeProxyRuleGroupResult {
 public:
  AWS_NETWORKFIREWALL_API DescribeProxyRuleGroupResult() = default;
  AWS_NETWORKFIREWALL_API DescribeProxyRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKFIREWALL_API DescribeProxyRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The configuration for the specified proxy rule group. </p>
   */
  inline const ProxyRuleGroup& GetProxyRuleGroup() const { return m_proxyRuleGroup; }
  template <typename ProxyRuleGroupT = ProxyRuleGroup>
  void SetProxyRuleGroup(ProxyRuleGroupT&& value) {
    m_proxyRuleGroupHasBeenSet = true;
    m_proxyRuleGroup = std::forward<ProxyRuleGroupT>(value);
  }
  template <typename ProxyRuleGroupT = ProxyRuleGroup>
  DescribeProxyRuleGroupResult& WithProxyRuleGroup(ProxyRuleGroupT&& value) {
    SetProxyRuleGroup(std::forward<ProxyRuleGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token used for optimistic locking. Network Firewall returns a token to your
   * requests that access the proxy rule group. The token marks the state of the
   * proxy rule group resource at the time of the request. </p> <p>To make changes to
   * the proxy rule group, you provide the token in your request. Network Firewall
   * uses the token to ensure that the proxy rule group hasn't changed since you last
   * retrieved it. If it has changed, the operation fails with an
   * <code>InvalidTokenException</code>. If this happens, retrieve the proxy rule
   * group again to get a current copy of it with a current token. Reapply your
   * changes as needed, then try the operation again using the new token. </p>
   */
  inline const Aws::String& GetUpdateToken() const { return m_updateToken; }
  template <typename UpdateTokenT = Aws::String>
  void SetUpdateToken(UpdateTokenT&& value) {
    m_updateTokenHasBeenSet = true;
    m_updateToken = std::forward<UpdateTokenT>(value);
  }
  template <typename UpdateTokenT = Aws::String>
  DescribeProxyRuleGroupResult& WithUpdateToken(UpdateTokenT&& value) {
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
  DescribeProxyRuleGroupResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  ProxyRuleGroup m_proxyRuleGroup;
  bool m_proxyRuleGroupHasBeenSet = false;

  Aws::String m_updateToken;
  bool m_updateTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
