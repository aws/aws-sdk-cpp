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
class DeleteProxyRequest : public NetworkFirewallRequest {
 public:
  AWS_NETWORKFIREWALL_API DeleteProxyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteProxy"; }

  AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

  AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The NAT Gateway the proxy is attached to. </p>
   */
  inline const Aws::String& GetNatGatewayId() const { return m_natGatewayId; }
  inline bool NatGatewayIdHasBeenSet() const { return m_natGatewayIdHasBeenSet; }
  template <typename NatGatewayIdT = Aws::String>
  void SetNatGatewayId(NatGatewayIdT&& value) {
    m_natGatewayIdHasBeenSet = true;
    m_natGatewayId = std::forward<NatGatewayIdT>(value);
  }
  template <typename NatGatewayIdT = Aws::String>
  DeleteProxyRequest& WithNatGatewayId(NatGatewayIdT&& value) {
    SetNatGatewayId(std::forward<NatGatewayIdT>(value));
    return *this;
  }
  ///@}

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
  DeleteProxyRequest& WithProxyName(ProxyNameT&& value) {
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
  DeleteProxyRequest& WithProxyArn(ProxyArnT&& value) {
    SetProxyArn(std::forward<ProxyArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_natGatewayId;

  Aws::String m_proxyName;

  Aws::String m_proxyArn;
  bool m_natGatewayIdHasBeenSet = false;
  bool m_proxyNameHasBeenSet = false;
  bool m_proxyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
