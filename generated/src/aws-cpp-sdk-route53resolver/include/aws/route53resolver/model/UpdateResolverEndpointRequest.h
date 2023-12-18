/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/ResolverEndpointType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/UpdateIpAddress.h>
#include <aws/route53resolver/model/Protocol.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class UpdateResolverEndpointRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API UpdateResolverEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResolverEndpoint"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Resolver endpoint that you want to update.</p>
     */
    inline const Aws::String& GetResolverEndpointId() const{ return m_resolverEndpointId; }

    /**
     * <p>The ID of the Resolver endpoint that you want to update.</p>
     */
    inline bool ResolverEndpointIdHasBeenSet() const { return m_resolverEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the Resolver endpoint that you want to update.</p>
     */
    inline void SetResolverEndpointId(const Aws::String& value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId = value; }

    /**
     * <p>The ID of the Resolver endpoint that you want to update.</p>
     */
    inline void SetResolverEndpointId(Aws::String&& value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId = std::move(value); }

    /**
     * <p>The ID of the Resolver endpoint that you want to update.</p>
     */
    inline void SetResolverEndpointId(const char* value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId.assign(value); }

    /**
     * <p>The ID of the Resolver endpoint that you want to update.</p>
     */
    inline UpdateResolverEndpointRequest& WithResolverEndpointId(const Aws::String& value) { SetResolverEndpointId(value); return *this;}

    /**
     * <p>The ID of the Resolver endpoint that you want to update.</p>
     */
    inline UpdateResolverEndpointRequest& WithResolverEndpointId(Aws::String&& value) { SetResolverEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Resolver endpoint that you want to update.</p>
     */
    inline UpdateResolverEndpointRequest& WithResolverEndpointId(const char* value) { SetResolverEndpointId(value); return *this;}


    /**
     * <p>The name of the Resolver endpoint that you want to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Resolver endpoint that you want to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Resolver endpoint that you want to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Resolver endpoint that you want to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Resolver endpoint that you want to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Resolver endpoint that you want to update.</p>
     */
    inline UpdateResolverEndpointRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Resolver endpoint that you want to update.</p>
     */
    inline UpdateResolverEndpointRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Resolver endpoint that you want to update.</p>
     */
    inline UpdateResolverEndpointRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> Specifies the endpoint type for what type of IP address the endpoint uses to
     * forward DNS queries. </p> <p>Updating to <code>IPV6</code> type isn't currently
     * supported.</p>
     */
    inline const ResolverEndpointType& GetResolverEndpointType() const{ return m_resolverEndpointType; }

    /**
     * <p> Specifies the endpoint type for what type of IP address the endpoint uses to
     * forward DNS queries. </p> <p>Updating to <code>IPV6</code> type isn't currently
     * supported.</p>
     */
    inline bool ResolverEndpointTypeHasBeenSet() const { return m_resolverEndpointTypeHasBeenSet; }

    /**
     * <p> Specifies the endpoint type for what type of IP address the endpoint uses to
     * forward DNS queries. </p> <p>Updating to <code>IPV6</code> type isn't currently
     * supported.</p>
     */
    inline void SetResolverEndpointType(const ResolverEndpointType& value) { m_resolverEndpointTypeHasBeenSet = true; m_resolverEndpointType = value; }

    /**
     * <p> Specifies the endpoint type for what type of IP address the endpoint uses to
     * forward DNS queries. </p> <p>Updating to <code>IPV6</code> type isn't currently
     * supported.</p>
     */
    inline void SetResolverEndpointType(ResolverEndpointType&& value) { m_resolverEndpointTypeHasBeenSet = true; m_resolverEndpointType = std::move(value); }

    /**
     * <p> Specifies the endpoint type for what type of IP address the endpoint uses to
     * forward DNS queries. </p> <p>Updating to <code>IPV6</code> type isn't currently
     * supported.</p>
     */
    inline UpdateResolverEndpointRequest& WithResolverEndpointType(const ResolverEndpointType& value) { SetResolverEndpointType(value); return *this;}

    /**
     * <p> Specifies the endpoint type for what type of IP address the endpoint uses to
     * forward DNS queries. </p> <p>Updating to <code>IPV6</code> type isn't currently
     * supported.</p>
     */
    inline UpdateResolverEndpointRequest& WithResolverEndpointType(ResolverEndpointType&& value) { SetResolverEndpointType(std::move(value)); return *this;}


    /**
     * <p> Specifies the IPv6 address when you update the Resolver endpoint from IPv4
     * to dual-stack. If you don't specify an IPv6 address, one will be automatically
     * chosen from your subnet. </p>
     */
    inline const Aws::Vector<UpdateIpAddress>& GetUpdateIpAddresses() const{ return m_updateIpAddresses; }

    /**
     * <p> Specifies the IPv6 address when you update the Resolver endpoint from IPv4
     * to dual-stack. If you don't specify an IPv6 address, one will be automatically
     * chosen from your subnet. </p>
     */
    inline bool UpdateIpAddressesHasBeenSet() const { return m_updateIpAddressesHasBeenSet; }

    /**
     * <p> Specifies the IPv6 address when you update the Resolver endpoint from IPv4
     * to dual-stack. If you don't specify an IPv6 address, one will be automatically
     * chosen from your subnet. </p>
     */
    inline void SetUpdateIpAddresses(const Aws::Vector<UpdateIpAddress>& value) { m_updateIpAddressesHasBeenSet = true; m_updateIpAddresses = value; }

    /**
     * <p> Specifies the IPv6 address when you update the Resolver endpoint from IPv4
     * to dual-stack. If you don't specify an IPv6 address, one will be automatically
     * chosen from your subnet. </p>
     */
    inline void SetUpdateIpAddresses(Aws::Vector<UpdateIpAddress>&& value) { m_updateIpAddressesHasBeenSet = true; m_updateIpAddresses = std::move(value); }

    /**
     * <p> Specifies the IPv6 address when you update the Resolver endpoint from IPv4
     * to dual-stack. If you don't specify an IPv6 address, one will be automatically
     * chosen from your subnet. </p>
     */
    inline UpdateResolverEndpointRequest& WithUpdateIpAddresses(const Aws::Vector<UpdateIpAddress>& value) { SetUpdateIpAddresses(value); return *this;}

    /**
     * <p> Specifies the IPv6 address when you update the Resolver endpoint from IPv4
     * to dual-stack. If you don't specify an IPv6 address, one will be automatically
     * chosen from your subnet. </p>
     */
    inline UpdateResolverEndpointRequest& WithUpdateIpAddresses(Aws::Vector<UpdateIpAddress>&& value) { SetUpdateIpAddresses(std::move(value)); return *this;}

    /**
     * <p> Specifies the IPv6 address when you update the Resolver endpoint from IPv4
     * to dual-stack. If you don't specify an IPv6 address, one will be automatically
     * chosen from your subnet. </p>
     */
    inline UpdateResolverEndpointRequest& AddUpdateIpAddresses(const UpdateIpAddress& value) { m_updateIpAddressesHasBeenSet = true; m_updateIpAddresses.push_back(value); return *this; }

    /**
     * <p> Specifies the IPv6 address when you update the Resolver endpoint from IPv4
     * to dual-stack. If you don't specify an IPv6 address, one will be automatically
     * chosen from your subnet. </p>
     */
    inline UpdateResolverEndpointRequest& AddUpdateIpAddresses(UpdateIpAddress&& value) { m_updateIpAddressesHasBeenSet = true; m_updateIpAddresses.push_back(std::move(value)); return *this; }


    /**
     * <p> The protocols you want to use for the endpoint. DoH-FIPS is applicable for
     * inbound endpoints only. </p> <p>For an inbound endpoint you can apply the
     * protocols as follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li>
     * <li> <p>Do53 and DoH-FIPS in combination.</p> </li> <li> <p>Do53 alone.</p>
     * </li> <li> <p>DoH alone.</p> </li> <li> <p>DoH-FIPS alone.</p> </li> <li>
     * <p>None, which is treated as Do53.</p> </li> </ul> <p>For an outbound endpoint
     * you can apply the protocols as follows:</p> <ul> <li> <p> Do53 and DoH in
     * combination.</p> </li> <li> <p>Do53 alone.</p> </li> <li> <p>DoH alone.</p>
     * </li> <li> <p>None, which is treated as Do53.</p> </li> </ul>  <p>
     * You can't change the protocol of an inbound endpoint directly from only Do53 to
     * only DoH, or DoH-FIPS. This is to prevent a sudden disruption to incoming
     * traffic that relies on Do53. To change the protocol from Do53 to DoH, or
     * DoH-FIPS, you must first enable both Do53 and DoH, or Do53 and DoH-FIPS, to make
     * sure that all incoming traffic has transferred to using the DoH protocol, or
     * DoH-FIPS, and then remove the Do53.</p> 
     */
    inline const Aws::Vector<Protocol>& GetProtocols() const{ return m_protocols; }

    /**
     * <p> The protocols you want to use for the endpoint. DoH-FIPS is applicable for
     * inbound endpoints only. </p> <p>For an inbound endpoint you can apply the
     * protocols as follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li>
     * <li> <p>Do53 and DoH-FIPS in combination.</p> </li> <li> <p>Do53 alone.</p>
     * </li> <li> <p>DoH alone.</p> </li> <li> <p>DoH-FIPS alone.</p> </li> <li>
     * <p>None, which is treated as Do53.</p> </li> </ul> <p>For an outbound endpoint
     * you can apply the protocols as follows:</p> <ul> <li> <p> Do53 and DoH in
     * combination.</p> </li> <li> <p>Do53 alone.</p> </li> <li> <p>DoH alone.</p>
     * </li> <li> <p>None, which is treated as Do53.</p> </li> </ul>  <p>
     * You can't change the protocol of an inbound endpoint directly from only Do53 to
     * only DoH, or DoH-FIPS. This is to prevent a sudden disruption to incoming
     * traffic that relies on Do53. To change the protocol from Do53 to DoH, or
     * DoH-FIPS, you must first enable both Do53 and DoH, or Do53 and DoH-FIPS, to make
     * sure that all incoming traffic has transferred to using the DoH protocol, or
     * DoH-FIPS, and then remove the Do53.</p> 
     */
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }

    /**
     * <p> The protocols you want to use for the endpoint. DoH-FIPS is applicable for
     * inbound endpoints only. </p> <p>For an inbound endpoint you can apply the
     * protocols as follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li>
     * <li> <p>Do53 and DoH-FIPS in combination.</p> </li> <li> <p>Do53 alone.</p>
     * </li> <li> <p>DoH alone.</p> </li> <li> <p>DoH-FIPS alone.</p> </li> <li>
     * <p>None, which is treated as Do53.</p> </li> </ul> <p>For an outbound endpoint
     * you can apply the protocols as follows:</p> <ul> <li> <p> Do53 and DoH in
     * combination.</p> </li> <li> <p>Do53 alone.</p> </li> <li> <p>DoH alone.</p>
     * </li> <li> <p>None, which is treated as Do53.</p> </li> </ul>  <p>
     * You can't change the protocol of an inbound endpoint directly from only Do53 to
     * only DoH, or DoH-FIPS. This is to prevent a sudden disruption to incoming
     * traffic that relies on Do53. To change the protocol from Do53 to DoH, or
     * DoH-FIPS, you must first enable both Do53 and DoH, or Do53 and DoH-FIPS, to make
     * sure that all incoming traffic has transferred to using the DoH protocol, or
     * DoH-FIPS, and then remove the Do53.</p> 
     */
    inline void SetProtocols(const Aws::Vector<Protocol>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }

    /**
     * <p> The protocols you want to use for the endpoint. DoH-FIPS is applicable for
     * inbound endpoints only. </p> <p>For an inbound endpoint you can apply the
     * protocols as follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li>
     * <li> <p>Do53 and DoH-FIPS in combination.</p> </li> <li> <p>Do53 alone.</p>
     * </li> <li> <p>DoH alone.</p> </li> <li> <p>DoH-FIPS alone.</p> </li> <li>
     * <p>None, which is treated as Do53.</p> </li> </ul> <p>For an outbound endpoint
     * you can apply the protocols as follows:</p> <ul> <li> <p> Do53 and DoH in
     * combination.</p> </li> <li> <p>Do53 alone.</p> </li> <li> <p>DoH alone.</p>
     * </li> <li> <p>None, which is treated as Do53.</p> </li> </ul>  <p>
     * You can't change the protocol of an inbound endpoint directly from only Do53 to
     * only DoH, or DoH-FIPS. This is to prevent a sudden disruption to incoming
     * traffic that relies on Do53. To change the protocol from Do53 to DoH, or
     * DoH-FIPS, you must first enable both Do53 and DoH, or Do53 and DoH-FIPS, to make
     * sure that all incoming traffic has transferred to using the DoH protocol, or
     * DoH-FIPS, and then remove the Do53.</p> 
     */
    inline void SetProtocols(Aws::Vector<Protocol>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }

    /**
     * <p> The protocols you want to use for the endpoint. DoH-FIPS is applicable for
     * inbound endpoints only. </p> <p>For an inbound endpoint you can apply the
     * protocols as follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li>
     * <li> <p>Do53 and DoH-FIPS in combination.</p> </li> <li> <p>Do53 alone.</p>
     * </li> <li> <p>DoH alone.</p> </li> <li> <p>DoH-FIPS alone.</p> </li> <li>
     * <p>None, which is treated as Do53.</p> </li> </ul> <p>For an outbound endpoint
     * you can apply the protocols as follows:</p> <ul> <li> <p> Do53 and DoH in
     * combination.</p> </li> <li> <p>Do53 alone.</p> </li> <li> <p>DoH alone.</p>
     * </li> <li> <p>None, which is treated as Do53.</p> </li> </ul>  <p>
     * You can't change the protocol of an inbound endpoint directly from only Do53 to
     * only DoH, or DoH-FIPS. This is to prevent a sudden disruption to incoming
     * traffic that relies on Do53. To change the protocol from Do53 to DoH, or
     * DoH-FIPS, you must first enable both Do53 and DoH, or Do53 and DoH-FIPS, to make
     * sure that all incoming traffic has transferred to using the DoH protocol, or
     * DoH-FIPS, and then remove the Do53.</p> 
     */
    inline UpdateResolverEndpointRequest& WithProtocols(const Aws::Vector<Protocol>& value) { SetProtocols(value); return *this;}

    /**
     * <p> The protocols you want to use for the endpoint. DoH-FIPS is applicable for
     * inbound endpoints only. </p> <p>For an inbound endpoint you can apply the
     * protocols as follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li>
     * <li> <p>Do53 and DoH-FIPS in combination.</p> </li> <li> <p>Do53 alone.</p>
     * </li> <li> <p>DoH alone.</p> </li> <li> <p>DoH-FIPS alone.</p> </li> <li>
     * <p>None, which is treated as Do53.</p> </li> </ul> <p>For an outbound endpoint
     * you can apply the protocols as follows:</p> <ul> <li> <p> Do53 and DoH in
     * combination.</p> </li> <li> <p>Do53 alone.</p> </li> <li> <p>DoH alone.</p>
     * </li> <li> <p>None, which is treated as Do53.</p> </li> </ul>  <p>
     * You can't change the protocol of an inbound endpoint directly from only Do53 to
     * only DoH, or DoH-FIPS. This is to prevent a sudden disruption to incoming
     * traffic that relies on Do53. To change the protocol from Do53 to DoH, or
     * DoH-FIPS, you must first enable both Do53 and DoH, or Do53 and DoH-FIPS, to make
     * sure that all incoming traffic has transferred to using the DoH protocol, or
     * DoH-FIPS, and then remove the Do53.</p> 
     */
    inline UpdateResolverEndpointRequest& WithProtocols(Aws::Vector<Protocol>&& value) { SetProtocols(std::move(value)); return *this;}

    /**
     * <p> The protocols you want to use for the endpoint. DoH-FIPS is applicable for
     * inbound endpoints only. </p> <p>For an inbound endpoint you can apply the
     * protocols as follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li>
     * <li> <p>Do53 and DoH-FIPS in combination.</p> </li> <li> <p>Do53 alone.</p>
     * </li> <li> <p>DoH alone.</p> </li> <li> <p>DoH-FIPS alone.</p> </li> <li>
     * <p>None, which is treated as Do53.</p> </li> </ul> <p>For an outbound endpoint
     * you can apply the protocols as follows:</p> <ul> <li> <p> Do53 and DoH in
     * combination.</p> </li> <li> <p>Do53 alone.</p> </li> <li> <p>DoH alone.</p>
     * </li> <li> <p>None, which is treated as Do53.</p> </li> </ul>  <p>
     * You can't change the protocol of an inbound endpoint directly from only Do53 to
     * only DoH, or DoH-FIPS. This is to prevent a sudden disruption to incoming
     * traffic that relies on Do53. To change the protocol from Do53 to DoH, or
     * DoH-FIPS, you must first enable both Do53 and DoH, or Do53 and DoH-FIPS, to make
     * sure that all incoming traffic has transferred to using the DoH protocol, or
     * DoH-FIPS, and then remove the Do53.</p> 
     */
    inline UpdateResolverEndpointRequest& AddProtocols(const Protocol& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }

    /**
     * <p> The protocols you want to use for the endpoint. DoH-FIPS is applicable for
     * inbound endpoints only. </p> <p>For an inbound endpoint you can apply the
     * protocols as follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li>
     * <li> <p>Do53 and DoH-FIPS in combination.</p> </li> <li> <p>Do53 alone.</p>
     * </li> <li> <p>DoH alone.</p> </li> <li> <p>DoH-FIPS alone.</p> </li> <li>
     * <p>None, which is treated as Do53.</p> </li> </ul> <p>For an outbound endpoint
     * you can apply the protocols as follows:</p> <ul> <li> <p> Do53 and DoH in
     * combination.</p> </li> <li> <p>Do53 alone.</p> </li> <li> <p>DoH alone.</p>
     * </li> <li> <p>None, which is treated as Do53.</p> </li> </ul>  <p>
     * You can't change the protocol of an inbound endpoint directly from only Do53 to
     * only DoH, or DoH-FIPS. This is to prevent a sudden disruption to incoming
     * traffic that relies on Do53. To change the protocol from Do53 to DoH, or
     * DoH-FIPS, you must first enable both Do53 and DoH, or Do53 and DoH-FIPS, to make
     * sure that all incoming traffic has transferred to using the DoH protocol, or
     * DoH-FIPS, and then remove the Do53.</p> 
     */
    inline UpdateResolverEndpointRequest& AddProtocols(Protocol&& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resolverEndpointId;
    bool m_resolverEndpointIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ResolverEndpointType m_resolverEndpointType;
    bool m_resolverEndpointTypeHasBeenSet = false;

    Aws::Vector<UpdateIpAddress> m_updateIpAddresses;
    bool m_updateIpAddressesHasBeenSet = false;

    Aws::Vector<Protocol> m_protocols;
    bool m_protocolsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
