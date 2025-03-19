/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmonitor/NetworkMonitor_EXPORTS.h>
#include <aws/networkmonitor/NetworkMonitorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmonitor/model/ProbeState.h>
#include <aws/networkmonitor/model/Protocol.h>
#include <utility>

namespace Aws
{
namespace NetworkMonitor
{
namespace Model
{

  /**
   */
  class UpdateProbeRequest : public NetworkMonitorRequest
  {
  public:
    AWS_NETWORKMONITOR_API UpdateProbeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProbe"; }

    AWS_NETWORKMONITOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the monitor that the probe was updated for.</p>
     */
    inline const Aws::String& GetMonitorName() const { return m_monitorName; }
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
    template<typename MonitorNameT = Aws::String>
    void SetMonitorName(MonitorNameT&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::forward<MonitorNameT>(value); }
    template<typename MonitorNameT = Aws::String>
    UpdateProbeRequest& WithMonitorName(MonitorNameT&& value) { SetMonitorName(std::forward<MonitorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the probe to update.</p>
     */
    inline const Aws::String& GetProbeId() const { return m_probeId; }
    inline bool ProbeIdHasBeenSet() const { return m_probeIdHasBeenSet; }
    template<typename ProbeIdT = Aws::String>
    void SetProbeId(ProbeIdT&& value) { m_probeIdHasBeenSet = true; m_probeId = std::forward<ProbeIdT>(value); }
    template<typename ProbeIdT = Aws::String>
    UpdateProbeRequest& WithProbeId(ProbeIdT&& value) { SetProbeId(std::forward<ProbeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the probe update.</p>
     */
    inline ProbeState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ProbeState value) { m_stateHasBeenSet = true; m_state = value; }
    inline UpdateProbeRequest& WithState(ProbeState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated IP address for the probe destination. This must be either an IPv4
     * or IPv6 address.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    UpdateProbeRequest& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated port for the probe destination. This is required only if the
     * <code>protocol</code> is <code>TCP</code> and must be a number between
     * <code>1</code> and <code>65536</code>.</p>
     */
    inline int GetDestinationPort() const { return m_destinationPort; }
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }
    inline void SetDestinationPort(int value) { m_destinationPortHasBeenSet = true; m_destinationPort = value; }
    inline UpdateProbeRequest& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated network protocol for the destination. This can be either
     * <code>TCP</code> or <code>ICMP</code>. If the protocol is <code>TCP</code>, then
     * <code>port</code> is also required.</p>
     */
    inline Protocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(Protocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline UpdateProbeRequest& WithProtocol(Protocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>he updated packets size for network traffic between the source and
     * destination. This must be a number between <code>56</code> and
     * <code>8500</code>.</p>
     */
    inline int GetPacketSize() const { return m_packetSize; }
    inline bool PacketSizeHasBeenSet() const { return m_packetSizeHasBeenSet; }
    inline void SetPacketSize(int value) { m_packetSizeHasBeenSet = true; m_packetSize = value; }
    inline UpdateProbeRequest& WithPacketSize(int value) { SetPacketSize(value); return *this;}
    ///@}
  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::String m_probeId;
    bool m_probeIdHasBeenSet = false;

    ProbeState m_state{ProbeState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    int m_destinationPort{0};
    bool m_destinationPortHasBeenSet = false;

    Protocol m_protocol{Protocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    int m_packetSize{0};
    bool m_packetSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
