/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsElbLoadBalancerHealthCheck.h>
#include <aws/securityhub/model/AwsElbLoadBalancerAttributes.h>
#include <aws/securityhub/model/AwsElbLoadBalancerPolicies.h>
#include <aws/securityhub/model/AwsElbLoadBalancerSourceSecurityGroup.h>
#include <aws/securityhub/model/AwsElbLoadBalancerBackendServerDescription.h>
#include <aws/securityhub/model/AwsElbLoadBalancerInstance.h>
#include <aws/securityhub/model/AwsElbLoadBalancerListenerDescription.h>
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
   * <p>Contains details about a Classic Load Balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElbLoadBalancerDetails">AWS
   * API Reference</a></p>
   */
  class AwsElbLoadBalancerDetails
  {
  public:
    AWS_SECURITYHUB_API AwsElbLoadBalancerDetails() = default;
    AWS_SECURITYHUB_API AwsElbLoadBalancerDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbLoadBalancerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of Availability Zones for the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    AwsElbLoadBalancerDetails& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    AwsElbLoadBalancerDetails& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the configuration of the EC2 instances.</p>
     */
    inline const Aws::Vector<AwsElbLoadBalancerBackendServerDescription>& GetBackendServerDescriptions() const { return m_backendServerDescriptions; }
    inline bool BackendServerDescriptionsHasBeenSet() const { return m_backendServerDescriptionsHasBeenSet; }
    template<typename BackendServerDescriptionsT = Aws::Vector<AwsElbLoadBalancerBackendServerDescription>>
    void SetBackendServerDescriptions(BackendServerDescriptionsT&& value) { m_backendServerDescriptionsHasBeenSet = true; m_backendServerDescriptions = std::forward<BackendServerDescriptionsT>(value); }
    template<typename BackendServerDescriptionsT = Aws::Vector<AwsElbLoadBalancerBackendServerDescription>>
    AwsElbLoadBalancerDetails& WithBackendServerDescriptions(BackendServerDescriptionsT&& value) { SetBackendServerDescriptions(std::forward<BackendServerDescriptionsT>(value)); return *this;}
    template<typename BackendServerDescriptionsT = AwsElbLoadBalancerBackendServerDescription>
    AwsElbLoadBalancerDetails& AddBackendServerDescriptions(BackendServerDescriptionsT&& value) { m_backendServerDescriptionsHasBeenSet = true; m_backendServerDescriptions.emplace_back(std::forward<BackendServerDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline const Aws::String& GetCanonicalHostedZoneName() const { return m_canonicalHostedZoneName; }
    inline bool CanonicalHostedZoneNameHasBeenSet() const { return m_canonicalHostedZoneNameHasBeenSet; }
    template<typename CanonicalHostedZoneNameT = Aws::String>
    void SetCanonicalHostedZoneName(CanonicalHostedZoneNameT&& value) { m_canonicalHostedZoneNameHasBeenSet = true; m_canonicalHostedZoneName = std::forward<CanonicalHostedZoneNameT>(value); }
    template<typename CanonicalHostedZoneNameT = Aws::String>
    AwsElbLoadBalancerDetails& WithCanonicalHostedZoneName(CanonicalHostedZoneNameT&& value) { SetCanonicalHostedZoneName(std::forward<CanonicalHostedZoneNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline const Aws::String& GetCanonicalHostedZoneNameID() const { return m_canonicalHostedZoneNameID; }
    inline bool CanonicalHostedZoneNameIDHasBeenSet() const { return m_canonicalHostedZoneNameIDHasBeenSet; }
    template<typename CanonicalHostedZoneNameIDT = Aws::String>
    void SetCanonicalHostedZoneNameID(CanonicalHostedZoneNameIDT&& value) { m_canonicalHostedZoneNameIDHasBeenSet = true; m_canonicalHostedZoneNameID = std::forward<CanonicalHostedZoneNameIDT>(value); }
    template<typename CanonicalHostedZoneNameIDT = Aws::String>
    AwsElbLoadBalancerDetails& WithCanonicalHostedZoneNameID(CanonicalHostedZoneNameIDT&& value) { SetCanonicalHostedZoneNameID(std::forward<CanonicalHostedZoneNameIDT>(value)); return *this;}
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
    AwsElbLoadBalancerDetails& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline const Aws::String& GetDnsName() const { return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    template<typename DnsNameT = Aws::String>
    void SetDnsName(DnsNameT&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::forward<DnsNameT>(value); }
    template<typename DnsNameT = Aws::String>
    AwsElbLoadBalancerDetails& WithDnsName(DnsNameT&& value) { SetDnsName(std::forward<DnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the health checks that are conducted on the load
     * balancer.</p>
     */
    inline const AwsElbLoadBalancerHealthCheck& GetHealthCheck() const { return m_healthCheck; }
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
    template<typename HealthCheckT = AwsElbLoadBalancerHealthCheck>
    void SetHealthCheck(HealthCheckT&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::forward<HealthCheckT>(value); }
    template<typename HealthCheckT = AwsElbLoadBalancerHealthCheck>
    AwsElbLoadBalancerDetails& WithHealthCheck(HealthCheckT&& value) { SetHealthCheck(std::forward<HealthCheckT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of EC2 instances for the load balancer.</p>
     */
    inline const Aws::Vector<AwsElbLoadBalancerInstance>& GetInstances() const { return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    template<typename InstancesT = Aws::Vector<AwsElbLoadBalancerInstance>>
    void SetInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances = std::forward<InstancesT>(value); }
    template<typename InstancesT = Aws::Vector<AwsElbLoadBalancerInstance>>
    AwsElbLoadBalancerDetails& WithInstances(InstancesT&& value) { SetInstances(std::forward<InstancesT>(value)); return *this;}
    template<typename InstancesT = AwsElbLoadBalancerInstance>
    AwsElbLoadBalancerDetails& AddInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances.emplace_back(std::forward<InstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The policies that are enabled for the load balancer listeners.</p>
     */
    inline const Aws::Vector<AwsElbLoadBalancerListenerDescription>& GetListenerDescriptions() const { return m_listenerDescriptions; }
    inline bool ListenerDescriptionsHasBeenSet() const { return m_listenerDescriptionsHasBeenSet; }
    template<typename ListenerDescriptionsT = Aws::Vector<AwsElbLoadBalancerListenerDescription>>
    void SetListenerDescriptions(ListenerDescriptionsT&& value) { m_listenerDescriptionsHasBeenSet = true; m_listenerDescriptions = std::forward<ListenerDescriptionsT>(value); }
    template<typename ListenerDescriptionsT = Aws::Vector<AwsElbLoadBalancerListenerDescription>>
    AwsElbLoadBalancerDetails& WithListenerDescriptions(ListenerDescriptionsT&& value) { SetListenerDescriptions(std::forward<ListenerDescriptionsT>(value)); return *this;}
    template<typename ListenerDescriptionsT = AwsElbLoadBalancerListenerDescription>
    AwsElbLoadBalancerDetails& AddListenerDescriptions(ListenerDescriptionsT&& value) { m_listenerDescriptionsHasBeenSet = true; m_listenerDescriptions.emplace_back(std::forward<ListenerDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attributes for a load balancer.</p>
     */
    inline const AwsElbLoadBalancerAttributes& GetLoadBalancerAttributes() const { return m_loadBalancerAttributes; }
    inline bool LoadBalancerAttributesHasBeenSet() const { return m_loadBalancerAttributesHasBeenSet; }
    template<typename LoadBalancerAttributesT = AwsElbLoadBalancerAttributes>
    void SetLoadBalancerAttributes(LoadBalancerAttributesT&& value) { m_loadBalancerAttributesHasBeenSet = true; m_loadBalancerAttributes = std::forward<LoadBalancerAttributesT>(value); }
    template<typename LoadBalancerAttributesT = AwsElbLoadBalancerAttributes>
    AwsElbLoadBalancerDetails& WithLoadBalancerAttributes(LoadBalancerAttributesT&& value) { SetLoadBalancerAttributes(std::forward<LoadBalancerAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const { return m_loadBalancerName; }
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }
    template<typename LoadBalancerNameT = Aws::String>
    void SetLoadBalancerName(LoadBalancerNameT&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::forward<LoadBalancerNameT>(value); }
    template<typename LoadBalancerNameT = Aws::String>
    AwsElbLoadBalancerDetails& WithLoadBalancerName(LoadBalancerNameT&& value) { SetLoadBalancerName(std::forward<LoadBalancerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policies for a load balancer.</p>
     */
    inline const AwsElbLoadBalancerPolicies& GetPolicies() const { return m_policies; }
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }
    template<typename PoliciesT = AwsElbLoadBalancerPolicies>
    void SetPolicies(PoliciesT&& value) { m_policiesHasBeenSet = true; m_policies = std::forward<PoliciesT>(value); }
    template<typename PoliciesT = AwsElbLoadBalancerPolicies>
    AwsElbLoadBalancerDetails& WithPolicies(PoliciesT&& value) { SetPolicies(std::forward<PoliciesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of load balancer. Only provided if the load balancer is in a
     * VPC.</p> <p>If <code>Scheme</code> is <code>internet-facing</code>, the load
     * balancer has a public DNS name that resolves to a public IP address.</p> <p>If
     * <code>Scheme</code> is <code>internal</code>, the load balancer has a public DNS
     * name that resolves to a private IP address.</p>
     */
    inline const Aws::String& GetScheme() const { return m_scheme; }
    inline bool SchemeHasBeenSet() const { return m_schemeHasBeenSet; }
    template<typename SchemeT = Aws::String>
    void SetScheme(SchemeT&& value) { m_schemeHasBeenSet = true; m_scheme = std::forward<SchemeT>(value); }
    template<typename SchemeT = Aws::String>
    AwsElbLoadBalancerDetails& WithScheme(SchemeT&& value) { SetScheme(std::forward<SchemeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups for the load balancer. Only provided if the load balancer
     * is in a VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    AwsElbLoadBalancerDetails& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    AwsElbLoadBalancerDetails& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the security group for the load balancer. This is the
     * security group that is used for inbound rules.</p>
     */
    inline const AwsElbLoadBalancerSourceSecurityGroup& GetSourceSecurityGroup() const { return m_sourceSecurityGroup; }
    inline bool SourceSecurityGroupHasBeenSet() const { return m_sourceSecurityGroupHasBeenSet; }
    template<typename SourceSecurityGroupT = AwsElbLoadBalancerSourceSecurityGroup>
    void SetSourceSecurityGroup(SourceSecurityGroupT&& value) { m_sourceSecurityGroupHasBeenSet = true; m_sourceSecurityGroup = std::forward<SourceSecurityGroupT>(value); }
    template<typename SourceSecurityGroupT = AwsElbLoadBalancerSourceSecurityGroup>
    AwsElbLoadBalancerDetails& WithSourceSecurityGroup(SourceSecurityGroupT&& value) { SetSourceSecurityGroup(std::forward<SourceSecurityGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of subnet identifiers for the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    AwsElbLoadBalancerDetails& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = Aws::String>
    AwsElbLoadBalancerDetails& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the VPC for the load balancer.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    AwsElbLoadBalancerDetails& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<AwsElbLoadBalancerBackendServerDescription> m_backendServerDescriptions;
    bool m_backendServerDescriptionsHasBeenSet = false;

    Aws::String m_canonicalHostedZoneName;
    bool m_canonicalHostedZoneNameHasBeenSet = false;

    Aws::String m_canonicalHostedZoneNameID;
    bool m_canonicalHostedZoneNameIDHasBeenSet = false;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;

    AwsElbLoadBalancerHealthCheck m_healthCheck;
    bool m_healthCheckHasBeenSet = false;

    Aws::Vector<AwsElbLoadBalancerInstance> m_instances;
    bool m_instancesHasBeenSet = false;

    Aws::Vector<AwsElbLoadBalancerListenerDescription> m_listenerDescriptions;
    bool m_listenerDescriptionsHasBeenSet = false;

    AwsElbLoadBalancerAttributes m_loadBalancerAttributes;
    bool m_loadBalancerAttributesHasBeenSet = false;

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    AwsElbLoadBalancerPolicies m_policies;
    bool m_policiesHasBeenSet = false;

    Aws::String m_scheme;
    bool m_schemeHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    AwsElbLoadBalancerSourceSecurityGroup m_sourceSecurityGroup;
    bool m_sourceSecurityGroupHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
