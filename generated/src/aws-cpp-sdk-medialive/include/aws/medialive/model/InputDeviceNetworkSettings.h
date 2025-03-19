/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputDeviceIpScheme.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * The network settings for the input device.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputDeviceNetworkSettings">AWS
   * API Reference</a></p>
   */
  class InputDeviceNetworkSettings
  {
  public:
    AWS_MEDIALIVE_API InputDeviceNetworkSettings() = default;
    AWS_MEDIALIVE_API InputDeviceNetworkSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputDeviceNetworkSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The DNS addresses of the input device.
     */
    inline const Aws::Vector<Aws::String>& GetDnsAddresses() const { return m_dnsAddresses; }
    inline bool DnsAddressesHasBeenSet() const { return m_dnsAddressesHasBeenSet; }
    template<typename DnsAddressesT = Aws::Vector<Aws::String>>
    void SetDnsAddresses(DnsAddressesT&& value) { m_dnsAddressesHasBeenSet = true; m_dnsAddresses = std::forward<DnsAddressesT>(value); }
    template<typename DnsAddressesT = Aws::Vector<Aws::String>>
    InputDeviceNetworkSettings& WithDnsAddresses(DnsAddressesT&& value) { SetDnsAddresses(std::forward<DnsAddressesT>(value)); return *this;}
    template<typename DnsAddressesT = Aws::String>
    InputDeviceNetworkSettings& AddDnsAddresses(DnsAddressesT&& value) { m_dnsAddressesHasBeenSet = true; m_dnsAddresses.emplace_back(std::forward<DnsAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The network gateway IP address.
     */
    inline const Aws::String& GetGateway() const { return m_gateway; }
    inline bool GatewayHasBeenSet() const { return m_gatewayHasBeenSet; }
    template<typename GatewayT = Aws::String>
    void SetGateway(GatewayT&& value) { m_gatewayHasBeenSet = true; m_gateway = std::forward<GatewayT>(value); }
    template<typename GatewayT = Aws::String>
    InputDeviceNetworkSettings& WithGateway(GatewayT&& value) { SetGateway(std::forward<GatewayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The IP address of the input device.
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    InputDeviceNetworkSettings& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies whether the input device has been configured (outside of MediaLive) to
     * use a dynamic IP address assignment (DHCP) or a static IP address.
     */
    inline InputDeviceIpScheme GetIpScheme() const { return m_ipScheme; }
    inline bool IpSchemeHasBeenSet() const { return m_ipSchemeHasBeenSet; }
    inline void SetIpScheme(InputDeviceIpScheme value) { m_ipSchemeHasBeenSet = true; m_ipScheme = value; }
    inline InputDeviceNetworkSettings& WithIpScheme(InputDeviceIpScheme value) { SetIpScheme(value); return *this;}
    ///@}

    ///@{
    /**
     * The subnet mask of the input device.
     */
    inline const Aws::String& GetSubnetMask() const { return m_subnetMask; }
    inline bool SubnetMaskHasBeenSet() const { return m_subnetMaskHasBeenSet; }
    template<typename SubnetMaskT = Aws::String>
    void SetSubnetMask(SubnetMaskT&& value) { m_subnetMaskHasBeenSet = true; m_subnetMask = std::forward<SubnetMaskT>(value); }
    template<typename SubnetMaskT = Aws::String>
    InputDeviceNetworkSettings& WithSubnetMask(SubnetMaskT&& value) { SetSubnetMask(std::forward<SubnetMaskT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_dnsAddresses;
    bool m_dnsAddressesHasBeenSet = false;

    Aws::String m_gateway;
    bool m_gatewayHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    InputDeviceIpScheme m_ipScheme{InputDeviceIpScheme::NOT_SET};
    bool m_ipSchemeHasBeenSet = false;

    Aws::String m_subnetMask;
    bool m_subnetMaskHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
