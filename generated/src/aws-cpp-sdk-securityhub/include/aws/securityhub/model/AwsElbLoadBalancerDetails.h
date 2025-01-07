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
    AWS_SECURITYHUB_API AwsElbLoadBalancerDetails();
    AWS_SECURITYHUB_API AwsElbLoadBalancerDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbLoadBalancerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of Availability Zones for the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline AwsElbLoadBalancerDetails& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}
    inline AwsElbLoadBalancerDetails& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline AwsElbLoadBalancerDetails& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline AwsElbLoadBalancerDetails& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    inline AwsElbLoadBalancerDetails& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the configuration of the EC2 instances.</p>
     */
    inline const Aws::Vector<AwsElbLoadBalancerBackendServerDescription>& GetBackendServerDescriptions() const{ return m_backendServerDescriptions; }
    inline bool BackendServerDescriptionsHasBeenSet() const { return m_backendServerDescriptionsHasBeenSet; }
    inline void SetBackendServerDescriptions(const Aws::Vector<AwsElbLoadBalancerBackendServerDescription>& value) { m_backendServerDescriptionsHasBeenSet = true; m_backendServerDescriptions = value; }
    inline void SetBackendServerDescriptions(Aws::Vector<AwsElbLoadBalancerBackendServerDescription>&& value) { m_backendServerDescriptionsHasBeenSet = true; m_backendServerDescriptions = std::move(value); }
    inline AwsElbLoadBalancerDetails& WithBackendServerDescriptions(const Aws::Vector<AwsElbLoadBalancerBackendServerDescription>& value) { SetBackendServerDescriptions(value); return *this;}
    inline AwsElbLoadBalancerDetails& WithBackendServerDescriptions(Aws::Vector<AwsElbLoadBalancerBackendServerDescription>&& value) { SetBackendServerDescriptions(std::move(value)); return *this;}
    inline AwsElbLoadBalancerDetails& AddBackendServerDescriptions(const AwsElbLoadBalancerBackendServerDescription& value) { m_backendServerDescriptionsHasBeenSet = true; m_backendServerDescriptions.push_back(value); return *this; }
    inline AwsElbLoadBalancerDetails& AddBackendServerDescriptions(AwsElbLoadBalancerBackendServerDescription&& value) { m_backendServerDescriptionsHasBeenSet = true; m_backendServerDescriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline const Aws::String& GetCanonicalHostedZoneName() const{ return m_canonicalHostedZoneName; }
    inline bool CanonicalHostedZoneNameHasBeenSet() const { return m_canonicalHostedZoneNameHasBeenSet; }
    inline void SetCanonicalHostedZoneName(const Aws::String& value) { m_canonicalHostedZoneNameHasBeenSet = true; m_canonicalHostedZoneName = value; }
    inline void SetCanonicalHostedZoneName(Aws::String&& value) { m_canonicalHostedZoneNameHasBeenSet = true; m_canonicalHostedZoneName = std::move(value); }
    inline void SetCanonicalHostedZoneName(const char* value) { m_canonicalHostedZoneNameHasBeenSet = true; m_canonicalHostedZoneName.assign(value); }
    inline AwsElbLoadBalancerDetails& WithCanonicalHostedZoneName(const Aws::String& value) { SetCanonicalHostedZoneName(value); return *this;}
    inline AwsElbLoadBalancerDetails& WithCanonicalHostedZoneName(Aws::String&& value) { SetCanonicalHostedZoneName(std::move(value)); return *this;}
    inline AwsElbLoadBalancerDetails& WithCanonicalHostedZoneName(const char* value) { SetCanonicalHostedZoneName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline const Aws::String& GetCanonicalHostedZoneNameID() const{ return m_canonicalHostedZoneNameID; }
    inline bool CanonicalHostedZoneNameIDHasBeenSet() const { return m_canonicalHostedZoneNameIDHasBeenSet; }
    inline void SetCanonicalHostedZoneNameID(const Aws::String& value) { m_canonicalHostedZoneNameIDHasBeenSet = true; m_canonicalHostedZoneNameID = value; }
    inline void SetCanonicalHostedZoneNameID(Aws::String&& value) { m_canonicalHostedZoneNameIDHasBeenSet = true; m_canonicalHostedZoneNameID = std::move(value); }
    inline void SetCanonicalHostedZoneNameID(const char* value) { m_canonicalHostedZoneNameIDHasBeenSet = true; m_canonicalHostedZoneNameID.assign(value); }
    inline AwsElbLoadBalancerDetails& WithCanonicalHostedZoneNameID(const Aws::String& value) { SetCanonicalHostedZoneNameID(value); return *this;}
    inline AwsElbLoadBalancerDetails& WithCanonicalHostedZoneNameID(Aws::String&& value) { SetCanonicalHostedZoneNameID(std::move(value)); return *this;}
    inline AwsElbLoadBalancerDetails& WithCanonicalHostedZoneNameID(const char* value) { SetCanonicalHostedZoneNameID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the load balancer was created.</p> <p>For more information
     * about the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::String& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::String&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline void SetCreatedTime(const char* value) { m_createdTimeHasBeenSet = true; m_createdTime.assign(value); }
    inline AwsElbLoadBalancerDetails& WithCreatedTime(const Aws::String& value) { SetCreatedTime(value); return *this;}
    inline AwsElbLoadBalancerDetails& WithCreatedTime(Aws::String&& value) { SetCreatedTime(std::move(value)); return *this;}
    inline AwsElbLoadBalancerDetails& WithCreatedTime(const char* value) { SetCreatedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    inline void SetDnsName(const Aws::String& value) { m_dnsNameHasBeenSet = true; m_dnsName = value; }
    inline void SetDnsName(Aws::String&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::move(value); }
    inline void SetDnsName(const char* value) { m_dnsNameHasBeenSet = true; m_dnsName.assign(value); }
    inline AwsElbLoadBalancerDetails& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}
    inline AwsElbLoadBalancerDetails& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}
    inline AwsElbLoadBalancerDetails& WithDnsName(const char* value) { SetDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the health checks that are conducted on the load
     * balancer.</p>
     */
    inline const AwsElbLoadBalancerHealthCheck& GetHealthCheck() const{ return m_healthCheck; }
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
    inline void SetHealthCheck(const AwsElbLoadBalancerHealthCheck& value) { m_healthCheckHasBeenSet = true; m_healthCheck = value; }
    inline void SetHealthCheck(AwsElbLoadBalancerHealthCheck&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::move(value); }
    inline AwsElbLoadBalancerDetails& WithHealthCheck(const AwsElbLoadBalancerHealthCheck& value) { SetHealthCheck(value); return *this;}
    inline AwsElbLoadBalancerDetails& WithHealthCheck(AwsElbLoadBalancerHealthCheck&& value) { SetHealthCheck(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of EC2 instances for the load balancer.</p>
     */
    inline const Aws::Vector<AwsElbLoadBalancerInstance>& GetInstances() const{ return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    inline void SetInstances(const Aws::Vector<AwsElbLoadBalancerInstance>& value) { m_instancesHasBeenSet = true; m_instances = value; }
    inline void SetInstances(Aws::Vector<AwsElbLoadBalancerInstance>&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }
    inline AwsElbLoadBalancerDetails& WithInstances(const Aws::Vector<AwsElbLoadBalancerInstance>& value) { SetInstances(value); return *this;}
    inline AwsElbLoadBalancerDetails& WithInstances(Aws::Vector<AwsElbLoadBalancerInstance>&& value) { SetInstances(std::move(value)); return *this;}
    inline AwsElbLoadBalancerDetails& AddInstances(const AwsElbLoadBalancerInstance& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }
    inline AwsElbLoadBalancerDetails& AddInstances(AwsElbLoadBalancerInstance&& value) { m_instancesHasBeenSet = true; m_instances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The policies that are enabled for the load balancer listeners.</p>
     */
    inline const Aws::Vector<AwsElbLoadBalancerListenerDescription>& GetListenerDescriptions() const{ return m_listenerDescriptions; }
    inline bool ListenerDescriptionsHasBeenSet() const { return m_listenerDescriptionsHasBeenSet; }
    inline void SetListenerDescriptions(const Aws::Vector<AwsElbLoadBalancerListenerDescription>& value) { m_listenerDescriptionsHasBeenSet = true; m_listenerDescriptions = value; }
    inline void SetListenerDescriptions(Aws::Vector<AwsElbLoadBalancerListenerDescription>&& value) { m_listenerDescriptionsHasBeenSet = true; m_listenerDescriptions = std::move(value); }
    inline AwsElbLoadBalancerDetails& WithListenerDescriptions(const Aws::Vector<AwsElbLoadBalancerListenerDescription>& value) { SetListenerDescriptions(value); return *this;}
    inline AwsElbLoadBalancerDetails& WithListenerDescriptions(Aws::Vector<AwsElbLoadBalancerListenerDescription>&& value) { SetListenerDescriptions(std::move(value)); return *this;}
    inline AwsElbLoadBalancerDetails& AddListenerDescriptions(const AwsElbLoadBalancerListenerDescription& value) { m_listenerDescriptionsHasBeenSet = true; m_listenerDescriptions.push_back(value); return *this; }
    inline AwsElbLoadBalancerDetails& AddListenerDescriptions(AwsElbLoadBalancerListenerDescription&& value) { m_listenerDescriptionsHasBeenSet = true; m_listenerDescriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attributes for a load balancer.</p>
     */
    inline const AwsElbLoadBalancerAttributes& GetLoadBalancerAttributes() const{ return m_loadBalancerAttributes; }
    inline bool LoadBalancerAttributesHasBeenSet() const { return m_loadBalancerAttributesHasBeenSet; }
    inline void SetLoadBalancerAttributes(const AwsElbLoadBalancerAttributes& value) { m_loadBalancerAttributesHasBeenSet = true; m_loadBalancerAttributes = value; }
    inline void SetLoadBalancerAttributes(AwsElbLoadBalancerAttributes&& value) { m_loadBalancerAttributesHasBeenSet = true; m_loadBalancerAttributes = std::move(value); }
    inline AwsElbLoadBalancerDetails& WithLoadBalancerAttributes(const AwsElbLoadBalancerAttributes& value) { SetLoadBalancerAttributes(value); return *this;}
    inline AwsElbLoadBalancerDetails& WithLoadBalancerAttributes(AwsElbLoadBalancerAttributes&& value) { SetLoadBalancerAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }
    inline AwsElbLoadBalancerDetails& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}
    inline AwsElbLoadBalancerDetails& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}
    inline AwsElbLoadBalancerDetails& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policies for a load balancer.</p>
     */
    inline const AwsElbLoadBalancerPolicies& GetPolicies() const{ return m_policies; }
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }
    inline void SetPolicies(const AwsElbLoadBalancerPolicies& value) { m_policiesHasBeenSet = true; m_policies = value; }
    inline void SetPolicies(AwsElbLoadBalancerPolicies&& value) { m_policiesHasBeenSet = true; m_policies = std::move(value); }
    inline AwsElbLoadBalancerDetails& WithPolicies(const AwsElbLoadBalancerPolicies& value) { SetPolicies(value); return *this;}
    inline AwsElbLoadBalancerDetails& WithPolicies(AwsElbLoadBalancerPolicies&& value) { SetPolicies(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of load balancer. Only provided if the load balancer is in a
     * VPC.</p> <p>If <code>Scheme</code> is <code>internet-facing</code>, the load
     * balancer has a public DNS name that resolves to a public IP address.</p> <p>If
     * <code>Scheme</code> is <code>internal</code>, the load balancer has a public DNS
     * name that resolves to a private IP address.</p>
     */
    inline const Aws::String& GetScheme() const{ return m_scheme; }
    inline bool SchemeHasBeenSet() const { return m_schemeHasBeenSet; }
    inline void SetScheme(const Aws::String& value) { m_schemeHasBeenSet = true; m_scheme = value; }
    inline void SetScheme(Aws::String&& value) { m_schemeHasBeenSet = true; m_scheme = std::move(value); }
    inline void SetScheme(const char* value) { m_schemeHasBeenSet = true; m_scheme.assign(value); }
    inline AwsElbLoadBalancerDetails& WithScheme(const Aws::String& value) { SetScheme(value); return *this;}
    inline AwsElbLoadBalancerDetails& WithScheme(Aws::String&& value) { SetScheme(std::move(value)); return *this;}
    inline AwsElbLoadBalancerDetails& WithScheme(const char* value) { SetScheme(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups for the load balancer. Only provided if the load balancer
     * is in a VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline AwsElbLoadBalancerDetails& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline AwsElbLoadBalancerDetails& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline AwsElbLoadBalancerDetails& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline AwsElbLoadBalancerDetails& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    inline AwsElbLoadBalancerDetails& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the security group for the load balancer. This is the
     * security group that is used for inbound rules.</p>
     */
    inline const AwsElbLoadBalancerSourceSecurityGroup& GetSourceSecurityGroup() const{ return m_sourceSecurityGroup; }
    inline bool SourceSecurityGroupHasBeenSet() const { return m_sourceSecurityGroupHasBeenSet; }
    inline void SetSourceSecurityGroup(const AwsElbLoadBalancerSourceSecurityGroup& value) { m_sourceSecurityGroupHasBeenSet = true; m_sourceSecurityGroup = value; }
    inline void SetSourceSecurityGroup(AwsElbLoadBalancerSourceSecurityGroup&& value) { m_sourceSecurityGroupHasBeenSet = true; m_sourceSecurityGroup = std::move(value); }
    inline AwsElbLoadBalancerDetails& WithSourceSecurityGroup(const AwsElbLoadBalancerSourceSecurityGroup& value) { SetSourceSecurityGroup(value); return *this;}
    inline AwsElbLoadBalancerDetails& WithSourceSecurityGroup(AwsElbLoadBalancerSourceSecurityGroup&& value) { SetSourceSecurityGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of subnet identifiers for the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }
    inline AwsElbLoadBalancerDetails& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}
    inline AwsElbLoadBalancerDetails& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}
    inline AwsElbLoadBalancerDetails& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }
    inline AwsElbLoadBalancerDetails& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }
    inline AwsElbLoadBalancerDetails& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the VPC for the load balancer.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline AwsElbLoadBalancerDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline AwsElbLoadBalancerDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline AwsElbLoadBalancerDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}
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
