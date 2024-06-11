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
    AWS_SECURITYHUB_API RuleGroupSourceStatefulRulesHeaderDetails();
    AWS_SECURITYHUB_API RuleGroupSourceStatefulRulesHeaderDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSourceStatefulRulesHeaderDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The destination IP address or address range to inspect for, in CIDR notation.
     * To match with any address, specify <code>ANY</code>.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }
    inline RuleGroupSourceStatefulRulesHeaderDetails& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}
    inline RuleGroupSourceStatefulRulesHeaderDetails& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}
    inline RuleGroupSourceStatefulRulesHeaderDetails& WithDestination(const char* value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination port to inspect for. You can specify an individual port, such
     * as <code>1994</code>. You also can specify a port range, such as
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>.</p>
     */
    inline const Aws::String& GetDestinationPort() const{ return m_destinationPort; }
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }
    inline void SetDestinationPort(const Aws::String& value) { m_destinationPortHasBeenSet = true; m_destinationPort = value; }
    inline void SetDestinationPort(Aws::String&& value) { m_destinationPortHasBeenSet = true; m_destinationPort = std::move(value); }
    inline void SetDestinationPort(const char* value) { m_destinationPortHasBeenSet = true; m_destinationPort.assign(value); }
    inline RuleGroupSourceStatefulRulesHeaderDetails& WithDestinationPort(const Aws::String& value) { SetDestinationPort(value); return *this;}
    inline RuleGroupSourceStatefulRulesHeaderDetails& WithDestinationPort(Aws::String&& value) { SetDestinationPort(std::move(value)); return *this;}
    inline RuleGroupSourceStatefulRulesHeaderDetails& WithDestinationPort(const char* value) { SetDestinationPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The direction of traffic flow to inspect. If set to <code>ANY</code>, the
     * inspection matches bidirectional traffic, both from the source to the
     * destination and from the destination to the source. If set to
     * <code>FORWARD</code>, the inspection only matches traffic going from the source
     * to the destination.</p>
     */
    inline const Aws::String& GetDirection() const{ return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    inline void SetDirection(const Aws::String& value) { m_directionHasBeenSet = true; m_direction = value; }
    inline void SetDirection(Aws::String&& value) { m_directionHasBeenSet = true; m_direction = std::move(value); }
    inline void SetDirection(const char* value) { m_directionHasBeenSet = true; m_direction.assign(value); }
    inline RuleGroupSourceStatefulRulesHeaderDetails& WithDirection(const Aws::String& value) { SetDirection(value); return *this;}
    inline RuleGroupSourceStatefulRulesHeaderDetails& WithDirection(Aws::String&& value) { SetDirection(std::move(value)); return *this;}
    inline RuleGroupSourceStatefulRulesHeaderDetails& WithDirection(const char* value) { SetDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol to inspect for. To inspector for all protocols, use
     * <code>IP</code>.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }
    inline RuleGroupSourceStatefulRulesHeaderDetails& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}
    inline RuleGroupSourceStatefulRulesHeaderDetails& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}
    inline RuleGroupSourceStatefulRulesHeaderDetails& WithProtocol(const char* value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source IP address or address range to inspect for, in CIDR notation. To
     * match with any address, specify <code>ANY</code>.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline RuleGroupSourceStatefulRulesHeaderDetails& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline RuleGroupSourceStatefulRulesHeaderDetails& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline RuleGroupSourceStatefulRulesHeaderDetails& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source port to inspect for. You can specify an individual port, such as
     * <code>1994</code>. You also can specify a port range, such as
     * <code>1990:1994</code>. To match with any port, specify <code>ANY</code>.</p>
     */
    inline const Aws::String& GetSourcePort() const{ return m_sourcePort; }
    inline bool SourcePortHasBeenSet() const { return m_sourcePortHasBeenSet; }
    inline void SetSourcePort(const Aws::String& value) { m_sourcePortHasBeenSet = true; m_sourcePort = value; }
    inline void SetSourcePort(Aws::String&& value) { m_sourcePortHasBeenSet = true; m_sourcePort = std::move(value); }
    inline void SetSourcePort(const char* value) { m_sourcePortHasBeenSet = true; m_sourcePort.assign(value); }
    inline RuleGroupSourceStatefulRulesHeaderDetails& WithSourcePort(const Aws::String& value) { SetSourcePort(value); return *this;}
    inline RuleGroupSourceStatefulRulesHeaderDetails& WithSourcePort(Aws::String&& value) { SetSourcePort(std::move(value)); return *this;}
    inline RuleGroupSourceStatefulRulesHeaderDetails& WithSourcePort(const char* value) { SetSourcePort(value); return *this;}
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
