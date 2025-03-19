/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/Protocol.h>
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
namespace Route53Resolver
{
namespace Model
{

  /**
   * <p>In a <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverRule.html">CreateResolverRule</a>
   * request, an array of the IPs that you want to forward DNS queries
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/TargetAddress">AWS
   * API Reference</a></p>
   */
  class TargetAddress
  {
  public:
    AWS_ROUTE53RESOLVER_API TargetAddress() = default;
    AWS_ROUTE53RESOLVER_API TargetAddress(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API TargetAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One IPv4 address that you want to forward DNS queries to.</p>
     */
    inline const Aws::String& GetIp() const { return m_ip; }
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }
    template<typename IpT = Aws::String>
    void SetIp(IpT&& value) { m_ipHasBeenSet = true; m_ip = std::forward<IpT>(value); }
    template<typename IpT = Aws::String>
    TargetAddress& WithIp(IpT&& value) { SetIp(std::forward<IpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port at <code>Ip</code> that you want to forward DNS queries to.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline TargetAddress& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> One IPv6 address that you want to forward DNS queries to. </p>
     */
    inline const Aws::String& GetIpv6() const { return m_ipv6; }
    inline bool Ipv6HasBeenSet() const { return m_ipv6HasBeenSet; }
    template<typename Ipv6T = Aws::String>
    void SetIpv6(Ipv6T&& value) { m_ipv6HasBeenSet = true; m_ipv6 = std::forward<Ipv6T>(value); }
    template<typename Ipv6T = Aws::String>
    TargetAddress& WithIpv6(Ipv6T&& value) { SetIpv6(std::forward<Ipv6T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The protocols for the target address. The protocol you choose needs to be
     * supported by the outbound endpoint of the Resolver rule.</p>
     */
    inline Protocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(Protocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline TargetAddress& WithProtocol(Protocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Server Name Indication of the DoH server that you want to forward
     * queries to. This is only used if the Protocol of the <code>TargetAddress</code>
     * is <code>DoH</code>. </p>
     */
    inline const Aws::String& GetServerNameIndication() const { return m_serverNameIndication; }
    inline bool ServerNameIndicationHasBeenSet() const { return m_serverNameIndicationHasBeenSet; }
    template<typename ServerNameIndicationT = Aws::String>
    void SetServerNameIndication(ServerNameIndicationT&& value) { m_serverNameIndicationHasBeenSet = true; m_serverNameIndication = std::forward<ServerNameIndicationT>(value); }
    template<typename ServerNameIndicationT = Aws::String>
    TargetAddress& WithServerNameIndication(ServerNameIndicationT&& value) { SetServerNameIndication(std::forward<ServerNameIndicationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ip;
    bool m_ipHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_ipv6;
    bool m_ipv6HasBeenSet = false;

    Protocol m_protocol{Protocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    Aws::String m_serverNameIndication;
    bool m_serverNameIndicationHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
