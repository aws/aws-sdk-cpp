/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/FlowOperationType.h>
#include <aws/network-firewall/model/FlowOperationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/network-firewall/model/FlowOperation.h>
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
  class DescribeFlowOperationResult
  {
  public:
    AWS_NETWORKFIREWALL_API DescribeFlowOperationResult() = default;
    AWS_NETWORKFIREWALL_API DescribeFlowOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API DescribeFlowOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline const Aws::String& GetFirewallArn() const { return m_firewallArn; }
    template<typename FirewallArnT = Aws::String>
    void SetFirewallArn(FirewallArnT&& value) { m_firewallArnHasBeenSet = true; m_firewallArn = std::forward<FirewallArnT>(value); }
    template<typename FirewallArnT = Aws::String>
    DescribeFlowOperationResult& WithFirewallArn(FirewallArnT&& value) { SetFirewallArn(std::forward<FirewallArnT>(value)); return *this;}
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
    DescribeFlowOperationResult& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a VPC endpoint association.</p>
     */
    inline const Aws::String& GetVpcEndpointAssociationArn() const { return m_vpcEndpointAssociationArn; }
    template<typename VpcEndpointAssociationArnT = Aws::String>
    void SetVpcEndpointAssociationArn(VpcEndpointAssociationArnT&& value) { m_vpcEndpointAssociationArnHasBeenSet = true; m_vpcEndpointAssociationArn = std::forward<VpcEndpointAssociationArnT>(value); }
    template<typename VpcEndpointAssociationArnT = Aws::String>
    DescribeFlowOperationResult& WithVpcEndpointAssociationArn(VpcEndpointAssociationArnT&& value) { SetVpcEndpointAssociationArn(std::forward<VpcEndpointAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the primary endpoint associated with a firewall.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
    template<typename VpcEndpointIdT = Aws::String>
    void SetVpcEndpointId(VpcEndpointIdT&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::forward<VpcEndpointIdT>(value); }
    template<typename VpcEndpointIdT = Aws::String>
    DescribeFlowOperationResult& WithVpcEndpointId(VpcEndpointIdT&& value) { SetVpcEndpointId(std::forward<VpcEndpointIdT>(value)); return *this;}
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
    DescribeFlowOperationResult& WithFlowOperationId(FlowOperationIdT&& value) { SetFlowOperationId(std::forward<FlowOperationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the type of <code>FlowOperation</code>.</p>
     */
    inline FlowOperationType GetFlowOperationType() const { return m_flowOperationType; }
    inline void SetFlowOperationType(FlowOperationType value) { m_flowOperationTypeHasBeenSet = true; m_flowOperationType = value; }
    inline DescribeFlowOperationResult& WithFlowOperationType(FlowOperationType value) { SetFlowOperationType(value); return *this;}
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
    inline DescribeFlowOperationResult& WithFlowOperationStatus(FlowOperationStatus value) { SetFlowOperationStatus(value); return *this;}
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
    DescribeFlowOperationResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
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
    DescribeFlowOperationResult& WithFlowRequestTimestamp(FlowRequestTimestampT&& value) { SetFlowRequestTimestamp(std::forward<FlowRequestTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns key information about a flow operation, such as related statuses,
     * unique identifiers, and all filters defined in the operation.</p>
     */
    inline const FlowOperation& GetFlowOperation() const { return m_flowOperation; }
    template<typename FlowOperationT = FlowOperation>
    void SetFlowOperation(FlowOperationT&& value) { m_flowOperationHasBeenSet = true; m_flowOperation = std::forward<FlowOperationT>(value); }
    template<typename FlowOperationT = FlowOperation>
    DescribeFlowOperationResult& WithFlowOperation(FlowOperationT&& value) { SetFlowOperation(std::forward<FlowOperationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFlowOperationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    FlowOperationType m_flowOperationType{FlowOperationType::NOT_SET};
    bool m_flowOperationTypeHasBeenSet = false;

    FlowOperationStatus m_flowOperationStatus{FlowOperationStatus::NOT_SET};
    bool m_flowOperationStatusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_flowRequestTimestamp{};
    bool m_flowRequestTimestampHasBeenSet = false;

    FlowOperation m_flowOperation;
    bool m_flowOperationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
