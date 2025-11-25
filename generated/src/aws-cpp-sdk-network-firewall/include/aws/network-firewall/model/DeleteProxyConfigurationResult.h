/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

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
class DeleteProxyConfigurationResult {
 public:
  AWS_NETWORKFIREWALL_API DeleteProxyConfigurationResult() = default;
  AWS_NETWORKFIREWALL_API DeleteProxyConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKFIREWALL_API DeleteProxyConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The descriptive name of the proxy configuration. You can't change the name of
   * a proxy configuration after you create it.</p>
   */
  inline const Aws::String& GetProxyConfigurationName() const { return m_proxyConfigurationName; }
  template <typename ProxyConfigurationNameT = Aws::String>
  void SetProxyConfigurationName(ProxyConfigurationNameT&& value) {
    m_proxyConfigurationNameHasBeenSet = true;
    m_proxyConfigurationName = std::forward<ProxyConfigurationNameT>(value);
  }
  template <typename ProxyConfigurationNameT = Aws::String>
  DeleteProxyConfigurationResult& WithProxyConfigurationName(ProxyConfigurationNameT&& value) {
    SetProxyConfigurationName(std::forward<ProxyConfigurationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of a proxy configuration.</p>
   */
  inline const Aws::String& GetProxyConfigurationArn() const { return m_proxyConfigurationArn; }
  template <typename ProxyConfigurationArnT = Aws::String>
  void SetProxyConfigurationArn(ProxyConfigurationArnT&& value) {
    m_proxyConfigurationArnHasBeenSet = true;
    m_proxyConfigurationArn = std::forward<ProxyConfigurationArnT>(value);
  }
  template <typename ProxyConfigurationArnT = Aws::String>
  DeleteProxyConfigurationResult& WithProxyConfigurationArn(ProxyConfigurationArnT&& value) {
    SetProxyConfigurationArn(std::forward<ProxyConfigurationArnT>(value));
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
  DeleteProxyConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyConfigurationName;
  bool m_proxyConfigurationNameHasBeenSet = false;

  Aws::String m_proxyConfigurationArn;
  bool m_proxyConfigurationArnHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
