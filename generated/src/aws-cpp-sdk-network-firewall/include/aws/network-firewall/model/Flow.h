/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/Address.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>Any number of arrays, where each array is a single flow identified in the
   * scope of the operation. If multiple flows were in the scope of the operation,
   * multiple <code>Flows</code> arrays are returned.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/Flow">AWS
   * API Reference</a></p>
   */
  class Flow
  {
  public:
    AWS_NETWORKFIREWALL_API Flow() = default;
    AWS_NETWORKFIREWALL_API Flow(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Flow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Address& GetSourceAddress() const { return m_sourceAddress; }
    inline bool SourceAddressHasBeenSet() const { return m_sourceAddressHasBeenSet; }
    template<typename SourceAddressT = Address>
    void SetSourceAddress(SourceAddressT&& value) { m_sourceAddressHasBeenSet = true; m_sourceAddress = std::forward<SourceAddressT>(value); }
    template<typename SourceAddressT = Address>
    Flow& WithSourceAddress(SourceAddressT&& value) { SetSourceAddress(std::forward<SourceAddressT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Address& GetDestinationAddress() const { return m_destinationAddress; }
    inline bool DestinationAddressHasBeenSet() const { return m_destinationAddressHasBeenSet; }
    template<typename DestinationAddressT = Address>
    void SetDestinationAddress(DestinationAddressT&& value) { m_destinationAddressHasBeenSet = true; m_destinationAddress = std::forward<DestinationAddressT>(value); }
    template<typename DestinationAddressT = Address>
    Flow& WithDestinationAddress(DestinationAddressT&& value) { SetDestinationAddress(std::forward<DestinationAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source port to inspect for. You can specify an individual port, for
     * example <code>1994</code> and you can specify a port range, for example
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>.</p>
     */
    inline const Aws::String& GetSourcePort() const { return m_sourcePort; }
    inline bool SourcePortHasBeenSet() const { return m_sourcePortHasBeenSet; }
    template<typename SourcePortT = Aws::String>
    void SetSourcePort(SourcePortT&& value) { m_sourcePortHasBeenSet = true; m_sourcePort = std::forward<SourcePortT>(value); }
    template<typename SourcePortT = Aws::String>
    Flow& WithSourcePort(SourcePortT&& value) { SetSourcePort(std::forward<SourcePortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination port to inspect for. You can specify an individual port, for
     * example <code>1994</code> and you can specify a port range, for example
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>.</p>
     */
    inline const Aws::String& GetDestinationPort() const { return m_destinationPort; }
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }
    template<typename DestinationPortT = Aws::String>
    void SetDestinationPort(DestinationPortT&& value) { m_destinationPortHasBeenSet = true; m_destinationPort = std::forward<DestinationPortT>(value); }
    template<typename DestinationPortT = Aws::String>
    Flow& WithDestinationPort(DestinationPortT&& value) { SetDestinationPort(std::forward<DestinationPortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocols to inspect for, specified using the assigned internet protocol
     * number (IANA) for each protocol. If not specified, this matches with any
     * protocol.</p>
     */
    inline const Aws::String& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = Aws::String>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = Aws::String>
    Flow& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returned as info about age of the flows identified by the flow operation.</p>
     */
    inline int GetAge() const { return m_age; }
    inline bool AgeHasBeenSet() const { return m_ageHasBeenSet; }
    inline void SetAge(int value) { m_ageHasBeenSet = true; m_age = value; }
    inline Flow& WithAge(int value) { SetAge(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the total number of data packets received or transmitted in a
     * flow.</p>
     */
    inline int GetPacketCount() const { return m_packetCount; }
    inline bool PacketCountHasBeenSet() const { return m_packetCountHasBeenSet; }
    inline void SetPacketCount(int value) { m_packetCountHasBeenSet = true; m_packetCount = value; }
    inline Flow& WithPacketCount(int value) { SetPacketCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the number of bytes received or transmitted in a specific flow.</p>
     */
    inline long long GetByteCount() const { return m_byteCount; }
    inline bool ByteCountHasBeenSet() const { return m_byteCountHasBeenSet; }
    inline void SetByteCount(long long value) { m_byteCountHasBeenSet = true; m_byteCount = value; }
    inline Flow& WithByteCount(long long value) { SetByteCount(value); return *this;}
    ///@}
  private:

    Address m_sourceAddress;
    bool m_sourceAddressHasBeenSet = false;

    Address m_destinationAddress;
    bool m_destinationAddressHasBeenSet = false;

    Aws::String m_sourcePort;
    bool m_sourcePortHasBeenSet = false;

    Aws::String m_destinationPort;
    bool m_destinationPortHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    int m_age{0};
    bool m_ageHasBeenSet = false;

    int m_packetCount{0};
    bool m_packetCountHasBeenSet = false;

    long long m_byteCount{0};
    bool m_byteCountHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
