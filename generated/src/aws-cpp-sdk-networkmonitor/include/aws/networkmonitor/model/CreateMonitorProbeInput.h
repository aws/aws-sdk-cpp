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
    AWS_NETWORKMONITOR_API CreateMonitorProbeInput();
    AWS_NETWORKMONITOR_API CreateMonitorProbeInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMONITOR_API CreateMonitorProbeInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the subnet.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The ARN of the subnet.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>The ARN of the subnet.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The ARN of the subnet.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>The ARN of the subnet.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>The ARN of the subnet.</p>
     */
    inline CreateMonitorProbeInput& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The ARN of the subnet.</p>
     */
    inline CreateMonitorProbeInput& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the subnet.</p>
     */
    inline CreateMonitorProbeInput& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The destination IP address. This will be either <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The destination IP address. This will be either <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The destination IP address. This will be either <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The destination IP address. This will be either <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The destination IP address. This will be either <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The destination IP address. This will be either <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline CreateMonitorProbeInput& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The destination IP address. This will be either <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline CreateMonitorProbeInput& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The destination IP address. This will be either <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline CreateMonitorProbeInput& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * <p>The port associated with the <code>destination</code>. This is required only
     * if the <code>protocol</code> is <code>TCP</code> and must be a number between
     * <code>1</code> and <code>65536</code>.</p>
     */
    inline int GetDestinationPort() const{ return m_destinationPort; }

    /**
     * <p>The port associated with the <code>destination</code>. This is required only
     * if the <code>protocol</code> is <code>TCP</code> and must be a number between
     * <code>1</code> and <code>65536</code>.</p>
     */
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }

    /**
     * <p>The port associated with the <code>destination</code>. This is required only
     * if the <code>protocol</code> is <code>TCP</code> and must be a number between
     * <code>1</code> and <code>65536</code>.</p>
     */
    inline void SetDestinationPort(int value) { m_destinationPortHasBeenSet = true; m_destinationPort = value; }

    /**
     * <p>The port associated with the <code>destination</code>. This is required only
     * if the <code>protocol</code> is <code>TCP</code> and must be a number between
     * <code>1</code> and <code>65536</code>.</p>
     */
    inline CreateMonitorProbeInput& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}


    /**
     * <p>The protocol used for the network traffic between the <code>source</code> and
     * <code>destination</code>. This will be either <code>TCP</code> or
     * <code>ICMP</code>.</p>
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol used for the network traffic between the <code>source</code> and
     * <code>destination</code>. This will be either <code>TCP</code> or
     * <code>ICMP</code>.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol used for the network traffic between the <code>source</code> and
     * <code>destination</code>. This will be either <code>TCP</code> or
     * <code>ICMP</code>.</p>
     */
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol used for the network traffic between the <code>source</code> and
     * <code>destination</code>. This will be either <code>TCP</code> or
     * <code>ICMP</code>.</p>
     */
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol used for the network traffic between the <code>source</code> and
     * <code>destination</code>. This will be either <code>TCP</code> or
     * <code>ICMP</code>.</p>
     */
    inline CreateMonitorProbeInput& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol used for the network traffic between the <code>source</code> and
     * <code>destination</code>. This will be either <code>TCP</code> or
     * <code>ICMP</code>.</p>
     */
    inline CreateMonitorProbeInput& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The size of the packets sent between the source and destination. This will be
     * a number between <code>56</code> and <code>8500</code>.</p>
     */
    inline int GetPacketSize() const{ return m_packetSize; }

    /**
     * <p>The size of the packets sent between the source and destination. This will be
     * a number between <code>56</code> and <code>8500</code>.</p>
     */
    inline bool PacketSizeHasBeenSet() const { return m_packetSizeHasBeenSet; }

    /**
     * <p>The size of the packets sent between the source and destination. This will be
     * a number between <code>56</code> and <code>8500</code>.</p>
     */
    inline void SetPacketSize(int value) { m_packetSizeHasBeenSet = true; m_packetSize = value; }

    /**
     * <p>The size of the packets sent between the source and destination. This will be
     * a number between <code>56</code> and <code>8500</code>.</p>
     */
    inline CreateMonitorProbeInput& WithPacketSize(int value) { SetPacketSize(value); return *this;}


    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProbeTags() const{ return m_probeTags; }

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline bool ProbeTagsHasBeenSet() const { return m_probeTagsHasBeenSet; }

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline void SetProbeTags(const Aws::Map<Aws::String, Aws::String>& value) { m_probeTagsHasBeenSet = true; m_probeTags = value; }

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline void SetProbeTags(Aws::Map<Aws::String, Aws::String>&& value) { m_probeTagsHasBeenSet = true; m_probeTags = std::move(value); }

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline CreateMonitorProbeInput& WithProbeTags(const Aws::Map<Aws::String, Aws::String>& value) { SetProbeTags(value); return *this;}

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline CreateMonitorProbeInput& WithProbeTags(Aws::Map<Aws::String, Aws::String>&& value) { SetProbeTags(std::move(value)); return *this;}

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline CreateMonitorProbeInput& AddProbeTags(const Aws::String& key, const Aws::String& value) { m_probeTagsHasBeenSet = true; m_probeTags.emplace(key, value); return *this; }

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline CreateMonitorProbeInput& AddProbeTags(Aws::String&& key, const Aws::String& value) { m_probeTagsHasBeenSet = true; m_probeTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline CreateMonitorProbeInput& AddProbeTags(const Aws::String& key, Aws::String&& value) { m_probeTagsHasBeenSet = true; m_probeTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline CreateMonitorProbeInput& AddProbeTags(Aws::String&& key, Aws::String&& value) { m_probeTagsHasBeenSet = true; m_probeTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline CreateMonitorProbeInput& AddProbeTags(const char* key, Aws::String&& value) { m_probeTagsHasBeenSet = true; m_probeTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline CreateMonitorProbeInput& AddProbeTags(Aws::String&& key, const char* value) { m_probeTagsHasBeenSet = true; m_probeTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of key-value pairs created and assigned to the monitor.</p>
     */
    inline CreateMonitorProbeInput& AddProbeTags(const char* key, const char* value) { m_probeTagsHasBeenSet = true; m_probeTags.emplace(key, value); return *this; }

  private:

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    int m_destinationPort;
    bool m_destinationPortHasBeenSet = false;

    Protocol m_protocol;
    bool m_protocolHasBeenSet = false;

    int m_packetSize;
    bool m_packetSizeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_probeTags;
    bool m_probeTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
