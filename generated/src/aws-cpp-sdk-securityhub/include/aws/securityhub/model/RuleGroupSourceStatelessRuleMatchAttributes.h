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
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributes();
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSourceStatelessRuleMatchAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of port ranges to specify the destination ports to inspect for.</p>
     */
    inline const Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesDestinationPorts>& GetDestinationPorts() const{ return m_destinationPorts; }

    /**
     * <p>A list of port ranges to specify the destination ports to inspect for.</p>
     */
    inline bool DestinationPortsHasBeenSet() const { return m_destinationPortsHasBeenSet; }

    /**
     * <p>A list of port ranges to specify the destination ports to inspect for.</p>
     */
    inline void SetDestinationPorts(const Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesDestinationPorts>& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts = value; }

    /**
     * <p>A list of port ranges to specify the destination ports to inspect for.</p>
     */
    inline void SetDestinationPorts(Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesDestinationPorts>&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts = std::move(value); }

    /**
     * <p>A list of port ranges to specify the destination ports to inspect for.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& WithDestinationPorts(const Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesDestinationPorts>& value) { SetDestinationPorts(value); return *this;}

    /**
     * <p>A list of port ranges to specify the destination ports to inspect for.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& WithDestinationPorts(Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesDestinationPorts>&& value) { SetDestinationPorts(std::move(value)); return *this;}

    /**
     * <p>A list of port ranges to specify the destination ports to inspect for.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& AddDestinationPorts(const RuleGroupSourceStatelessRuleMatchAttributesDestinationPorts& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts.push_back(value); return *this; }

    /**
     * <p>A list of port ranges to specify the destination ports to inspect for.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& AddDestinationPorts(RuleGroupSourceStatelessRuleMatchAttributesDestinationPorts&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts.push_back(std::move(value)); return *this; }


    /**
     * <p>The destination IP addresses and address ranges to inspect for, in CIDR
     * notation.</p>
     */
    inline const Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesDestinations>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>The destination IP addresses and address ranges to inspect for, in CIDR
     * notation.</p>
     */
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * <p>The destination IP addresses and address ranges to inspect for, in CIDR
     * notation.</p>
     */
    inline void SetDestinations(const Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesDestinations>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>The destination IP addresses and address ranges to inspect for, in CIDR
     * notation.</p>
     */
    inline void SetDestinations(Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesDestinations>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * <p>The destination IP addresses and address ranges to inspect for, in CIDR
     * notation.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& WithDestinations(const Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesDestinations>& value) { SetDestinations(value); return *this;}

    /**
     * <p>The destination IP addresses and address ranges to inspect for, in CIDR
     * notation.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& WithDestinations(Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesDestinations>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>The destination IP addresses and address ranges to inspect for, in CIDR
     * notation.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& AddDestinations(const RuleGroupSourceStatelessRuleMatchAttributesDestinations& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>The destination IP addresses and address ranges to inspect for, in CIDR
     * notation.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& AddDestinations(RuleGroupSourceStatelessRuleMatchAttributesDestinations&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }


    /**
     * <p>The protocols to inspect for.</p>
     */
    inline const Aws::Vector<int>& GetProtocols() const{ return m_protocols; }

    /**
     * <p>The protocols to inspect for.</p>
     */
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }

    /**
     * <p>The protocols to inspect for.</p>
     */
    inline void SetProtocols(const Aws::Vector<int>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }

    /**
     * <p>The protocols to inspect for.</p>
     */
    inline void SetProtocols(Aws::Vector<int>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }

    /**
     * <p>The protocols to inspect for.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& WithProtocols(const Aws::Vector<int>& value) { SetProtocols(value); return *this;}

    /**
     * <p>The protocols to inspect for.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& WithProtocols(Aws::Vector<int>&& value) { SetProtocols(std::move(value)); return *this;}

    /**
     * <p>The protocols to inspect for.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& AddProtocols(int value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }


    /**
     * <p>A list of port ranges to specify the source ports to inspect for.</p>
     */
    inline const Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesSourcePorts>& GetSourcePorts() const{ return m_sourcePorts; }

    /**
     * <p>A list of port ranges to specify the source ports to inspect for.</p>
     */
    inline bool SourcePortsHasBeenSet() const { return m_sourcePortsHasBeenSet; }

    /**
     * <p>A list of port ranges to specify the source ports to inspect for.</p>
     */
    inline void SetSourcePorts(const Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesSourcePorts>& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts = value; }

    /**
     * <p>A list of port ranges to specify the source ports to inspect for.</p>
     */
    inline void SetSourcePorts(Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesSourcePorts>&& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts = std::move(value); }

    /**
     * <p>A list of port ranges to specify the source ports to inspect for.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& WithSourcePorts(const Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesSourcePorts>& value) { SetSourcePorts(value); return *this;}

    /**
     * <p>A list of port ranges to specify the source ports to inspect for.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& WithSourcePorts(Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesSourcePorts>&& value) { SetSourcePorts(std::move(value)); return *this;}

    /**
     * <p>A list of port ranges to specify the source ports to inspect for.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& AddSourcePorts(const RuleGroupSourceStatelessRuleMatchAttributesSourcePorts& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts.push_back(value); return *this; }

    /**
     * <p>A list of port ranges to specify the source ports to inspect for.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& AddSourcePorts(RuleGroupSourceStatelessRuleMatchAttributesSourcePorts&& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts.push_back(std::move(value)); return *this; }


    /**
     * <p>The source IP addresses and address ranges to inspect for, in CIDR
     * notation.</p>
     */
    inline const Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesSources>& GetSources() const{ return m_sources; }

    /**
     * <p>The source IP addresses and address ranges to inspect for, in CIDR
     * notation.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>The source IP addresses and address ranges to inspect for, in CIDR
     * notation.</p>
     */
    inline void SetSources(const Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesSources>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>The source IP addresses and address ranges to inspect for, in CIDR
     * notation.</p>
     */
    inline void SetSources(Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesSources>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>The source IP addresses and address ranges to inspect for, in CIDR
     * notation.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& WithSources(const Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesSources>& value) { SetSources(value); return *this;}

    /**
     * <p>The source IP addresses and address ranges to inspect for, in CIDR
     * notation.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& WithSources(Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesSources>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The source IP addresses and address ranges to inspect for, in CIDR
     * notation.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& AddSources(const RuleGroupSourceStatelessRuleMatchAttributesSources& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>The source IP addresses and address ranges to inspect for, in CIDR
     * notation.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& AddSources(RuleGroupSourceStatelessRuleMatchAttributesSources&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }


    /**
     * <p>The TCP flags and masks to inspect for.</p>
     */
    inline const Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesTcpFlags>& GetTcpFlags() const{ return m_tcpFlags; }

    /**
     * <p>The TCP flags and masks to inspect for.</p>
     */
    inline bool TcpFlagsHasBeenSet() const { return m_tcpFlagsHasBeenSet; }

    /**
     * <p>The TCP flags and masks to inspect for.</p>
     */
    inline void SetTcpFlags(const Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesTcpFlags>& value) { m_tcpFlagsHasBeenSet = true; m_tcpFlags = value; }

    /**
     * <p>The TCP flags and masks to inspect for.</p>
     */
    inline void SetTcpFlags(Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesTcpFlags>&& value) { m_tcpFlagsHasBeenSet = true; m_tcpFlags = std::move(value); }

    /**
     * <p>The TCP flags and masks to inspect for.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& WithTcpFlags(const Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesTcpFlags>& value) { SetTcpFlags(value); return *this;}

    /**
     * <p>The TCP flags and masks to inspect for.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& WithTcpFlags(Aws::Vector<RuleGroupSourceStatelessRuleMatchAttributesTcpFlags>&& value) { SetTcpFlags(std::move(value)); return *this;}

    /**
     * <p>The TCP flags and masks to inspect for.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& AddTcpFlags(const RuleGroupSourceStatelessRuleMatchAttributesTcpFlags& value) { m_tcpFlagsHasBeenSet = true; m_tcpFlags.push_back(value); return *this; }

    /**
     * <p>The TCP flags and masks to inspect for.</p>
     */
    inline RuleGroupSourceStatelessRuleMatchAttributes& AddTcpFlags(RuleGroupSourceStatelessRuleMatchAttributesTcpFlags&& value) { m_tcpFlagsHasBeenSet = true; m_tcpFlags.push_back(std::move(value)); return *this; }

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
