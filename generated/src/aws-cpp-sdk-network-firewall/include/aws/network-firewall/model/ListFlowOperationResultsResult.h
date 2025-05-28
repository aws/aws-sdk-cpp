/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/FlowOperationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/Flow.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace NetworkFirewall
{
namespace Model
{
  class ListFlowOperationResultsResult
  {
  public:
    AWS_NETWORKFIREWALL_API ListFlowOperationResultsResult() = default;
    AWS_NETWORKFIREWALL_API ListFlowOperationResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API ListFlowOperationResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline const Aws::String& GetFirewallArn() const { return m_firewallArn; }
    template<typename FirewallArnT = Aws::String>
    void SetFirewallArn(FirewallArnT&& value) { m_firewallArnHasBeenSet = true; m_firewallArn = std::forward<FirewallArnT>(value); }
    template<typename FirewallArnT = Aws::String>
    ListFlowOperationResultsResult& WithFirewallArn(FirewallArnT&& value) { SetFirewallArn(std::forward<FirewallArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone where the firewall is located. For example,
     * <code>us-east-2a</code>.</p> <p>Defines the scope a flow operation. You can use
     * up to 20 filters to configure a single flow operation.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    ListFlowOperationResultsResult& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetVpcEndpointAssociationArn() const { return m_vpcEndpointAssociationArn; }
    template<typename VpcEndpointAssociationArnT = Aws::String>
    void SetVpcEndpointAssociationArn(VpcEndpointAssociationArnT&& value) { m_vpcEndpointAssociationArnHasBeenSet = true; m_vpcEndpointAssociationArn = std::forward<VpcEndpointAssociationArnT>(value); }
    template<typename VpcEndpointAssociationArnT = Aws::String>
    ListFlowOperationResultsResult& WithVpcEndpointAssociationArn(VpcEndpointAssociationArnT&& value) { SetVpcEndpointAssociationArn(std::forward<VpcEndpointAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
    template<typename VpcEndpointIdT = Aws::String>
    void SetVpcEndpointId(VpcEndpointIdT&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::forward<VpcEndpointIdT>(value); }
    template<typename VpcEndpointIdT = Aws::String>
    ListFlowOperationResultsResult& WithVpcEndpointId(VpcEndpointIdT&& value) { SetVpcEndpointId(std::forward<VpcEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the flow operation. This ID is returned in the
     * responses to start and list commands. You provide to describe commands.</p>
     */
    inline const Aws::String& GetFlowOperationId() const { return m_flowOperationId; }
    template<typename FlowOperationIdT = Aws::String>
    void SetFlowOperationId(FlowOperationIdT&& value) { m_flowOperationIdHasBeenSet = true; m_flowOperationId = std::forward<FlowOperationIdT>(value); }
    template<typename FlowOperationIdT = Aws::String>
    ListFlowOperationResultsResult& WithFlowOperationId(FlowOperationIdT&& value) { SetFlowOperationId(std::forward<FlowOperationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the status of the flow operation. This string is returned in the
     * responses to start, list, and describe commands.</p> <p>If the status is
     * <code>COMPLETED_WITH_ERRORS</code>, results may be returned with any number of
     * <code>Flows</code> missing from the response. If the status is
     * <code>FAILED</code>, <code>Flows</code> returned will be empty.</p>
     */
    inline FlowOperationStatus GetFlowOperationStatus() const { return m_flowOperationStatus; }
    inline void SetFlowOperationStatus(FlowOperationStatus value) { m_flowOperationStatusHasBeenSet = true; m_flowOperationStatus = value; }
    inline ListFlowOperationResultsResult& WithFlowOperationStatus(FlowOperationStatus value) { SetFlowOperationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the asynchronous operation fails, Network Firewall populates this with the
     * reason for the error or failure. Options include <code>Flow operation
     * error</code> and <code>Flow timeout</code>.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ListFlowOperationResultsResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp indicating when the Suricata engine identified flows impacted by
     * an operation. </p>
     */
    inline const Aws::Utils::DateTime& GetFlowRequestTimestamp() const { return m_flowRequestTimestamp; }
    template<typename FlowRequestTimestampT = Aws::Utils::DateTime>
    void SetFlowRequestTimestamp(FlowRequestTimestampT&& value) { m_flowRequestTimestampHasBeenSet = true; m_flowRequestTimestamp = std::forward<FlowRequestTimestampT>(value); }
    template<typename FlowRequestTimestampT = Aws::Utils::DateTime>
    ListFlowOperationResultsResult& WithFlowRequestTimestamp(FlowRequestTimestampT&& value) { SetFlowRequestTimestamp(std::forward<FlowRequestTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any number of arrays, where each array is a single flow identified in the
     * scope of the operation. If multiple flows were in the scope of the operation,
     * multiple <code>Flows</code> arrays are returned.</p>
     */
    inline const Aws::Vector<Flow>& GetFlows() const { return m_flows; }
    template<typename FlowsT = Aws::Vector<Flow>>
    void SetFlows(FlowsT&& value) { m_flowsHasBeenSet = true; m_flows = std::forward<FlowsT>(value); }
    template<typename FlowsT = Aws::Vector<Flow>>
    ListFlowOperationResultsResult& WithFlows(FlowsT&& value) { SetFlows(std::forward<FlowsT>(value)); return *this;}
    template<typename FlowsT = Flow>
    ListFlowOperationResultsResult& AddFlows(FlowsT&& value) { m_flowsHasBeenSet = true; m_flows.emplace_back(std::forward<FlowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFlowOperationResultsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFlowOperationResultsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_flowOperationId;
    bool m_flowOperationIdHasBeenSet = false;

    FlowOperationStatus m_flowOperationStatus{FlowOperationStatus::NOT_SET};
    bool m_flowOperationStatusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_flowRequestTimestamp{};
    bool m_flowRequestTimestampHasBeenSet = false;

    Aws::Vector<Flow> m_flows;
    bool m_flowsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
