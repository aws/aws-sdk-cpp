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
   * <p> Provides information about the IP address type in response to <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_UpdateResolverEndpoint.html">UpdateResolverEndpoint</a>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateIpAddress">AWS
   * API Reference</a></p>
   */
  class UpdateIpAddress
  {
  public:
    AWS_ROUTE53RESOLVER_API UpdateIpAddress() = default;
    AWS_ROUTE53RESOLVER_API UpdateIpAddress(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API UpdateIpAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the IP address, specified by the <code>ResolverEndpointId</code>.
     * </p>
     */
    inline const Aws::String& GetIpId() const { return m_ipId; }
    inline bool IpIdHasBeenSet() const { return m_ipIdHasBeenSet; }
    template<typename IpIdT = Aws::String>
    void SetIpId(IpIdT&& value) { m_ipIdHasBeenSet = true; m_ipId = std::forward<IpIdT>(value); }
    template<typename IpIdT = Aws::String>
    UpdateIpAddress& WithIpId(IpIdT&& value) { SetIpId(std::forward<IpIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IPv6 address that you want to use for DNS queries. </p>
     */
    inline const Aws::String& GetIpv6() const { return m_ipv6; }
    inline bool Ipv6HasBeenSet() const { return m_ipv6HasBeenSet; }
    template<typename Ipv6T = Aws::String>
    void SetIpv6(Ipv6T&& value) { m_ipv6HasBeenSet = true; m_ipv6 = std::forward<Ipv6T>(value); }
    template<typename Ipv6T = Aws::String>
    UpdateIpAddress& WithIpv6(Ipv6T&& value) { SetIpv6(std::forward<Ipv6T>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipId;
    bool m_ipIdHasBeenSet = false;

    Aws::String m_ipv6;
    bool m_ipv6HasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
