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
    AWS_ROUTE53RESOLVER_API UpdateResolverEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResolverEndpoint"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Resolver endpoint that you want to update.</p>
     */
    inline const Aws::String& GetResolverEndpointId() const { return m_resolverEndpointId; }
    inline bool ResolverEndpointIdHasBeenSet() const { return m_resolverEndpointIdHasBeenSet; }
    template<typename ResolverEndpointIdT = Aws::String>
    void SetResolverEndpointId(ResolverEndpointIdT&& value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId = std::forward<ResolverEndpointIdT>(value); }
    template<typename ResolverEndpointIdT = Aws::String>
    UpdateResolverEndpointRequest& WithResolverEndpointId(ResolverEndpointIdT&& value) { SetResolverEndpointId(std::forward<ResolverEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Resolver endpoint that you want to update.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateResolverEndpointRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the endpoint type for what type of IP address the endpoint uses to
     * forward DNS queries. </p> <p>Updating to <code>IPV6</code> type isn't currently
     * supported.</p>
     */
    inline ResolverEndpointType GetResolverEndpointType() const { return m_resolverEndpointType; }
    inline bool ResolverEndpointTypeHasBeenSet() const { return m_resolverEndpointTypeHasBeenSet; }
    inline void SetResolverEndpointType(ResolverEndpointType value) { m_resolverEndpointTypeHasBeenSet = true; m_resolverEndpointType = value; }
    inline UpdateResolverEndpointRequest& WithResolverEndpointType(ResolverEndpointType value) { SetResolverEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the IPv6 address when you update the Resolver endpoint from IPv4
     * to dual-stack. If you don't specify an IPv6 address, one will be automatically
     * chosen from your subnet. </p>
     */
    inline const Aws::Vector<UpdateIpAddress>& GetUpdateIpAddresses() const { return m_updateIpAddresses; }
    inline bool UpdateIpAddressesHasBeenSet() const { return m_updateIpAddressesHasBeenSet; }
    template<typename UpdateIpAddressesT = Aws::Vector<UpdateIpAddress>>
    void SetUpdateIpAddresses(UpdateIpAddressesT&& value) { m_updateIpAddressesHasBeenSet = true; m_updateIpAddresses = std::forward<UpdateIpAddressesT>(value); }
    template<typename UpdateIpAddressesT = Aws::Vector<UpdateIpAddress>>
    UpdateResolverEndpointRequest& WithUpdateIpAddresses(UpdateIpAddressesT&& value) { SetUpdateIpAddresses(std::forward<UpdateIpAddressesT>(value)); return *this;}
    template<typename UpdateIpAddressesT = UpdateIpAddress>
    UpdateResolverEndpointRequest& AddUpdateIpAddresses(UpdateIpAddressesT&& value) { m_updateIpAddressesHasBeenSet = true; m_updateIpAddresses.emplace_back(std::forward<UpdateIpAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The protocols you want to use for the endpoint. DoH-FIPS is applicable for
     * default inbound endpoints only. </p> <p>For a default inbound endpoint you can
     * apply the protocols as follows:</p> <ul> <li> <p> Do53 and DoH in
     * combination.</p> </li> <li> <p>Do53 and DoH-FIPS in combination.</p> </li> <li>
     * <p>Do53 alone.</p> </li> <li> <p>DoH alone.</p> </li> <li> <p>DoH-FIPS
     * alone.</p> </li> <li> <p>None, which is treated as Do53.</p> </li> </ul> <p>For
     * a delegation inbound endpoint you can use Do53 only.</p> <p>For an outbound
     * endpoint you can apply the protocols as follows:</p> <ul> <li> <p> Do53 and DoH
     * in combination.</p> </li> <li> <p>Do53 alone.</p> </li> <li> <p>DoH alone.</p>
     * </li> <li> <p>None, which is treated as Do53.</p> </li> </ul>  <p>
     * You can't change the protocol of an inbound endpoint directly from only Do53 to
     * only DoH, or DoH-FIPS. This is to prevent a sudden disruption to incoming
     * traffic that relies on Do53. To change the protocol from Do53 to DoH, or
     * DoH-FIPS, you must first enable both Do53 and DoH, or Do53 and DoH-FIPS, to make
     * sure that all incoming traffic has transferred to using the DoH protocol, or
     * DoH-FIPS, and then remove the Do53.</p> 
     */
    inline const Aws::Vector<Protocol>& GetProtocols() const { return m_protocols; }
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
    template<typename ProtocolsT = Aws::Vector<Protocol>>
    void SetProtocols(ProtocolsT&& value) { m_protocolsHasBeenSet = true; m_protocols = std::forward<ProtocolsT>(value); }
    template<typename ProtocolsT = Aws::Vector<Protocol>>
    UpdateResolverEndpointRequest& WithProtocols(ProtocolsT&& value) { SetProtocols(std::forward<ProtocolsT>(value)); return *this;}
    inline UpdateResolverEndpointRequest& AddProtocols(Protocol value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_resolverEndpointId;
    bool m_resolverEndpointIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ResolverEndpointType m_resolverEndpointType{ResolverEndpointType::NOT_SET};
    bool m_resolverEndpointTypeHasBeenSet = false;

    Aws::Vector<UpdateIpAddress> m_updateIpAddresses;
    bool m_updateIpAddressesHasBeenSet = false;

    Aws::Vector<Protocol> m_protocols;
    bool m_protocolsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
