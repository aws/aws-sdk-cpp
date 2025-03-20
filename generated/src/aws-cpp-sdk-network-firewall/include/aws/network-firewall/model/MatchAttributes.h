/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/Address.h>
#include <aws/network-firewall/model/PortRange.h>
#include <aws/network-firewall/model/TCPFlagField.h>
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
   * <p>Criteria for Network Firewall to use to inspect an individual packet in
   * stateless rule inspection. Each match attributes set can include one or more
   * items such as IP address, CIDR range, port number, protocol, and TCP flags.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/MatchAttributes">AWS
   * API Reference</a></p>
   */
  class MatchAttributes
  {
  public:
    AWS_NETWORKFIREWALL_API MatchAttributes() = default;
    AWS_NETWORKFIREWALL_API MatchAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API MatchAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source IP addresses and address ranges to inspect for, in CIDR notation.
     * If not specified, this matches with any source address. </p>
     */
    inline const Aws::Vector<Address>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<Address>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<Address>>
    MatchAttributes& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = Address>
    MatchAttributes& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination IP addresses and address ranges to inspect for, in CIDR
     * notation. If not specified, this matches with any destination address. </p>
     */
    inline const Aws::Vector<Address>& GetDestinations() const { return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    template<typename DestinationsT = Aws::Vector<Address>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<Address>>
    MatchAttributes& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = Address>
    MatchAttributes& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source port to inspect for. You can specify an individual port, for
     * example <code>1994</code> and you can specify a port range, for example
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>.</p>
     * <p> If not specified, this matches with any source port.</p> <p>This setting is
     * only used for protocols 6 (TCP) and 17 (UDP).</p>
     */
    inline const Aws::Vector<PortRange>& GetSourcePorts() const { return m_sourcePorts; }
    inline bool SourcePortsHasBeenSet() const { return m_sourcePortsHasBeenSet; }
    template<typename SourcePortsT = Aws::Vector<PortRange>>
    void SetSourcePorts(SourcePortsT&& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts = std::forward<SourcePortsT>(value); }
    template<typename SourcePortsT = Aws::Vector<PortRange>>
    MatchAttributes& WithSourcePorts(SourcePortsT&& value) { SetSourcePorts(std::forward<SourcePortsT>(value)); return *this;}
    template<typename SourcePortsT = PortRange>
    MatchAttributes& AddSourcePorts(SourcePortsT&& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts.emplace_back(std::forward<SourcePortsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination port to inspect for. You can specify an individual port, for
     * example <code>1994</code> and you can specify a port range, for example
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>.</p>
     * <p>This setting is only used for protocols 6 (TCP) and 17 (UDP). </p>
     */
    inline const Aws::Vector<PortRange>& GetDestinationPorts() const { return m_destinationPorts; }
    inline bool DestinationPortsHasBeenSet() const { return m_destinationPortsHasBeenSet; }
    template<typename DestinationPortsT = Aws::Vector<PortRange>>
    void SetDestinationPorts(DestinationPortsT&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts = std::forward<DestinationPortsT>(value); }
    template<typename DestinationPortsT = Aws::Vector<PortRange>>
    MatchAttributes& WithDestinationPorts(DestinationPortsT&& value) { SetDestinationPorts(std::forward<DestinationPortsT>(value)); return *this;}
    template<typename DestinationPortsT = PortRange>
    MatchAttributes& AddDestinationPorts(DestinationPortsT&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts.emplace_back(std::forward<DestinationPortsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The protocols to inspect for, specified using the assigned internet protocol
     * number (IANA) for each protocol. If not specified, this matches with any
     * protocol.</p>
     */
    inline const Aws::Vector<int>& GetProtocols() const { return m_protocols; }
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
    template<typename ProtocolsT = Aws::Vector<int>>
    void SetProtocols(ProtocolsT&& value) { m_protocolsHasBeenSet = true; m_protocols = std::forward<ProtocolsT>(value); }
    template<typename ProtocolsT = Aws::Vector<int>>
    MatchAttributes& WithProtocols(ProtocolsT&& value) { SetProtocols(std::forward<ProtocolsT>(value)); return *this;}
    inline MatchAttributes& AddProtocols(int value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The TCP flags and masks to inspect for. If not specified, this matches with
     * any settings. This setting is only used for protocol 6 (TCP).</p>
     */
    inline const Aws::Vector<TCPFlagField>& GetTCPFlags() const { return m_tCPFlags; }
    inline bool TCPFlagsHasBeenSet() const { return m_tCPFlagsHasBeenSet; }
    template<typename TCPFlagsT = Aws::Vector<TCPFlagField>>
    void SetTCPFlags(TCPFlagsT&& value) { m_tCPFlagsHasBeenSet = true; m_tCPFlags = std::forward<TCPFlagsT>(value); }
    template<typename TCPFlagsT = Aws::Vector<TCPFlagField>>
    MatchAttributes& WithTCPFlags(TCPFlagsT&& value) { SetTCPFlags(std::forward<TCPFlagsT>(value)); return *this;}
    template<typename TCPFlagsT = TCPFlagField>
    MatchAttributes& AddTCPFlags(TCPFlagsT&& value) { m_tCPFlagsHasBeenSet = true; m_tCPFlags.emplace_back(std::forward<TCPFlagsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Address> m_sources;
    bool m_sourcesHasBeenSet = false;

    Aws::Vector<Address> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::Vector<PortRange> m_sourcePorts;
    bool m_sourcePortsHasBeenSet = false;

    Aws::Vector<PortRange> m_destinationPorts;
    bool m_destinationPortsHasBeenSet = false;

    Aws::Vector<int> m_protocols;
    bool m_protocolsHasBeenSet = false;

    Aws::Vector<TCPFlagField> m_tCPFlags;
    bool m_tCPFlagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
