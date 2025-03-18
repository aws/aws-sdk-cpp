/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmonitor/NetworkMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmonitor/model/Protocol.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace NetworkMonitor
{
namespace Model
{

  /**
   * <p>Creates a monitor probe.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmonitor-2023-08-01/CreateMonitorProbeInput">AWS
   * API Reference</a></p>
   */
  class CreateMonitorProbeInput
  {
  public:
    AWS_NETWORKMONITOR_API CreateMonitorProbeInput() = default;
    AWS_NETWORKMONITOR_API CreateMonitorProbeInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMONITOR_API CreateMonitorProbeInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the subnet.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    CreateMonitorProbeInput& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination IP address. This must be either <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    CreateMonitorProbeInput& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port associated with the <code>destination</code>. This is required only
     * if the <code>protocol</code> is <code>TCP</code> and must be a number between
     * <code>1</code> and <code>65536</code>.</p>
     */
    inline int GetDestinationPort() const { return m_destinationPort; }
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }
    inline void SetDestinationPort(int value) { m_destinationPortHasBeenSet = true; m_destinationPort = value; }
    inline CreateMonitorProbeInput& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol used for the network traffic between the <code>source</code> and
     * <code>destination</code>. This must be either <code>TCP</code> or
     * <code>ICMP</code>.</p>
     */
    inline Protocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(Protocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline CreateMonitorProbeInput& WithProtocol(Protocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the packets sent between the source and destination. This must be
     * a number between <code>56</code> and <code>8500</code>.</p>
     */
    inline int GetPacketSize() const { return m_packetSize; }
    inline bool PacketSizeHasBeenSet() const { return m_packetSizeHasBeenSet; }
    inline void SetPacketSize(int value) { m_packetSizeHasBeenSet = true; m_packetSize = value; }
    inline CreateMonitorProbeInput& WithPacketSize(int value) { SetPacketSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProbeTags() const { return m_probeTags; }
    inline bool ProbeTagsHasBeenSet() const { return m_probeTagsHasBeenSet; }
    template<typename ProbeTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetProbeTags(ProbeTagsT&& value) { m_probeTagsHasBeenSet = true; m_probeTags = std::forward<ProbeTagsT>(value); }
    template<typename ProbeTagsT = Aws::Map<Aws::String, Aws::String>>
    CreateMonitorProbeInput& WithProbeTags(ProbeTagsT&& value) { SetProbeTags(std::forward<ProbeTagsT>(value)); return *this;}
    template<typename ProbeTagsKeyT = Aws::String, typename ProbeTagsValueT = Aws::String>
    CreateMonitorProbeInput& AddProbeTags(ProbeTagsKeyT&& key, ProbeTagsValueT&& value) {
      m_probeTagsHasBeenSet = true; m_probeTags.emplace(std::forward<ProbeTagsKeyT>(key), std::forward<ProbeTagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    int m_destinationPort{0};
    bool m_destinationPortHasBeenSet = false;

    Protocol m_protocol{Protocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    int m_packetSize{0};
    bool m_packetSizeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_probeTags;
    bool m_probeTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
