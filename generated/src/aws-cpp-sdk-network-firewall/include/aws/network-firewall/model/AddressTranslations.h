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
 * <p>The public IP addresses that an internet gateway firewall uses for network
 * address translation in one Availability Zone. Resources that don't have a public
 * IP address reach the internet through these addresses. Network Firewall manages
 * the addresses for you: it allocates them in your account and adds or removes
 * addresses automatically based on traffic.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/AddressTranslations">AWS
 * API Reference</a></p>
 */
class AddressTranslations {
 public:
  AWS_NETWORKFIREWALL_API AddressTranslations() = default;
  AWS_NETWORKFIREWALL_API AddressTranslations(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API AddressTranslations& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The public IPv6 addresses that the internet gateway firewall uses for network
   * address translation in this Availability Zone.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPublicIPv6Addresses() const { return m_publicIPv6Addresses; }
  inline bool PublicIPv6AddressesHasBeenSet() const { return m_publicIPv6AddressesHasBeenSet; }
  template <typename PublicIPv6AddressesT = Aws::Vector<Aws::String>>
  void SetPublicIPv6Addresses(PublicIPv6AddressesT&& value) {
    m_publicIPv6AddressesHasBeenSet = true;
    m_publicIPv6Addresses = std::forward<PublicIPv6AddressesT>(value);
  }
  template <typename PublicIPv6AddressesT = Aws::Vector<Aws::String>>
  AddressTranslations& WithPublicIPv6Addresses(PublicIPv6AddressesT&& value) {
    SetPublicIPv6Addresses(std::forward<PublicIPv6AddressesT>(value));
    return *this;
  }
  template <typename PublicIPv6AddressesT = Aws::String>
  AddressTranslations& AddPublicIPv6Addresses(PublicIPv6AddressesT&& value) {
    m_publicIPv6AddressesHasBeenSet = true;
    m_publicIPv6Addresses.emplace_back(std::forward<PublicIPv6AddressesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The public IPv4 addresses that the internet gateway firewall uses for network
   * address translation in this Availability Zone.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPublicIPv4Addresses() const { return m_publicIPv4Addresses; }
  inline bool PublicIPv4AddressesHasBeenSet() const { return m_publicIPv4AddressesHasBeenSet; }
  template <typename PublicIPv4AddressesT = Aws::Vector<Aws::String>>
  void SetPublicIPv4Addresses(PublicIPv4AddressesT&& value) {
    m_publicIPv4AddressesHasBeenSet = true;
    m_publicIPv4Addresses = std::forward<PublicIPv4AddressesT>(value);
  }
  template <typename PublicIPv4AddressesT = Aws::Vector<Aws::String>>
  AddressTranslations& WithPublicIPv4Addresses(PublicIPv4AddressesT&& value) {
    SetPublicIPv4Addresses(std::forward<PublicIPv4AddressesT>(value));
    return *this;
  }
  template <typename PublicIPv4AddressesT = Aws::String>
  AddressTranslations& AddPublicIPv4Addresses(PublicIPv4AddressesT&& value) {
    m_publicIPv4AddressesHasBeenSet = true;
    m_publicIPv4Addresses.emplace_back(std::forward<PublicIPv4AddressesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_publicIPv6Addresses;

  Aws::Vector<Aws::String> m_publicIPv4Addresses;
  bool m_publicIPv6AddressesHasBeenSet = false;
  bool m_publicIPv4AddressesHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
