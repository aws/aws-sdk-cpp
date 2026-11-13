/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/Address.h>
#include <aws/network-firewall/model/DecryptionAction.h>
#include <aws/network-firewall/model/DomainMatch.h>
#include <aws/network-firewall/model/PortRange.h>
#include <aws/network-firewall/model/TLSInspectionScopeDeploymentMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>Settings that define the Secure Sockets Layer/Transport Layer Security
 * (SSL/TLS) traffic that Network Firewall should decrypt for inspection by the
 * stateful rule engine.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ServerCertificateScope">AWS
 * API Reference</a></p>
 */
class ServerCertificateScope {
 public:
  AWS_NETWORKFIREWALL_API ServerCertificateScope() = default;
  AWS_NETWORKFIREWALL_API ServerCertificateScope(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API ServerCertificateScope& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The source IP addresses and address ranges to decrypt for inspection, in CIDR
   * notation. If not specified, this matches with any source address.</p>
   */
  inline const Aws::Vector<Address>& GetSources() const { return m_sources; }
  inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
  template <typename SourcesT = Aws::Vector<Address>>
  void SetSources(SourcesT&& value) {
    m_sourcesHasBeenSet = true;
    m_sources = std::forward<SourcesT>(value);
  }
  template <typename SourcesT = Aws::Vector<Address>>
  ServerCertificateScope& WithSources(SourcesT&& value) {
    SetSources(std::forward<SourcesT>(value));
    return *this;
  }
  template <typename SourcesT = Address>
  ServerCertificateScope& AddSources(SourcesT&& value) {
    m_sourcesHasBeenSet = true;
    m_sources.emplace_back(std::forward<SourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination IP addresses and address ranges to decrypt for inspection, in
   * CIDR notation. If not specified, this matches with any destination address.</p>
   */
  inline const Aws::Vector<Address>& GetDestinations() const { return m_destinations; }
  inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
  template <typename DestinationsT = Aws::Vector<Address>>
  void SetDestinations(DestinationsT&& value) {
    m_destinationsHasBeenSet = true;
    m_destinations = std::forward<DestinationsT>(value);
  }
  template <typename DestinationsT = Aws::Vector<Address>>
  ServerCertificateScope& WithDestinations(DestinationsT&& value) {
    SetDestinations(std::forward<DestinationsT>(value));
    return *this;
  }
  template <typename DestinationsT = Address>
  ServerCertificateScope& AddDestinations(DestinationsT&& value) {
    m_destinationsHasBeenSet = true;
    m_destinations.emplace_back(std::forward<DestinationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source ports to decrypt for inspection, in Transmission Control Protocol
   * (TCP) format. If not specified, this matches with any source port.</p> <p>You
   * can specify individual ports, for example <code>1994</code>, and you can specify
   * port ranges, such as <code>1990:1994</code>.</p>
   */
  inline const Aws::Vector<PortRange>& GetSourcePorts() const { return m_sourcePorts; }
  inline bool SourcePortsHasBeenSet() const { return m_sourcePortsHasBeenSet; }
  template <typename SourcePortsT = Aws::Vector<PortRange>>
  void SetSourcePorts(SourcePortsT&& value) {
    m_sourcePortsHasBeenSet = true;
    m_sourcePorts = std::forward<SourcePortsT>(value);
  }
  template <typename SourcePortsT = Aws::Vector<PortRange>>
  ServerCertificateScope& WithSourcePorts(SourcePortsT&& value) {
    SetSourcePorts(std::forward<SourcePortsT>(value));
    return *this;
  }
  template <typename SourcePortsT = PortRange>
  ServerCertificateScope& AddSourcePorts(SourcePortsT&& value) {
    m_sourcePortsHasBeenSet = true;
    m_sourcePorts.emplace_back(std::forward<SourcePortsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination ports to decrypt for inspection, in Transmission Control
   * Protocol (TCP) format. If not specified, this matches with any destination
   * port.</p> <p>You can specify individual ports, for example <code>1994</code>,
   * and you can specify port ranges, such as <code>1990:1994</code>.</p>
   */
  inline const Aws::Vector<PortRange>& GetDestinationPorts() const { return m_destinationPorts; }
  inline bool DestinationPortsHasBeenSet() const { return m_destinationPortsHasBeenSet; }
  template <typename DestinationPortsT = Aws::Vector<PortRange>>
  void SetDestinationPorts(DestinationPortsT&& value) {
    m_destinationPortsHasBeenSet = true;
    m_destinationPorts = std::forward<DestinationPortsT>(value);
  }
  template <typename DestinationPortsT = Aws::Vector<PortRange>>
  ServerCertificateScope& WithDestinationPorts(DestinationPortsT&& value) {
    SetDestinationPorts(std::forward<DestinationPortsT>(value));
    return *this;
  }
  template <typename DestinationPortsT = PortRange>
  ServerCertificateScope& AddDestinationPorts(DestinationPortsT&& value) {
    m_destinationPortsHasBeenSet = true;
    m_destinationPorts.emplace_back(std::forward<DestinationPortsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The protocols to inspect for, specified using the assigned internet protocol
   * number (IANA) for each protocol. If not specified, this matches with any
   * protocol.</p> <p>Network Firewall currently supports only TCP.</p>
   */
  inline const Aws::Vector<int64_t>& GetProtocols() const { return m_protocols; }
  inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
  template <typename ProtocolsT = Aws::Vector<int64_t>>
  void SetProtocols(ProtocolsT&& value) {
    m_protocolsHasBeenSet = true;
    m_protocols = std::forward<ProtocolsT>(value);
  }
  template <typename ProtocolsT = Aws::Vector<int64_t>>
  ServerCertificateScope& WithProtocols(ProtocolsT&& value) {
    SetProtocols(std::forward<ProtocolsT>(value));
    return *this;
  }
  inline ServerCertificateScope& AddProtocols(int64_t value) {
    m_protocolsHasBeenSet = true;
    m_protocols.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domains that this scope matches, based on the host name in the client's
   * HTTP CONNECT request. Domain matching applies only to proxy mode firewalls. If
   * you specify <code>DomainMatch</code>, you must set <code>DeploymentMode</code>
   * to <code>EXPLICIT_PROXY_ONLY</code>. If you don't specify
   * <code>DomainMatch</code>, the scope matches traffic by its source, destination,
   * ports, and protocols only.</p>
   */
  inline const DomainMatch& GetDomainMatch() const { return m_domainMatch; }
  inline bool DomainMatchHasBeenSet() const { return m_domainMatchHasBeenSet; }
  template <typename DomainMatchT = DomainMatch>
  void SetDomainMatch(DomainMatchT&& value) {
    m_domainMatchHasBeenSet = true;
    m_domainMatch = std::forward<DomainMatchT>(value);
  }
  template <typename DomainMatchT = DomainMatch>
  ServerCertificateScope& WithDomainMatch(DomainMatchT&& value) {
    SetDomainMatch(std::forward<DomainMatchT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the firewall decrypts traffic that matches this scope. You can choose
   * from the following values:</p> <ul> <li> <p> <code>DECRYPT</code> - The firewall
   * decrypts the traffic for inspection.</p> </li> <li> <p> <code>BYPASS</code> -
   * The firewall doesn't decrypt the traffic.</p> </li> </ul>
   */
  inline DecryptionAction GetDecryptionAction() const { return m_decryptionAction; }
  inline bool DecryptionActionHasBeenSet() const { return m_decryptionActionHasBeenSet; }
  inline void SetDecryptionAction(DecryptionAction value) {
    m_decryptionActionHasBeenSet = true;
    m_decryptionAction = value;
  }
  inline ServerCertificateScope& WithDecryptionAction(DecryptionAction value) {
    SetDecryptionAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of firewall that this scope applies to. If you don't specify a
   * value, the scope applies to both types, the same as <code>ALL</code>. You can
   * choose from the following values:</p> <ul> <li> <p> <code>ALL</code> - The scope
   * applies to both transparent firewalls and proxy mode firewalls.</p> </li> <li>
   * <p> <code>TRANSPARENT_FIREWALL_ONLY</code> - The scope applies only to
   * transparent firewalls.</p> </li> <li> <p> <code>EXPLICIT_PROXY_ONLY</code> - The
   * scope applies only to proxy mode firewalls. A scope that specifies
   * <code>DomainMatch</code> must use this value.</p> </li> </ul>
   */
  inline TLSInspectionScopeDeploymentMode GetDeploymentMode() const { return m_deploymentMode; }
  inline bool DeploymentModeHasBeenSet() const { return m_deploymentModeHasBeenSet; }
  inline void SetDeploymentMode(TLSInspectionScopeDeploymentMode value) {
    m_deploymentModeHasBeenSet = true;
    m_deploymentMode = value;
  }
  inline ServerCertificateScope& WithDeploymentMode(TLSInspectionScopeDeploymentMode value) {
    SetDeploymentMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Address> m_sources;

  Aws::Vector<Address> m_destinations;

  Aws::Vector<PortRange> m_sourcePorts;

  Aws::Vector<PortRange> m_destinationPorts;

  Aws::Vector<int64_t> m_protocols;

  DomainMatch m_domainMatch;

  DecryptionAction m_decryptionAction{DecryptionAction::NOT_SET};

  TLSInspectionScopeDeploymentMode m_deploymentMode{TLSInspectionScopeDeploymentMode::NOT_SET};
  bool m_sourcesHasBeenSet = false;
  bool m_destinationsHasBeenSet = false;
  bool m_sourcePortsHasBeenSet = false;
  bool m_destinationPortsHasBeenSet = false;
  bool m_protocolsHasBeenSet = false;
  bool m_domainMatchHasBeenSet = false;
  bool m_decryptionActionHasBeenSet = false;
  bool m_deploymentModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
