/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace WorkspacesInstances {
namespace Model {

/**
 * <p>Defines connection tracking parameters for network interfaces.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/ConnectionTrackingSpecificationRequest">AWS
 * API Reference</a></p>
 */
class ConnectionTrackingSpecificationRequest {
 public:
  AWS_WORKSPACESINSTANCES_API ConnectionTrackingSpecificationRequest() = default;
  AWS_WORKSPACESINSTANCES_API ConnectionTrackingSpecificationRequest(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACESINSTANCES_API ConnectionTrackingSpecificationRequest& operator=(
      const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACESINSTANCES_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Timeout for established TCP connections.</p>
   */
  inline int64_t GetTcpEstablishedTimeout() const { return m_tcpEstablishedTimeout; }
  inline bool TcpEstablishedTimeoutHasBeenSet() const { return m_tcpEstablishedTimeoutHasBeenSet; }
  inline void SetTcpEstablishedTimeout(int64_t value) {
    m_tcpEstablishedTimeoutHasBeenSet = true;
    m_tcpEstablishedTimeout = value;
  }
  inline ConnectionTrackingSpecificationRequest& WithTcpEstablishedTimeout(int64_t value) {
    SetTcpEstablishedTimeout(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timeout for UDP stream connections.</p>
   */
  inline int64_t GetUdpStreamTimeout() const { return m_udpStreamTimeout; }
  inline bool UdpStreamTimeoutHasBeenSet() const { return m_udpStreamTimeoutHasBeenSet; }
  inline void SetUdpStreamTimeout(int64_t value) {
    m_udpStreamTimeoutHasBeenSet = true;
    m_udpStreamTimeout = value;
  }
  inline ConnectionTrackingSpecificationRequest& WithUdpStreamTimeout(int64_t value) {
    SetUdpStreamTimeout(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>General timeout for UDP connections.</p>
   */
  inline int64_t GetUdpTimeout() const { return m_udpTimeout; }
  inline bool UdpTimeoutHasBeenSet() const { return m_udpTimeoutHasBeenSet; }
  inline void SetUdpTimeout(int64_t value) {
    m_udpTimeoutHasBeenSet = true;
    m_udpTimeout = value;
  }
  inline ConnectionTrackingSpecificationRequest& WithUdpTimeout(int64_t value) {
    SetUdpTimeout(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_tcpEstablishedTimeout{0};

  int64_t m_udpStreamTimeout{0};

  int64_t m_udpTimeout{0};
  bool m_tcpEstablishedTimeoutHasBeenSet = false;
  bool m_udpStreamTimeoutHasBeenSet = false;
  bool m_udpTimeoutHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
