/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>A static IP configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/StaticIpConnectionInfo">AWS
   * API Reference</a></p>
   */
  class StaticIpConnectionInfo
  {
  public:
    AWS_PANORAMA_API StaticIpConnectionInfo() = default;
    AWS_PANORAMA_API StaticIpConnectionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API StaticIpConnectionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The connection's default gateway.</p>
     */
    inline const Aws::String& GetDefaultGateway() const { return m_defaultGateway; }
    inline bool DefaultGatewayHasBeenSet() const { return m_defaultGatewayHasBeenSet; }
    template<typename DefaultGatewayT = Aws::String>
    void SetDefaultGateway(DefaultGatewayT&& value) { m_defaultGatewayHasBeenSet = true; m_defaultGateway = std::forward<DefaultGatewayT>(value); }
    template<typename DefaultGatewayT = Aws::String>
    StaticIpConnectionInfo& WithDefaultGateway(DefaultGatewayT&& value) { SetDefaultGateway(std::forward<DefaultGatewayT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection's DNS address.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDns() const { return m_dns; }
    inline bool DnsHasBeenSet() const { return m_dnsHasBeenSet; }
    template<typename DnsT = Aws::Vector<Aws::String>>
    void SetDns(DnsT&& value) { m_dnsHasBeenSet = true; m_dns = std::forward<DnsT>(value); }
    template<typename DnsT = Aws::Vector<Aws::String>>
    StaticIpConnectionInfo& WithDns(DnsT&& value) { SetDns(std::forward<DnsT>(value)); return *this;}
    template<typename DnsT = Aws::String>
    StaticIpConnectionInfo& AddDns(DnsT&& value) { m_dnsHasBeenSet = true; m_dns.emplace_back(std::forward<DnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The connection's IP address.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    StaticIpConnectionInfo& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection's DNS mask.</p>
     */
    inline const Aws::String& GetMask() const { return m_mask; }
    inline bool MaskHasBeenSet() const { return m_maskHasBeenSet; }
    template<typename MaskT = Aws::String>
    void SetMask(MaskT&& value) { m_maskHasBeenSet = true; m_mask = std::forward<MaskT>(value); }
    template<typename MaskT = Aws::String>
    StaticIpConnectionInfo& WithMask(MaskT&& value) { SetMask(std::forward<MaskT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_defaultGateway;
    bool m_defaultGatewayHasBeenSet = false;

    Aws::Vector<Aws::String> m_dns;
    bool m_dnsHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_mask;
    bool m_maskHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
