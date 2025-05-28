/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/FlowFilter.h>
#include <utility>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

  /**
   */
  class StartFlowCaptureRequest : public NetworkFirewallRequest
  {
  public:
    AWS_NETWORKFIREWALL_API StartFlowCaptureRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartFlowCapture"; }

    AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

    AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline const Aws::String& GetFirewallArn() const { return m_firewallArn; }
    inline bool FirewallArnHasBeenSet() const { return m_firewallArnHasBeenSet; }
    template<typename FirewallArnT = Aws::String>
    void SetFirewallArn(FirewallArnT&& value) { m_firewallArnHasBeenSet = true; m_firewallArn = std::forward<FirewallArnT>(value); }
    template<typename FirewallArnT = Aws::String>
    StartFlowCaptureRequest& WithFirewallArn(FirewallArnT&& value) { SetFirewallArn(std::forward<FirewallArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone where the firewall is located. For example,
     * <code>us-east-2a</code>.</p> <p>Defines the scope a flow operation. You can use
     * up to 20 filters to configure a single flow operation.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    StartFlowCaptureRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a VPC endpoint association.</p>
     */
    inline const Aws::String& GetVpcEndpointAssociationArn() const { return m_vpcEndpointAssociationArn; }
    inline bool VpcEndpointAssociationArnHasBeenSet() const { return m_vpcEndpointAssociationArnHasBeenSet; }
    template<typename VpcEndpointAssociationArnT = Aws::String>
    void SetVpcEndpointAssociationArn(VpcEndpointAssociationArnT&& value) { m_vpcEndpointAssociationArnHasBeenSet = true; m_vpcEndpointAssociationArn = std::forward<VpcEndpointAssociationArnT>(value); }
    template<typename VpcEndpointAssociationArnT = Aws::String>
    StartFlowCaptureRequest& WithVpcEndpointAssociationArn(VpcEndpointAssociationArnT&& value) { SetVpcEndpointAssociationArn(std::forward<VpcEndpointAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the primary endpoint associated with a firewall.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    template<typename VpcEndpointIdT = Aws::String>
    void SetVpcEndpointId(VpcEndpointIdT&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::forward<VpcEndpointIdT>(value); }
    template<typename VpcEndpointIdT = Aws::String>
    StartFlowCaptureRequest& WithVpcEndpointId(VpcEndpointIdT&& value) { SetVpcEndpointId(std::forward<VpcEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reqested <code>FlowOperation</code> ignores flows with an age (in
     * seconds) lower than <code>MinimumFlowAgeInSeconds</code>. You provide this for
     * start commands.</p>  <p>We recommend setting this value to at least 1
     * minute (60 seconds) to reduce chance of capturing flows that are not yet
     * established.</p> 
     */
    inline int GetMinimumFlowAgeInSeconds() const { return m_minimumFlowAgeInSeconds; }
    inline bool MinimumFlowAgeInSecondsHasBeenSet() const { return m_minimumFlowAgeInSecondsHasBeenSet; }
    inline void SetMinimumFlowAgeInSeconds(int value) { m_minimumFlowAgeInSecondsHasBeenSet = true; m_minimumFlowAgeInSeconds = value; }
    inline StartFlowCaptureRequest& WithMinimumFlowAgeInSeconds(int value) { SetMinimumFlowAgeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the scope a flow operation. You can use up to 20 filters to configure
     * a single flow operation.</p>
     */
    inline const Aws::Vector<FlowFilter>& GetFlowFilters() const { return m_flowFilters; }
    inline bool FlowFiltersHasBeenSet() const { return m_flowFiltersHasBeenSet; }
    template<typename FlowFiltersT = Aws::Vector<FlowFilter>>
    void SetFlowFilters(FlowFiltersT&& value) { m_flowFiltersHasBeenSet = true; m_flowFilters = std::forward<FlowFiltersT>(value); }
    template<typename FlowFiltersT = Aws::Vector<FlowFilter>>
    StartFlowCaptureRequest& WithFlowFilters(FlowFiltersT&& value) { SetFlowFilters(std::forward<FlowFiltersT>(value)); return *this;}
    template<typename FlowFiltersT = FlowFilter>
    StartFlowCaptureRequest& AddFlowFilters(FlowFiltersT&& value) { m_flowFiltersHasBeenSet = true; m_flowFilters.emplace_back(std::forward<FlowFiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_firewallArn;
    bool m_firewallArnHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_vpcEndpointAssociationArn;
    bool m_vpcEndpointAssociationArnHasBeenSet = false;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    int m_minimumFlowAgeInSeconds{0};
    bool m_minimumFlowAgeInSecondsHasBeenSet = false;

    Aws::Vector<FlowFilter> m_flowFilters;
    bool m_flowFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
