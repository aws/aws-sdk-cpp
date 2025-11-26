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
#include <aws/network-firewall/model/Tag.h>
#include <aws/network-firewall/model/TlsInterceptPropertiesRequest.h>

#include <utility>

namespace Aws {
namespace NetworkFirewall {
namespace Model {

/**
 */
class CreateProxyRequest : public NetworkFirewallRequest {
 public:
  AWS_NETWORKFIREWALL_API CreateProxyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateProxy"; }

  AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

  AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The descriptive name of the proxy. You can't change the name of a proxy after
   * you create it.</p>
   */
  inline const Aws::String& GetProxyName() const { return m_proxyName; }
  inline bool ProxyNameHasBeenSet() const { return m_proxyNameHasBeenSet; }
  template <typename ProxyNameT = Aws::String>
  void SetProxyName(ProxyNameT&& value) {
    m_proxyNameHasBeenSet = true;
    m_proxyName = std::forward<ProxyNameT>(value);
  }
  template <typename ProxyNameT = Aws::String>
  CreateProxyRequest& WithProxyName(ProxyNameT&& value) {
    SetProxyName(std::forward<ProxyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for the NAT gateway to use with proxy resources.</p>
   */
  inline const Aws::String& GetNatGatewayId() const { return m_natGatewayId; }
  inline bool NatGatewayIdHasBeenSet() const { return m_natGatewayIdHasBeenSet; }
  template <typename NatGatewayIdT = Aws::String>
  void SetNatGatewayId(NatGatewayIdT&& value) {
    m_natGatewayIdHasBeenSet = true;
    m_natGatewayId = std::forward<NatGatewayIdT>(value);
  }
  template <typename NatGatewayIdT = Aws::String>
  CreateProxyRequest& WithNatGatewayId(NatGatewayIdT&& value) {
    SetNatGatewayId(std::forward<NatGatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptive name of the proxy configuration. You can't change the name of
   * a proxy configuration after you create it.</p> <p>You must specify the ARN or
   * the name, and you can specify both. </p>
   */
  inline const Aws::String& GetProxyConfigurationName() const { return m_proxyConfigurationName; }
  inline bool ProxyConfigurationNameHasBeenSet() const { return m_proxyConfigurationNameHasBeenSet; }
  template <typename ProxyConfigurationNameT = Aws::String>
  void SetProxyConfigurationName(ProxyConfigurationNameT&& value) {
    m_proxyConfigurationNameHasBeenSet = true;
    m_proxyConfigurationName = std::forward<ProxyConfigurationNameT>(value);
  }
  template <typename ProxyConfigurationNameT = Aws::String>
  CreateProxyRequest& WithProxyConfigurationName(ProxyConfigurationNameT&& value) {
    SetProxyConfigurationName(std::forward<ProxyConfigurationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of a proxy configuration.</p> <p>You must
   * specify the ARN or the name, and you can specify both. </p>
   */
  inline const Aws::String& GetProxyConfigurationArn() const { return m_proxyConfigurationArn; }
  inline bool ProxyConfigurationArnHasBeenSet() const { return m_proxyConfigurationArnHasBeenSet; }
  template <typename ProxyConfigurationArnT = Aws::String>
  void SetProxyConfigurationArn(ProxyConfigurationArnT&& value) {
    m_proxyConfigurationArnHasBeenSet = true;
    m_proxyConfigurationArn = std::forward<ProxyConfigurationArnT>(value);
  }
  template <typename ProxyConfigurationArnT = Aws::String>
  CreateProxyRequest& WithProxyConfigurationArn(ProxyConfigurationArnT&& value) {
    SetProxyConfigurationArn(std::forward<ProxyConfigurationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Listener properties for HTTP and HTTPS traffic.</p>
   */
  inline const Aws::Vector<ListenerPropertyRequest>& GetListenerProperties() const { return m_listenerProperties; }
  inline bool ListenerPropertiesHasBeenSet() const { return m_listenerPropertiesHasBeenSet; }
  template <typename ListenerPropertiesT = Aws::Vector<ListenerPropertyRequest>>
  void SetListenerProperties(ListenerPropertiesT&& value) {
    m_listenerPropertiesHasBeenSet = true;
    m_listenerProperties = std::forward<ListenerPropertiesT>(value);
  }
  template <typename ListenerPropertiesT = Aws::Vector<ListenerPropertyRequest>>
  CreateProxyRequest& WithListenerProperties(ListenerPropertiesT&& value) {
    SetListenerProperties(std::forward<ListenerPropertiesT>(value));
    return *this;
  }
  template <typename ListenerPropertiesT = ListenerPropertyRequest>
  CreateProxyRequest& AddListenerProperties(ListenerPropertiesT&& value) {
    m_listenerPropertiesHasBeenSet = true;
    m_listenerProperties.emplace_back(std::forward<ListenerPropertiesT>(value));
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
  CreateProxyRequest& WithTlsInterceptProperties(TlsInterceptPropertiesT&& value) {
    SetTlsInterceptProperties(std::forward<TlsInterceptPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key:value pairs to associate with the resource.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateProxyRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateProxyRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_proxyName;
  bool m_proxyNameHasBeenSet = false;

  Aws::String m_natGatewayId;
  bool m_natGatewayIdHasBeenSet = false;

  Aws::String m_proxyConfigurationName;
  bool m_proxyConfigurationNameHasBeenSet = false;

  Aws::String m_proxyConfigurationArn;
  bool m_proxyConfigurationArnHasBeenSet = false;

  Aws::Vector<ListenerPropertyRequest> m_listenerProperties;
  bool m_listenerPropertiesHasBeenSet = false;

  TlsInterceptPropertiesRequest m_tlsInterceptProperties;
  bool m_tlsInterceptPropertiesHasBeenSet = false;

  Aws::Vector<Tag> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
