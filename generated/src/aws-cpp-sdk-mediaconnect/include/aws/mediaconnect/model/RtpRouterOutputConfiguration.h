/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>The configuration settings for a router output using the RTP (Real-Time
 * Transport Protocol) protocol, including the destination address and port, and
 * forward error correction state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RtpRouterOutputConfiguration">AWS
 * API Reference</a></p>
 */
class RtpRouterOutputConfiguration {
 public:
  AWS_MEDIACONNECT_API RtpRouterOutputConfiguration() = default;
  AWS_MEDIACONNECT_API RtpRouterOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RtpRouterOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The destination IP address for the RTP protocol in the router output
   * configuration.</p>
   */
  inline const Aws::String& GetDestinationAddress() const { return m_destinationAddress; }
  inline bool DestinationAddressHasBeenSet() const { return m_destinationAddressHasBeenSet; }
  template <typename DestinationAddressT = Aws::String>
  void SetDestinationAddress(DestinationAddressT&& value) {
    m_destinationAddressHasBeenSet = true;
    m_destinationAddress = std::forward<DestinationAddressT>(value);
  }
  template <typename DestinationAddressT = Aws::String>
  RtpRouterOutputConfiguration& WithDestinationAddress(DestinationAddressT&& value) {
    SetDestinationAddress(std::forward<DestinationAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination port number for the RTP protocol in the router output
   * configuration.</p>
   */
  inline int GetDestinationPort() const { return m_destinationPort; }
  inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }
  inline void SetDestinationPort(int value) {
    m_destinationPortHasBeenSet = true;
    m_destinationPort = value;
  }
  inline RtpRouterOutputConfiguration& WithDestinationPort(int value) {
    SetDestinationPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of forward error correction for the RTP protocol in the router
   * output configuration.</p>
   */
  inline ForwardErrorCorrectionState GetForwardErrorCorrection() const { return m_forwardErrorCorrection; }
  inline bool ForwardErrorCorrectionHasBeenSet() const { return m_forwardErrorCorrectionHasBeenSet; }
  inline void SetForwardErrorCorrection(ForwardErrorCorrectionState value) {
    m_forwardErrorCorrectionHasBeenSet = true;
    m_forwardErrorCorrection = value;
  }
  inline RtpRouterOutputConfiguration& WithForwardErrorCorrection(ForwardErrorCorrectionState value) {
    SetForwardErrorCorrection(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_destinationAddress;
  bool m_destinationAddressHasBeenSet = false;

  int m_destinationPort{0};
  bool m_destinationPortHasBeenSet = false;

  ForwardErrorCorrectionState m_forwardErrorCorrection{ForwardErrorCorrectionState::NOT_SET};
  bool m_forwardErrorCorrectionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
