/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

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
 * <p>The domains that a <a>ServerCertificateScope</a> matches for SSL/TLS
 * inspection on a proxy mode firewall.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DomainMatch">AWS
 * API Reference</a></p>
 */
class DomainMatch {
 public:
  AWS_NETWORKFIREWALL_API DomainMatch() = default;
  AWS_NETWORKFIREWALL_API DomainMatch(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API DomainMatch& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The domains to match. You can specify an exact domain, such as
   * <code>example.com</code>, or a domain with a single leading wildcard label, such
   * as <code>*.example.com</code>. You can specify from 1 to 50 domains, and each
   * domain can be up to 255 characters long.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDomains() const { return m_domains; }
  inline bool DomainsHasBeenSet() const { return m_domainsHasBeenSet; }
  template <typename DomainsT = Aws::Vector<Aws::String>>
  void SetDomains(DomainsT&& value) {
    m_domainsHasBeenSet = true;
    m_domains = std::forward<DomainsT>(value);
  }
  template <typename DomainsT = Aws::Vector<Aws::String>>
  DomainMatch& WithDomains(DomainsT&& value) {
    SetDomains(std::forward<DomainsT>(value));
    return *this;
  }
  template <typename DomainsT = Aws::String>
  DomainMatch& AddDomains(DomainsT&& value) {
    m_domainsHasBeenSet = true;
    m_domains.emplace_back(std::forward<DomainsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_domains;
  bool m_domainsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
