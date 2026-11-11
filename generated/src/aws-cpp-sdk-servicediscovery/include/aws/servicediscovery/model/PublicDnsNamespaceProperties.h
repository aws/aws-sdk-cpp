/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/PublicDnsPropertiesMutable.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ServiceDiscovery {
namespace Model {

/**
 * <p>DNS properties for the public DNS namespace.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/PublicDnsNamespaceProperties">AWS
 * API Reference</a></p>
 */
class PublicDnsNamespaceProperties {
 public:
  AWS_SERVICEDISCOVERY_API PublicDnsNamespaceProperties() = default;
  AWS_SERVICEDISCOVERY_API PublicDnsNamespaceProperties(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SERVICEDISCOVERY_API PublicDnsNamespaceProperties& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SERVICEDISCOVERY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>DNS properties for the public DNS namespace.</p>
   */
  inline const PublicDnsPropertiesMutable& GetDnsProperties() const { return m_dnsProperties; }
  inline bool DnsPropertiesHasBeenSet() const { return m_dnsPropertiesHasBeenSet; }
  template <typename DnsPropertiesT = PublicDnsPropertiesMutable>
  void SetDnsProperties(DnsPropertiesT&& value) {
    m_dnsPropertiesHasBeenSet = true;
    m_dnsProperties = std::forward<DnsPropertiesT>(value);
  }
  template <typename DnsPropertiesT = PublicDnsPropertiesMutable>
  PublicDnsNamespaceProperties& WithDnsProperties(DnsPropertiesT&& value) {
    SetDnsProperties(std::forward<DnsPropertiesT>(value));
    return *this;
  }
  ///@}
 private:
  PublicDnsPropertiesMutable m_dnsProperties;
  bool m_dnsPropertiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ServiceDiscovery
}  // namespace Aws
