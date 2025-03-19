/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/NetworkDirection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/PortRange.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The details of network-related information about a finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Network">AWS
   * API Reference</a></p>
   */
  class Network
  {
  public:
    AWS_SECURITYHUB_API Network() = default;
    AWS_SECURITYHUB_API Network(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Network& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The direction of network traffic associated with a finding.</p>
     */
    inline NetworkDirection GetDirection() const { return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    inline void SetDirection(NetworkDirection value) { m_directionHasBeenSet = true; m_direction = value; }
    inline Network& WithDirection(NetworkDirection value) { SetDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol of network-related information about a finding.</p> <p>Length
     * Constraints: Minimum of 1. Maximum of 16.</p>
     */
    inline const Aws::String& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = Aws::String>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = Aws::String>
    Network& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of open ports that is present on the network.</p>
     */
    inline const PortRange& GetOpenPortRange() const { return m_openPortRange; }
    inline bool OpenPortRangeHasBeenSet() const { return m_openPortRangeHasBeenSet; }
    template<typename OpenPortRangeT = PortRange>
    void SetOpenPortRange(OpenPortRangeT&& value) { m_openPortRangeHasBeenSet = true; m_openPortRange = std::forward<OpenPortRangeT>(value); }
    template<typename OpenPortRangeT = PortRange>
    Network& WithOpenPortRange(OpenPortRangeT&& value) { SetOpenPortRange(std::forward<OpenPortRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source IPv4 address of network-related information about a finding.</p>
     */
    inline const Aws::String& GetSourceIpV4() const { return m_sourceIpV4; }
    inline bool SourceIpV4HasBeenSet() const { return m_sourceIpV4HasBeenSet; }
    template<typename SourceIpV4T = Aws::String>
    void SetSourceIpV4(SourceIpV4T&& value) { m_sourceIpV4HasBeenSet = true; m_sourceIpV4 = std::forward<SourceIpV4T>(value); }
    template<typename SourceIpV4T = Aws::String>
    Network& WithSourceIpV4(SourceIpV4T&& value) { SetSourceIpV4(std::forward<SourceIpV4T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source IPv6 address of network-related information about a finding.</p>
     */
    inline const Aws::String& GetSourceIpV6() const { return m_sourceIpV6; }
    inline bool SourceIpV6HasBeenSet() const { return m_sourceIpV6HasBeenSet; }
    template<typename SourceIpV6T = Aws::String>
    void SetSourceIpV6(SourceIpV6T&& value) { m_sourceIpV6HasBeenSet = true; m_sourceIpV6 = std::forward<SourceIpV6T>(value); }
    template<typename SourceIpV6T = Aws::String>
    Network& WithSourceIpV6(SourceIpV6T&& value) { SetSourceIpV6(std::forward<SourceIpV6T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source port of network-related information about a finding.</p>
     */
    inline int GetSourcePort() const { return m_sourcePort; }
    inline bool SourcePortHasBeenSet() const { return m_sourcePortHasBeenSet; }
    inline void SetSourcePort(int value) { m_sourcePortHasBeenSet = true; m_sourcePort = value; }
    inline Network& WithSourcePort(int value) { SetSourcePort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source domain of network-related information about a finding.</p>
     * <p>Length Constraints: Minimum of 1. Maximum of 128.</p>
     */
    inline const Aws::String& GetSourceDomain() const { return m_sourceDomain; }
    inline bool SourceDomainHasBeenSet() const { return m_sourceDomainHasBeenSet; }
    template<typename SourceDomainT = Aws::String>
    void SetSourceDomain(SourceDomainT&& value) { m_sourceDomainHasBeenSet = true; m_sourceDomain = std::forward<SourceDomainT>(value); }
    template<typename SourceDomainT = Aws::String>
    Network& WithSourceDomain(SourceDomainT&& value) { SetSourceDomain(std::forward<SourceDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source media access control (MAC) address of network-related information
     * about a finding.</p>
     */
    inline const Aws::String& GetSourceMac() const { return m_sourceMac; }
    inline bool SourceMacHasBeenSet() const { return m_sourceMacHasBeenSet; }
    template<typename SourceMacT = Aws::String>
    void SetSourceMac(SourceMacT&& value) { m_sourceMacHasBeenSet = true; m_sourceMac = std::forward<SourceMacT>(value); }
    template<typename SourceMacT = Aws::String>
    Network& WithSourceMac(SourceMacT&& value) { SetSourceMac(std::forward<SourceMacT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination IPv4 address of network-related information about a
     * finding.</p>
     */
    inline const Aws::String& GetDestinationIpV4() const { return m_destinationIpV4; }
    inline bool DestinationIpV4HasBeenSet() const { return m_destinationIpV4HasBeenSet; }
    template<typename DestinationIpV4T = Aws::String>
    void SetDestinationIpV4(DestinationIpV4T&& value) { m_destinationIpV4HasBeenSet = true; m_destinationIpV4 = std::forward<DestinationIpV4T>(value); }
    template<typename DestinationIpV4T = Aws::String>
    Network& WithDestinationIpV4(DestinationIpV4T&& value) { SetDestinationIpV4(std::forward<DestinationIpV4T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination IPv6 address of network-related information about a
     * finding.</p>
     */
    inline const Aws::String& GetDestinationIpV6() const { return m_destinationIpV6; }
    inline bool DestinationIpV6HasBeenSet() const { return m_destinationIpV6HasBeenSet; }
    template<typename DestinationIpV6T = Aws::String>
    void SetDestinationIpV6(DestinationIpV6T&& value) { m_destinationIpV6HasBeenSet = true; m_destinationIpV6 = std::forward<DestinationIpV6T>(value); }
    template<typename DestinationIpV6T = Aws::String>
    Network& WithDestinationIpV6(DestinationIpV6T&& value) { SetDestinationIpV6(std::forward<DestinationIpV6T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination port of network-related information about a finding.</p>
     */
    inline int GetDestinationPort() const { return m_destinationPort; }
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }
    inline void SetDestinationPort(int value) { m_destinationPortHasBeenSet = true; m_destinationPort = value; }
    inline Network& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination domain of network-related information about a finding.</p>
     * <p>Length Constraints: Minimum of 1. Maximum of 128.</p>
     */
    inline const Aws::String& GetDestinationDomain() const { return m_destinationDomain; }
    inline bool DestinationDomainHasBeenSet() const { return m_destinationDomainHasBeenSet; }
    template<typename DestinationDomainT = Aws::String>
    void SetDestinationDomain(DestinationDomainT&& value) { m_destinationDomainHasBeenSet = true; m_destinationDomain = std::forward<DestinationDomainT>(value); }
    template<typename DestinationDomainT = Aws::String>
    Network& WithDestinationDomain(DestinationDomainT&& value) { SetDestinationDomain(std::forward<DestinationDomainT>(value)); return *this;}
    ///@}
  private:

    NetworkDirection m_direction{NetworkDirection::NOT_SET};
    bool m_directionHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    PortRange m_openPortRange;
    bool m_openPortRangeHasBeenSet = false;

    Aws::String m_sourceIpV4;
    bool m_sourceIpV4HasBeenSet = false;

    Aws::String m_sourceIpV6;
    bool m_sourceIpV6HasBeenSet = false;

    int m_sourcePort{0};
    bool m_sourcePortHasBeenSet = false;

    Aws::String m_sourceDomain;
    bool m_sourceDomainHasBeenSet = false;

    Aws::String m_sourceMac;
    bool m_sourceMacHasBeenSet = false;

    Aws::String m_destinationIpV4;
    bool m_destinationIpV4HasBeenSet = false;

    Aws::String m_destinationIpV6;
    bool m_destinationIpV6HasBeenSet = false;

    int m_destinationPort{0};
    bool m_destinationPortHasBeenSet = false;

    Aws::String m_destinationDomain;
    bool m_destinationDomainHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
