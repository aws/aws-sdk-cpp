/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ProxyRule.h>
#include <aws/network-firewall/model/ProxyRuleCondition.h>

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
class UpdateProxyRuleResult {
 public:
  AWS_NETWORKFIREWALL_API UpdateProxyRuleResult() = default;
  AWS_NETWORKFIREWALL_API UpdateProxyRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKFIREWALL_API UpdateProxyRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The updated proxy rule resource that reflects the updates from the
   * request.</p>
   */
  inline const ProxyRule& GetProxyRule() const { return m_proxyRule; }
  template <typename ProxyRuleT = ProxyRule>
  void SetProxyRule(ProxyRuleT&& value) {
    m_proxyRuleHasBeenSet = true;
    m_proxyRule = std::forward<ProxyRuleT>(value);
  }
  template <typename ProxyRuleT = ProxyRule>
  UpdateProxyRuleResult& WithProxyRule(ProxyRuleT&& value) {
    SetProxyRule(std::forward<ProxyRuleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Proxy rule conditions removed from the rule. </p>
   */
  inline const Aws::Vector<ProxyRuleCondition>& GetRemovedConditions() const { return m_removedConditions; }
  template <typename RemovedConditionsT = Aws::Vector<ProxyRuleCondition>>
  void SetRemovedConditions(RemovedConditionsT&& value) {
    m_removedConditionsHasBeenSet = true;
    m_removedConditions = std::forward<RemovedConditionsT>(value);
  }
  template <typename RemovedConditionsT = Aws::Vector<ProxyRuleCondition>>
  UpdateProxyRuleResult& WithRemovedConditions(RemovedConditionsT&& value) {
    SetRemovedConditions(std::forward<RemovedConditionsT>(value));
    return *this;
  }
  template <typename RemovedConditionsT = ProxyRuleCondition>
  UpdateProxyRuleResult& AddRemovedConditions(RemovedConditionsT&& value) {
    m_removedConditionsHasBeenSet = true;
    m_removedConditions.emplace_back(std::forward<RemovedConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token used for optimistic locking. Network Firewall returns a token to your
   * requests that access the proxy rule. The token marks the state of the proxy rule
   * resource at the time of the request. </p> <p>To make changes to the proxy rule,
   * you provide the token in your request. Network Firewall uses the token to ensure
   * that the proxy rule hasn't changed since you last retrieved it. If it has
   * changed, the operation fails with an <code>InvalidTokenException</code>. If this
   * happens, retrieve the proxy rule again to get a current copy of it with a
   * current token. Reapply your changes as needed, then try the operation again
   * using the new token. </p>
   */
  inline const Aws::String& GetUpdateToken() const { return m_updateToken; }
  template <typename UpdateTokenT = Aws::String>
  void SetUpdateToken(UpdateTokenT&& value) {
    m_updateTokenHasBeenSet = true;
    m_updateToken = std::forward<UpdateTokenT>(value);
  }
  template <typename UpdateTokenT = Aws::String>
  UpdateProxyRuleResult& WithUpdateToken(UpdateTokenT&& value) {
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
  UpdateProxyRuleResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  ProxyRule m_proxyRule;

  Aws::Vector<ProxyRuleCondition> m_removedConditions;

  Aws::String m_updateToken;

  Aws::String m_requestId;
  bool m_proxyRuleHasBeenSet = false;
  bool m_removedConditionsHasBeenSet = false;
  bool m_updateTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
