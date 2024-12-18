﻿/**
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
    AWS_ROUTE53RESOLVER_API TargetAddress();
    AWS_ROUTE53RESOLVER_API TargetAddress(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API TargetAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One IPv4 address that you want to forward DNS queries to.</p>
     */
    inline const Aws::String& GetIp() const{ return m_ip; }
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }
    inline void SetIp(const Aws::String& value) { m_ipHasBeenSet = true; m_ip = value; }
    inline void SetIp(Aws::String&& value) { m_ipHasBeenSet = true; m_ip = std::move(value); }
    inline void SetIp(const char* value) { m_ipHasBeenSet = true; m_ip.assign(value); }
    inline TargetAddress& WithIp(const Aws::String& value) { SetIp(value); return *this;}
    inline TargetAddress& WithIp(Aws::String&& value) { SetIp(std::move(value)); return *this;}
    inline TargetAddress& WithIp(const char* value) { SetIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port at <code>Ip</code> that you want to forward DNS queries to.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline TargetAddress& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> One IPv6 address that you want to forward DNS queries to. </p>
     */
    inline const Aws::String& GetIpv6() const{ return m_ipv6; }
    inline bool Ipv6HasBeenSet() const { return m_ipv6HasBeenSet; }
    inline void SetIpv6(const Aws::String& value) { m_ipv6HasBeenSet = true; m_ipv6 = value; }
    inline void SetIpv6(Aws::String&& value) { m_ipv6HasBeenSet = true; m_ipv6 = std::move(value); }
    inline void SetIpv6(const char* value) { m_ipv6HasBeenSet = true; m_ipv6.assign(value); }
    inline TargetAddress& WithIpv6(const Aws::String& value) { SetIpv6(value); return *this;}
    inline TargetAddress& WithIpv6(Aws::String&& value) { SetIpv6(std::move(value)); return *this;}
    inline TargetAddress& WithIpv6(const char* value) { SetIpv6(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The protocols for the target address. The protocol you choose needs to be
     * supported by the outbound endpoint of the Resolver rule.</p>
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline TargetAddress& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}
    inline TargetAddress& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Server Name Indication of the DoH server that you want to forward
     * queries to. This is only used if the Protocol of the <code>TargetAddress</code>
     * is <code>DoH</code>. </p>
     */
    inline const Aws::String& GetServerNameIndication() const{ return m_serverNameIndication; }
    inline bool ServerNameIndicationHasBeenSet() const { return m_serverNameIndicationHasBeenSet; }
    inline void SetServerNameIndication(const Aws::String& value) { m_serverNameIndicationHasBeenSet = true; m_serverNameIndication = value; }
    inline void SetServerNameIndication(Aws::String&& value) { m_serverNameIndicationHasBeenSet = true; m_serverNameIndication = std::move(value); }
    inline void SetServerNameIndication(const char* value) { m_serverNameIndicationHasBeenSet = true; m_serverNameIndication.assign(value); }
    inline TargetAddress& WithServerNameIndication(const Aws::String& value) { SetServerNameIndication(value); return *this;}
    inline TargetAddress& WithServerNameIndication(Aws::String&& value) { SetServerNameIndication(std::move(value)); return *this;}
    inline TargetAddress& WithServerNameIndication(const char* value) { SetServerNameIndication(value); return *this;}
    ///@}
  private:

    Aws::String m_ip;
    bool m_ipHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_ipv6;
    bool m_ipv6HasBeenSet = false;

    Protocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_serverNameIndication;
    bool m_serverNameIndicationHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
