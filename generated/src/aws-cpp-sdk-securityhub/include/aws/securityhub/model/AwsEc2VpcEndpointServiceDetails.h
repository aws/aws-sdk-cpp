/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEc2VpcEndpointServiceServiceTypeDetails.h>
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
   * <p>Contains details about the service configuration for a VPC endpoint
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2VpcEndpointServiceDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2VpcEndpointServiceDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2VpcEndpointServiceDetails();
    AWS_SECURITYHUB_API AwsEc2VpcEndpointServiceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VpcEndpointServiceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether requests from other Amazon Web Services accounts to create an
     * endpoint to the service must first be accepted.</p>
     */
    inline bool GetAcceptanceRequired() const{ return m_acceptanceRequired; }
    inline bool AcceptanceRequiredHasBeenSet() const { return m_acceptanceRequiredHasBeenSet; }
    inline void SetAcceptanceRequired(bool value) { m_acceptanceRequiredHasBeenSet = true; m_acceptanceRequired = value; }
    inline AwsEc2VpcEndpointServiceDetails& WithAcceptanceRequired(bool value) { SetAcceptanceRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zones where the service is available.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline AwsEc2VpcEndpointServiceDetails& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}
    inline AwsEc2VpcEndpointServiceDetails& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline AwsEc2VpcEndpointServiceDetails& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline AwsEc2VpcEndpointServiceDetails& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    inline AwsEc2VpcEndpointServiceDetails& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The DNS names for the service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBaseEndpointDnsNames() const{ return m_baseEndpointDnsNames; }
    inline bool BaseEndpointDnsNamesHasBeenSet() const { return m_baseEndpointDnsNamesHasBeenSet; }
    inline void SetBaseEndpointDnsNames(const Aws::Vector<Aws::String>& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames = value; }
    inline void SetBaseEndpointDnsNames(Aws::Vector<Aws::String>&& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames = std::move(value); }
    inline AwsEc2VpcEndpointServiceDetails& WithBaseEndpointDnsNames(const Aws::Vector<Aws::String>& value) { SetBaseEndpointDnsNames(value); return *this;}
    inline AwsEc2VpcEndpointServiceDetails& WithBaseEndpointDnsNames(Aws::Vector<Aws::String>&& value) { SetBaseEndpointDnsNames(std::move(value)); return *this;}
    inline AwsEc2VpcEndpointServiceDetails& AddBaseEndpointDnsNames(const Aws::String& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames.push_back(value); return *this; }
    inline AwsEc2VpcEndpointServiceDetails& AddBaseEndpointDnsNames(Aws::String&& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames.push_back(std::move(value)); return *this; }
    inline AwsEc2VpcEndpointServiceDetails& AddBaseEndpointDnsNames(const char* value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the service manages its VPC endpoints.</p>
     */
    inline bool GetManagesVpcEndpoints() const{ return m_managesVpcEndpoints; }
    inline bool ManagesVpcEndpointsHasBeenSet() const { return m_managesVpcEndpointsHasBeenSet; }
    inline void SetManagesVpcEndpoints(bool value) { m_managesVpcEndpointsHasBeenSet = true; m_managesVpcEndpoints = value; }
    inline AwsEc2VpcEndpointServiceDetails& WithManagesVpcEndpoints(bool value) { SetManagesVpcEndpoints(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the Gateway Load Balancers for the service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGatewayLoadBalancerArns() const{ return m_gatewayLoadBalancerArns; }
    inline bool GatewayLoadBalancerArnsHasBeenSet() const { return m_gatewayLoadBalancerArnsHasBeenSet; }
    inline void SetGatewayLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns = value; }
    inline void SetGatewayLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns = std::move(value); }
    inline AwsEc2VpcEndpointServiceDetails& WithGatewayLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetGatewayLoadBalancerArns(value); return *this;}
    inline AwsEc2VpcEndpointServiceDetails& WithGatewayLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetGatewayLoadBalancerArns(std::move(value)); return *this;}
    inline AwsEc2VpcEndpointServiceDetails& AddGatewayLoadBalancerArns(const Aws::String& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.push_back(value); return *this; }
    inline AwsEc2VpcEndpointServiceDetails& AddGatewayLoadBalancerArns(Aws::String&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.push_back(std::move(value)); return *this; }
    inline AwsEc2VpcEndpointServiceDetails& AddGatewayLoadBalancerArns(const char* value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARNs of the Network Load Balancers for the service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkLoadBalancerArns() const{ return m_networkLoadBalancerArns; }
    inline bool NetworkLoadBalancerArnsHasBeenSet() const { return m_networkLoadBalancerArnsHasBeenSet; }
    inline void SetNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns = value; }
    inline void SetNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns = std::move(value); }
    inline AwsEc2VpcEndpointServiceDetails& WithNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetNetworkLoadBalancerArns(value); return *this;}
    inline AwsEc2VpcEndpointServiceDetails& WithNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetNetworkLoadBalancerArns(std::move(value)); return *this;}
    inline AwsEc2VpcEndpointServiceDetails& AddNetworkLoadBalancerArns(const Aws::String& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(value); return *this; }
    inline AwsEc2VpcEndpointServiceDetails& AddNetworkLoadBalancerArns(Aws::String&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(std::move(value)); return *this; }
    inline AwsEc2VpcEndpointServiceDetails& AddNetworkLoadBalancerArns(const char* value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The private DNS name for the service.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const{ return m_privateDnsName; }
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }
    inline void SetPrivateDnsName(const Aws::String& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }
    inline void SetPrivateDnsName(Aws::String&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::move(value); }
    inline void SetPrivateDnsName(const char* value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName.assign(value); }
    inline AwsEc2VpcEndpointServiceDetails& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}
    inline AwsEc2VpcEndpointServiceDetails& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(std::move(value)); return *this;}
    inline AwsEc2VpcEndpointServiceDetails& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }
    inline AwsEc2VpcEndpointServiceDetails& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}
    inline AwsEc2VpcEndpointServiceDetails& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}
    inline AwsEc2VpcEndpointServiceDetails& WithServiceId(const char* value) { SetServiceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline AwsEc2VpcEndpointServiceDetails& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline AwsEc2VpcEndpointServiceDetails& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline AwsEc2VpcEndpointServiceDetails& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the service. Valid values are as follows:</p> <ul> <li>
     * <p> <code>Available</code> </p> </li> <li> <p> <code>Deleted</code> </p> </li>
     * <li> <p> <code>Deleting</code> </p> </li> <li> <p> <code>Failed</code> </p>
     * </li> <li> <p> <code>Pending</code> </p> </li> </ul>
     */
    inline const Aws::String& GetServiceState() const{ return m_serviceState; }
    inline bool ServiceStateHasBeenSet() const { return m_serviceStateHasBeenSet; }
    inline void SetServiceState(const Aws::String& value) { m_serviceStateHasBeenSet = true; m_serviceState = value; }
    inline void SetServiceState(Aws::String&& value) { m_serviceStateHasBeenSet = true; m_serviceState = std::move(value); }
    inline void SetServiceState(const char* value) { m_serviceStateHasBeenSet = true; m_serviceState.assign(value); }
    inline AwsEc2VpcEndpointServiceDetails& WithServiceState(const Aws::String& value) { SetServiceState(value); return *this;}
    inline AwsEc2VpcEndpointServiceDetails& WithServiceState(Aws::String&& value) { SetServiceState(std::move(value)); return *this;}
    inline AwsEc2VpcEndpointServiceDetails& WithServiceState(const char* value) { SetServiceState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types for the service.</p>
     */
    inline const Aws::Vector<AwsEc2VpcEndpointServiceServiceTypeDetails>& GetServiceType() const{ return m_serviceType; }
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
    inline void SetServiceType(const Aws::Vector<AwsEc2VpcEndpointServiceServiceTypeDetails>& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }
    inline void SetServiceType(Aws::Vector<AwsEc2VpcEndpointServiceServiceTypeDetails>&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }
    inline AwsEc2VpcEndpointServiceDetails& WithServiceType(const Aws::Vector<AwsEc2VpcEndpointServiceServiceTypeDetails>& value) { SetServiceType(value); return *this;}
    inline AwsEc2VpcEndpointServiceDetails& WithServiceType(Aws::Vector<AwsEc2VpcEndpointServiceServiceTypeDetails>&& value) { SetServiceType(std::move(value)); return *this;}
    inline AwsEc2VpcEndpointServiceDetails& AddServiceType(const AwsEc2VpcEndpointServiceServiceTypeDetails& value) { m_serviceTypeHasBeenSet = true; m_serviceType.push_back(value); return *this; }
    inline AwsEc2VpcEndpointServiceDetails& AddServiceType(AwsEc2VpcEndpointServiceServiceTypeDetails&& value) { m_serviceTypeHasBeenSet = true; m_serviceType.push_back(std::move(value)); return *this; }
    ///@}
  private:

    bool m_acceptanceRequired;
    bool m_acceptanceRequiredHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_baseEndpointDnsNames;
    bool m_baseEndpointDnsNamesHasBeenSet = false;

    bool m_managesVpcEndpoints;
    bool m_managesVpcEndpointsHasBeenSet = false;

    Aws::Vector<Aws::String> m_gatewayLoadBalancerArns;
    bool m_gatewayLoadBalancerArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_networkLoadBalancerArns;
    bool m_networkLoadBalancerArnsHasBeenSet = false;

    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_serviceState;
    bool m_serviceStateHasBeenSet = false;

    Aws::Vector<AwsEc2VpcEndpointServiceServiceTypeDetails> m_serviceType;
    bool m_serviceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
