/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/ForwardErrorCorrectionState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>The configuration settings for a Router Input using the RTP (Real-Time
 * Transport Protocol) protocol, including the port and forward error correction
 * state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RtpRouterInputConfiguration">AWS
 * API Reference</a></p>
 */
class RtpRouterInputConfiguration {
 public:
  AWS_MEDIACONNECT_API RtpRouterInputConfiguration() = default;
  AWS_MEDIACONNECT_API RtpRouterInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RtpRouterInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The port number used for the RTP protocol in the router input
   * configuration.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline RtpRouterInputConfiguration& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of forward error correction for the RTP protocol in the router
   * input configuration.</p>
   */
  inline ForwardErrorCorrectionState GetForwardErrorCorrection() const { return m_forwardErrorCorrection; }
  inline bool ForwardErrorCorrectionHasBeenSet() const { return m_forwardErrorCorrectionHasBeenSet; }
  inline void SetForwardErrorCorrection(ForwardErrorCorrectionState value) {
    m_forwardErrorCorrectionHasBeenSet = true;
    m_forwardErrorCorrection = value;
  }
  inline RtpRouterInputConfiguration& WithForwardErrorCorrection(ForwardErrorCorrectionState value) {
    SetForwardErrorCorrection(value);
    return *this;
  }
  ///@}
 private:
  int m_port{0};

  ForwardErrorCorrectionState m_forwardErrorCorrection{ForwardErrorCorrectionState::NOT_SET};
  bool m_portHasBeenSet = false;
  bool m_forwardErrorCorrectionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
