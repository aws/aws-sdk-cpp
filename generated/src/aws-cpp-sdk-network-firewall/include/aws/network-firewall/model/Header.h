/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/StatefulRuleProtocol.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/StatefulRuleDirection.h>
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
   * <p>The basic rule criteria for Network Firewall to use to inspect packet headers
   * in stateful traffic flow inspection. Traffic flows that match the criteria are a
   * match for the corresponding <a>StatefulRule</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/Header">AWS
   * API Reference</a></p>
   */
  class Header
  {
  public:
    AWS_NETWORKFIREWALL_API Header() = default;
    AWS_NETWORKFIREWALL_API Header(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Header& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The protocol to inspect for. To specify all, you can use <code>IP</code>,
     * because all traffic on Amazon Web Services and on the internet is IP.</p>
     */
    inline StatefulRuleProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(StatefulRuleProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline Header& WithProtocol(StatefulRuleProtocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source IP address or address range to inspect for, in CIDR notation. To
     * match with any address, specify <code>ANY</code>. </p> <p>Specify an IP address
     * or a block of IP addresses in Classless Inter-Domain Routing (CIDR) notation.
     * Network Firewall supports all address ranges for IPv4 and IPv6. </p>
     * <p>Examples: </p> <ul> <li> <p>To configure Network Firewall to inspect for the
     * IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To
     * configure Network Firewall to inspect for IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li> <p>To configure
     * Network Firewall to inspect for the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure Network Firewall to inspect for IP addresses from
     * 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    Header& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
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
    Header& WithSourcePort(SourcePortT&& value) { SetSourcePort(std::forward<SourcePortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The direction of traffic flow to inspect. If set to <code>ANY</code>, the
     * inspection matches bidirectional traffic, both from the source to the
     * destination and from the destination to the source. If set to
     * <code>FORWARD</code>, the inspection only matches traffic going from the source
     * to the destination. </p>
     */
    inline StatefulRuleDirection GetDirection() const { return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    inline void SetDirection(StatefulRuleDirection value) { m_directionHasBeenSet = true; m_direction = value; }
    inline Header& WithDirection(StatefulRuleDirection value) { SetDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination IP address or address range to inspect for, in CIDR notation.
     * To match with any address, specify <code>ANY</code>. </p> <p>Specify an IP
     * address or a block of IP addresses in Classless Inter-Domain Routing (CIDR)
     * notation. Network Firewall supports all address ranges for IPv4 and IPv6. </p>
     * <p>Examples: </p> <ul> <li> <p>To configure Network Firewall to inspect for the
     * IP address 192.0.2.44, specify <code>192.0.2.44/32</code>.</p> </li> <li> <p>To
     * configure Network Firewall to inspect for IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li> <p>To configure
     * Network Firewall to inspect for the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure Network Firewall to inspect for IP addresses from
     * 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    Header& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
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
    Header& WithDestinationPort(DestinationPortT&& value) { SetDestinationPort(std::forward<DestinationPortT>(value)); return *this;}
    ///@}
  private:

    StatefulRuleProtocol m_protocol{StatefulRuleProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_sourcePort;
    bool m_sourcePortHasBeenSet = false;

    StatefulRuleDirection m_direction{StatefulRuleDirection::NOT_SET};
    bool m_directionHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_destinationPort;
    bool m_destinationPortHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
