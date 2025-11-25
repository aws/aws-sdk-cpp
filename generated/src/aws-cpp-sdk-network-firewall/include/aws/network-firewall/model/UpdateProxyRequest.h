/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ListenerPropertyRequest.h>
#include <aws/network-firewall/model/TlsInterceptPropertiesRequest.h>

#include <utility>

namespace Aws {
namespace NetworkFirewall {
namespace Model {

/**
 */
class UpdateProxyRequest : public NetworkFirewallRequest {
 public:
  AWS_NETWORKFIREWALL_API UpdateProxyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateProxy"; }

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
  UpdateProxyRequest& WithNatGatewayId(NatGatewayIdT&& value) {
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
  UpdateProxyRequest& WithProxyName(ProxyNameT&& value) {
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
  UpdateProxyRequest& WithProxyArn(ProxyArnT&& value) {
    SetProxyArn(std::forward<ProxyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Listener properties for HTTP and HTTPS traffic to add. </p>
   */
  inline const Aws::Vector<ListenerPropertyRequest>& GetListenerPropertiesToAdd() const { return m_listenerPropertiesToAdd; }
  inline bool ListenerPropertiesToAddHasBeenSet() const { return m_listenerPropertiesToAddHasBeenSet; }
  template <typename ListenerPropertiesToAddT = Aws::Vector<ListenerPropertyRequest>>
  void SetListenerPropertiesToAdd(ListenerPropertiesToAddT&& value) {
    m_listenerPropertiesToAddHasBeenSet = true;
    m_listenerPropertiesToAdd = std::forward<ListenerPropertiesToAddT>(value);
  }
  template <typename ListenerPropertiesToAddT = Aws::Vector<ListenerPropertyRequest>>
  UpdateProxyRequest& WithListenerPropertiesToAdd(ListenerPropertiesToAddT&& value) {
    SetListenerPropertiesToAdd(std::forward<ListenerPropertiesToAddT>(value));
    return *this;
  }
  template <typename ListenerPropertiesToAddT = ListenerPropertyRequest>
  UpdateProxyRequest& AddListenerPropertiesToAdd(ListenerPropertiesToAddT&& value) {
    m_listenerPropertiesToAddHasBeenSet = true;
    m_listenerPropertiesToAdd.emplace_back(std::forward<ListenerPropertiesToAddT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Listener properties for HTTP and HTTPS traffic to remove. </p>
   */
  inline const Aws::Vector<ListenerPropertyRequest>& GetListenerPropertiesToRemove() const { return m_listenerPropertiesToRemove; }
  inline bool ListenerPropertiesToRemoveHasBeenSet() const { return m_listenerPropertiesToRemoveHasBeenSet; }
  template <typename ListenerPropertiesToRemoveT = Aws::Vector<ListenerPropertyRequest>>
  void SetListenerPropertiesToRemove(ListenerPropertiesToRemoveT&& value) {
    m_listenerPropertiesToRemoveHasBeenSet = true;
    m_listenerPropertiesToRemove = std::forward<ListenerPropertiesToRemoveT>(value);
  }
  template <typename ListenerPropertiesToRemoveT = Aws::Vector<ListenerPropertyRequest>>
  UpdateProxyRequest& WithListenerPropertiesToRemove(ListenerPropertiesToRemoveT&& value) {
    SetListenerPropertiesToRemove(std::forward<ListenerPropertiesToRemoveT>(value));
    return *this;
  }
  template <typename ListenerPropertiesToRemoveT = ListenerPropertyRequest>
  UpdateProxyRequest& AddListenerPropertiesToRemove(ListenerPropertiesToRemoveT&& value) {
    m_listenerPropertiesToRemoveHasBeenSet = true;
    m_listenerPropertiesToRemove.emplace_back(std::forward<ListenerPropertiesToRemoveT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>TLS decryption on traffic to filter on attributes in the HTTP header. </p>
   */
  inline const TlsInterceptPropertiesRequest& GetTlsInterceptProperties() const { return m_tlsInterceptProperties; }
  inline bool TlsInterceptPropertiesHasBeenSet() const { return m_tlsInterceptPropertiesHasBeenSet; }
  template <typename TlsInterceptPropertiesT = TlsInterceptPropertiesRequest>
  void SetTlsInterceptProperties(TlsInterceptPropertiesT&& value) {
    m_tlsInterceptPropertiesHasBeenSet = true;
    m_tlsInterceptProperties = std::forward<TlsInterceptPropertiesT>(value);
  }
  template <typename TlsInterceptPropertiesT = TlsInterceptPropertiesRequest>
  UpdateProxyRequest& WithTlsInterceptProperties(TlsInterceptPropertiesT&& value) {
    SetTlsInterceptProperties(std::forward<TlsInterceptPropertiesT>(value));
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
  inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }
  template <typename UpdateTokenT = Aws::String>
  void SetUpdateToken(UpdateTokenT&& value) {
    m_updateTokenHasBeenSet = true;
    m_updateToken = std::forward<UpdateTokenT>(value);
  }
  template <typename UpdateTokenT = Aws::String>
  UpdateProxyRequest& WithUpdateToken(UpdateTokenT&& value) {
    SetUpdateToken(std::forward<UpdateTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_natGatewayId;
  bool m_natGatewayIdHasBeenSet = false;

  Aws::String m_proxyName;
  bool m_proxyNameHasBeenSet = false;

  Aws::String m_proxyArn;
  bool m_proxyArnHasBeenSet = false;

  Aws::Vector<ListenerPropertyRequest> m_listenerPropertiesToAdd;
  bool m_listenerPropertiesToAddHasBeenSet = false;

  Aws::Vector<ListenerPropertyRequest> m_listenerPropertiesToRemove;
  bool m_listenerPropertiesToRemoveHasBeenSet = false;

  TlsInterceptPropertiesRequest m_tlsInterceptProperties;
  bool m_tlsInterceptPropertiesHasBeenSet = false;

  Aws::String m_updateToken;
  bool m_updateTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
