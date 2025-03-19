/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/IpAddressUpdate.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class AssociateResolverEndpointIpAddressRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API AssociateResolverEndpointIpAddressRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateResolverEndpointIpAddress"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Resolver endpoint that you want to associate IP addresses
     * with.</p>
     */
    inline const Aws::String& GetResolverEndpointId() const { return m_resolverEndpointId; }
    inline bool ResolverEndpointIdHasBeenSet() const { return m_resolverEndpointIdHasBeenSet; }
    template<typename ResolverEndpointIdT = Aws::String>
    void SetResolverEndpointId(ResolverEndpointIdT&& value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId = std::forward<ResolverEndpointIdT>(value); }
    template<typename ResolverEndpointIdT = Aws::String>
    AssociateResolverEndpointIpAddressRequest& WithResolverEndpointId(ResolverEndpointIdT&& value) { SetResolverEndpointId(std::forward<ResolverEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Either the IPv4 address that you want to add to a Resolver endpoint or a
     * subnet ID. If you specify a subnet ID, Resolver chooses an IP address for you
     * from the available IPs in the specified subnet.</p>
     */
    inline const IpAddressUpdate& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = IpAddressUpdate>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = IpAddressUpdate>
    AssociateResolverEndpointIpAddressRequest& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resolverEndpointId;
    bool m_resolverEndpointIdHasBeenSet = false;

    IpAddressUpdate m_ipAddress;
    bool m_ipAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
