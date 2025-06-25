/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Describes a gateway's network interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/NetworkInterface">AWS
   * API Reference</a></p>
   */
  class NetworkInterface
  {
  public:
    AWS_STORAGEGATEWAY_API NetworkInterface() = default;
    AWS_STORAGEGATEWAY_API NetworkInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API NetworkInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Internet Protocol version 4 (IPv4) address of the interface.</p>
     */
    inline const Aws::String& GetIpv4Address() const { return m_ipv4Address; }
    inline bool Ipv4AddressHasBeenSet() const { return m_ipv4AddressHasBeenSet; }
    template<typename Ipv4AddressT = Aws::String>
    void SetIpv4Address(Ipv4AddressT&& value) { m_ipv4AddressHasBeenSet = true; m_ipv4Address = std::forward<Ipv4AddressT>(value); }
    template<typename Ipv4AddressT = Aws::String>
    NetworkInterface& WithIpv4Address(Ipv4AddressT&& value) { SetIpv4Address(std::forward<Ipv4AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Media Access Control (MAC) address of the interface.</p>  <p>This
     * is currently unsupported and will not be returned in output.</p> 
     */
    inline const Aws::String& GetMacAddress() const { return m_macAddress; }
    inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }
    template<typename MacAddressT = Aws::String>
    void SetMacAddress(MacAddressT&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::forward<MacAddressT>(value); }
    template<typename MacAddressT = Aws::String>
    NetworkInterface& WithMacAddress(MacAddressT&& value) { SetMacAddress(std::forward<MacAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Internet Protocol version 6 (IPv6) address of the interface.</p> 
     * <p>This element returns IPv6 addresses for all gateway types except FSx File
     * Gateway.</p> 
     */
    inline const Aws::String& GetIpv6Address() const { return m_ipv6Address; }
    inline bool Ipv6AddressHasBeenSet() const { return m_ipv6AddressHasBeenSet; }
    template<typename Ipv6AddressT = Aws::String>
    void SetIpv6Address(Ipv6AddressT&& value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address = std::forward<Ipv6AddressT>(value); }
    template<typename Ipv6AddressT = Aws::String>
    NetworkInterface& WithIpv6Address(Ipv6AddressT&& value) { SetIpv6Address(std::forward<Ipv6AddressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipv4Address;
    bool m_ipv4AddressHasBeenSet = false;

    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet = false;

    Aws::String m_ipv6Address;
    bool m_ipv6AddressHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
