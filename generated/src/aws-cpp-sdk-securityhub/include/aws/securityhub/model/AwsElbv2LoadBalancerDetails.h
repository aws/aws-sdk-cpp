/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/LoadBalancerState.h>
#include <aws/securityhub/model/AvailabilityZone.h>
#include <aws/securityhub/model/AwsElbv2LoadBalancerAttribute.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about a load balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElbv2LoadBalancerDetails">AWS
   * API Reference</a></p>
   */
  class AwsElbv2LoadBalancerDetails
  {
  public:
    AWS_SECURITYHUB_API AwsElbv2LoadBalancerDetails() = default;
    AWS_SECURITYHUB_API AwsElbv2LoadBalancerDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbv2LoadBalancerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Availability Zones for the load balancer.</p>
     */
    inline const Aws::Vector<AvailabilityZone>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<AvailabilityZone>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<AvailabilityZone>>
    AwsElbv2LoadBalancerDetails& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = AvailabilityZone>
    AwsElbv2LoadBalancerDetails& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Route 53 hosted zone associated with the load
     * balancer.</p>
     */
    inline const Aws::String& GetCanonicalHostedZoneId() const { return m_canonicalHostedZoneId; }
    inline bool CanonicalHostedZoneIdHasBeenSet() const { return m_canonicalHostedZoneIdHasBeenSet; }
    template<typename CanonicalHostedZoneIdT = Aws::String>
    void SetCanonicalHostedZoneId(CanonicalHostedZoneIdT&& value) { m_canonicalHostedZoneIdHasBeenSet = true; m_canonicalHostedZoneId = std::forward<CanonicalHostedZoneIdT>(value); }
    template<typename CanonicalHostedZoneIdT = Aws::String>
    AwsElbv2LoadBalancerDetails& WithCanonicalHostedZoneId(CanonicalHostedZoneIdT&& value) { SetCanonicalHostedZoneId(std::forward<CanonicalHostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the load balancer was created.</p> <p>For more information
     * about the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::String>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::String>
    AwsElbv2LoadBalancerDetails& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public DNS name of the load balancer.</p>
     */
    inline const Aws::String& GetDNSName() const { return m_dNSName; }
    inline bool DNSNameHasBeenSet() const { return m_dNSNameHasBeenSet; }
    template<typename DNSNameT = Aws::String>
    void SetDNSName(DNSNameT&& value) { m_dNSNameHasBeenSet = true; m_dNSName = std::forward<DNSNameT>(value); }
    template<typename DNSNameT = Aws::String>
    AwsElbv2LoadBalancerDetails& WithDNSName(DNSNameT&& value) { SetDNSName(std::forward<DNSNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of IP addresses used by the subnets for your load balancer. The
     * possible values are <code>ipv4</code> (for IPv4 addresses) and
     * <code>dualstack</code> (for IPv4 and IPv6 addresses).</p>
     */
    inline const Aws::String& GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    template<typename IpAddressTypeT = Aws::String>
    void SetIpAddressType(IpAddressTypeT&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::forward<IpAddressTypeT>(value); }
    template<typename IpAddressTypeT = Aws::String>
    AwsElbv2LoadBalancerDetails& WithIpAddressType(IpAddressTypeT&& value) { SetIpAddressType(std::forward<IpAddressTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nodes of an Internet-facing load balancer have public IP addresses.</p>
     */
    inline const Aws::String& GetScheme() const { return m_scheme; }
    inline bool SchemeHasBeenSet() const { return m_schemeHasBeenSet; }
    template<typename SchemeT = Aws::String>
    void SetScheme(SchemeT&& value) { m_schemeHasBeenSet = true; m_scheme = std::forward<SchemeT>(value); }
    template<typename SchemeT = Aws::String>
    AwsElbv2LoadBalancerDetails& WithScheme(SchemeT&& value) { SetScheme(std::forward<SchemeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups for the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    AwsElbv2LoadBalancerDetails& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    AwsElbv2LoadBalancerDetails& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of the load balancer.</p>
     */
    inline const LoadBalancerState& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = LoadBalancerState>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = LoadBalancerState>
    AwsElbv2LoadBalancerDetails& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of load balancer.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AwsElbv2LoadBalancerDetails& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC for the load balancer.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    AwsElbv2LoadBalancerDetails& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes of the load balancer.</p>
     */
    inline const Aws::Vector<AwsElbv2LoadBalancerAttribute>& GetLoadBalancerAttributes() const { return m_loadBalancerAttributes; }
    inline bool LoadBalancerAttributesHasBeenSet() const { return m_loadBalancerAttributesHasBeenSet; }
    template<typename LoadBalancerAttributesT = Aws::Vector<AwsElbv2LoadBalancerAttribute>>
    void SetLoadBalancerAttributes(LoadBalancerAttributesT&& value) { m_loadBalancerAttributesHasBeenSet = true; m_loadBalancerAttributes = std::forward<LoadBalancerAttributesT>(value); }
    template<typename LoadBalancerAttributesT = Aws::Vector<AwsElbv2LoadBalancerAttribute>>
    AwsElbv2LoadBalancerDetails& WithLoadBalancerAttributes(LoadBalancerAttributesT&& value) { SetLoadBalancerAttributes(std::forward<LoadBalancerAttributesT>(value)); return *this;}
    template<typename LoadBalancerAttributesT = AwsElbv2LoadBalancerAttribute>
    AwsElbv2LoadBalancerDetails& AddLoadBalancerAttributes(LoadBalancerAttributesT&& value) { m_loadBalancerAttributesHasBeenSet = true; m_loadBalancerAttributes.emplace_back(std::forward<LoadBalancerAttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AvailabilityZone> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::String m_canonicalHostedZoneId;
    bool m_canonicalHostedZoneIdHasBeenSet = false;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_dNSName;
    bool m_dNSNameHasBeenSet = false;

    Aws::String m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    Aws::String m_scheme;
    bool m_schemeHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    LoadBalancerState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<AwsElbv2LoadBalancerAttribute> m_loadBalancerAttributes;
    bool m_loadBalancerAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
