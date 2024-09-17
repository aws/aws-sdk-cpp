/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/ResolverEndpointDirection.h>
#include <aws/route53resolver/model/ResolverEndpointType.h>
#include <aws/route53resolver/model/IpAddressRequest.h>
#include <aws/route53resolver/model/Tag.h>
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
  class CreateResolverEndpointRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API CreateResolverEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResolverEndpoint"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }
    inline CreateResolverEndpointRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}
    inline CreateResolverEndpointRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}
    inline CreateResolverEndpointRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateResolverEndpointRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateResolverEndpointRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateResolverEndpointRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of one or more security groups that you want to use to control access
     * to this VPC. The security group that you specify must include one or more
     * inbound rules (for inbound Resolver endpoints) or outbound rules (for outbound
     * Resolver endpoints). Inbound and outbound rules must allow TCP and UDP access.
     * For inbound access, open port 53. For outbound access, open the port that you're
     * using for DNS queries on your network.</p> <p>Some security group rules will
     * cause your connection to be tracked. For outbound resolver endpoint, it can
     * potentially impact the maximum queries per second from outbound endpoint to your
     * target name server. For inbound resolver endpoint, it can bring down the overall
     * maximum queries per second per IP address to as low as 1500. To avoid connection
     * tracking caused by security group, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/security-group-connection-tracking.html#untracked-connectionsl">Untracked
     * connections</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline CreateResolverEndpointRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline CreateResolverEndpointRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline CreateResolverEndpointRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline CreateResolverEndpointRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline CreateResolverEndpointRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify the applicable value:</p> <ul> <li> <p> <code>INBOUND</code>:
     * Resolver forwards DNS queries to the DNS service for a VPC from your network</p>
     * </li> <li> <p> <code>OUTBOUND</code>: Resolver forwards DNS queries from the DNS
     * service for a VPC to your network</p> </li> </ul>
     */
    inline const ResolverEndpointDirection& GetDirection() const{ return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    inline void SetDirection(const ResolverEndpointDirection& value) { m_directionHasBeenSet = true; m_direction = value; }
    inline void SetDirection(ResolverEndpointDirection&& value) { m_directionHasBeenSet = true; m_direction = std::move(value); }
    inline CreateResolverEndpointRequest& WithDirection(const ResolverEndpointDirection& value) { SetDirection(value); return *this;}
    inline CreateResolverEndpointRequest& WithDirection(ResolverEndpointDirection&& value) { SetDirection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnets and IP addresses in your VPC that DNS queries originate from (for
     * outbound endpoints) or that you forward DNS queries to (for inbound endpoints).
     * The subnet ID uniquely identifies a VPC. </p>  <p>Even though the minimum
     * is 1, Route 53 requires that you create at least two.</p> 
     */
    inline const Aws::Vector<IpAddressRequest>& GetIpAddresses() const{ return m_ipAddresses; }
    inline bool IpAddressesHasBeenSet() const { return m_ipAddressesHasBeenSet; }
    inline void SetIpAddresses(const Aws::Vector<IpAddressRequest>& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = value; }
    inline void SetIpAddresses(Aws::Vector<IpAddressRequest>&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = std::move(value); }
    inline CreateResolverEndpointRequest& WithIpAddresses(const Aws::Vector<IpAddressRequest>& value) { SetIpAddresses(value); return *this;}
    inline CreateResolverEndpointRequest& WithIpAddresses(Aws::Vector<IpAddressRequest>&& value) { SetIpAddresses(std::move(value)); return *this;}
    inline CreateResolverEndpointRequest& AddIpAddresses(const IpAddressRequest& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(value); return *this; }
    inline CreateResolverEndpointRequest& AddIpAddresses(IpAddressRequest&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify this, you must
     * also specify a value for the <code>PreferredInstanceType</code>. </p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }
    inline CreateResolverEndpointRequest& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}
    inline CreateResolverEndpointRequest& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}
    inline CreateResolverEndpointRequest& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type. If you specify this, you must also specify a value for the
     * <code>OutpostArn</code>.</p>
     */
    inline const Aws::String& GetPreferredInstanceType() const{ return m_preferredInstanceType; }
    inline bool PreferredInstanceTypeHasBeenSet() const { return m_preferredInstanceTypeHasBeenSet; }
    inline void SetPreferredInstanceType(const Aws::String& value) { m_preferredInstanceTypeHasBeenSet = true; m_preferredInstanceType = value; }
    inline void SetPreferredInstanceType(Aws::String&& value) { m_preferredInstanceTypeHasBeenSet = true; m_preferredInstanceType = std::move(value); }
    inline void SetPreferredInstanceType(const char* value) { m_preferredInstanceTypeHasBeenSet = true; m_preferredInstanceType.assign(value); }
    inline CreateResolverEndpointRequest& WithPreferredInstanceType(const Aws::String& value) { SetPreferredInstanceType(value); return *this;}
    inline CreateResolverEndpointRequest& WithPreferredInstanceType(Aws::String&& value) { SetPreferredInstanceType(std::move(value)); return *this;}
    inline CreateResolverEndpointRequest& WithPreferredInstanceType(const char* value) { SetPreferredInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the tag keys and values that you want to associate with the
     * endpoint.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateResolverEndpointRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateResolverEndpointRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateResolverEndpointRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateResolverEndpointRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> For the endpoint type you can choose either IPv4, IPv6, or dual-stack. A
     * dual-stack endpoint means that it will resolve via both IPv4 and IPv6. This
     * endpoint type is applied to all IP addresses. </p>
     */
    inline const ResolverEndpointType& GetResolverEndpointType() const{ return m_resolverEndpointType; }
    inline bool ResolverEndpointTypeHasBeenSet() const { return m_resolverEndpointTypeHasBeenSet; }
    inline void SetResolverEndpointType(const ResolverEndpointType& value) { m_resolverEndpointTypeHasBeenSet = true; m_resolverEndpointType = value; }
    inline void SetResolverEndpointType(ResolverEndpointType&& value) { m_resolverEndpointTypeHasBeenSet = true; m_resolverEndpointType = std::move(value); }
    inline CreateResolverEndpointRequest& WithResolverEndpointType(const ResolverEndpointType& value) { SetResolverEndpointType(value); return *this;}
    inline CreateResolverEndpointRequest& WithResolverEndpointType(ResolverEndpointType&& value) { SetResolverEndpointType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The protocols you want to use for the endpoint. DoH-FIPS is applicable for
     * inbound endpoints only. </p> <p>For an inbound endpoint you can apply the
     * protocols as follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li>
     * <li> <p>Do53 and DoH-FIPS in combination.</p> </li> <li> <p>Do53 alone.</p>
     * </li> <li> <p>DoH alone.</p> </li> <li> <p>DoH-FIPS alone.</p> </li> <li>
     * <p>None, which is treated as Do53.</p> </li> </ul> <p>For an outbound endpoint
     * you can apply the protocols as follows:</p> <ul> <li> <p> Do53 and DoH in
     * combination.</p> </li> <li> <p>Do53 alone.</p> </li> <li> <p>DoH alone.</p>
     * </li> <li> <p>None, which is treated as Do53.</p> </li> </ul>
     */
    inline const Aws::Vector<Protocol>& GetProtocols() const{ return m_protocols; }
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
    inline void SetProtocols(const Aws::Vector<Protocol>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }
    inline void SetProtocols(Aws::Vector<Protocol>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }
    inline CreateResolverEndpointRequest& WithProtocols(const Aws::Vector<Protocol>& value) { SetProtocols(value); return *this;}
    inline CreateResolverEndpointRequest& WithProtocols(Aws::Vector<Protocol>&& value) { SetProtocols(std::move(value)); return *this;}
    inline CreateResolverEndpointRequest& AddProtocols(const Protocol& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }
    inline CreateResolverEndpointRequest& AddProtocols(Protocol&& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    ResolverEndpointDirection m_direction;
    bool m_directionHasBeenSet = false;

    Aws::Vector<IpAddressRequest> m_ipAddresses;
    bool m_ipAddressesHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::String m_preferredInstanceType;
    bool m_preferredInstanceTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ResolverEndpointType m_resolverEndpointType;
    bool m_resolverEndpointTypeHasBeenSet = false;

    Aws::Vector<Protocol> m_protocols;
    bool m_protocolsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
