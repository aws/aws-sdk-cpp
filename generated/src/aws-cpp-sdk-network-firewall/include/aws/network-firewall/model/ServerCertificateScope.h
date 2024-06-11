/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/Address.h>
#include <aws/network-firewall/model/PortRange.h>
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
   * <p>Settings that define the Secure Sockets Layer/Transport Layer Security
   * (SSL/TLS) traffic that Network Firewall should decrypt for inspection by the
   * stateful rule engine.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ServerCertificateScope">AWS
   * API Reference</a></p>
   */
  class ServerCertificateScope
  {
  public:
    AWS_NETWORKFIREWALL_API ServerCertificateScope();
    AWS_NETWORKFIREWALL_API ServerCertificateScope(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API ServerCertificateScope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source IP addresses and address ranges to decrypt for inspection, in CIDR
     * notation. If not specified, this matches with any source address.</p>
     */
    inline const Aws::Vector<Address>& GetSources() const{ return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    inline void SetSources(const Aws::Vector<Address>& value) { m_sourcesHasBeenSet = true; m_sources = value; }
    inline void SetSources(Aws::Vector<Address>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }
    inline ServerCertificateScope& WithSources(const Aws::Vector<Address>& value) { SetSources(value); return *this;}
    inline ServerCertificateScope& WithSources(Aws::Vector<Address>&& value) { SetSources(std::move(value)); return *this;}
    inline ServerCertificateScope& AddSources(const Address& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    inline ServerCertificateScope& AddSources(Address&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination IP addresses and address ranges to decrypt for inspection, in
     * CIDR notation. If not specified, this matches with any destination address.</p>
     */
    inline const Aws::Vector<Address>& GetDestinations() const{ return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    inline void SetDestinations(const Aws::Vector<Address>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }
    inline void SetDestinations(Aws::Vector<Address>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }
    inline ServerCertificateScope& WithDestinations(const Aws::Vector<Address>& value) { SetDestinations(value); return *this;}
    inline ServerCertificateScope& WithDestinations(Aws::Vector<Address>&& value) { SetDestinations(std::move(value)); return *this;}
    inline ServerCertificateScope& AddDestinations(const Address& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }
    inline ServerCertificateScope& AddDestinations(Address&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source ports to decrypt for inspection, in Transmission Control Protocol
     * (TCP) format. If not specified, this matches with any source port.</p> <p>You
     * can specify individual ports, for example <code>1994</code>, and you can specify
     * port ranges, such as <code>1990:1994</code>.</p>
     */
    inline const Aws::Vector<PortRange>& GetSourcePorts() const{ return m_sourcePorts; }
    inline bool SourcePortsHasBeenSet() const { return m_sourcePortsHasBeenSet; }
    inline void SetSourcePorts(const Aws::Vector<PortRange>& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts = value; }
    inline void SetSourcePorts(Aws::Vector<PortRange>&& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts = std::move(value); }
    inline ServerCertificateScope& WithSourcePorts(const Aws::Vector<PortRange>& value) { SetSourcePorts(value); return *this;}
    inline ServerCertificateScope& WithSourcePorts(Aws::Vector<PortRange>&& value) { SetSourcePorts(std::move(value)); return *this;}
    inline ServerCertificateScope& AddSourcePorts(const PortRange& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts.push_back(value); return *this; }
    inline ServerCertificateScope& AddSourcePorts(PortRange&& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination ports to decrypt for inspection, in Transmission Control
     * Protocol (TCP) format. If not specified, this matches with any destination
     * port.</p> <p>You can specify individual ports, for example <code>1994</code>,
     * and you can specify port ranges, such as <code>1990:1994</code>.</p>
     */
    inline const Aws::Vector<PortRange>& GetDestinationPorts() const{ return m_destinationPorts; }
    inline bool DestinationPortsHasBeenSet() const { return m_destinationPortsHasBeenSet; }
    inline void SetDestinationPorts(const Aws::Vector<PortRange>& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts = value; }
    inline void SetDestinationPorts(Aws::Vector<PortRange>&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts = std::move(value); }
    inline ServerCertificateScope& WithDestinationPorts(const Aws::Vector<PortRange>& value) { SetDestinationPorts(value); return *this;}
    inline ServerCertificateScope& WithDestinationPorts(Aws::Vector<PortRange>&& value) { SetDestinationPorts(std::move(value)); return *this;}
    inline ServerCertificateScope& AddDestinationPorts(const PortRange& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts.push_back(value); return *this; }
    inline ServerCertificateScope& AddDestinationPorts(PortRange&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The protocols to decrypt for inspection, specified using each protocol's
     * assigned internet protocol number (IANA). Network Firewall currently supports
     * only TCP.</p>
     */
    inline const Aws::Vector<int>& GetProtocols() const{ return m_protocols; }
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
    inline void SetProtocols(const Aws::Vector<int>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }
    inline void SetProtocols(Aws::Vector<int>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }
    inline ServerCertificateScope& WithProtocols(const Aws::Vector<int>& value) { SetProtocols(value); return *this;}
    inline ServerCertificateScope& WithProtocols(Aws::Vector<int>&& value) { SetProtocols(std::move(value)); return *this;}
    inline ServerCertificateScope& AddProtocols(int value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }
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
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
