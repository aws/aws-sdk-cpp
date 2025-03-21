/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/FlowOperationStatus.h>
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
  class StartFlowCaptureResult
  {
  public:
    AWS_NETWORKFIREWALL_API StartFlowCaptureResult() = default;
    AWS_NETWORKFIREWALL_API StartFlowCaptureResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API StartFlowCaptureResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline const Aws::String& GetFirewallArn() const { return m_firewallArn; }
    template<typename FirewallArnT = Aws::String>
    void SetFirewallArn(FirewallArnT&& value) { m_firewallArnHasBeenSet = true; m_firewallArn = std::forward<FirewallArnT>(value); }
    template<typename FirewallArnT = Aws::String>
    StartFlowCaptureResult& WithFirewallArn(FirewallArnT&& value) { SetFirewallArn(std::forward<FirewallArnT>(value)); return *this;}
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
    StartFlowCaptureResult& WithFlowOperationId(FlowOperationIdT&& value) { SetFlowOperationId(std::forward<FlowOperationIdT>(value)); return *this;}
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
    inline StartFlowCaptureResult& WithFlowOperationStatus(FlowOperationStatus value) { SetFlowOperationStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartFlowCaptureResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_firewallArn;
    bool m_firewallArnHasBeenSet = false;

    Aws::String m_flowOperationId;
    bool m_flowOperationIdHasBeenSet = false;

    FlowOperationStatus m_flowOperationStatus{FlowOperationStatus::NOT_SET};
    bool m_flowOperationStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
