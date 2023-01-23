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
    AWS_MEDIALIVE_API InputDeviceNetworkSettings();
    AWS_MEDIALIVE_API InputDeviceNetworkSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputDeviceNetworkSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The DNS addresses of the input device.
     */
    inline const Aws::Vector<Aws::String>& GetDnsAddresses() const{ return m_dnsAddresses; }

    /**
     * The DNS addresses of the input device.
     */
    inline bool DnsAddressesHasBeenSet() const { return m_dnsAddressesHasBeenSet; }

    /**
     * The DNS addresses of the input device.
     */
    inline void SetDnsAddresses(const Aws::Vector<Aws::String>& value) { m_dnsAddressesHasBeenSet = true; m_dnsAddresses = value; }

    /**
     * The DNS addresses of the input device.
     */
    inline void SetDnsAddresses(Aws::Vector<Aws::String>&& value) { m_dnsAddressesHasBeenSet = true; m_dnsAddresses = std::move(value); }

    /**
     * The DNS addresses of the input device.
     */
    inline InputDeviceNetworkSettings& WithDnsAddresses(const Aws::Vector<Aws::String>& value) { SetDnsAddresses(value); return *this;}

    /**
     * The DNS addresses of the input device.
     */
    inline InputDeviceNetworkSettings& WithDnsAddresses(Aws::Vector<Aws::String>&& value) { SetDnsAddresses(std::move(value)); return *this;}

    /**
     * The DNS addresses of the input device.
     */
    inline InputDeviceNetworkSettings& AddDnsAddresses(const Aws::String& value) { m_dnsAddressesHasBeenSet = true; m_dnsAddresses.push_back(value); return *this; }

    /**
     * The DNS addresses of the input device.
     */
    inline InputDeviceNetworkSettings& AddDnsAddresses(Aws::String&& value) { m_dnsAddressesHasBeenSet = true; m_dnsAddresses.push_back(std::move(value)); return *this; }

    /**
     * The DNS addresses of the input device.
     */
    inline InputDeviceNetworkSettings& AddDnsAddresses(const char* value) { m_dnsAddressesHasBeenSet = true; m_dnsAddresses.push_back(value); return *this; }


    /**
     * The network gateway IP address.
     */
    inline const Aws::String& GetGateway() const{ return m_gateway; }

    /**
     * The network gateway IP address.
     */
    inline bool GatewayHasBeenSet() const { return m_gatewayHasBeenSet; }

    /**
     * The network gateway IP address.
     */
    inline void SetGateway(const Aws::String& value) { m_gatewayHasBeenSet = true; m_gateway = value; }

    /**
     * The network gateway IP address.
     */
    inline void SetGateway(Aws::String&& value) { m_gatewayHasBeenSet = true; m_gateway = std::move(value); }

    /**
     * The network gateway IP address.
     */
    inline void SetGateway(const char* value) { m_gatewayHasBeenSet = true; m_gateway.assign(value); }

    /**
     * The network gateway IP address.
     */
    inline InputDeviceNetworkSettings& WithGateway(const Aws::String& value) { SetGateway(value); return *this;}

    /**
     * The network gateway IP address.
     */
    inline InputDeviceNetworkSettings& WithGateway(Aws::String&& value) { SetGateway(std::move(value)); return *this;}

    /**
     * The network gateway IP address.
     */
    inline InputDeviceNetworkSettings& WithGateway(const char* value) { SetGateway(value); return *this;}


    /**
     * The IP address of the input device.
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * The IP address of the input device.
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * The IP address of the input device.
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * The IP address of the input device.
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * The IP address of the input device.
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * The IP address of the input device.
     */
    inline InputDeviceNetworkSettings& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * The IP address of the input device.
     */
    inline InputDeviceNetworkSettings& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * The IP address of the input device.
     */
    inline InputDeviceNetworkSettings& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * Specifies whether the input device has been configured (outside of MediaLive) to
     * use a dynamic IP address assignment (DHCP) or a static IP address.
     */
    inline const InputDeviceIpScheme& GetIpScheme() const{ return m_ipScheme; }

    /**
     * Specifies whether the input device has been configured (outside of MediaLive) to
     * use a dynamic IP address assignment (DHCP) or a static IP address.
     */
    inline bool IpSchemeHasBeenSet() const { return m_ipSchemeHasBeenSet; }

    /**
     * Specifies whether the input device has been configured (outside of MediaLive) to
     * use a dynamic IP address assignment (DHCP) or a static IP address.
     */
    inline void SetIpScheme(const InputDeviceIpScheme& value) { m_ipSchemeHasBeenSet = true; m_ipScheme = value; }

    /**
     * Specifies whether the input device has been configured (outside of MediaLive) to
     * use a dynamic IP address assignment (DHCP) or a static IP address.
     */
    inline void SetIpScheme(InputDeviceIpScheme&& value) { m_ipSchemeHasBeenSet = true; m_ipScheme = std::move(value); }

    /**
     * Specifies whether the input device has been configured (outside of MediaLive) to
     * use a dynamic IP address assignment (DHCP) or a static IP address.
     */
    inline InputDeviceNetworkSettings& WithIpScheme(const InputDeviceIpScheme& value) { SetIpScheme(value); return *this;}

    /**
     * Specifies whether the input device has been configured (outside of MediaLive) to
     * use a dynamic IP address assignment (DHCP) or a static IP address.
     */
    inline InputDeviceNetworkSettings& WithIpScheme(InputDeviceIpScheme&& value) { SetIpScheme(std::move(value)); return *this;}


    /**
     * The subnet mask of the input device.
     */
    inline const Aws::String& GetSubnetMask() const{ return m_subnetMask; }

    /**
     * The subnet mask of the input device.
     */
    inline bool SubnetMaskHasBeenSet() const { return m_subnetMaskHasBeenSet; }

    /**
     * The subnet mask of the input device.
     */
    inline void SetSubnetMask(const Aws::String& value) { m_subnetMaskHasBeenSet = true; m_subnetMask = value; }

    /**
     * The subnet mask of the input device.
     */
    inline void SetSubnetMask(Aws::String&& value) { m_subnetMaskHasBeenSet = true; m_subnetMask = std::move(value); }

    /**
     * The subnet mask of the input device.
     */
    inline void SetSubnetMask(const char* value) { m_subnetMaskHasBeenSet = true; m_subnetMask.assign(value); }

    /**
     * The subnet mask of the input device.
     */
    inline InputDeviceNetworkSettings& WithSubnetMask(const Aws::String& value) { SetSubnetMask(value); return *this;}

    /**
     * The subnet mask of the input device.
     */
    inline InputDeviceNetworkSettings& WithSubnetMask(Aws::String&& value) { SetSubnetMask(std::move(value)); return *this;}

    /**
     * The subnet mask of the input device.
     */
    inline InputDeviceNetworkSettings& WithSubnetMask(const char* value) { SetSubnetMask(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_dnsAddresses;
    bool m_dnsAddressesHasBeenSet = false;

    Aws::String m_gateway;
    bool m_gatewayHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    InputDeviceIpScheme m_ipScheme;
    bool m_ipSchemeHasBeenSet = false;

    Aws::String m_subnetMask;
    bool m_subnetMaskHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
