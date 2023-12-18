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


    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline CreateResolverEndpointRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline CreateResolverEndpointRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline CreateResolverEndpointRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline CreateResolverEndpointRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline CreateResolverEndpointRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name that lets you easily find a configuration in the Resolver
     * dashboard in the Route 53 console.</p>
     */
    inline CreateResolverEndpointRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of one or more security groups that you want to use to control access
     * to this VPC. The security group that you specify must include one or more
     * inbound rules (for inbound Resolver endpoints) or outbound rules (for outbound
     * Resolver endpoints). Inbound and outbound rules must allow TCP and UDP access.
     * For inbound access, open port 53. For outbound access, open the port that you're
     * using for DNS queries on your network.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The ID of one or more security groups that you want to use to control access
     * to this VPC. The security group that you specify must include one or more
     * inbound rules (for inbound Resolver endpoints) or outbound rules (for outbound
     * Resolver endpoints). Inbound and outbound rules must allow TCP and UDP access.
     * For inbound access, open port 53. For outbound access, open the port that you're
     * using for DNS queries on your network.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The ID of one or more security groups that you want to use to control access
     * to this VPC. The security group that you specify must include one or more
     * inbound rules (for inbound Resolver endpoints) or outbound rules (for outbound
     * Resolver endpoints). Inbound and outbound rules must allow TCP and UDP access.
     * For inbound access, open port 53. For outbound access, open the port that you're
     * using for DNS queries on your network.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The ID of one or more security groups that you want to use to control access
     * to this VPC. The security group that you specify must include one or more
     * inbound rules (for inbound Resolver endpoints) or outbound rules (for outbound
     * Resolver endpoints). Inbound and outbound rules must allow TCP and UDP access.
     * For inbound access, open port 53. For outbound access, open the port that you're
     * using for DNS queries on your network.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The ID of one or more security groups that you want to use to control access
     * to this VPC. The security group that you specify must include one or more
     * inbound rules (for inbound Resolver endpoints) or outbound rules (for outbound
     * Resolver endpoints). Inbound and outbound rules must allow TCP and UDP access.
     * For inbound access, open port 53. For outbound access, open the port that you're
     * using for DNS queries on your network.</p>
     */
    inline CreateResolverEndpointRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The ID of one or more security groups that you want to use to control access
     * to this VPC. The security group that you specify must include one or more
     * inbound rules (for inbound Resolver endpoints) or outbound rules (for outbound
     * Resolver endpoints). Inbound and outbound rules must allow TCP and UDP access.
     * For inbound access, open port 53. For outbound access, open the port that you're
     * using for DNS queries on your network.</p>
     */
    inline CreateResolverEndpointRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The ID of one or more security groups that you want to use to control access
     * to this VPC. The security group that you specify must include one or more
     * inbound rules (for inbound Resolver endpoints) or outbound rules (for outbound
     * Resolver endpoints). Inbound and outbound rules must allow TCP and UDP access.
     * For inbound access, open port 53. For outbound access, open the port that you're
     * using for DNS queries on your network.</p>
     */
    inline CreateResolverEndpointRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The ID of one or more security groups that you want to use to control access
     * to this VPC. The security group that you specify must include one or more
     * inbound rules (for inbound Resolver endpoints) or outbound rules (for outbound
     * Resolver endpoints). Inbound and outbound rules must allow TCP and UDP access.
     * For inbound access, open port 53. For outbound access, open the port that you're
     * using for DNS queries on your network.</p>
     */
    inline CreateResolverEndpointRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of one or more security groups that you want to use to control access
     * to this VPC. The security group that you specify must include one or more
     * inbound rules (for inbound Resolver endpoints) or outbound rules (for outbound
     * Resolver endpoints). Inbound and outbound rules must allow TCP and UDP access.
     * For inbound access, open port 53. For outbound access, open the port that you're
     * using for DNS queries on your network.</p>
     */
    inline CreateResolverEndpointRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>Specify the applicable value:</p> <ul> <li> <p> <code>INBOUND</code>:
     * Resolver forwards DNS queries to the DNS service for a VPC from your network</p>
     * </li> <li> <p> <code>OUTBOUND</code>: Resolver forwards DNS queries from the DNS
     * service for a VPC to your network</p> </li> </ul>
     */
    inline const ResolverEndpointDirection& GetDirection() const{ return m_direction; }

    /**
     * <p>Specify the applicable value:</p> <ul> <li> <p> <code>INBOUND</code>:
     * Resolver forwards DNS queries to the DNS service for a VPC from your network</p>
     * </li> <li> <p> <code>OUTBOUND</code>: Resolver forwards DNS queries from the DNS
     * service for a VPC to your network</p> </li> </ul>
     */
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }

    /**
     * <p>Specify the applicable value:</p> <ul> <li> <p> <code>INBOUND</code>:
     * Resolver forwards DNS queries to the DNS service for a VPC from your network</p>
     * </li> <li> <p> <code>OUTBOUND</code>: Resolver forwards DNS queries from the DNS
     * service for a VPC to your network</p> </li> </ul>
     */
    inline void SetDirection(const ResolverEndpointDirection& value) { m_directionHasBeenSet = true; m_direction = value; }

    /**
     * <p>Specify the applicable value:</p> <ul> <li> <p> <code>INBOUND</code>:
     * Resolver forwards DNS queries to the DNS service for a VPC from your network</p>
     * </li> <li> <p> <code>OUTBOUND</code>: Resolver forwards DNS queries from the DNS
     * service for a VPC to your network</p> </li> </ul>
     */
    inline void SetDirection(ResolverEndpointDirection&& value) { m_directionHasBeenSet = true; m_direction = std::move(value); }

    /**
     * <p>Specify the applicable value:</p> <ul> <li> <p> <code>INBOUND</code>:
     * Resolver forwards DNS queries to the DNS service for a VPC from your network</p>
     * </li> <li> <p> <code>OUTBOUND</code>: Resolver forwards DNS queries from the DNS
     * service for a VPC to your network</p> </li> </ul>
     */
    inline CreateResolverEndpointRequest& WithDirection(const ResolverEndpointDirection& value) { SetDirection(value); return *this;}

    /**
     * <p>Specify the applicable value:</p> <ul> <li> <p> <code>INBOUND</code>:
     * Resolver forwards DNS queries to the DNS service for a VPC from your network</p>
     * </li> <li> <p> <code>OUTBOUND</code>: Resolver forwards DNS queries from the DNS
     * service for a VPC to your network</p> </li> </ul>
     */
    inline CreateResolverEndpointRequest& WithDirection(ResolverEndpointDirection&& value) { SetDirection(std::move(value)); return *this;}


    /**
     * <p>The subnets and IP addresses in your VPC that DNS queries originate from (for
     * outbound endpoints) or that you forward DNS queries to (for inbound endpoints).
     * The subnet ID uniquely identifies a VPC. </p>  <p>Even though the minimum
     * is 1, Route 53 requires that you create at least two.</p> 
     */
    inline const Aws::Vector<IpAddressRequest>& GetIpAddresses() const{ return m_ipAddresses; }

    /**
     * <p>The subnets and IP addresses in your VPC that DNS queries originate from (for
     * outbound endpoints) or that you forward DNS queries to (for inbound endpoints).
     * The subnet ID uniquely identifies a VPC. </p>  <p>Even though the minimum
     * is 1, Route 53 requires that you create at least two.</p> 
     */
    inline bool IpAddressesHasBeenSet() const { return m_ipAddressesHasBeenSet; }

    /**
     * <p>The subnets and IP addresses in your VPC that DNS queries originate from (for
     * outbound endpoints) or that you forward DNS queries to (for inbound endpoints).
     * The subnet ID uniquely identifies a VPC. </p>  <p>Even though the minimum
     * is 1, Route 53 requires that you create at least two.</p> 
     */
    inline void SetIpAddresses(const Aws::Vector<IpAddressRequest>& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = value; }

    /**
     * <p>The subnets and IP addresses in your VPC that DNS queries originate from (for
     * outbound endpoints) or that you forward DNS queries to (for inbound endpoints).
     * The subnet ID uniquely identifies a VPC. </p>  <p>Even though the minimum
     * is 1, Route 53 requires that you create at least two.</p> 
     */
    inline void SetIpAddresses(Aws::Vector<IpAddressRequest>&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = std::move(value); }

    /**
     * <p>The subnets and IP addresses in your VPC that DNS queries originate from (for
     * outbound endpoints) or that you forward DNS queries to (for inbound endpoints).
     * The subnet ID uniquely identifies a VPC. </p>  <p>Even though the minimum
     * is 1, Route 53 requires that you create at least two.</p> 
     */
    inline CreateResolverEndpointRequest& WithIpAddresses(const Aws::Vector<IpAddressRequest>& value) { SetIpAddresses(value); return *this;}

    /**
     * <p>The subnets and IP addresses in your VPC that DNS queries originate from (for
     * outbound endpoints) or that you forward DNS queries to (for inbound endpoints).
     * The subnet ID uniquely identifies a VPC. </p>  <p>Even though the minimum
     * is 1, Route 53 requires that you create at least two.</p> 
     */
    inline CreateResolverEndpointRequest& WithIpAddresses(Aws::Vector<IpAddressRequest>&& value) { SetIpAddresses(std::move(value)); return *this;}

    /**
     * <p>The subnets and IP addresses in your VPC that DNS queries originate from (for
     * outbound endpoints) or that you forward DNS queries to (for inbound endpoints).
     * The subnet ID uniquely identifies a VPC. </p>  <p>Even though the minimum
     * is 1, Route 53 requires that you create at least two.</p> 
     */
    inline CreateResolverEndpointRequest& AddIpAddresses(const IpAddressRequest& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(value); return *this; }

    /**
     * <p>The subnets and IP addresses in your VPC that DNS queries originate from (for
     * outbound endpoints) or that you forward DNS queries to (for inbound endpoints).
     * The subnet ID uniquely identifies a VPC. </p>  <p>Even though the minimum
     * is 1, Route 53 requires that you create at least two.</p> 
     */
    inline CreateResolverEndpointRequest& AddIpAddresses(IpAddressRequest&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify this, you must
     * also specify a value for the <code>PreferredInstanceType</code>. </p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify this, you must
     * also specify a value for the <code>PreferredInstanceType</code>. </p>
     */
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify this, you must
     * also specify a value for the <code>PreferredInstanceType</code>. </p>
     */
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify this, you must
     * also specify a value for the <code>PreferredInstanceType</code>. </p>
     */
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify this, you must
     * also specify a value for the <code>PreferredInstanceType</code>. </p>
     */
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify this, you must
     * also specify a value for the <code>PreferredInstanceType</code>. </p>
     */
    inline CreateResolverEndpointRequest& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify this, you must
     * also specify a value for the <code>PreferredInstanceType</code>. </p>
     */
    inline CreateResolverEndpointRequest& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost. If you specify this, you must
     * also specify a value for the <code>PreferredInstanceType</code>. </p>
     */
    inline CreateResolverEndpointRequest& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}


    /**
     * <p>The instance type. If you specify this, you must also specify a value for the
     * <code>OutpostArn</code>.</p>
     */
    inline const Aws::String& GetPreferredInstanceType() const{ return m_preferredInstanceType; }

    /**
     * <p>The instance type. If you specify this, you must also specify a value for the
     * <code>OutpostArn</code>.</p>
     */
    inline bool PreferredInstanceTypeHasBeenSet() const { return m_preferredInstanceTypeHasBeenSet; }

    /**
     * <p>The instance type. If you specify this, you must also specify a value for the
     * <code>OutpostArn</code>.</p>
     */
    inline void SetPreferredInstanceType(const Aws::String& value) { m_preferredInstanceTypeHasBeenSet = true; m_preferredInstanceType = value; }

    /**
     * <p>The instance type. If you specify this, you must also specify a value for the
     * <code>OutpostArn</code>.</p>
     */
    inline void SetPreferredInstanceType(Aws::String&& value) { m_preferredInstanceTypeHasBeenSet = true; m_preferredInstanceType = std::move(value); }

    /**
     * <p>The instance type. If you specify this, you must also specify a value for the
     * <code>OutpostArn</code>.</p>
     */
    inline void SetPreferredInstanceType(const char* value) { m_preferredInstanceTypeHasBeenSet = true; m_preferredInstanceType.assign(value); }

    /**
     * <p>The instance type. If you specify this, you must also specify a value for the
     * <code>OutpostArn</code>.</p>
     */
    inline CreateResolverEndpointRequest& WithPreferredInstanceType(const Aws::String& value) { SetPreferredInstanceType(value); return *this;}

    /**
     * <p>The instance type. If you specify this, you must also specify a value for the
     * <code>OutpostArn</code>.</p>
     */
    inline CreateResolverEndpointRequest& WithPreferredInstanceType(Aws::String&& value) { SetPreferredInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type. If you specify this, you must also specify a value for the
     * <code>OutpostArn</code>.</p>
     */
    inline CreateResolverEndpointRequest& WithPreferredInstanceType(const char* value) { SetPreferredInstanceType(value); return *this;}


    /**
     * <p>A list of the tag keys and values that you want to associate with the
     * endpoint.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of the tag keys and values that you want to associate with the
     * endpoint.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of the tag keys and values that you want to associate with the
     * endpoint.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of the tag keys and values that you want to associate with the
     * endpoint.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of the tag keys and values that you want to associate with the
     * endpoint.</p>
     */
    inline CreateResolverEndpointRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of the tag keys and values that you want to associate with the
     * endpoint.</p>
     */
    inline CreateResolverEndpointRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of the tag keys and values that you want to associate with the
     * endpoint.</p>
     */
    inline CreateResolverEndpointRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of the tag keys and values that you want to associate with the
     * endpoint.</p>
     */
    inline CreateResolverEndpointRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p> For the endpoint type you can choose either IPv4, IPv6, or dual-stack. A
     * dual-stack endpoint means that it will resolve via both IPv4 and IPv6. This
     * endpoint type is applied to all IP addresses. </p>
     */
    inline const ResolverEndpointType& GetResolverEndpointType() const{ return m_resolverEndpointType; }

    /**
     * <p> For the endpoint type you can choose either IPv4, IPv6, or dual-stack. A
     * dual-stack endpoint means that it will resolve via both IPv4 and IPv6. This
     * endpoint type is applied to all IP addresses. </p>
     */
    inline bool ResolverEndpointTypeHasBeenSet() const { return m_resolverEndpointTypeHasBeenSet; }

    /**
     * <p> For the endpoint type you can choose either IPv4, IPv6, or dual-stack. A
     * dual-stack endpoint means that it will resolve via both IPv4 and IPv6. This
     * endpoint type is applied to all IP addresses. </p>
     */
    inline void SetResolverEndpointType(const ResolverEndpointType& value) { m_resolverEndpointTypeHasBeenSet = true; m_resolverEndpointType = value; }

    /**
     * <p> For the endpoint type you can choose either IPv4, IPv6, or dual-stack. A
     * dual-stack endpoint means that it will resolve via both IPv4 and IPv6. This
     * endpoint type is applied to all IP addresses. </p>
     */
    inline void SetResolverEndpointType(ResolverEndpointType&& value) { m_resolverEndpointTypeHasBeenSet = true; m_resolverEndpointType = std::move(value); }

    /**
     * <p> For the endpoint type you can choose either IPv4, IPv6, or dual-stack. A
     * dual-stack endpoint means that it will resolve via both IPv4 and IPv6. This
     * endpoint type is applied to all IP addresses. </p>
     */
    inline CreateResolverEndpointRequest& WithResolverEndpointType(const ResolverEndpointType& value) { SetResolverEndpointType(value); return *this;}

    /**
     * <p> For the endpoint type you can choose either IPv4, IPv6, or dual-stack. A
     * dual-stack endpoint means that it will resolve via both IPv4 and IPv6. This
     * endpoint type is applied to all IP addresses. </p>
     */
    inline CreateResolverEndpointRequest& WithResolverEndpointType(ResolverEndpointType&& value) { SetResolverEndpointType(std::move(value)); return *this;}


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
     * </li> <li> <p>None, which is treated as Do53.</p> </li> </ul>
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
     * </li> <li> <p>None, which is treated as Do53.</p> </li> </ul>
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
     * </li> <li> <p>None, which is treated as Do53.</p> </li> </ul>
     */
    inline CreateResolverEndpointRequest& WithProtocols(const Aws::Vector<Protocol>& value) { SetProtocols(value); return *this;}

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
    inline CreateResolverEndpointRequest& WithProtocols(Aws::Vector<Protocol>&& value) { SetProtocols(std::move(value)); return *this;}

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
    inline CreateResolverEndpointRequest& AddProtocols(const Protocol& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }

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
    inline CreateResolverEndpointRequest& AddProtocols(Protocol&& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(std::move(value)); return *this; }

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
