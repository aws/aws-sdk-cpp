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
  class DisassociateResolverEndpointIpAddressRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API DisassociateResolverEndpointIpAddressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateResolverEndpointIpAddress"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Resolver endpoint that you want to disassociate an IP address
     * from.</p>
     */
    inline const Aws::String& GetResolverEndpointId() const{ return m_resolverEndpointId; }

    /**
     * <p>The ID of the Resolver endpoint that you want to disassociate an IP address
     * from.</p>
     */
    inline bool ResolverEndpointIdHasBeenSet() const { return m_resolverEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the Resolver endpoint that you want to disassociate an IP address
     * from.</p>
     */
    inline void SetResolverEndpointId(const Aws::String& value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId = value; }

    /**
     * <p>The ID of the Resolver endpoint that you want to disassociate an IP address
     * from.</p>
     */
    inline void SetResolverEndpointId(Aws::String&& value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId = std::move(value); }

    /**
     * <p>The ID of the Resolver endpoint that you want to disassociate an IP address
     * from.</p>
     */
    inline void SetResolverEndpointId(const char* value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId.assign(value); }

    /**
     * <p>The ID of the Resolver endpoint that you want to disassociate an IP address
     * from.</p>
     */
    inline DisassociateResolverEndpointIpAddressRequest& WithResolverEndpointId(const Aws::String& value) { SetResolverEndpointId(value); return *this;}

    /**
     * <p>The ID of the Resolver endpoint that you want to disassociate an IP address
     * from.</p>
     */
    inline DisassociateResolverEndpointIpAddressRequest& WithResolverEndpointId(Aws::String&& value) { SetResolverEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Resolver endpoint that you want to disassociate an IP address
     * from.</p>
     */
    inline DisassociateResolverEndpointIpAddressRequest& WithResolverEndpointId(const char* value) { SetResolverEndpointId(value); return *this;}


    /**
     * <p>The IPv4 address that you want to remove from a Resolver endpoint.</p>
     */
    inline const IpAddressUpdate& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The IPv4 address that you want to remove from a Resolver endpoint.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The IPv4 address that you want to remove from a Resolver endpoint.</p>
     */
    inline void SetIpAddress(const IpAddressUpdate& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The IPv4 address that you want to remove from a Resolver endpoint.</p>
     */
    inline void SetIpAddress(IpAddressUpdate&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The IPv4 address that you want to remove from a Resolver endpoint.</p>
     */
    inline DisassociateResolverEndpointIpAddressRequest& WithIpAddress(const IpAddressUpdate& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The IPv4 address that you want to remove from a Resolver endpoint.</p>
     */
    inline DisassociateResolverEndpointIpAddressRequest& WithIpAddress(IpAddressUpdate&& value) { SetIpAddress(std::move(value)); return *this;}

  private:

    Aws::String m_resolverEndpointId;
    bool m_resolverEndpointIdHasBeenSet = false;

    IpAddressUpdate m_ipAddress;
    bool m_ipAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
