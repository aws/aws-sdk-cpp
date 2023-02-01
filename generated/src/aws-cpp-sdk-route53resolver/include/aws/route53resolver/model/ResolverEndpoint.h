/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/ResolverEndpointDirection.h>
#include <aws/route53resolver/model/ResolverEndpointStatus.h>
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
   * <p>In the response to a <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverEndpoint.html">CreateResolverEndpoint</a>,
   * <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DeleteResolverEndpoint.html">DeleteResolverEndpoint</a>,
   * <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>,
   * <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverEndpoints.html">ListResolverEndpoints</a>,
   * or <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_UpdateResolverEndpoint.html">UpdateResolverEndpoint</a>
   * request, a complex type that contains settings for an existing inbound or
   * outbound Resolver endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ResolverEndpoint">AWS
   * API Reference</a></p>
   */
  class ResolverEndpoint
  {
  public:
    AWS_ROUTE53RESOLVER_API ResolverEndpoint();
    AWS_ROUTE53RESOLVER_API ResolverEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API ResolverEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Resolver endpoint.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the Resolver endpoint.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the Resolver endpoint.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the Resolver endpoint.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the Resolver endpoint.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the Resolver endpoint.</p>
     */
    inline ResolverEndpoint& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the Resolver endpoint.</p>
     */
    inline ResolverEndpoint& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Resolver endpoint.</p>
     */
    inline ResolverEndpoint& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A unique string that identifies the request that created the Resolver
     * endpoint. The <code>CreatorRequestId</code> allows failed requests to be retried
     * without the risk of running the operation twice.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request that created the Resolver
     * endpoint. The <code>CreatorRequestId</code> allows failed requests to be retried
     * without the risk of running the operation twice.</p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string that identifies the request that created the Resolver
     * endpoint. The <code>CreatorRequestId</code> allows failed requests to be retried
     * without the risk of running the operation twice.</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request that created the Resolver
     * endpoint. The <code>CreatorRequestId</code> allows failed requests to be retried
     * without the risk of running the operation twice.</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request that created the Resolver
     * endpoint. The <code>CreatorRequestId</code> allows failed requests to be retried
     * without the risk of running the operation twice.</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request that created the Resolver
     * endpoint. The <code>CreatorRequestId</code> allows failed requests to be retried
     * without the risk of running the operation twice.</p>
     */
    inline ResolverEndpoint& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request that created the Resolver
     * endpoint. The <code>CreatorRequestId</code> allows failed requests to be retried
     * without the risk of running the operation twice.</p>
     */
    inline ResolverEndpoint& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request that created the Resolver
     * endpoint. The <code>CreatorRequestId</code> allows failed requests to be retried
     * without the risk of running the operation twice.</p>
     */
    inline ResolverEndpoint& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) for the Resolver endpoint.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN (Amazon Resource Name) for the Resolver endpoint.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) for the Resolver endpoint.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN (Amazon Resource Name) for the Resolver endpoint.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) for the Resolver endpoint.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) for the Resolver endpoint.</p>
     */
    inline ResolverEndpoint& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) for the Resolver endpoint.</p>
     */
    inline ResolverEndpoint& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) for the Resolver endpoint.</p>
     */
    inline ResolverEndpoint& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name that you assigned to the Resolver endpoint when you submitted a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverEndpoint.html">CreateResolverEndpoint</a>
     * request.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name that you assigned to the Resolver endpoint when you submitted a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverEndpoint.html">CreateResolverEndpoint</a>
     * request.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name that you assigned to the Resolver endpoint when you submitted a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverEndpoint.html">CreateResolverEndpoint</a>
     * request.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name that you assigned to the Resolver endpoint when you submitted a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverEndpoint.html">CreateResolverEndpoint</a>
     * request.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name that you assigned to the Resolver endpoint when you submitted a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverEndpoint.html">CreateResolverEndpoint</a>
     * request.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name that you assigned to the Resolver endpoint when you submitted a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverEndpoint.html">CreateResolverEndpoint</a>
     * request.</p>
     */
    inline ResolverEndpoint& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name that you assigned to the Resolver endpoint when you submitted a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverEndpoint.html">CreateResolverEndpoint</a>
     * request.</p>
     */
    inline ResolverEndpoint& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name that you assigned to the Resolver endpoint when you submitted a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverEndpoint.html">CreateResolverEndpoint</a>
     * request.</p>
     */
    inline ResolverEndpoint& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of one or more security groups that control access to this VPC. The
     * security group must include one or more inbound rules (for inbound endpoints) or
     * outbound rules (for outbound endpoints). Inbound and outbound rules must allow
     * TCP and UDP access. For inbound access, open port 53. For outbound access, open
     * the port that you're using for DNS queries on your network.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The ID of one or more security groups that control access to this VPC. The
     * security group must include one or more inbound rules (for inbound endpoints) or
     * outbound rules (for outbound endpoints). Inbound and outbound rules must allow
     * TCP and UDP access. For inbound access, open port 53. For outbound access, open
     * the port that you're using for DNS queries on your network.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The ID of one or more security groups that control access to this VPC. The
     * security group must include one or more inbound rules (for inbound endpoints) or
     * outbound rules (for outbound endpoints). Inbound and outbound rules must allow
     * TCP and UDP access. For inbound access, open port 53. For outbound access, open
     * the port that you're using for DNS queries on your network.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The ID of one or more security groups that control access to this VPC. The
     * security group must include one or more inbound rules (for inbound endpoints) or
     * outbound rules (for outbound endpoints). Inbound and outbound rules must allow
     * TCP and UDP access. For inbound access, open port 53. For outbound access, open
     * the port that you're using for DNS queries on your network.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The ID of one or more security groups that control access to this VPC. The
     * security group must include one or more inbound rules (for inbound endpoints) or
     * outbound rules (for outbound endpoints). Inbound and outbound rules must allow
     * TCP and UDP access. For inbound access, open port 53. For outbound access, open
     * the port that you're using for DNS queries on your network.</p>
     */
    inline ResolverEndpoint& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The ID of one or more security groups that control access to this VPC. The
     * security group must include one or more inbound rules (for inbound endpoints) or
     * outbound rules (for outbound endpoints). Inbound and outbound rules must allow
     * TCP and UDP access. For inbound access, open port 53. For outbound access, open
     * the port that you're using for DNS queries on your network.</p>
     */
    inline ResolverEndpoint& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The ID of one or more security groups that control access to this VPC. The
     * security group must include one or more inbound rules (for inbound endpoints) or
     * outbound rules (for outbound endpoints). Inbound and outbound rules must allow
     * TCP and UDP access. For inbound access, open port 53. For outbound access, open
     * the port that you're using for DNS queries on your network.</p>
     */
    inline ResolverEndpoint& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The ID of one or more security groups that control access to this VPC. The
     * security group must include one or more inbound rules (for inbound endpoints) or
     * outbound rules (for outbound endpoints). Inbound and outbound rules must allow
     * TCP and UDP access. For inbound access, open port 53. For outbound access, open
     * the port that you're using for DNS queries on your network.</p>
     */
    inline ResolverEndpoint& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of one or more security groups that control access to this VPC. The
     * security group must include one or more inbound rules (for inbound endpoints) or
     * outbound rules (for outbound endpoints). Inbound and outbound rules must allow
     * TCP and UDP access. For inbound access, open port 53. For outbound access, open
     * the port that you're using for DNS queries on your network.</p>
     */
    inline ResolverEndpoint& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>Indicates whether the Resolver endpoint allows inbound or outbound DNS
     * queries:</p> <ul> <li> <p> <code>INBOUND</code>: allows DNS queries to your VPC
     * from your network</p> </li> <li> <p> <code>OUTBOUND</code>: allows DNS queries
     * from your VPC to your network</p> </li> </ul>
     */
    inline const ResolverEndpointDirection& GetDirection() const{ return m_direction; }

    /**
     * <p>Indicates whether the Resolver endpoint allows inbound or outbound DNS
     * queries:</p> <ul> <li> <p> <code>INBOUND</code>: allows DNS queries to your VPC
     * from your network</p> </li> <li> <p> <code>OUTBOUND</code>: allows DNS queries
     * from your VPC to your network</p> </li> </ul>
     */
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }

    /**
     * <p>Indicates whether the Resolver endpoint allows inbound or outbound DNS
     * queries:</p> <ul> <li> <p> <code>INBOUND</code>: allows DNS queries to your VPC
     * from your network</p> </li> <li> <p> <code>OUTBOUND</code>: allows DNS queries
     * from your VPC to your network</p> </li> </ul>
     */
    inline void SetDirection(const ResolverEndpointDirection& value) { m_directionHasBeenSet = true; m_direction = value; }

    /**
     * <p>Indicates whether the Resolver endpoint allows inbound or outbound DNS
     * queries:</p> <ul> <li> <p> <code>INBOUND</code>: allows DNS queries to your VPC
     * from your network</p> </li> <li> <p> <code>OUTBOUND</code>: allows DNS queries
     * from your VPC to your network</p> </li> </ul>
     */
    inline void SetDirection(ResolverEndpointDirection&& value) { m_directionHasBeenSet = true; m_direction = std::move(value); }

    /**
     * <p>Indicates whether the Resolver endpoint allows inbound or outbound DNS
     * queries:</p> <ul> <li> <p> <code>INBOUND</code>: allows DNS queries to your VPC
     * from your network</p> </li> <li> <p> <code>OUTBOUND</code>: allows DNS queries
     * from your VPC to your network</p> </li> </ul>
     */
    inline ResolverEndpoint& WithDirection(const ResolverEndpointDirection& value) { SetDirection(value); return *this;}

    /**
     * <p>Indicates whether the Resolver endpoint allows inbound or outbound DNS
     * queries:</p> <ul> <li> <p> <code>INBOUND</code>: allows DNS queries to your VPC
     * from your network</p> </li> <li> <p> <code>OUTBOUND</code>: allows DNS queries
     * from your VPC to your network</p> </li> </ul>
     */
    inline ResolverEndpoint& WithDirection(ResolverEndpointDirection&& value) { SetDirection(std::move(value)); return *this;}


    /**
     * <p>The number of IP addresses that the Resolver endpoint can use for DNS
     * queries.</p>
     */
    inline int GetIpAddressCount() const{ return m_ipAddressCount; }

    /**
     * <p>The number of IP addresses that the Resolver endpoint can use for DNS
     * queries.</p>
     */
    inline bool IpAddressCountHasBeenSet() const { return m_ipAddressCountHasBeenSet; }

    /**
     * <p>The number of IP addresses that the Resolver endpoint can use for DNS
     * queries.</p>
     */
    inline void SetIpAddressCount(int value) { m_ipAddressCountHasBeenSet = true; m_ipAddressCount = value; }

    /**
     * <p>The number of IP addresses that the Resolver endpoint can use for DNS
     * queries.</p>
     */
    inline ResolverEndpoint& WithIpAddressCount(int value) { SetIpAddressCount(value); return *this;}


    /**
     * <p>The ID of the VPC that you want to create the Resolver endpoint in.</p>
     */
    inline const Aws::String& GetHostVPCId() const{ return m_hostVPCId; }

    /**
     * <p>The ID of the VPC that you want to create the Resolver endpoint in.</p>
     */
    inline bool HostVPCIdHasBeenSet() const { return m_hostVPCIdHasBeenSet; }

    /**
     * <p>The ID of the VPC that you want to create the Resolver endpoint in.</p>
     */
    inline void SetHostVPCId(const Aws::String& value) { m_hostVPCIdHasBeenSet = true; m_hostVPCId = value; }

    /**
     * <p>The ID of the VPC that you want to create the Resolver endpoint in.</p>
     */
    inline void SetHostVPCId(Aws::String&& value) { m_hostVPCIdHasBeenSet = true; m_hostVPCId = std::move(value); }

    /**
     * <p>The ID of the VPC that you want to create the Resolver endpoint in.</p>
     */
    inline void SetHostVPCId(const char* value) { m_hostVPCIdHasBeenSet = true; m_hostVPCId.assign(value); }

    /**
     * <p>The ID of the VPC that you want to create the Resolver endpoint in.</p>
     */
    inline ResolverEndpoint& WithHostVPCId(const Aws::String& value) { SetHostVPCId(value); return *this;}

    /**
     * <p>The ID of the VPC that you want to create the Resolver endpoint in.</p>
     */
    inline ResolverEndpoint& WithHostVPCId(Aws::String&& value) { SetHostVPCId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC that you want to create the Resolver endpoint in.</p>
     */
    inline ResolverEndpoint& WithHostVPCId(const char* value) { SetHostVPCId(value); return *this;}


    /**
     * <p>A code that specifies the current status of the Resolver endpoint. Valid
     * values include the following:</p> <ul> <li> <p> <code>CREATING</code>: Resolver
     * is creating and configuring one or more Amazon VPC network interfaces for this
     * endpoint.</p> </li> <li> <p> <code>OPERATIONAL</code>: The Amazon VPC network
     * interfaces for this endpoint are correctly configured and able to pass inbound
     * or outbound DNS queries between your network and Resolver.</p> </li> <li> <p>
     * <code>UPDATING</code>: Resolver is associating or disassociating one or more
     * network interfaces with this endpoint.</p> </li> <li> <p>
     * <code>AUTO_RECOVERING</code>: Resolver is trying to recover one or more of the
     * network interfaces that are associated with this endpoint. During the recovery
     * process, the endpoint functions with limited capacity because of the limit on
     * the number of DNS queries per IP address (per network interface). For the
     * current limit, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html#limits-api-entities-resolver">Limits
     * on Route 53 Resolver</a>.</p> </li> <li> <p> <code>ACTION_NEEDED</code>: This
     * endpoint is unhealthy, and Resolver can't automatically recover it. To resolve
     * the problem, we recommend that you check each IP address that you associated
     * with the endpoint. For each IP address that isn't available, add another IP
     * address and then delete the IP address that isn't available. (An endpoint must
     * always include at least two IP addresses.) A status of
     * <code>ACTION_NEEDED</code> can have a variety of causes. Here are two common
     * causes:</p> <ul> <li> <p>One or more of the network interfaces that are
     * associated with the endpoint were deleted using Amazon VPC.</p> </li> <li>
     * <p>The network interface couldn't be created for some reason that's outside the
     * control of Resolver.</p> </li> </ul> </li> <li> <p> <code>DELETING</code>:
     * Resolver is deleting this endpoint and the associated network interfaces.</p>
     * </li> </ul>
     */
    inline const ResolverEndpointStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A code that specifies the current status of the Resolver endpoint. Valid
     * values include the following:</p> <ul> <li> <p> <code>CREATING</code>: Resolver
     * is creating and configuring one or more Amazon VPC network interfaces for this
     * endpoint.</p> </li> <li> <p> <code>OPERATIONAL</code>: The Amazon VPC network
     * interfaces for this endpoint are correctly configured and able to pass inbound
     * or outbound DNS queries between your network and Resolver.</p> </li> <li> <p>
     * <code>UPDATING</code>: Resolver is associating or disassociating one or more
     * network interfaces with this endpoint.</p> </li> <li> <p>
     * <code>AUTO_RECOVERING</code>: Resolver is trying to recover one or more of the
     * network interfaces that are associated with this endpoint. During the recovery
     * process, the endpoint functions with limited capacity because of the limit on
     * the number of DNS queries per IP address (per network interface). For the
     * current limit, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html#limits-api-entities-resolver">Limits
     * on Route 53 Resolver</a>.</p> </li> <li> <p> <code>ACTION_NEEDED</code>: This
     * endpoint is unhealthy, and Resolver can't automatically recover it. To resolve
     * the problem, we recommend that you check each IP address that you associated
     * with the endpoint. For each IP address that isn't available, add another IP
     * address and then delete the IP address that isn't available. (An endpoint must
     * always include at least two IP addresses.) A status of
     * <code>ACTION_NEEDED</code> can have a variety of causes. Here are two common
     * causes:</p> <ul> <li> <p>One or more of the network interfaces that are
     * associated with the endpoint were deleted using Amazon VPC.</p> </li> <li>
     * <p>The network interface couldn't be created for some reason that's outside the
     * control of Resolver.</p> </li> </ul> </li> <li> <p> <code>DELETING</code>:
     * Resolver is deleting this endpoint and the associated network interfaces.</p>
     * </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A code that specifies the current status of the Resolver endpoint. Valid
     * values include the following:</p> <ul> <li> <p> <code>CREATING</code>: Resolver
     * is creating and configuring one or more Amazon VPC network interfaces for this
     * endpoint.</p> </li> <li> <p> <code>OPERATIONAL</code>: The Amazon VPC network
     * interfaces for this endpoint are correctly configured and able to pass inbound
     * or outbound DNS queries between your network and Resolver.</p> </li> <li> <p>
     * <code>UPDATING</code>: Resolver is associating or disassociating one or more
     * network interfaces with this endpoint.</p> </li> <li> <p>
     * <code>AUTO_RECOVERING</code>: Resolver is trying to recover one or more of the
     * network interfaces that are associated with this endpoint. During the recovery
     * process, the endpoint functions with limited capacity because of the limit on
     * the number of DNS queries per IP address (per network interface). For the
     * current limit, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html#limits-api-entities-resolver">Limits
     * on Route 53 Resolver</a>.</p> </li> <li> <p> <code>ACTION_NEEDED</code>: This
     * endpoint is unhealthy, and Resolver can't automatically recover it. To resolve
     * the problem, we recommend that you check each IP address that you associated
     * with the endpoint. For each IP address that isn't available, add another IP
     * address and then delete the IP address that isn't available. (An endpoint must
     * always include at least two IP addresses.) A status of
     * <code>ACTION_NEEDED</code> can have a variety of causes. Here are two common
     * causes:</p> <ul> <li> <p>One or more of the network interfaces that are
     * associated with the endpoint were deleted using Amazon VPC.</p> </li> <li>
     * <p>The network interface couldn't be created for some reason that's outside the
     * control of Resolver.</p> </li> </ul> </li> <li> <p> <code>DELETING</code>:
     * Resolver is deleting this endpoint and the associated network interfaces.</p>
     * </li> </ul>
     */
    inline void SetStatus(const ResolverEndpointStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A code that specifies the current status of the Resolver endpoint. Valid
     * values include the following:</p> <ul> <li> <p> <code>CREATING</code>: Resolver
     * is creating and configuring one or more Amazon VPC network interfaces for this
     * endpoint.</p> </li> <li> <p> <code>OPERATIONAL</code>: The Amazon VPC network
     * interfaces for this endpoint are correctly configured and able to pass inbound
     * or outbound DNS queries between your network and Resolver.</p> </li> <li> <p>
     * <code>UPDATING</code>: Resolver is associating or disassociating one or more
     * network interfaces with this endpoint.</p> </li> <li> <p>
     * <code>AUTO_RECOVERING</code>: Resolver is trying to recover one or more of the
     * network interfaces that are associated with this endpoint. During the recovery
     * process, the endpoint functions with limited capacity because of the limit on
     * the number of DNS queries per IP address (per network interface). For the
     * current limit, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html#limits-api-entities-resolver">Limits
     * on Route 53 Resolver</a>.</p> </li> <li> <p> <code>ACTION_NEEDED</code>: This
     * endpoint is unhealthy, and Resolver can't automatically recover it. To resolve
     * the problem, we recommend that you check each IP address that you associated
     * with the endpoint. For each IP address that isn't available, add another IP
     * address and then delete the IP address that isn't available. (An endpoint must
     * always include at least two IP addresses.) A status of
     * <code>ACTION_NEEDED</code> can have a variety of causes. Here are two common
     * causes:</p> <ul> <li> <p>One or more of the network interfaces that are
     * associated with the endpoint were deleted using Amazon VPC.</p> </li> <li>
     * <p>The network interface couldn't be created for some reason that's outside the
     * control of Resolver.</p> </li> </ul> </li> <li> <p> <code>DELETING</code>:
     * Resolver is deleting this endpoint and the associated network interfaces.</p>
     * </li> </ul>
     */
    inline void SetStatus(ResolverEndpointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A code that specifies the current status of the Resolver endpoint. Valid
     * values include the following:</p> <ul> <li> <p> <code>CREATING</code>: Resolver
     * is creating and configuring one or more Amazon VPC network interfaces for this
     * endpoint.</p> </li> <li> <p> <code>OPERATIONAL</code>: The Amazon VPC network
     * interfaces for this endpoint are correctly configured and able to pass inbound
     * or outbound DNS queries between your network and Resolver.</p> </li> <li> <p>
     * <code>UPDATING</code>: Resolver is associating or disassociating one or more
     * network interfaces with this endpoint.</p> </li> <li> <p>
     * <code>AUTO_RECOVERING</code>: Resolver is trying to recover one or more of the
     * network interfaces that are associated with this endpoint. During the recovery
     * process, the endpoint functions with limited capacity because of the limit on
     * the number of DNS queries per IP address (per network interface). For the
     * current limit, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html#limits-api-entities-resolver">Limits
     * on Route 53 Resolver</a>.</p> </li> <li> <p> <code>ACTION_NEEDED</code>: This
     * endpoint is unhealthy, and Resolver can't automatically recover it. To resolve
     * the problem, we recommend that you check each IP address that you associated
     * with the endpoint. For each IP address that isn't available, add another IP
     * address and then delete the IP address that isn't available. (An endpoint must
     * always include at least two IP addresses.) A status of
     * <code>ACTION_NEEDED</code> can have a variety of causes. Here are two common
     * causes:</p> <ul> <li> <p>One or more of the network interfaces that are
     * associated with the endpoint were deleted using Amazon VPC.</p> </li> <li>
     * <p>The network interface couldn't be created for some reason that's outside the
     * control of Resolver.</p> </li> </ul> </li> <li> <p> <code>DELETING</code>:
     * Resolver is deleting this endpoint and the associated network interfaces.</p>
     * </li> </ul>
     */
    inline ResolverEndpoint& WithStatus(const ResolverEndpointStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A code that specifies the current status of the Resolver endpoint. Valid
     * values include the following:</p> <ul> <li> <p> <code>CREATING</code>: Resolver
     * is creating and configuring one or more Amazon VPC network interfaces for this
     * endpoint.</p> </li> <li> <p> <code>OPERATIONAL</code>: The Amazon VPC network
     * interfaces for this endpoint are correctly configured and able to pass inbound
     * or outbound DNS queries between your network and Resolver.</p> </li> <li> <p>
     * <code>UPDATING</code>: Resolver is associating or disassociating one or more
     * network interfaces with this endpoint.</p> </li> <li> <p>
     * <code>AUTO_RECOVERING</code>: Resolver is trying to recover one or more of the
     * network interfaces that are associated with this endpoint. During the recovery
     * process, the endpoint functions with limited capacity because of the limit on
     * the number of DNS queries per IP address (per network interface). For the
     * current limit, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html#limits-api-entities-resolver">Limits
     * on Route 53 Resolver</a>.</p> </li> <li> <p> <code>ACTION_NEEDED</code>: This
     * endpoint is unhealthy, and Resolver can't automatically recover it. To resolve
     * the problem, we recommend that you check each IP address that you associated
     * with the endpoint. For each IP address that isn't available, add another IP
     * address and then delete the IP address that isn't available. (An endpoint must
     * always include at least two IP addresses.) A status of
     * <code>ACTION_NEEDED</code> can have a variety of causes. Here are two common
     * causes:</p> <ul> <li> <p>One or more of the network interfaces that are
     * associated with the endpoint were deleted using Amazon VPC.</p> </li> <li>
     * <p>The network interface couldn't be created for some reason that's outside the
     * control of Resolver.</p> </li> </ul> </li> <li> <p> <code>DELETING</code>:
     * Resolver is deleting this endpoint and the associated network interfaces.</p>
     * </li> </ul>
     */
    inline ResolverEndpoint& WithStatus(ResolverEndpointStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A detailed description of the status of the Resolver endpoint.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A detailed description of the status of the Resolver endpoint.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A detailed description of the status of the Resolver endpoint.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A detailed description of the status of the Resolver endpoint.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A detailed description of the status of the Resolver endpoint.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A detailed description of the status of the Resolver endpoint.</p>
     */
    inline ResolverEndpoint& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A detailed description of the status of the Resolver endpoint.</p>
     */
    inline ResolverEndpoint& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A detailed description of the status of the Resolver endpoint.</p>
     */
    inline ResolverEndpoint& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The date and time that the endpoint was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that the endpoint was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time that the endpoint was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time that the endpoint was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time that the endpoint was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }

    /**
     * <p>The date and time that the endpoint was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline ResolverEndpoint& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that the endpoint was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline ResolverEndpoint& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time that the endpoint was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline ResolverEndpoint& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * <p>The date and time that the endpoint was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetModificationTime() const{ return m_modificationTime; }

    /**
     * <p>The date and time that the endpoint was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline bool ModificationTimeHasBeenSet() const { return m_modificationTimeHasBeenSet; }

    /**
     * <p>The date and time that the endpoint was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline void SetModificationTime(const Aws::String& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = value; }

    /**
     * <p>The date and time that the endpoint was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline void SetModificationTime(Aws::String&& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = std::move(value); }

    /**
     * <p>The date and time that the endpoint was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline void SetModificationTime(const char* value) { m_modificationTimeHasBeenSet = true; m_modificationTime.assign(value); }

    /**
     * <p>The date and time that the endpoint was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline ResolverEndpoint& WithModificationTime(const Aws::String& value) { SetModificationTime(value); return *this;}

    /**
     * <p>The date and time that the endpoint was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline ResolverEndpoint& WithModificationTime(Aws::String&& value) { SetModificationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time that the endpoint was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline ResolverEndpoint& WithModificationTime(const char* value) { SetModificationTime(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    ResolverEndpointDirection m_direction;
    bool m_directionHasBeenSet = false;

    int m_ipAddressCount;
    bool m_ipAddressCountHasBeenSet = false;

    Aws::String m_hostVPCId;
    bool m_hostVPCIdHasBeenSet = false;

    ResolverEndpointStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_modificationTime;
    bool m_modificationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
