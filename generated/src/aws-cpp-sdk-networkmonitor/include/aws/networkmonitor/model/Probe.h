/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmonitor/NetworkMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmonitor/model/Protocol.h>
#include <aws/networkmonitor/model/AddressFamily.h>
#include <aws/networkmonitor/model/ProbeState.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Describes information about a network monitor probe.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmonitor-2023-08-01/Probe">AWS
   * API Reference</a></p>
   */
  class Probe
  {
  public:
    AWS_NETWORKMONITOR_API Probe();
    AWS_NETWORKMONITOR_API Probe(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMONITOR_API Probe& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the probe.</p>
     */
    inline const Aws::String& GetProbeId() const{ return m_probeId; }
    inline bool ProbeIdHasBeenSet() const { return m_probeIdHasBeenSet; }
    inline void SetProbeId(const Aws::String& value) { m_probeIdHasBeenSet = true; m_probeId = value; }
    inline void SetProbeId(Aws::String&& value) { m_probeIdHasBeenSet = true; m_probeId = std::move(value); }
    inline void SetProbeId(const char* value) { m_probeIdHasBeenSet = true; m_probeId.assign(value); }
    inline Probe& WithProbeId(const Aws::String& value) { SetProbeId(value); return *this;}
    inline Probe& WithProbeId(Aws::String&& value) { SetProbeId(std::move(value)); return *this;}
    inline Probe& WithProbeId(const char* value) { SetProbeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the probe.</p>
     */
    inline const Aws::String& GetProbeArn() const{ return m_probeArn; }
    inline bool ProbeArnHasBeenSet() const { return m_probeArnHasBeenSet; }
    inline void SetProbeArn(const Aws::String& value) { m_probeArnHasBeenSet = true; m_probeArn = value; }
    inline void SetProbeArn(Aws::String&& value) { m_probeArnHasBeenSet = true; m_probeArn = std::move(value); }
    inline void SetProbeArn(const char* value) { m_probeArnHasBeenSet = true; m_probeArn.assign(value); }
    inline Probe& WithProbeArn(const Aws::String& value) { SetProbeArn(value); return *this;}
    inline Probe& WithProbeArn(Aws::String&& value) { SetProbeArn(std::move(value)); return *this;}
    inline Probe& WithProbeArn(const char* value) { SetProbeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the probe source subnet.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }
    inline Probe& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}
    inline Probe& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}
    inline Probe& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination for the probe. This should be either an <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }
    inline Probe& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}
    inline Probe& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}
    inline Probe& WithDestination(const char* value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination port for the probe. This is required only if the
     * <code>protocol</code> is <code>TCP</code> and must be a number between
     * <code>1</code> and <code>65536</code>.</p>
     */
    inline int GetDestinationPort() const{ return m_destinationPort; }
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }
    inline void SetDestinationPort(int value) { m_destinationPortHasBeenSet = true; m_destinationPort = value; }
    inline Probe& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network protocol for the destination. This can be either <code>TCP</code>
     * or <code>ICMP</code>. If the protocol is <code>TCP</code>, then
     * <code>port</code> is also required.</p>
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline Probe& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}
    inline Probe& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the packets traveling between the <code>source</code> and
     * <code>destination</code>. This must be a number between <code>56</code> and </p>
     */
    inline int GetPacketSize() const{ return m_packetSize; }
    inline bool PacketSizeHasBeenSet() const { return m_packetSizeHasBeenSet; }
    inline void SetPacketSize(int value) { m_packetSizeHasBeenSet = true; m_packetSize = value; }
    inline Probe& WithPacketSize(int value) { SetPacketSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 or IPv6 address for the probe.</p>
     */
    inline const AddressFamily& GetAddressFamily() const{ return m_addressFamily; }
    inline bool AddressFamilyHasBeenSet() const { return m_addressFamilyHasBeenSet; }
    inline void SetAddressFamily(const AddressFamily& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = value; }
    inline void SetAddressFamily(AddressFamily&& value) { m_addressFamilyHasBeenSet = true; m_addressFamily = std::move(value); }
    inline Probe& WithAddressFamily(const AddressFamily& value) { SetAddressFamily(value); return *this;}
    inline Probe& WithAddressFamily(AddressFamily&& value) { SetAddressFamily(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the source VPC subnet.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline Probe& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline Probe& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline Probe& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the probe.</p>
     */
    inline const ProbeState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ProbeState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ProbeState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Probe& WithState(const ProbeState& value) { SetState(value); return *this;}
    inline Probe& WithState(ProbeState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date the probe was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Probe& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Probe& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date that the probe was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }
    inline Probe& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline Probe& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of key-value pairs created and assigned to the probe.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Probe& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Probe& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Probe& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Probe& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Probe& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Probe& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Probe& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Probe& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Probe& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_probeId;
    bool m_probeIdHasBeenSet = false;

    Aws::String m_probeArn;
    bool m_probeArnHasBeenSet = false;

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

    AddressFamily m_addressFamily;
    bool m_addressFamilyHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    ProbeState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
