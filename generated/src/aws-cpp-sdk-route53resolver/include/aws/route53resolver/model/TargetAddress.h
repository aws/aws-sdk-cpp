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
    AWS_ROUTE53RESOLVER_API TargetAddress();
    AWS_ROUTE53RESOLVER_API TargetAddress(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API TargetAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One IPv4 address that you want to forward DNS queries to.</p>
     */
    inline const Aws::String& GetIp() const{ return m_ip; }

    /**
     * <p>One IPv4 address that you want to forward DNS queries to.</p>
     */
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }

    /**
     * <p>One IPv4 address that you want to forward DNS queries to.</p>
     */
    inline void SetIp(const Aws::String& value) { m_ipHasBeenSet = true; m_ip = value; }

    /**
     * <p>One IPv4 address that you want to forward DNS queries to.</p>
     */
    inline void SetIp(Aws::String&& value) { m_ipHasBeenSet = true; m_ip = std::move(value); }

    /**
     * <p>One IPv4 address that you want to forward DNS queries to.</p>
     */
    inline void SetIp(const char* value) { m_ipHasBeenSet = true; m_ip.assign(value); }

    /**
     * <p>One IPv4 address that you want to forward DNS queries to.</p>
     */
    inline TargetAddress& WithIp(const Aws::String& value) { SetIp(value); return *this;}

    /**
     * <p>One IPv4 address that you want to forward DNS queries to.</p>
     */
    inline TargetAddress& WithIp(Aws::String&& value) { SetIp(std::move(value)); return *this;}

    /**
     * <p>One IPv4 address that you want to forward DNS queries to.</p>
     */
    inline TargetAddress& WithIp(const char* value) { SetIp(value); return *this;}


    /**
     * <p>The port at <code>Ip</code> that you want to forward DNS queries to.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port at <code>Ip</code> that you want to forward DNS queries to.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port at <code>Ip</code> that you want to forward DNS queries to.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port at <code>Ip</code> that you want to forward DNS queries to.</p>
     */
    inline TargetAddress& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p> One IPv6 address that you want to forward DNS queries to. </p>
     */
    inline const Aws::String& GetIpv6() const{ return m_ipv6; }

    /**
     * <p> One IPv6 address that you want to forward DNS queries to. </p>
     */
    inline bool Ipv6HasBeenSet() const { return m_ipv6HasBeenSet; }

    /**
     * <p> One IPv6 address that you want to forward DNS queries to. </p>
     */
    inline void SetIpv6(const Aws::String& value) { m_ipv6HasBeenSet = true; m_ipv6 = value; }

    /**
     * <p> One IPv6 address that you want to forward DNS queries to. </p>
     */
    inline void SetIpv6(Aws::String&& value) { m_ipv6HasBeenSet = true; m_ipv6 = std::move(value); }

    /**
     * <p> One IPv6 address that you want to forward DNS queries to. </p>
     */
    inline void SetIpv6(const char* value) { m_ipv6HasBeenSet = true; m_ipv6.assign(value); }

    /**
     * <p> One IPv6 address that you want to forward DNS queries to. </p>
     */
    inline TargetAddress& WithIpv6(const Aws::String& value) { SetIpv6(value); return *this;}

    /**
     * <p> One IPv6 address that you want to forward DNS queries to. </p>
     */
    inline TargetAddress& WithIpv6(Aws::String&& value) { SetIpv6(std::move(value)); return *this;}

    /**
     * <p> One IPv6 address that you want to forward DNS queries to. </p>
     */
    inline TargetAddress& WithIpv6(const char* value) { SetIpv6(value); return *this;}


    /**
     * <p> The protocols for the Resolver endpoints. DoH-FIPS is applicable for inbound
     * endpoints only. </p> <p>For an inbound endpoint you can apply the protocols as
     * follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li> <li> <p>Do53
     * and DoH-FIPS in combination.</p> </li> <li> <p>Do53 alone.</p> </li> <li> <p>DoH
     * alone.</p> </li> <li> <p>DoH-FIPS alone.</p> </li> <li> <p>None, which is
     * treated as Do53.</p> </li> </ul> <p>For an outbound endpoint you can apply the
     * protocols as follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li>
     * <li> <p>Do53 alone.</p> </li> <li> <p>DoH alone.</p> </li> <li> <p>None, which
     * is treated as Do53.</p> </li> </ul>
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p> The protocols for the Resolver endpoints. DoH-FIPS is applicable for inbound
     * endpoints only. </p> <p>For an inbound endpoint you can apply the protocols as
     * follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li> <li> <p>Do53
     * and DoH-FIPS in combination.</p> </li> <li> <p>Do53 alone.</p> </li> <li> <p>DoH
     * alone.</p> </li> <li> <p>DoH-FIPS alone.</p> </li> <li> <p>None, which is
     * treated as Do53.</p> </li> </ul> <p>For an outbound endpoint you can apply the
     * protocols as follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li>
     * <li> <p>Do53 alone.</p> </li> <li> <p>DoH alone.</p> </li> <li> <p>None, which
     * is treated as Do53.</p> </li> </ul>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p> The protocols for the Resolver endpoints. DoH-FIPS is applicable for inbound
     * endpoints only. </p> <p>For an inbound endpoint you can apply the protocols as
     * follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li> <li> <p>Do53
     * and DoH-FIPS in combination.</p> </li> <li> <p>Do53 alone.</p> </li> <li> <p>DoH
     * alone.</p> </li> <li> <p>DoH-FIPS alone.</p> </li> <li> <p>None, which is
     * treated as Do53.</p> </li> </ul> <p>For an outbound endpoint you can apply the
     * protocols as follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li>
     * <li> <p>Do53 alone.</p> </li> <li> <p>DoH alone.</p> </li> <li> <p>None, which
     * is treated as Do53.</p> </li> </ul>
     */
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p> The protocols for the Resolver endpoints. DoH-FIPS is applicable for inbound
     * endpoints only. </p> <p>For an inbound endpoint you can apply the protocols as
     * follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li> <li> <p>Do53
     * and DoH-FIPS in combination.</p> </li> <li> <p>Do53 alone.</p> </li> <li> <p>DoH
     * alone.</p> </li> <li> <p>DoH-FIPS alone.</p> </li> <li> <p>None, which is
     * treated as Do53.</p> </li> </ul> <p>For an outbound endpoint you can apply the
     * protocols as follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li>
     * <li> <p>Do53 alone.</p> </li> <li> <p>DoH alone.</p> </li> <li> <p>None, which
     * is treated as Do53.</p> </li> </ul>
     */
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p> The protocols for the Resolver endpoints. DoH-FIPS is applicable for inbound
     * endpoints only. </p> <p>For an inbound endpoint you can apply the protocols as
     * follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li> <li> <p>Do53
     * and DoH-FIPS in combination.</p> </li> <li> <p>Do53 alone.</p> </li> <li> <p>DoH
     * alone.</p> </li> <li> <p>DoH-FIPS alone.</p> </li> <li> <p>None, which is
     * treated as Do53.</p> </li> </ul> <p>For an outbound endpoint you can apply the
     * protocols as follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li>
     * <li> <p>Do53 alone.</p> </li> <li> <p>DoH alone.</p> </li> <li> <p>None, which
     * is treated as Do53.</p> </li> </ul>
     */
    inline TargetAddress& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}

    /**
     * <p> The protocols for the Resolver endpoints. DoH-FIPS is applicable for inbound
     * endpoints only. </p> <p>For an inbound endpoint you can apply the protocols as
     * follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li> <li> <p>Do53
     * and DoH-FIPS in combination.</p> </li> <li> <p>Do53 alone.</p> </li> <li> <p>DoH
     * alone.</p> </li> <li> <p>DoH-FIPS alone.</p> </li> <li> <p>None, which is
     * treated as Do53.</p> </li> </ul> <p>For an outbound endpoint you can apply the
     * protocols as follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li>
     * <li> <p>Do53 alone.</p> </li> <li> <p>DoH alone.</p> </li> <li> <p>None, which
     * is treated as Do53.</p> </li> </ul>
     */
    inline TargetAddress& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}

  private:

    Aws::String m_ip;
    bool m_ipHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_ipv6;
    bool m_ipv6HasBeenSet = false;

    Protocol m_protocol;
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
