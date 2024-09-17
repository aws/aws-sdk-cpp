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
    AWS_SECURITYHUB_API Network();
    AWS_SECURITYHUB_API Network(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Network& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The direction of network traffic associated with a finding.</p>
     */
    inline const NetworkDirection& GetDirection() const{ return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    inline void SetDirection(const NetworkDirection& value) { m_directionHasBeenSet = true; m_direction = value; }
    inline void SetDirection(NetworkDirection&& value) { m_directionHasBeenSet = true; m_direction = std::move(value); }
    inline Network& WithDirection(const NetworkDirection& value) { SetDirection(value); return *this;}
    inline Network& WithDirection(NetworkDirection&& value) { SetDirection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol of network-related information about a finding.</p> <p>Length
     * Constraints: Minimum of 1. Maximum of 16.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }
    inline Network& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}
    inline Network& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}
    inline Network& WithProtocol(const char* value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of open ports that is present on the network.</p>
     */
    inline const PortRange& GetOpenPortRange() const{ return m_openPortRange; }
    inline bool OpenPortRangeHasBeenSet() const { return m_openPortRangeHasBeenSet; }
    inline void SetOpenPortRange(const PortRange& value) { m_openPortRangeHasBeenSet = true; m_openPortRange = value; }
    inline void SetOpenPortRange(PortRange&& value) { m_openPortRangeHasBeenSet = true; m_openPortRange = std::move(value); }
    inline Network& WithOpenPortRange(const PortRange& value) { SetOpenPortRange(value); return *this;}
    inline Network& WithOpenPortRange(PortRange&& value) { SetOpenPortRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source IPv4 address of network-related information about a finding.</p>
     */
    inline const Aws::String& GetSourceIpV4() const{ return m_sourceIpV4; }
    inline bool SourceIpV4HasBeenSet() const { return m_sourceIpV4HasBeenSet; }
    inline void SetSourceIpV4(const Aws::String& value) { m_sourceIpV4HasBeenSet = true; m_sourceIpV4 = value; }
    inline void SetSourceIpV4(Aws::String&& value) { m_sourceIpV4HasBeenSet = true; m_sourceIpV4 = std::move(value); }
    inline void SetSourceIpV4(const char* value) { m_sourceIpV4HasBeenSet = true; m_sourceIpV4.assign(value); }
    inline Network& WithSourceIpV4(const Aws::String& value) { SetSourceIpV4(value); return *this;}
    inline Network& WithSourceIpV4(Aws::String&& value) { SetSourceIpV4(std::move(value)); return *this;}
    inline Network& WithSourceIpV4(const char* value) { SetSourceIpV4(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source IPv6 address of network-related information about a finding.</p>
     */
    inline const Aws::String& GetSourceIpV6() const{ return m_sourceIpV6; }
    inline bool SourceIpV6HasBeenSet() const { return m_sourceIpV6HasBeenSet; }
    inline void SetSourceIpV6(const Aws::String& value) { m_sourceIpV6HasBeenSet = true; m_sourceIpV6 = value; }
    inline void SetSourceIpV6(Aws::String&& value) { m_sourceIpV6HasBeenSet = true; m_sourceIpV6 = std::move(value); }
    inline void SetSourceIpV6(const char* value) { m_sourceIpV6HasBeenSet = true; m_sourceIpV6.assign(value); }
    inline Network& WithSourceIpV6(const Aws::String& value) { SetSourceIpV6(value); return *this;}
    inline Network& WithSourceIpV6(Aws::String&& value) { SetSourceIpV6(std::move(value)); return *this;}
    inline Network& WithSourceIpV6(const char* value) { SetSourceIpV6(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source port of network-related information about a finding.</p>
     */
    inline int GetSourcePort() const{ return m_sourcePort; }
    inline bool SourcePortHasBeenSet() const { return m_sourcePortHasBeenSet; }
    inline void SetSourcePort(int value) { m_sourcePortHasBeenSet = true; m_sourcePort = value; }
    inline Network& WithSourcePort(int value) { SetSourcePort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source domain of network-related information about a finding.</p>
     * <p>Length Constraints: Minimum of 1. Maximum of 128.</p>
     */
    inline const Aws::String& GetSourceDomain() const{ return m_sourceDomain; }
    inline bool SourceDomainHasBeenSet() const { return m_sourceDomainHasBeenSet; }
    inline void SetSourceDomain(const Aws::String& value) { m_sourceDomainHasBeenSet = true; m_sourceDomain = value; }
    inline void SetSourceDomain(Aws::String&& value) { m_sourceDomainHasBeenSet = true; m_sourceDomain = std::move(value); }
    inline void SetSourceDomain(const char* value) { m_sourceDomainHasBeenSet = true; m_sourceDomain.assign(value); }
    inline Network& WithSourceDomain(const Aws::String& value) { SetSourceDomain(value); return *this;}
    inline Network& WithSourceDomain(Aws::String&& value) { SetSourceDomain(std::move(value)); return *this;}
    inline Network& WithSourceDomain(const char* value) { SetSourceDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source media access control (MAC) address of network-related information
     * about a finding.</p>
     */
    inline const Aws::String& GetSourceMac() const{ return m_sourceMac; }
    inline bool SourceMacHasBeenSet() const { return m_sourceMacHasBeenSet; }
    inline void SetSourceMac(const Aws::String& value) { m_sourceMacHasBeenSet = true; m_sourceMac = value; }
    inline void SetSourceMac(Aws::String&& value) { m_sourceMacHasBeenSet = true; m_sourceMac = std::move(value); }
    inline void SetSourceMac(const char* value) { m_sourceMacHasBeenSet = true; m_sourceMac.assign(value); }
    inline Network& WithSourceMac(const Aws::String& value) { SetSourceMac(value); return *this;}
    inline Network& WithSourceMac(Aws::String&& value) { SetSourceMac(std::move(value)); return *this;}
    inline Network& WithSourceMac(const char* value) { SetSourceMac(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination IPv4 address of network-related information about a
     * finding.</p>
     */
    inline const Aws::String& GetDestinationIpV4() const{ return m_destinationIpV4; }
    inline bool DestinationIpV4HasBeenSet() const { return m_destinationIpV4HasBeenSet; }
    inline void SetDestinationIpV4(const Aws::String& value) { m_destinationIpV4HasBeenSet = true; m_destinationIpV4 = value; }
    inline void SetDestinationIpV4(Aws::String&& value) { m_destinationIpV4HasBeenSet = true; m_destinationIpV4 = std::move(value); }
    inline void SetDestinationIpV4(const char* value) { m_destinationIpV4HasBeenSet = true; m_destinationIpV4.assign(value); }
    inline Network& WithDestinationIpV4(const Aws::String& value) { SetDestinationIpV4(value); return *this;}
    inline Network& WithDestinationIpV4(Aws::String&& value) { SetDestinationIpV4(std::move(value)); return *this;}
    inline Network& WithDestinationIpV4(const char* value) { SetDestinationIpV4(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination IPv6 address of network-related information about a
     * finding.</p>
     */
    inline const Aws::String& GetDestinationIpV6() const{ return m_destinationIpV6; }
    inline bool DestinationIpV6HasBeenSet() const { return m_destinationIpV6HasBeenSet; }
    inline void SetDestinationIpV6(const Aws::String& value) { m_destinationIpV6HasBeenSet = true; m_destinationIpV6 = value; }
    inline void SetDestinationIpV6(Aws::String&& value) { m_destinationIpV6HasBeenSet = true; m_destinationIpV6 = std::move(value); }
    inline void SetDestinationIpV6(const char* value) { m_destinationIpV6HasBeenSet = true; m_destinationIpV6.assign(value); }
    inline Network& WithDestinationIpV6(const Aws::String& value) { SetDestinationIpV6(value); return *this;}
    inline Network& WithDestinationIpV6(Aws::String&& value) { SetDestinationIpV6(std::move(value)); return *this;}
    inline Network& WithDestinationIpV6(const char* value) { SetDestinationIpV6(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination port of network-related information about a finding.</p>
     */
    inline int GetDestinationPort() const{ return m_destinationPort; }
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }
    inline void SetDestinationPort(int value) { m_destinationPortHasBeenSet = true; m_destinationPort = value; }
    inline Network& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination domain of network-related information about a finding.</p>
     * <p>Length Constraints: Minimum of 1. Maximum of 128.</p>
     */
    inline const Aws::String& GetDestinationDomain() const{ return m_destinationDomain; }
    inline bool DestinationDomainHasBeenSet() const { return m_destinationDomainHasBeenSet; }
    inline void SetDestinationDomain(const Aws::String& value) { m_destinationDomainHasBeenSet = true; m_destinationDomain = value; }
    inline void SetDestinationDomain(Aws::String&& value) { m_destinationDomainHasBeenSet = true; m_destinationDomain = std::move(value); }
    inline void SetDestinationDomain(const char* value) { m_destinationDomainHasBeenSet = true; m_destinationDomain.assign(value); }
    inline Network& WithDestinationDomain(const Aws::String& value) { SetDestinationDomain(value); return *this;}
    inline Network& WithDestinationDomain(Aws::String&& value) { SetDestinationDomain(std::move(value)); return *this;}
    inline Network& WithDestinationDomain(const char* value) { SetDestinationDomain(value); return *this;}
    ///@}
  private:

    NetworkDirection m_direction;
    bool m_directionHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    PortRange m_openPortRange;
    bool m_openPortRangeHasBeenSet = false;

    Aws::String m_sourceIpV4;
    bool m_sourceIpV4HasBeenSet = false;

    Aws::String m_sourceIpV6;
    bool m_sourceIpV6HasBeenSet = false;

    int m_sourcePort;
    bool m_sourcePortHasBeenSet = false;

    Aws::String m_sourceDomain;
    bool m_sourceDomainHasBeenSet = false;

    Aws::String m_sourceMac;
    bool m_sourceMacHasBeenSet = false;

    Aws::String m_destinationIpV4;
    bool m_destinationIpV4HasBeenSet = false;

    Aws::String m_destinationIpV6;
    bool m_destinationIpV6HasBeenSet = false;

    int m_destinationPort;
    bool m_destinationPortHasBeenSet = false;

    Aws::String m_destinationDomain;
    bool m_destinationDomainHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
