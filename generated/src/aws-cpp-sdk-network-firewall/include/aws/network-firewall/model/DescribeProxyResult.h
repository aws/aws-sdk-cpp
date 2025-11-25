/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/DescribeProxyResource.h>

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
class DescribeProxyResult {
 public:
  AWS_NETWORKFIREWALL_API DescribeProxyResult() = default;
  AWS_NETWORKFIREWALL_API DescribeProxyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKFIREWALL_API DescribeProxyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Proxy attached to a NAT gateway. </p>
   */
  inline const DescribeProxyResource& GetProxy() const { return m_proxy; }
  template <typename ProxyT = DescribeProxyResource>
  void SetProxy(ProxyT&& value) {
    m_proxyHasBeenSet = true;
    m_proxy = std::forward<ProxyT>(value);
  }
  template <typename ProxyT = DescribeProxyResource>
  DescribeProxyResult& WithProxy(ProxyT&& value) {
    SetProxy(std::forward<ProxyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token used for optimistic locking. Network Firewall returns a token to your
   * requests that access the proxy. The token marks the state of the proxy resource
   * at the time of the request. </p> <p>To make changes to the proxy, you provide
   * the token in your request. Network Firewall uses the token to ensure that the
   * proxy hasn't changed since you last retrieved it. If it has changed, the
   * operation fails with an <code>InvalidTokenException</code>. If this happens,
   * retrieve the proxy again to get a current copy of it with a current token.
   * Reapply your changes as needed, then try the operation again using the new
   * token. </p>
   */
  inline const Aws::String& GetUpdateToken() const { return m_updateToken; }
  template <typename UpdateTokenT = Aws::String>
  void SetUpdateToken(UpdateTokenT&& value) {
    m_updateTokenHasBeenSet = true;
    m_updateToken = std::forward<UpdateTokenT>(value);
  }
  template <typename UpdateTokenT = Aws::String>
  DescribeProxyResult& WithUpdateToken(UpdateTokenT&& value) {
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
  DescribeProxyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  DescribeProxyResource m_proxy;
  bool m_proxyHasBeenSet = false;

  Aws::String m_updateToken;
  bool m_updateTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
