/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/RuleGroupSourceStatelessRuleMatchAttributesDestinationPorts.h>
#include <aws/securityhub/model/RuleGroupSourceStatelessRuleMatchAttributesDestinations.h>
#include <aws/securityhub/model/RuleGroupSourceStatelessRuleMatchAttributesSourcePorts.h>
#include <aws/securityhub/model/RuleGroupSourceStatelessRuleMatchAttributesSources.h>
#include <aws/securityhub/model/RuleGroupSourceStatelessRuleMatchAttributesTcpFlags.h>
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
   * <p>Criteria for the stateless rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RuleGroupSourceStatelessRuleMatchAttributes">AWS
   * API Reference</a></p>
   */
  class RuleGroupSourceStatelessRuleMatchAttributes
  {
  public:
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributes() = default;
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of port ranges to specify the destination ports to inspect for.</p>
     */
    inline const Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesDestinationPorts>& GetDestinationPorts() const { return m_destinationPorts; }
    inline bool DestinationPortsHasBeenSet() const { return m_destinationPortsHasBeenSet; }
    template<typename DestinationPortsT = Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesDestinationPorts>>
    void SetDestinationPorts(DestinationPortsT&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts = std::forward<DestinationPortsT>(value); }
    template<typename DestinationPortsT = Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesDestinationPorts>>
    RuleGroupSourceStatelessRuleMatchAttributes& WithDestinationPorts(DestinationPortsT&& value) { SetDestinationPorts(std::forward<DestinationPortsT>(value)); return *this;}
    template<typename DestinationPortsT = RuleGroupSourceStatelessRuleMatchAttributesDestinationPorts>
    RuleGroupSourceStatelessRuleMatchAttributes& AddDestinationPorts(DestinationPortsT&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts.emplace_back(std::forward<DestinationPortsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination IP addresses and address ranges to inspect for, in CIDR
     * notation.</p>
     */
    inline const Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesDestinations>& GetDestinations() const { return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    template<typename DestinationsT = Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesDestinations>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesDestinations>>
    RuleGroupSourceStatelessRuleMatchAttributes& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = RuleGroupSourceStatelessRuleMatchAttributesDestinations>
    RuleGroupSourceStatelessRuleMatchAttributes& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The protocols to inspect for.</p>
     */
    inline const Aws::Vector<int>& GetProtocols() const { return m_protocols; }
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
    template<typename ProtocolsT = Aws::Vector<int>>
    void SetProtocols(ProtocolsT&& value) { m_protocolsHasBeenSet = true; m_protocols = std::forward<ProtocolsT>(value); }
    template<typename ProtocolsT = Aws::Vector<int>>
    RuleGroupSourceStatelessRuleMatchAttributes& WithProtocols(ProtocolsT&& value) { SetProtocols(std::forward<ProtocolsT>(value)); return *this;}
    inline RuleGroupSourceStatelessRuleMatchAttributes& AddProtocols(int value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of port ranges to specify the source ports to inspect for.</p>
     */
    inline const Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesSourcePorts>& GetSourcePorts() const { return m_sourcePorts; }
    inline bool SourcePortsHasBeenSet() const { return m_sourcePortsHasBeenSet; }
    template<typename SourcePortsT = Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesSourcePorts>>
    void SetSourcePorts(SourcePortsT&& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts = std::forward<SourcePortsT>(value); }
    template<typename SourcePortsT = Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesSourcePorts>>
    RuleGroupSourceStatelessRuleMatchAttributes& WithSourcePorts(SourcePortsT&& value) { SetSourcePorts(std::forward<SourcePortsT>(value)); return *this;}
    template<typename SourcePortsT = RuleGroupSourceStatelessRuleMatchAttributesSourcePorts>
    RuleGroupSourceStatelessRuleMatchAttributes& AddSourcePorts(SourcePortsT&& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts.emplace_back(std::forward<SourcePortsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source IP addresses and address ranges to inspect for, in CIDR
     * notation.</p>
     */
    inline const Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesSources>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesSources>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesSources>>
    RuleGroupSourceStatelessRuleMatchAttributes& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = RuleGroupSourceStatelessRuleMatchAttributesSources>
    RuleGroupSourceStatelessRuleMatchAttributes& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The TCP flags and masks to inspect for.</p>
     */
    inline const Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesTcpFlags>& GetTcpFlags() const { return m_tcpFlags; }
    inline bool TcpFlagsHasBeenSet() const { return m_tcpFlagsHasBeenSet; }
    template<typename TcpFlagsT = Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesTcpFlags>>
    void SetTcpFlags(TcpFlagsT&& value) { m_tcpFlagsHasBeenSet = true; m_tcpFlags = std::forward<TcpFlagsT>(value); }
    template<typename TcpFlagsT = Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesTcpFlags>>
    RuleGroupSourceStatelessRuleMatchAttributes& WithTcpFlags(TcpFlagsT&& value) { SetTcpFlags(std::forward<TcpFlagsT>(value)); return *this;}
    template<typename TcpFlagsT = RuleGroupSourceStatelessRuleMatchAttributesTcpFlags>
    RuleGroupSourceStatelessRuleMatchAttributes& AddTcpFlags(TcpFlagsT&& value) { m_tcpFlagsHasBeenSet = true; m_tcpFlags.emplace_back(std::forward<TcpFlagsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesDestinationPorts> m_destinationPorts;
    bool m_destinationPortsHasBeenSet = false;

    Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesDestinations> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::Vector<int> m_protocols;
    bool m_protocolsHasBeenSet = false;

    Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesSourcePorts> m_sourcePorts;
    bool m_sourcePortsHasBeenSet = false;

    Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesSources> m_sources;
    bool m_sourcesHasBeenSet = false;

    Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesTcpFlags> m_tcpFlags;
    bool m_tcpFlagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
