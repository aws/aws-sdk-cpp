/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ProxyConfiguration.h>

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
class UpdateProxyConfigurationResult {
 public:
  AWS_NETWORKFIREWALL_API UpdateProxyConfigurationResult() = default;
  AWS_NETWORKFIREWALL_API UpdateProxyConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKFIREWALL_API UpdateProxyConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The updated proxy configuration resource that reflects the updates from the
   * request.</p>
   */
  inline const ProxyConfiguration& GetProxyConfiguration() const { return m_proxyConfiguration; }
  template <typename ProxyConfigurationT = ProxyConfiguration>
  void SetProxyConfiguration(ProxyConfigurationT&& value) {
    m_proxyConfigurationHasBeenSet = true;
    m_proxyConfiguration = std::forward<ProxyConfigurationT>(value);
  }
  template <typename ProxyConfigurationT = ProxyConfiguration>
  UpdateProxyConfigurationResult& WithProxyConfiguration(ProxyConfigurationT&& value) {
    SetProxyConfiguration(std::forward<ProxyConfigurationT>(value));
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
  UpdateProxyConfigurationResult& WithUpdateToken(UpdateTokenT&& value) {
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
  UpdateProxyConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  ProxyConfiguration m_proxyConfiguration;
  bool m_proxyConfigurationHasBeenSet = false;

  Aws::String m_updateToken;
  bool m_updateTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
