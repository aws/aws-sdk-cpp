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
    AWS_NETWORKMONITOR_API Probe() = default;
    AWS_NETWORKMONITOR_API Probe(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMONITOR_API Probe& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the probe.</p>
     */
    inline const Aws::String& GetProbeId() const { return m_probeId; }
    inline bool ProbeIdHasBeenSet() const { return m_probeIdHasBeenSet; }
    template<typename ProbeIdT = Aws::String>
    void SetProbeId(ProbeIdT&& value) { m_probeIdHasBeenSet = true; m_probeId = std::forward<ProbeIdT>(value); }
    template<typename ProbeIdT = Aws::String>
    Probe& WithProbeId(ProbeIdT&& value) { SetProbeId(std::forward<ProbeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the probe.</p>
     */
    inline const Aws::String& GetProbeArn() const { return m_probeArn; }
    inline bool ProbeArnHasBeenSet() const { return m_probeArnHasBeenSet; }
    template<typename ProbeArnT = Aws::String>
    void SetProbeArn(ProbeArnT&& value) { m_probeArnHasBeenSet = true; m_probeArn = std::forward<ProbeArnT>(value); }
    template<typename ProbeArnT = Aws::String>
    Probe& WithProbeArn(ProbeArnT&& value) { SetProbeArn(std::forward<ProbeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the probe source subnet.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    Probe& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination for the probe. This should be either an <code>IPV4</code> or
     * <code>IPV6</code>.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    Probe& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination port for the probe. This is required only if the
     * <code>protocol</code> is <code>TCP</code> and must be a number between
     * <code>1</code> and <code>65536</code>.</p>
     */
    inline int GetDestinationPort() const { return m_destinationPort; }
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
    inline Protocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(Protocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline Probe& WithProtocol(Protocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the packets traveling between the <code>source</code> and
     * <code>destination</code>. This must be a number between <code>56</code> and </p>
     */
    inline int GetPacketSize() const { return m_packetSize; }
    inline bool PacketSizeHasBeenSet() const { return m_packetSizeHasBeenSet; }
    inline void SetPacketSize(int value) { m_packetSizeHasBeenSet = true; m_packetSize = value; }
    inline Probe& WithPacketSize(int value) { SetPacketSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 or IPv6 address for the probe.</p>
     */
    inline AddressFamily GetAddressFamily() const { return m_addressFamily; }
    inline bool AddressFamilyHasBeenSet() const { return m_addressFamilyHasBeenSet; }
    inline void SetAddressFamily(AddressFamily value) { m_addressFamilyHasBeenSet = true; m_addressFamily = value; }
    inline Probe& WithAddressFamily(AddressFamily value) { SetAddressFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the source VPC subnet.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    Probe& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the probe.</p>
     */
    inline ProbeState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ProbeState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Probe& WithState(ProbeState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date the probe was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Probe& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date that the probe was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    Probe& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of key-value pairs created and assigned to the probe.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Probe& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Probe& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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

    int m_destinationPort{0};
    bool m_destinationPortHasBeenSet = false;

    Protocol m_protocol{Protocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    int m_packetSize{0};
    bool m_packetSizeHasBeenSet = false;

    AddressFamily m_addressFamily{AddressFamily::NOT_SET};
    bool m_addressFamilyHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    ProbeState m_state{ProbeState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
