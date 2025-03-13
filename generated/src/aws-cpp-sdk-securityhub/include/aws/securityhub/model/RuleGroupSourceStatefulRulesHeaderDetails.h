/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The inspection criteria for a stateful rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RuleGroupSourceStatefulRulesHeaderDetails">AWS
   * API Reference</a></p>
   */
  class RuleGroupSourceStatefulRulesHeaderDetails
  {
  public:
    AWS_SECURITYHUB_API RuleGroupSourceStatefulRulesHeaderDetails() = default;
    AWS_SECURITYHUB_API RuleGroupSourceStatefulRulesHeaderDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSourceStatefulRulesHeaderDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The destination IP address or address range to inspect for, in CIDR notation.
     * To match with any address, specify <code>ANY</code>.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    RuleGroupSourceStatefulRulesHeaderDetails& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination port to inspect for. You can specify an individual port, such
     * as <code>1994</code>. You also can specify a port range, such as
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>.</p>
     */
    inline const Aws::String& GetDestinationPort() const { return m_destinationPort; }
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }
    template<typename DestinationPortT = Aws::String>
    void SetDestinationPort(DestinationPortT&& value) { m_destinationPortHasBeenSet = true; m_destinationPort = std::forward<DestinationPortT>(value); }
    template<typename DestinationPortT = Aws::String>
    RuleGroupSourceStatefulRulesHeaderDetails& WithDestinationPort(DestinationPortT&& value) { SetDestinationPort(std::forward<DestinationPortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The direction of traffic flow to inspect. If set to <code>ANY</code>, the
     * inspection matches bidirectional traffic, both from the source to the
     * destination and from the destination to the source. If set to
     * <code>FORWARD</code>, the inspection only matches traffic going from the source
     * to the destination.</p>
     */
    inline const Aws::String& GetDirection() const { return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    template<typename DirectionT = Aws::String>
    void SetDirection(DirectionT&& value) { m_directionHasBeenSet = true; m_direction = std::forward<DirectionT>(value); }
    template<typename DirectionT = Aws::String>
    RuleGroupSourceStatefulRulesHeaderDetails& WithDirection(DirectionT&& value) { SetDirection(std::forward<DirectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol to inspect for. To inspector for all protocols, use
     * <code>IP</code>.</p>
     */
    inline const Aws::String& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = Aws::String>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = Aws::String>
    RuleGroupSourceStatefulRulesHeaderDetails& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source IP address or address range to inspect for, in CIDR notation. To
     * match with any address, specify <code>ANY</code>.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    RuleGroupSourceStatefulRulesHeaderDetails& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source port to inspect for. You can specify an individual port, such as
     * <code>1994</code>. You also can specify a port range, such as
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>.</p>
     */
    inline const Aws::String& GetSourcePort() const { return m_sourcePort; }
    inline bool SourcePortHasBeenSet() const { return m_sourcePortHasBeenSet; }
    template<typename SourcePortT = Aws::String>
    void SetSourcePort(SourcePortT&& value) { m_sourcePortHasBeenSet = true; m_sourcePort = std::forward<SourcePortT>(value); }
    template<typename SourcePortT = Aws::String>
    RuleGroupSourceStatefulRulesHeaderDetails& WithSourcePort(SourcePortT&& value) { SetSourcePort(std::forward<SourcePortT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_destinationPort;
    bool m_destinationPortHasBeenSet = false;

    Aws::String m_direction;
    bool m_directionHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_sourcePort;
    bool m_sourcePortHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
