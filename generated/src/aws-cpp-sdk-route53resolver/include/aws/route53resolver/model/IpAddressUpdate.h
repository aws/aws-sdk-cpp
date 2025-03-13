/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
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
namespace Route53Resolver
{
namespace Model
{

  /**
   * <p>In an <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_UpdateResolverEndpoint.html">UpdateResolverEndpoint</a>
   * request, information about an IP address to update.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/IpAddressUpdate">AWS
   * API Reference</a></p>
   */
  class IpAddressUpdate
  {
  public:
    AWS_ROUTE53RESOLVER_API IpAddressUpdate() = default;
    AWS_ROUTE53RESOLVER_API IpAddressUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API IpAddressUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> <i>Only when removing an IP address from a Resolver endpoint</i>: The ID of
     * the IP address that you want to remove. To get this ID, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>.</p>
     */
    inline const Aws::String& GetIpId() const { return m_ipId; }
    inline bool IpIdHasBeenSet() const { return m_ipIdHasBeenSet; }
    template<typename IpIdT = Aws::String>
    void SetIpId(IpIdT&& value) { m_ipIdHasBeenSet = true; m_ipId = std::forward<IpIdT>(value); }
    template<typename IpIdT = Aws::String>
    IpAddressUpdate& WithIpId(IpIdT&& value) { SetIpId(std::forward<IpIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet that includes the IP address that you want to update. To
     * get this ID, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    IpAddressUpdate& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new IPv4 address.</p>
     */
    inline const Aws::String& GetIp() const { return m_ip; }
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }
    template<typename IpT = Aws::String>
    void SetIp(IpT&& value) { m_ipHasBeenSet = true; m_ip = std::forward<IpT>(value); }
    template<typename IpT = Aws::String>
    IpAddressUpdate& WithIp(IpT&& value) { SetIp(std::forward<IpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The new IPv6 address. </p>
     */
    inline const Aws::String& GetIpv6() const { return m_ipv6; }
    inline bool Ipv6HasBeenSet() const { return m_ipv6HasBeenSet; }
    template<typename Ipv6T = Aws::String>
    void SetIpv6(Ipv6T&& value) { m_ipv6HasBeenSet = true; m_ipv6 = std::forward<Ipv6T>(value); }
    template<typename Ipv6T = Aws::String>
    IpAddressUpdate& WithIpv6(Ipv6T&& value) { SetIpv6(std::forward<Ipv6T>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipId;
    bool m_ipIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_ip;
    bool m_ipHasBeenSet = false;

    Aws::String m_ipv6;
    bool m_ipv6HasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
