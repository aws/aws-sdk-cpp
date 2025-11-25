/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

#include <utility>

namespace Aws {
namespace NetworkFirewall {
namespace Model {

/**
 */
class DescribeProxyRequest : public NetworkFirewallRequest {
 public:
  AWS_NETWORKFIREWALL_API DescribeProxyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeProxy"; }

  AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

  AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The descriptive name of the proxy. You can't change the name of a proxy after
   * you create it.</p> <p>You must specify the ARN or the name, and you can specify
   * both. </p>
   */
  inline const Aws::String& GetProxyName() const { return m_proxyName; }
  inline bool ProxyNameHasBeenSet() const { return m_proxyNameHasBeenSet; }
  template <typename ProxyNameT = Aws::String>
  void SetProxyName(ProxyNameT&& value) {
    m_proxyNameHasBeenSet = true;
    m_proxyName = std::forward<ProxyNameT>(value);
  }
  template <typename ProxyNameT = Aws::String>
  DescribeProxyRequest& WithProxyName(ProxyNameT&& value) {
    SetProxyName(std::forward<ProxyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of a proxy.</p> <p>You must specify the ARN or
   * the name, and you can specify both. </p>
   */
  inline const Aws::String& GetProxyArn() const { return m_proxyArn; }
  inline bool ProxyArnHasBeenSet() const { return m_proxyArnHasBeenSet; }
  template <typename ProxyArnT = Aws::String>
  void SetProxyArn(ProxyArnT&& value) {
    m_proxyArnHasBeenSet = true;
    m_proxyArn = std::forward<ProxyArnT>(value);
  }
  template <typename ProxyArnT = Aws::String>
  DescribeProxyRequest& WithProxyArn(ProxyArnT&& value) {
    SetProxyArn(std::forward<ProxyArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyName;
  bool m_proxyNameHasBeenSet = false;

  Aws::String m_proxyArn;
  bool m_proxyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
