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
    AWS_NETWORKMONITOR_API UpdateProbeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProbe"; }

    AWS_NETWORKMONITOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the monitor that the probe was updated for.</p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }

    /**
     * <p>The name of the monitor that the probe was updated for.</p>
     */
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }

    /**
     * <p>The name of the monitor that the probe was updated for.</p>
     */
    inline void SetMonitorName(const Aws::String& value) { m_monitorNameHasBeenSet = true; m_monitorName = value; }

    /**
     * <p>The name of the monitor that the probe was updated for.</p>
     */
    inline void SetMonitorName(Aws::String&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::move(value); }

    /**
     * <p>The name of the monitor that the probe was updated for.</p>
     */
    inline void SetMonitorName(const char* value) { m_monitorNameHasBeenSet = true; m_monitorName.assign(value); }

    /**
     * <p>The name of the monitor that the probe was updated for.</p>
     */
    inline UpdateProbeRequest& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}

    /**
     * <p>The name of the monitor that the probe was updated for.</p>
     */
    inline UpdateProbeRequest& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}

    /**
     * <p>The name of the monitor that the probe was updated for.</p>
     */
    inline UpdateProbeRequest& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}


    /**
     * <p>Run <code>GetMonitor</code> to get a list of probes and probe IDs.</p>
     */
    inline const Aws::String& GetProbeId() const{ return m_probeId; }

    /**
     * <p>Run <code>GetMonitor</code> to get a list of probes and probe IDs.</p>
     */
    inline bool ProbeIdHasBeenSet() const { return m_probeIdHasBeenSet; }

    /**
     * <p>Run <code>GetMonitor</code> to get a list of probes and probe IDs.</p>
     */
    inline void SetProbeId(const Aws::String& value) { m_probeIdHasBeenSet = true; m_probeId = value; }

    /**
     * <p>Run <code>GetMonitor</code> to get a list of probes and probe IDs.</p>
     */
    inline void SetProbeId(Aws::String&& value) { m_probeIdHasBeenSet = true; m_probeId = std::move(value); }

    /**
     * <p>Run <code>GetMonitor</code> to get a list of probes and probe IDs.</p>
     */
    inline void SetProbeId(const char* value) { m_probeIdHasBeenSet = true; m_probeId.assign(value); }

    /**
     * <p>Run <code>GetMonitor</code> to get a list of probes and probe IDs.</p>
     */
    inline UpdateProbeRequest& WithProbeId(const Aws::String& value) { SetProbeId(value); return *this;}

    /**
     * <p>Run <code>GetMonitor</code> to get a list of probes and probe IDs.</p>
     */
    inline UpdateProbeRequest& WithProbeId(Aws::String&& value) { SetProbeId(std::move(value)); return *this;}

    /**
     * <p>Run <code>GetMonitor</code> to get a list of probes and probe IDs.</p>
     */
    inline UpdateProbeRequest& WithProbeId(const char* value) { SetProbeId(value); return *this;}


    /**
     * <p>The state of the probe update.</p>
     */
    inline const ProbeState& GetState() const{ return m_state; }

    /**
     * <p>The state of the probe update.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the probe update.</p>
     */
    inline void SetState(const ProbeState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the probe update.</p>
     */
    inline void SetState(ProbeState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the probe update.</p>
     */
    inline UpdateProbeRequest& WithState(const ProbeState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the probe update.</p>
     */
    inline UpdateProbeRequest& WithState(ProbeState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The updated IP address for the probe destination. This must be either an IPv4
     * or IPv6 address.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The updated IP address for the probe destination. This must be either an IPv4
     * or IPv6 address.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The updated IP address for the probe destination. This must be either an IPv4
     * or IPv6 address.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The updated IP address for the probe destination. This must be either an IPv4
     * or IPv6 address.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The updated IP address for the probe destination. This must be either an IPv4
     * or IPv6 address.</p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The updated IP address for the probe destination. This must be either an IPv4
     * or IPv6 address.</p>
     */
    inline UpdateProbeRequest& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The updated IP address for the probe destination. This must be either an IPv4
     * or IPv6 address.</p>
     */
    inline UpdateProbeRequest& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The updated IP address for the probe destination. This must be either an IPv4
     * or IPv6 address.</p>
     */
    inline UpdateProbeRequest& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * <p>The updated port for the probe destination. This is required only if the
     * <code>protocol</code> is <code>TCP</code> and must be a number between
     * <code>1</code> and <code>65536</code>.</p>
     */
    inline int GetDestinationPort() const{ return m_destinationPort; }

    /**
     * <p>The updated port for the probe destination. This is required only if the
     * <code>protocol</code> is <code>TCP</code> and must be a number between
     * <code>1</code> and <code>65536</code>.</p>
     */
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }

    /**
     * <p>The updated port for the probe destination. This is required only if the
     * <code>protocol</code> is <code>TCP</code> and must be a number between
     * <code>1</code> and <code>65536</code>.</p>
     */
    inline void SetDestinationPort(int value) { m_destinationPortHasBeenSet = true; m_destinationPort = value; }

    /**
     * <p>The updated port for the probe destination. This is required only if the
     * <code>protocol</code> is <code>TCP</code> and must be a number between
     * <code>1</code> and <code>65536</code>.</p>
     */
    inline UpdateProbeRequest& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}


    /**
     * <p>The updated network protocol for the destination. This can be either
     * <code>TCP</code> or <code>ICMP</code>. If the protocol is <code>TCP</code>, then
     * <code>port</code> is also required.</p>
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The updated network protocol for the destination. This can be either
     * <code>TCP</code> or <code>ICMP</code>. If the protocol is <code>TCP</code>, then
     * <code>port</code> is also required.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The updated network protocol for the destination. This can be either
     * <code>TCP</code> or <code>ICMP</code>. If the protocol is <code>TCP</code>, then
     * <code>port</code> is also required.</p>
     */
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The updated network protocol for the destination. This can be either
     * <code>TCP</code> or <code>ICMP</code>. If the protocol is <code>TCP</code>, then
     * <code>port</code> is also required.</p>
     */
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The updated network protocol for the destination. This can be either
     * <code>TCP</code> or <code>ICMP</code>. If the protocol is <code>TCP</code>, then
     * <code>port</code> is also required.</p>
     */
    inline UpdateProbeRequest& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The updated network protocol for the destination. This can be either
     * <code>TCP</code> or <code>ICMP</code>. If the protocol is <code>TCP</code>, then
     * <code>port</code> is also required.</p>
     */
    inline UpdateProbeRequest& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>he updated packets size for network traffic between the source and
     * destination. This must be a number between <code>56</code> and
     * <code>8500</code>.</p>
     */
    inline int GetPacketSize() const{ return m_packetSize; }

    /**
     * <p>he updated packets size for network traffic between the source and
     * destination. This must be a number between <code>56</code> and
     * <code>8500</code>.</p>
     */
    inline bool PacketSizeHasBeenSet() const { return m_packetSizeHasBeenSet; }

    /**
     * <p>he updated packets size for network traffic between the source and
     * destination. This must be a number between <code>56</code> and
     * <code>8500</code>.</p>
     */
    inline void SetPacketSize(int value) { m_packetSizeHasBeenSet = true; m_packetSize = value; }

    /**
     * <p>he updated packets size for network traffic between the source and
     * destination. This must be a number between <code>56</code> and
     * <code>8500</code>.</p>
     */
    inline UpdateProbeRequest& WithPacketSize(int value) { SetPacketSize(value); return *this;}

  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::String m_probeId;
    bool m_probeIdHasBeenSet = false;

    ProbeState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    int m_destinationPort;
    bool m_destinationPortHasBeenSet = false;

    Protocol m_protocol;
    bool m_protocolHasBeenSet = false;

    int m_packetSize;
    bool m_packetSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
