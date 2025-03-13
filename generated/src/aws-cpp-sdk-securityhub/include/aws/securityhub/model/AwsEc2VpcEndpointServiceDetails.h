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
    AWS_SECURITYHUB_API AwsEc2VpcEndpointServiceDetails() = default;
    AWS_SECURITYHUB_API AwsEc2VpcEndpointServiceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VpcEndpointServiceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether requests from other Amazon Web Services accounts to create an
     * endpoint to the service must first be accepted.</p>
     */
    inline bool GetAcceptanceRequired() const { return m_acceptanceRequired; }
    inline bool AcceptanceRequiredHasBeenSet() const { return m_acceptanceRequiredHasBeenSet; }
    inline void SetAcceptanceRequired(bool value) { m_acceptanceRequiredHasBeenSet = true; m_acceptanceRequired = value; }
    inline AwsEc2VpcEndpointServiceDetails& WithAcceptanceRequired(bool value) { SetAcceptanceRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zones where the service is available.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    AwsEc2VpcEndpointServiceDetails& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    AwsEc2VpcEndpointServiceDetails& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The DNS names for the service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBaseEndpointDnsNames() const { return m_baseEndpointDnsNames; }
    inline bool BaseEndpointDnsNamesHasBeenSet() const { return m_baseEndpointDnsNamesHasBeenSet; }
    template<typename BaseEndpointDnsNamesT = Aws::Vector<Aws::String>>
    void SetBaseEndpointDnsNames(BaseEndpointDnsNamesT&& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames = std::forward<BaseEndpointDnsNamesT>(value); }
    template<typename BaseEndpointDnsNamesT = Aws::Vector<Aws::String>>
    AwsEc2VpcEndpointServiceDetails& WithBaseEndpointDnsNames(BaseEndpointDnsNamesT&& value) { SetBaseEndpointDnsNames(std::forward<BaseEndpointDnsNamesT>(value)); return *this;}
    template<typename BaseEndpointDnsNamesT = Aws::String>
    AwsEc2VpcEndpointServiceDetails& AddBaseEndpointDnsNames(BaseEndpointDnsNamesT&& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames.emplace_back(std::forward<BaseEndpointDnsNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the service manages its VPC endpoints.</p>
     */
    inline bool GetManagesVpcEndpoints() const { return m_managesVpcEndpoints; }
    inline bool ManagesVpcEndpointsHasBeenSet() const { return m_managesVpcEndpointsHasBeenSet; }
    inline void SetManagesVpcEndpoints(bool value) { m_managesVpcEndpointsHasBeenSet = true; m_managesVpcEndpoints = value; }
    inline AwsEc2VpcEndpointServiceDetails& WithManagesVpcEndpoints(bool value) { SetManagesVpcEndpoints(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the Gateway Load Balancers for the service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGatewayLoadBalancerArns() const { return m_gatewayLoadBalancerArns; }
    inline bool GatewayLoadBalancerArnsHasBeenSet() const { return m_gatewayLoadBalancerArnsHasBeenSet; }
    template<typename GatewayLoadBalancerArnsT = Aws::Vector<Aws::String>>
    void SetGatewayLoadBalancerArns(GatewayLoadBalancerArnsT&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns = std::forward<GatewayLoadBalancerArnsT>(value); }
    template<typename GatewayLoadBalancerArnsT = Aws::Vector<Aws::String>>
    AwsEc2VpcEndpointServiceDetails& WithGatewayLoadBalancerArns(GatewayLoadBalancerArnsT&& value) { SetGatewayLoadBalancerArns(std::forward<GatewayLoadBalancerArnsT>(value)); return *this;}
    template<typename GatewayLoadBalancerArnsT = Aws::String>
    AwsEc2VpcEndpointServiceDetails& AddGatewayLoadBalancerArns(GatewayLoadBalancerArnsT&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.emplace_back(std::forward<GatewayLoadBalancerArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARNs of the Network Load Balancers for the service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkLoadBalancerArns() const { return m_networkLoadBalancerArns; }
    inline bool NetworkLoadBalancerArnsHasBeenSet() const { return m_networkLoadBalancerArnsHasBeenSet; }
    template<typename NetworkLoadBalancerArnsT = Aws::Vector<Aws::String>>
    void SetNetworkLoadBalancerArns(NetworkLoadBalancerArnsT&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns = std::forward<NetworkLoadBalancerArnsT>(value); }
    template<typename NetworkLoadBalancerArnsT = Aws::Vector<Aws::String>>
    AwsEc2VpcEndpointServiceDetails& WithNetworkLoadBalancerArns(NetworkLoadBalancerArnsT&& value) { SetNetworkLoadBalancerArns(std::forward<NetworkLoadBalancerArnsT>(value)); return *this;}
    template<typename NetworkLoadBalancerArnsT = Aws::String>
    AwsEc2VpcEndpointServiceDetails& AddNetworkLoadBalancerArns(NetworkLoadBalancerArnsT&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.emplace_back(std::forward<NetworkLoadBalancerArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The private DNS name for the service.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const { return m_privateDnsName; }
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }
    template<typename PrivateDnsNameT = Aws::String>
    void SetPrivateDnsName(PrivateDnsNameT&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::forward<PrivateDnsNameT>(value); }
    template<typename PrivateDnsNameT = Aws::String>
    AwsEc2VpcEndpointServiceDetails& WithPrivateDnsName(PrivateDnsNameT&& value) { SetPrivateDnsName(std::forward<PrivateDnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the service.</p>
     */
    inline const Aws::String& GetServiceId() const { return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    template<typename ServiceIdT = Aws::String>
    void SetServiceId(ServiceIdT&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::forward<ServiceIdT>(value); }
    template<typename ServiceIdT = Aws::String>
    AwsEc2VpcEndpointServiceDetails& WithServiceId(ServiceIdT&& value) { SetServiceId(std::forward<ServiceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    AwsEc2VpcEndpointServiceDetails& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the service. Valid values are as follows:</p> <ul> <li>
     * <p> <code>Available</code> </p> </li> <li> <p> <code>Deleted</code> </p> </li>
     * <li> <p> <code>Deleting</code> </p> </li> <li> <p> <code>Failed</code> </p>
     * </li> <li> <p> <code>Pending</code> </p> </li> </ul>
     */
    inline const Aws::String& GetServiceState() const { return m_serviceState; }
    inline bool ServiceStateHasBeenSet() const { return m_serviceStateHasBeenSet; }
    template<typename ServiceStateT = Aws::String>
    void SetServiceState(ServiceStateT&& value) { m_serviceStateHasBeenSet = true; m_serviceState = std::forward<ServiceStateT>(value); }
    template<typename ServiceStateT = Aws::String>
    AwsEc2VpcEndpointServiceDetails& WithServiceState(ServiceStateT&& value) { SetServiceState(std::forward<ServiceStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types for the service.</p>
     */
    inline const Aws::Vector<AwsEc2VpcEndpointServiceServiceTypeDetails>& GetServiceType() const { return m_serviceType; }
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
    template<typename ServiceTypeT = Aws::Vector<AwsEc2VpcEndpointServiceServiceTypeDetails>>
    void SetServiceType(ServiceTypeT&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::forward<ServiceTypeT>(value); }
    template<typename ServiceTypeT = Aws::Vector<AwsEc2VpcEndpointServiceServiceTypeDetails>>
    AwsEc2VpcEndpointServiceDetails& WithServiceType(ServiceTypeT&& value) { SetServiceType(std::forward<ServiceTypeT>(value)); return *this;}
    template<typename ServiceTypeT = AwsEc2VpcEndpointServiceServiceTypeDetails>
    AwsEc2VpcEndpointServiceDetails& AddServiceType(ServiceTypeT&& value) { m_serviceTypeHasBeenSet = true; m_serviceType.emplace_back(std::forward<ServiceTypeT>(value)); return *this; }
    ///@}
  private:

    bool m_acceptanceRequired{false};
    bool m_acceptanceRequiredHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_baseEndpointDnsNames;
    bool m_baseEndpointDnsNamesHasBeenSet = false;

    bool m_managesVpcEndpoints{false};
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
