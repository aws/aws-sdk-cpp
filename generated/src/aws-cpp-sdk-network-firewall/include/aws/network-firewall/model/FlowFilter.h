/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/Address.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Defines the scope a flow operation. You can use up to 20 filters to configure
   * a single flow operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/FlowFilter">AWS
   * API Reference</a></p>
   */
  class FlowFilter
  {
  public:
    AWS_NETWORKFIREWALL_API FlowFilter() = default;
    AWS_NETWORKFIREWALL_API FlowFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API FlowFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Address& GetSourceAddress() const { return m_sourceAddress; }
    inline bool SourceAddressHasBeenSet() const { return m_sourceAddressHasBeenSet; }
    template<typename SourceAddressT = Address>
    void SetSourceAddress(SourceAddressT&& value) { m_sourceAddressHasBeenSet = true; m_sourceAddress = std::forward<SourceAddressT>(value); }
    template<typename SourceAddressT = Address>
    FlowFilter& WithSourceAddress(SourceAddressT&& value) { SetSourceAddress(std::forward<SourceAddressT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Address& GetDestinationAddress() const { return m_destinationAddress; }
    inline bool DestinationAddressHasBeenSet() const { return m_destinationAddressHasBeenSet; }
    template<typename DestinationAddressT = Address>
    void SetDestinationAddress(DestinationAddressT&& value) { m_destinationAddressHasBeenSet = true; m_destinationAddress = std::forward<DestinationAddressT>(value); }
    template<typename DestinationAddressT = Address>
    FlowFilter& WithDestinationAddress(DestinationAddressT&& value) { SetDestinationAddress(std::forward<DestinationAddressT>(value)); return *this;}
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
    FlowFilter& WithSourcePort(SourcePortT&& value) { SetSourcePort(std::forward<SourcePortT>(value)); return *this;}
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
    FlowFilter& WithDestinationPort(DestinationPortT&& value) { SetDestinationPort(std::forward<DestinationPortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocols to inspect for, specified using the assigned internet protocol
     * number (IANA) for each protocol. If not specified, this matches with any
     * protocol.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProtocols() const { return m_protocols; }
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
    template<typename ProtocolsT = Aws::Vector<Aws::String>>
    void SetProtocols(ProtocolsT&& value) { m_protocolsHasBeenSet = true; m_protocols = std::forward<ProtocolsT>(value); }
    template<typename ProtocolsT = Aws::Vector<Aws::String>>
    FlowFilter& WithProtocols(ProtocolsT&& value) { SetProtocols(std::forward<ProtocolsT>(value)); return *this;}
    template<typename ProtocolsT = Aws::String>
    FlowFilter& AddProtocols(ProtocolsT&& value) { m_protocolsHasBeenSet = true; m_protocols.emplace_back(std::forward<ProtocolsT>(value)); return *this; }
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

    Aws::Vector<Aws::String> m_protocols;
    bool m_protocolsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
