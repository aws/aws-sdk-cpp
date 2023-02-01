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


    /**
     * <p>The list of Availability Zones for the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>The list of Availability Zones for the load balancer.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>The list of Availability Zones for the load balancer.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>The list of Availability Zones for the load balancer.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>The list of Availability Zones for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The list of Availability Zones for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>The list of Availability Zones for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The list of Availability Zones for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Availability Zones for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>Information about the configuration of the EC2 instances.</p>
     */
    inline const Aws::Vector<AwsElbLoadBalancerBackendServerDescription>& GetBackendServerDescriptions() const{ return m_backendServerDescriptions; }

    /**
     * <p>Information about the configuration of the EC2 instances.</p>
     */
    inline bool BackendServerDescriptionsHasBeenSet() const { return m_backendServerDescriptionsHasBeenSet; }

    /**
     * <p>Information about the configuration of the EC2 instances.</p>
     */
    inline void SetBackendServerDescriptions(const Aws::Vector<AwsElbLoadBalancerBackendServerDescription>& value) { m_backendServerDescriptionsHasBeenSet = true; m_backendServerDescriptions = value; }

    /**
     * <p>Information about the configuration of the EC2 instances.</p>
     */
    inline void SetBackendServerDescriptions(Aws::Vector<AwsElbLoadBalancerBackendServerDescription>&& value) { m_backendServerDescriptionsHasBeenSet = true; m_backendServerDescriptions = std::move(value); }

    /**
     * <p>Information about the configuration of the EC2 instances.</p>
     */
    inline AwsElbLoadBalancerDetails& WithBackendServerDescriptions(const Aws::Vector<AwsElbLoadBalancerBackendServerDescription>& value) { SetBackendServerDescriptions(value); return *this;}

    /**
     * <p>Information about the configuration of the EC2 instances.</p>
     */
    inline AwsElbLoadBalancerDetails& WithBackendServerDescriptions(Aws::Vector<AwsElbLoadBalancerBackendServerDescription>&& value) { SetBackendServerDescriptions(std::move(value)); return *this;}

    /**
     * <p>Information about the configuration of the EC2 instances.</p>
     */
    inline AwsElbLoadBalancerDetails& AddBackendServerDescriptions(const AwsElbLoadBalancerBackendServerDescription& value) { m_backendServerDescriptionsHasBeenSet = true; m_backendServerDescriptions.push_back(value); return *this; }

    /**
     * <p>Information about the configuration of the EC2 instances.</p>
     */
    inline AwsElbLoadBalancerDetails& AddBackendServerDescriptions(AwsElbLoadBalancerBackendServerDescription&& value) { m_backendServerDescriptionsHasBeenSet = true; m_backendServerDescriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline const Aws::String& GetCanonicalHostedZoneName() const{ return m_canonicalHostedZoneName; }

    /**
     * <p>The name of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline bool CanonicalHostedZoneNameHasBeenSet() const { return m_canonicalHostedZoneNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline void SetCanonicalHostedZoneName(const Aws::String& value) { m_canonicalHostedZoneNameHasBeenSet = true; m_canonicalHostedZoneName = value; }

    /**
     * <p>The name of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline void SetCanonicalHostedZoneName(Aws::String&& value) { m_canonicalHostedZoneNameHasBeenSet = true; m_canonicalHostedZoneName = std::move(value); }

    /**
     * <p>The name of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline void SetCanonicalHostedZoneName(const char* value) { m_canonicalHostedZoneNameHasBeenSet = true; m_canonicalHostedZoneName.assign(value); }

    /**
     * <p>The name of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithCanonicalHostedZoneName(const Aws::String& value) { SetCanonicalHostedZoneName(value); return *this;}

    /**
     * <p>The name of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithCanonicalHostedZoneName(Aws::String&& value) { SetCanonicalHostedZoneName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithCanonicalHostedZoneName(const char* value) { SetCanonicalHostedZoneName(value); return *this;}


    /**
     * <p>The ID of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline const Aws::String& GetCanonicalHostedZoneNameID() const{ return m_canonicalHostedZoneNameID; }

    /**
     * <p>The ID of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline bool CanonicalHostedZoneNameIDHasBeenSet() const { return m_canonicalHostedZoneNameIDHasBeenSet; }

    /**
     * <p>The ID of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline void SetCanonicalHostedZoneNameID(const Aws::String& value) { m_canonicalHostedZoneNameIDHasBeenSet = true; m_canonicalHostedZoneNameID = value; }

    /**
     * <p>The ID of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline void SetCanonicalHostedZoneNameID(Aws::String&& value) { m_canonicalHostedZoneNameIDHasBeenSet = true; m_canonicalHostedZoneNameID = std::move(value); }

    /**
     * <p>The ID of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline void SetCanonicalHostedZoneNameID(const char* value) { m_canonicalHostedZoneNameIDHasBeenSet = true; m_canonicalHostedZoneNameID.assign(value); }

    /**
     * <p>The ID of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithCanonicalHostedZoneNameID(const Aws::String& value) { SetCanonicalHostedZoneNameID(value); return *this;}

    /**
     * <p>The ID of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithCanonicalHostedZoneNameID(Aws::String&& value) { SetCanonicalHostedZoneNameID(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Route 53 hosted zone for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithCanonicalHostedZoneNameID(const char* value) { SetCanonicalHostedZoneNameID(value); return *this;}


    /**
     * <p>Indicates when the load balancer was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>Indicates when the load balancer was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>Indicates when the load balancer was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedTime(const Aws::String& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>Indicates when the load balancer was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedTime(Aws::String&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>Indicates when the load balancer was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedTime(const char* value) { m_createdTimeHasBeenSet = true; m_createdTime.assign(value); }

    /**
     * <p>Indicates when the load balancer was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsElbLoadBalancerDetails& WithCreatedTime(const Aws::String& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>Indicates when the load balancer was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsElbLoadBalancerDetails& WithCreatedTime(Aws::String&& value) { SetCreatedTime(std::move(value)); return *this;}

    /**
     * <p>Indicates when the load balancer was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsElbLoadBalancerDetails& WithCreatedTime(const char* value) { SetCreatedTime(value); return *this;}


    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }

    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }

    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline void SetDnsName(const Aws::String& value) { m_dnsNameHasBeenSet = true; m_dnsName = value; }

    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline void SetDnsName(Aws::String&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::move(value); }

    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline void SetDnsName(const char* value) { m_dnsNameHasBeenSet = true; m_dnsName.assign(value); }

    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}

    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}

    /**
     * <p>The DNS name of the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithDnsName(const char* value) { SetDnsName(value); return *this;}


    /**
     * <p>Information about the health checks that are conducted on the load
     * balancer.</p>
     */
    inline const AwsElbLoadBalancerHealthCheck& GetHealthCheck() const{ return m_healthCheck; }

    /**
     * <p>Information about the health checks that are conducted on the load
     * balancer.</p>
     */
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }

    /**
     * <p>Information about the health checks that are conducted on the load
     * balancer.</p>
     */
    inline void SetHealthCheck(const AwsElbLoadBalancerHealthCheck& value) { m_healthCheckHasBeenSet = true; m_healthCheck = value; }

    /**
     * <p>Information about the health checks that are conducted on the load
     * balancer.</p>
     */
    inline void SetHealthCheck(AwsElbLoadBalancerHealthCheck&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::move(value); }

    /**
     * <p>Information about the health checks that are conducted on the load
     * balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithHealthCheck(const AwsElbLoadBalancerHealthCheck& value) { SetHealthCheck(value); return *this;}

    /**
     * <p>Information about the health checks that are conducted on the load
     * balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithHealthCheck(AwsElbLoadBalancerHealthCheck&& value) { SetHealthCheck(std::move(value)); return *this;}


    /**
     * <p>List of EC2 instances for the load balancer.</p>
     */
    inline const Aws::Vector<AwsElbLoadBalancerInstance>& GetInstances() const{ return m_instances; }

    /**
     * <p>List of EC2 instances for the load balancer.</p>
     */
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }

    /**
     * <p>List of EC2 instances for the load balancer.</p>
     */
    inline void SetInstances(const Aws::Vector<AwsElbLoadBalancerInstance>& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /**
     * <p>List of EC2 instances for the load balancer.</p>
     */
    inline void SetInstances(Aws::Vector<AwsElbLoadBalancerInstance>&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }

    /**
     * <p>List of EC2 instances for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithInstances(const Aws::Vector<AwsElbLoadBalancerInstance>& value) { SetInstances(value); return *this;}

    /**
     * <p>List of EC2 instances for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithInstances(Aws::Vector<AwsElbLoadBalancerInstance>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>List of EC2 instances for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& AddInstances(const AwsElbLoadBalancerInstance& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }

    /**
     * <p>List of EC2 instances for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& AddInstances(AwsElbLoadBalancerInstance&& value) { m_instancesHasBeenSet = true; m_instances.push_back(std::move(value)); return *this; }


    /**
     * <p>The policies that are enabled for the load balancer listeners.</p>
     */
    inline const Aws::Vector<AwsElbLoadBalancerListenerDescription>& GetListenerDescriptions() const{ return m_listenerDescriptions; }

    /**
     * <p>The policies that are enabled for the load balancer listeners.</p>
     */
    inline bool ListenerDescriptionsHasBeenSet() const { return m_listenerDescriptionsHasBeenSet; }

    /**
     * <p>The policies that are enabled for the load balancer listeners.</p>
     */
    inline void SetListenerDescriptions(const Aws::Vector<AwsElbLoadBalancerListenerDescription>& value) { m_listenerDescriptionsHasBeenSet = true; m_listenerDescriptions = value; }

    /**
     * <p>The policies that are enabled for the load balancer listeners.</p>
     */
    inline void SetListenerDescriptions(Aws::Vector<AwsElbLoadBalancerListenerDescription>&& value) { m_listenerDescriptionsHasBeenSet = true; m_listenerDescriptions = std::move(value); }

    /**
     * <p>The policies that are enabled for the load balancer listeners.</p>
     */
    inline AwsElbLoadBalancerDetails& WithListenerDescriptions(const Aws::Vector<AwsElbLoadBalancerListenerDescription>& value) { SetListenerDescriptions(value); return *this;}

    /**
     * <p>The policies that are enabled for the load balancer listeners.</p>
     */
    inline AwsElbLoadBalancerDetails& WithListenerDescriptions(Aws::Vector<AwsElbLoadBalancerListenerDescription>&& value) { SetListenerDescriptions(std::move(value)); return *this;}

    /**
     * <p>The policies that are enabled for the load balancer listeners.</p>
     */
    inline AwsElbLoadBalancerDetails& AddListenerDescriptions(const AwsElbLoadBalancerListenerDescription& value) { m_listenerDescriptionsHasBeenSet = true; m_listenerDescriptions.push_back(value); return *this; }

    /**
     * <p>The policies that are enabled for the load balancer listeners.</p>
     */
    inline AwsElbLoadBalancerDetails& AddListenerDescriptions(AwsElbLoadBalancerListenerDescription&& value) { m_listenerDescriptionsHasBeenSet = true; m_listenerDescriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The attributes for a load balancer.</p>
     */
    inline const AwsElbLoadBalancerAttributes& GetLoadBalancerAttributes() const{ return m_loadBalancerAttributes; }

    /**
     * <p>The attributes for a load balancer.</p>
     */
    inline bool LoadBalancerAttributesHasBeenSet() const { return m_loadBalancerAttributesHasBeenSet; }

    /**
     * <p>The attributes for a load balancer.</p>
     */
    inline void SetLoadBalancerAttributes(const AwsElbLoadBalancerAttributes& value) { m_loadBalancerAttributesHasBeenSet = true; m_loadBalancerAttributes = value; }

    /**
     * <p>The attributes for a load balancer.</p>
     */
    inline void SetLoadBalancerAttributes(AwsElbLoadBalancerAttributes&& value) { m_loadBalancerAttributesHasBeenSet = true; m_loadBalancerAttributes = std::move(value); }

    /**
     * <p>The attributes for a load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithLoadBalancerAttributes(const AwsElbLoadBalancerAttributes& value) { SetLoadBalancerAttributes(value); return *this;}

    /**
     * <p>The attributes for a load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithLoadBalancerAttributes(AwsElbLoadBalancerAttributes&& value) { SetLoadBalancerAttributes(std::move(value)); return *this;}


    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}


    /**
     * <p>The policies for a load balancer.</p>
     */
    inline const AwsElbLoadBalancerPolicies& GetPolicies() const{ return m_policies; }

    /**
     * <p>The policies for a load balancer.</p>
     */
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }

    /**
     * <p>The policies for a load balancer.</p>
     */
    inline void SetPolicies(const AwsElbLoadBalancerPolicies& value) { m_policiesHasBeenSet = true; m_policies = value; }

    /**
     * <p>The policies for a load balancer.</p>
     */
    inline void SetPolicies(AwsElbLoadBalancerPolicies&& value) { m_policiesHasBeenSet = true; m_policies = std::move(value); }

    /**
     * <p>The policies for a load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithPolicies(const AwsElbLoadBalancerPolicies& value) { SetPolicies(value); return *this;}

    /**
     * <p>The policies for a load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithPolicies(AwsElbLoadBalancerPolicies&& value) { SetPolicies(std::move(value)); return *this;}


    /**
     * <p>The type of load balancer. Only provided if the load balancer is in a
     * VPC.</p> <p>If <code>Scheme</code> is <code>internet-facing</code>, the load
     * balancer has a public DNS name that resolves to a public IP address.</p> <p>If
     * <code>Scheme</code> is <code>internal</code>, the load balancer has a public DNS
     * name that resolves to a private IP address.</p>
     */
    inline const Aws::String& GetScheme() const{ return m_scheme; }

    /**
     * <p>The type of load balancer. Only provided if the load balancer is in a
     * VPC.</p> <p>If <code>Scheme</code> is <code>internet-facing</code>, the load
     * balancer has a public DNS name that resolves to a public IP address.</p> <p>If
     * <code>Scheme</code> is <code>internal</code>, the load balancer has a public DNS
     * name that resolves to a private IP address.</p>
     */
    inline bool SchemeHasBeenSet() const { return m_schemeHasBeenSet; }

    /**
     * <p>The type of load balancer. Only provided if the load balancer is in a
     * VPC.</p> <p>If <code>Scheme</code> is <code>internet-facing</code>, the load
     * balancer has a public DNS name that resolves to a public IP address.</p> <p>If
     * <code>Scheme</code> is <code>internal</code>, the load balancer has a public DNS
     * name that resolves to a private IP address.</p>
     */
    inline void SetScheme(const Aws::String& value) { m_schemeHasBeenSet = true; m_scheme = value; }

    /**
     * <p>The type of load balancer. Only provided if the load balancer is in a
     * VPC.</p> <p>If <code>Scheme</code> is <code>internet-facing</code>, the load
     * balancer has a public DNS name that resolves to a public IP address.</p> <p>If
     * <code>Scheme</code> is <code>internal</code>, the load balancer has a public DNS
     * name that resolves to a private IP address.</p>
     */
    inline void SetScheme(Aws::String&& value) { m_schemeHasBeenSet = true; m_scheme = std::move(value); }

    /**
     * <p>The type of load balancer. Only provided if the load balancer is in a
     * VPC.</p> <p>If <code>Scheme</code> is <code>internet-facing</code>, the load
     * balancer has a public DNS name that resolves to a public IP address.</p> <p>If
     * <code>Scheme</code> is <code>internal</code>, the load balancer has a public DNS
     * name that resolves to a private IP address.</p>
     */
    inline void SetScheme(const char* value) { m_schemeHasBeenSet = true; m_scheme.assign(value); }

    /**
     * <p>The type of load balancer. Only provided if the load balancer is in a
     * VPC.</p> <p>If <code>Scheme</code> is <code>internet-facing</code>, the load
     * balancer has a public DNS name that resolves to a public IP address.</p> <p>If
     * <code>Scheme</code> is <code>internal</code>, the load balancer has a public DNS
     * name that resolves to a private IP address.</p>
     */
    inline AwsElbLoadBalancerDetails& WithScheme(const Aws::String& value) { SetScheme(value); return *this;}

    /**
     * <p>The type of load balancer. Only provided if the load balancer is in a
     * VPC.</p> <p>If <code>Scheme</code> is <code>internet-facing</code>, the load
     * balancer has a public DNS name that resolves to a public IP address.</p> <p>If
     * <code>Scheme</code> is <code>internal</code>, the load balancer has a public DNS
     * name that resolves to a private IP address.</p>
     */
    inline AwsElbLoadBalancerDetails& WithScheme(Aws::String&& value) { SetScheme(std::move(value)); return *this;}

    /**
     * <p>The type of load balancer. Only provided if the load balancer is in a
     * VPC.</p> <p>If <code>Scheme</code> is <code>internet-facing</code>, the load
     * balancer has a public DNS name that resolves to a public IP address.</p> <p>If
     * <code>Scheme</code> is <code>internal</code>, the load balancer has a public DNS
     * name that resolves to a private IP address.</p>
     */
    inline AwsElbLoadBalancerDetails& WithScheme(const char* value) { SetScheme(value); return *this;}


    /**
     * <p>The security groups for the load balancer. Only provided if the load balancer
     * is in a VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>The security groups for the load balancer. Only provided if the load balancer
     * is in a VPC.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>The security groups for the load balancer. Only provided if the load balancer
     * is in a VPC.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>The security groups for the load balancer. Only provided if the load balancer
     * is in a VPC.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>The security groups for the load balancer. Only provided if the load balancer
     * is in a VPC.</p>
     */
    inline AwsElbLoadBalancerDetails& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>The security groups for the load balancer. Only provided if the load balancer
     * is in a VPC.</p>
     */
    inline AwsElbLoadBalancerDetails& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The security groups for the load balancer. Only provided if the load balancer
     * is in a VPC.</p>
     */
    inline AwsElbLoadBalancerDetails& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>The security groups for the load balancer. Only provided if the load balancer
     * is in a VPC.</p>
     */
    inline AwsElbLoadBalancerDetails& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The security groups for the load balancer. Only provided if the load balancer
     * is in a VPC.</p>
     */
    inline AwsElbLoadBalancerDetails& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * <p>Information about the security group for the load balancer. This is the
     * security group that is used for inbound rules.</p>
     */
    inline const AwsElbLoadBalancerSourceSecurityGroup& GetSourceSecurityGroup() const{ return m_sourceSecurityGroup; }

    /**
     * <p>Information about the security group for the load balancer. This is the
     * security group that is used for inbound rules.</p>
     */
    inline bool SourceSecurityGroupHasBeenSet() const { return m_sourceSecurityGroupHasBeenSet; }

    /**
     * <p>Information about the security group for the load balancer. This is the
     * security group that is used for inbound rules.</p>
     */
    inline void SetSourceSecurityGroup(const AwsElbLoadBalancerSourceSecurityGroup& value) { m_sourceSecurityGroupHasBeenSet = true; m_sourceSecurityGroup = value; }

    /**
     * <p>Information about the security group for the load balancer. This is the
     * security group that is used for inbound rules.</p>
     */
    inline void SetSourceSecurityGroup(AwsElbLoadBalancerSourceSecurityGroup&& value) { m_sourceSecurityGroupHasBeenSet = true; m_sourceSecurityGroup = std::move(value); }

    /**
     * <p>Information about the security group for the load balancer. This is the
     * security group that is used for inbound rules.</p>
     */
    inline AwsElbLoadBalancerDetails& WithSourceSecurityGroup(const AwsElbLoadBalancerSourceSecurityGroup& value) { SetSourceSecurityGroup(value); return *this;}

    /**
     * <p>Information about the security group for the load balancer. This is the
     * security group that is used for inbound rules.</p>
     */
    inline AwsElbLoadBalancerDetails& WithSourceSecurityGroup(AwsElbLoadBalancerSourceSecurityGroup&& value) { SetSourceSecurityGroup(std::move(value)); return *this;}


    /**
     * <p>The list of subnet identifiers for the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The list of subnet identifiers for the load balancer.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The list of subnet identifiers for the load balancer.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The list of subnet identifiers for the load balancer.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The list of subnet identifiers for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The list of subnet identifiers for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The list of subnet identifiers for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The list of subnet identifiers for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of subnet identifiers for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }


    /**
     * <p>The identifier of the VPC for the load balancer.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The identifier of the VPC for the load balancer.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The identifier of the VPC for the load balancer.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The identifier of the VPC for the load balancer.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The identifier of the VPC for the load balancer.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The identifier of the VPC for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The identifier of the VPC for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the VPC for the load balancer.</p>
     */
    inline AwsElbLoadBalancerDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}

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
