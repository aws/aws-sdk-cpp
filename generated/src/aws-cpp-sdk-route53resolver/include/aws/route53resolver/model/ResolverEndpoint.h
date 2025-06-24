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
#include <aws/route53resolver/model/ResolverEndpointType.h>
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
   * <p>In the response to a <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverEndpoint.html">CreateResolverEndpoint</a>,
   * <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DeleteResolverEndpoint.html">DeleteResolverEndpoint</a>,
   * <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>,
   * Updates the name, or ResolverEndpointType for an endpoint, or <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_UpdateResolverEndpoint.html">UpdateResolverEndpoint</a>
   * request, a complex type that contains settings for an existing inbound or
   * outbound Resolver endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ResolverEndpoint">AWS
   * API Reference</a></p>
   */
  class ResolverEndpoint
  {
  public:
    AWS_ROUTE53RESOLVER_API ResolverEndpoint() = default;
    AWS_ROUTE53RESOLVER_API ResolverEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API ResolverEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Resolver endpoint.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ResolverEndpoint& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies the request that created the Resolver
     * endpoint. The <code>CreatorRequestId</code> allows failed requests to be retried
     * without the risk of running the operation twice.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    ResolverEndpoint& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) for the Resolver endpoint.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ResolverEndpoint& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that you assigned to the Resolver endpoint when you submitted a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverEndpoint.html">CreateResolverEndpoint</a>
     * request.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ResolverEndpoint& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of one or more security groups that control access to this VPC. The
     * security group must include one or more inbound rules (for inbound endpoints) or
     * outbound rules (for outbound endpoints). Inbound and outbound rules must allow
     * TCP and UDP access. For inbound access, open port 53. For outbound access, open
     * the port that you're using for DNS queries on your network.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    ResolverEndpoint& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    ResolverEndpoint& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the Resolver endpoint allows inbound or outbound DNS
     * queries:</p> <ul> <li> <p> <code>INBOUND</code>: allows DNS queries to your VPC
     * from your network</p> </li> <li> <p> <code>OUTBOUND</code>: allows DNS queries
     * from your VPC to your network</p> </li> <li> <p>
     * <code>INBOUND_DELEGATION</code>: Resolver delegates queries to Route 53 private
     * hosted zones from your network.</p> </li> </ul>
     */
    inline ResolverEndpointDirection GetDirection() const { return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    inline void SetDirection(ResolverEndpointDirection value) { m_directionHasBeenSet = true; m_direction = value; }
    inline ResolverEndpoint& WithDirection(ResolverEndpointDirection value) { SetDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of IP addresses that the Resolver endpoint can use for DNS
     * queries.</p>
     */
    inline int GetIpAddressCount() const { return m_ipAddressCount; }
    inline bool IpAddressCountHasBeenSet() const { return m_ipAddressCountHasBeenSet; }
    inline void SetIpAddressCount(int value) { m_ipAddressCountHasBeenSet = true; m_ipAddressCount = value; }
    inline ResolverEndpoint& WithIpAddressCount(int value) { SetIpAddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC that you want to create the Resolver endpoint in.</p>
     */
    inline const Aws::String& GetHostVPCId() const { return m_hostVPCId; }
    inline bool HostVPCIdHasBeenSet() const { return m_hostVPCIdHasBeenSet; }
    template<typename HostVPCIdT = Aws::String>
    void SetHostVPCId(HostVPCIdT&& value) { m_hostVPCIdHasBeenSet = true; m_hostVPCId = std::forward<HostVPCIdT>(value); }
    template<typename HostVPCIdT = Aws::String>
    ResolverEndpoint& WithHostVPCId(HostVPCIdT&& value) { SetHostVPCId(std::forward<HostVPCIdT>(value)); return *this;}
    ///@}

    ///@{
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
    inline ResolverEndpointStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResolverEndpointStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ResolverEndpoint& WithStatus(ResolverEndpointStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed description of the status of the Resolver endpoint.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ResolverEndpoint& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the endpoint was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::String>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::String>
    ResolverEndpoint& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the endpoint was last modified, in Unix time format
     * and Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetModificationTime() const { return m_modificationTime; }
    inline bool ModificationTimeHasBeenSet() const { return m_modificationTimeHasBeenSet; }
    template<typename ModificationTimeT = Aws::String>
    void SetModificationTime(ModificationTimeT&& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = std::forward<ModificationTimeT>(value); }
    template<typename ModificationTimeT = Aws::String>
    ResolverEndpoint& WithModificationTime(ModificationTimeT&& value) { SetModificationTime(std::forward<ModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) for the Outpost.</p>
     */
    inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    template<typename OutpostArnT = Aws::String>
    void SetOutpostArn(OutpostArnT&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::forward<OutpostArnT>(value); }
    template<typename OutpostArnT = Aws::String>
    ResolverEndpoint& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon EC2 instance type. </p>
     */
    inline const Aws::String& GetPreferredInstanceType() const { return m_preferredInstanceType; }
    inline bool PreferredInstanceTypeHasBeenSet() const { return m_preferredInstanceTypeHasBeenSet; }
    template<typename PreferredInstanceTypeT = Aws::String>
    void SetPreferredInstanceType(PreferredInstanceTypeT&& value) { m_preferredInstanceTypeHasBeenSet = true; m_preferredInstanceType = std::forward<PreferredInstanceTypeT>(value); }
    template<typename PreferredInstanceTypeT = Aws::String>
    ResolverEndpoint& WithPreferredInstanceType(PreferredInstanceTypeT&& value) { SetPreferredInstanceType(std::forward<PreferredInstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Resolver endpoint IP address type. </p>
     */
    inline ResolverEndpointType GetResolverEndpointType() const { return m_resolverEndpointType; }
    inline bool ResolverEndpointTypeHasBeenSet() const { return m_resolverEndpointTypeHasBeenSet; }
    inline void SetResolverEndpointType(ResolverEndpointType value) { m_resolverEndpointTypeHasBeenSet = true; m_resolverEndpointType = value; }
    inline ResolverEndpoint& WithResolverEndpointType(ResolverEndpointType value) { SetResolverEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Protocols used for the endpoint. DoH-FIPS is applicable for a default
     * inbound endpoints only. </p> <p>For an inbound endpoint you can apply the
     * protocols as follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p> </li>
     * <li> <p>Do53 and DoH-FIPS in combination.</p> </li> <li> <p>Do53 alone.</p>
     * </li> <li> <p>DoH alone.</p> </li> <li> <p>DoH-FIPS alone.</p> </li> <li>
     * <p>None, which is treated as Do53.</p> </li> </ul> <p>For a delegation inbound
     * endpoint you can use Do53 only.</p> <p>For an outbound endpoint you can apply
     * the protocols as follows:</p> <ul> <li> <p> Do53 and DoH in combination.</p>
     * </li> <li> <p>Do53 alone.</p> </li> <li> <p>DoH alone.</p> </li> <li> <p>None,
     * which is treated as Do53.</p> </li> </ul>
     */
    inline const Aws::Vector<Protocol>& GetProtocols() const { return m_protocols; }
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
    template<typename ProtocolsT = Aws::Vector<Protocol>>
    void SetProtocols(ProtocolsT&& value) { m_protocolsHasBeenSet = true; m_protocols = std::forward<ProtocolsT>(value); }
    template<typename ProtocolsT = Aws::Vector<Protocol>>
    ResolverEndpoint& WithProtocols(ProtocolsT&& value) { SetProtocols(std::forward<ProtocolsT>(value)); return *this;}
    inline ResolverEndpoint& AddProtocols(Protocol value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }
    ///@}
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

    ResolverEndpointDirection m_direction{ResolverEndpointDirection::NOT_SET};
    bool m_directionHasBeenSet = false;

    int m_ipAddressCount{0};
    bool m_ipAddressCountHasBeenSet = false;

    Aws::String m_hostVPCId;
    bool m_hostVPCIdHasBeenSet = false;

    ResolverEndpointStatus m_status{ResolverEndpointStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_modificationTime;
    bool m_modificationTimeHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::String m_preferredInstanceType;
    bool m_preferredInstanceTypeHasBeenSet = false;

    ResolverEndpointType m_resolverEndpointType{ResolverEndpointType::NOT_SET};
    bool m_resolverEndpointTypeHasBeenSet = false;

    Aws::Vector<Protocol> m_protocols;
    bool m_protocolsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
