/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

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
   * <p>Describes the amount of time that can pass without any traffic sent through
   * the firewall before the firewall determines that the connection is idle and
   * Network Firewall removes the flow entry from its flow table. Existing
   * connections and flows are not impacted when you update this value. Only new
   * connections after you update this value are impacted. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/FlowTimeouts">AWS
   * API Reference</a></p>
   */
  class FlowTimeouts
  {
  public:
    AWS_NETWORKFIREWALL_API FlowTimeouts() = default;
    AWS_NETWORKFIREWALL_API FlowTimeouts(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API FlowTimeouts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of seconds that can pass without any TCP traffic sent through the
     * firewall before the firewall determines that the connection is idle. After the
     * idle timeout passes, data packets are dropped, however, the next TCP SYN packet
     * is considered a new flow and is processed by the firewall. Clients or targets
     * can use TCP keepalive packets to reset the idle timeout. </p> <p>You can define
     * the <code>TcpIdleTimeoutSeconds</code> value to be between 60 and 6000 seconds.
     * If no value is provided, it defaults to 350 seconds. </p>
     */
    inline int GetTcpIdleTimeoutSeconds() const { return m_tcpIdleTimeoutSeconds; }
    inline bool TcpIdleTimeoutSecondsHasBeenSet() const { return m_tcpIdleTimeoutSecondsHasBeenSet; }
    inline void SetTcpIdleTimeoutSeconds(int value) { m_tcpIdleTimeoutSecondsHasBeenSet = true; m_tcpIdleTimeoutSeconds = value; }
    inline FlowTimeouts& WithTcpIdleTimeoutSeconds(int value) { SetTcpIdleTimeoutSeconds(value); return *this;}
    ///@}
  private:

    int m_tcpIdleTimeoutSeconds{0};
    bool m_tcpIdleTimeoutSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
