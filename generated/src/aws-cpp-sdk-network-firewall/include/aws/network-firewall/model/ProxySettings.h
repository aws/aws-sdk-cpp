/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ListenerProperty.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>The proxy settings of a proxy mode firewall: the ports and protocols on which
 * the firewall's proxy listens for traffic, and optionally your own domain name
 * and certificate.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ProxySettings">AWS
 * API Reference</a></p>
 */
class ProxySettings {
 public:
  AWS_NETWORKFIREWALL_API ProxySettings() = default;
  AWS_NETWORKFIREWALL_API ProxySettings(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API ProxySettings& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The listeners of the firewall's proxy. Specify at least one listener, and at
   * most one HTTP listener and one HTTPS listener. Each listener needs a port from 1
   * to 65535, and the two listeners must use different ports.</p> <p>If you don't
   * specify listeners when you create the firewall, the firewall listens for HTTP on
   * port 3128 and HTTPS on port 8443.</p>
   */
  inline const Aws::Vector<ListenerProperty>& GetListenerProperties() const { return m_listenerProperties; }
  inline bool ListenerPropertiesHasBeenSet() const { return m_listenerPropertiesHasBeenSet; }
  template <typename ListenerPropertiesT = Aws::Vector<ListenerProperty>>
  void SetListenerProperties(ListenerPropertiesT&& value) {
    m_listenerPropertiesHasBeenSet = true;
    m_listenerProperties = std::forward<ListenerPropertiesT>(value);
  }
  template <typename ListenerPropertiesT = Aws::Vector<ListenerProperty>>
  ProxySettings& WithListenerProperties(ListenerPropertiesT&& value) {
    SetListenerProperties(std::forward<ListenerPropertiesT>(value));
    return *this;
  }
  template <typename ListenerPropertiesT = ListenerProperty>
  ProxySettings& AddListenerProperties(ListenerPropertiesT&& value) {
    m_listenerPropertiesHasBeenSet = true;
    m_listenerProperties.emplace_back(std::forward<ListenerPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the certificate that the firewall's HTTPS
   * proxy listener presents to clients. The certificate must be an Certificate
   * Manager (ACM) certificate in the same account and Region as the firewall. Its
   * subject alternative names must cover <code>DomainName</code>, either exactly or
   * with a wildcard that matches exactly one label. For example,
   * <code>*.example.com</code> covers <code>proxy.example.com</code>. If you don't
   * specify this, Network Firewall uses a certificate that it manages for a domain
   * name that it generates.</p> <p>You manage and renew the certificate in ACM, and
   * Network Firewall uses renewed certificates automatically. While the firewall
   * uses the certificate, you can't delete it from ACM. Your clients must trust the
   * certificate's certificate authority.</p> <p>If you specify
   * <code>CertificateArn</code>, you must also specify <code>DomainName</code>. You
   * can set them only when you create the firewall. When you call
   * <code>UpdateProxySettings</code>, specify the same values.</p>
   */
  inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
  inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
  template <typename CertificateArnT = Aws::String>
  void SetCertificateArn(CertificateArnT&& value) {
    m_certificateArnHasBeenSet = true;
    m_certificateArn = std::forward<CertificateArnT>(value);
  }
  template <typename CertificateArnT = Aws::String>
  ProxySettings& WithCertificateArn(CertificateArnT&& value) {
    SetCertificateArn(std::forward<CertificateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain name that your clients use to reach the firewall's proxy. The name
   * must have at least two labels and at most 253 characters. It can't contain a
   * wildcard or use the <code>proxy-<i>id</i>.nfw.<i>region</i>.amazonaws.com</code>
   * format, and the certificate in <code>CertificateArn</code> must cover it. If you
   * don't specify this, Network Firewall generates a domain name.</p> <p>Network
   * Firewall creates the Route 53 private hosted zones that resolve this name to the
   * firewall endpoints, so you don't need to configure DNS. A VPC can have only one
   * private hosted zone with a given name. If a VPC that the firewall serves already
   * has one with this name, Network Firewall can't set up the Availability Zones in
   * that VPC.</p> <p>If you specify <code>DomainName</code>, you must also specify
   * <code>CertificateArn</code>. You can set them only when you create the firewall.
   * When you call <code>UpdateProxySettings</code>, specify the same values.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  ProxySettings& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ListenerProperty> m_listenerProperties;

  Aws::String m_certificateArn;

  Aws::String m_domainName;
  bool m_listenerPropertiesHasBeenSet = false;
  bool m_certificateArnHasBeenSet = false;
  bool m_domainNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
