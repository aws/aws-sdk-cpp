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
class DeleteProxyRulesResult {
 public:
  AWS_NETWORKFIREWALL_API DeleteProxyRulesResult() = default;
  AWS_NETWORKFIREWALL_API DeleteProxyRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKFIREWALL_API DeleteProxyRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The properties that define the proxy rule group with the newly created proxy
   * rule(s). </p>
   */
  inline const ProxyRuleGroup& GetProxyRuleGroup() const { return m_proxyRuleGroup; }
  template <typename ProxyRuleGroupT = ProxyRuleGroup>
  void SetProxyRuleGroup(ProxyRuleGroupT&& value) {
    m_proxyRuleGroupHasBeenSet = true;
    m_proxyRuleGroup = std::forward<ProxyRuleGroupT>(value);
  }
  template <typename ProxyRuleGroupT = ProxyRuleGroup>
  DeleteProxyRulesResult& WithProxyRuleGroup(ProxyRuleGroupT&& value) {
    SetProxyRuleGroup(std::forward<ProxyRuleGroupT>(value));
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
  DeleteProxyRulesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  ProxyRuleGroup m_proxyRuleGroup;
  bool m_proxyRuleGroupHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
