/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>

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
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Defines connection tracking parameters for network interfaces.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/ConnectionTrackingSpecificationRequest">AWS
   * API Reference</a></p>
   */
  class ConnectionTrackingSpecificationRequest
  {
  public:
    AWS_WORKSPACESINSTANCES_API ConnectionTrackingSpecificationRequest() = default;
    AWS_WORKSPACESINSTANCES_API ConnectionTrackingSpecificationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API ConnectionTrackingSpecificationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Timeout for established TCP connections.</p>
     */
    inline int GetTcpEstablishedTimeout() const { return m_tcpEstablishedTimeout; }
    inline bool TcpEstablishedTimeoutHasBeenSet() const { return m_tcpEstablishedTimeoutHasBeenSet; }
    inline void SetTcpEstablishedTimeout(int value) { m_tcpEstablishedTimeoutHasBeenSet = true; m_tcpEstablishedTimeout = value; }
    inline ConnectionTrackingSpecificationRequest& WithTcpEstablishedTimeout(int value) { SetTcpEstablishedTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timeout for UDP stream connections.</p>
     */
    inline int GetUdpStreamTimeout() const { return m_udpStreamTimeout; }
    inline bool UdpStreamTimeoutHasBeenSet() const { return m_udpStreamTimeoutHasBeenSet; }
    inline void SetUdpStreamTimeout(int value) { m_udpStreamTimeoutHasBeenSet = true; m_udpStreamTimeout = value; }
    inline ConnectionTrackingSpecificationRequest& WithUdpStreamTimeout(int value) { SetUdpStreamTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>General timeout for UDP connections.</p>
     */
    inline int GetUdpTimeout() const { return m_udpTimeout; }
    inline bool UdpTimeoutHasBeenSet() const { return m_udpTimeoutHasBeenSet; }
    inline void SetUdpTimeout(int value) { m_udpTimeoutHasBeenSet = true; m_udpTimeout = value; }
    inline ConnectionTrackingSpecificationRequest& WithUdpTimeout(int value) { SetUdpTimeout(value); return *this;}
    ///@}
  private:

    int m_tcpEstablishedTimeout{0};
    bool m_tcpEstablishedTimeoutHasBeenSet = false;

    int m_udpStreamTimeout{0};
    bool m_udpStreamTimeoutHasBeenSet = false;

    int m_udpTimeout{0};
    bool m_udpTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
