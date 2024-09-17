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
    AWS_PANORAMA_API StaticIpConnectionInfo();
    AWS_PANORAMA_API StaticIpConnectionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API StaticIpConnectionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The connection's default gateway.</p>
     */
    inline const Aws::String& GetDefaultGateway() const{ return m_defaultGateway; }
    inline bool DefaultGatewayHasBeenSet() const { return m_defaultGatewayHasBeenSet; }
    inline void SetDefaultGateway(const Aws::String& value) { m_defaultGatewayHasBeenSet = true; m_defaultGateway = value; }
    inline void SetDefaultGateway(Aws::String&& value) { m_defaultGatewayHasBeenSet = true; m_defaultGateway = std::move(value); }
    inline void SetDefaultGateway(const char* value) { m_defaultGatewayHasBeenSet = true; m_defaultGateway.assign(value); }
    inline StaticIpConnectionInfo& WithDefaultGateway(const Aws::String& value) { SetDefaultGateway(value); return *this;}
    inline StaticIpConnectionInfo& WithDefaultGateway(Aws::String&& value) { SetDefaultGateway(std::move(value)); return *this;}
    inline StaticIpConnectionInfo& WithDefaultGateway(const char* value) { SetDefaultGateway(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection's DNS address.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDns() const{ return m_dns; }
    inline bool DnsHasBeenSet() const { return m_dnsHasBeenSet; }
    inline void SetDns(const Aws::Vector<Aws::String>& value) { m_dnsHasBeenSet = true; m_dns = value; }
    inline void SetDns(Aws::Vector<Aws::String>&& value) { m_dnsHasBeenSet = true; m_dns = std::move(value); }
    inline StaticIpConnectionInfo& WithDns(const Aws::Vector<Aws::String>& value) { SetDns(value); return *this;}
    inline StaticIpConnectionInfo& WithDns(Aws::Vector<Aws::String>&& value) { SetDns(std::move(value)); return *this;}
    inline StaticIpConnectionInfo& AddDns(const Aws::String& value) { m_dnsHasBeenSet = true; m_dns.push_back(value); return *this; }
    inline StaticIpConnectionInfo& AddDns(Aws::String&& value) { m_dnsHasBeenSet = true; m_dns.push_back(std::move(value)); return *this; }
    inline StaticIpConnectionInfo& AddDns(const char* value) { m_dnsHasBeenSet = true; m_dns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The connection's IP address.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline StaticIpConnectionInfo& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline StaticIpConnectionInfo& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline StaticIpConnectionInfo& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection's DNS mask.</p>
     */
    inline const Aws::String& GetMask() const{ return m_mask; }
    inline bool MaskHasBeenSet() const { return m_maskHasBeenSet; }
    inline void SetMask(const Aws::String& value) { m_maskHasBeenSet = true; m_mask = value; }
    inline void SetMask(Aws::String&& value) { m_maskHasBeenSet = true; m_mask = std::move(value); }
    inline void SetMask(const char* value) { m_maskHasBeenSet = true; m_mask.assign(value); }
    inline StaticIpConnectionInfo& WithMask(const Aws::String& value) { SetMask(value); return *this;}
    inline StaticIpConnectionInfo& WithMask(Aws::String&& value) { SetMask(std::move(value)); return *this;}
    inline StaticIpConnectionInfo& WithMask(const char* value) { SetMask(value); return *this;}
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
