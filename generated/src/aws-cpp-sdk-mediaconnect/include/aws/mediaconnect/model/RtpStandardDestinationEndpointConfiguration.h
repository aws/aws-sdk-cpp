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
 * <p>The configuration settings for a destination endpoint that uses the RTP
 * protocol.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RtpStandardDestinationEndpointConfiguration">AWS
 * API Reference</a></p>
 */
class RtpStandardDestinationEndpointConfiguration {
 public:
  AWS_MEDIACONNECT_API RtpStandardDestinationEndpointConfiguration() = default;
  AWS_MEDIACONNECT_API RtpStandardDestinationEndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RtpStandardDestinationEndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The IP address on which the destination endpoint receives content.</p>
   */
  inline const Aws::String& GetDestinationAddress() const { return m_destinationAddress; }
  inline bool DestinationAddressHasBeenSet() const { return m_destinationAddressHasBeenSet; }
  template <typename DestinationAddressT = Aws::String>
  void SetDestinationAddress(DestinationAddressT&& value) {
    m_destinationAddressHasBeenSet = true;
    m_destinationAddress = std::forward<DestinationAddressT>(value);
  }
  template <typename DestinationAddressT = Aws::String>
  RtpStandardDestinationEndpointConfiguration& WithDestinationAddress(DestinationAddressT&& value) {
    SetDestinationAddress(std::forward<DestinationAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port on which the destination endpoint receives content. The valid range
   * is 1024 to 65531.</p>
   */
  inline int GetDestinationIngestPort() const { return m_destinationIngestPort; }
  inline bool DestinationIngestPortHasBeenSet() const { return m_destinationIngestPortHasBeenSet; }
  inline void SetDestinationIngestPort(int value) {
    m_destinationIngestPortHasBeenSet = true;
    m_destinationIngestPort = value;
  }
  inline RtpStandardDestinationEndpointConfiguration& WithDestinationIngestPort(int value) {
    SetDestinationIngestPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether forward error correction (FEC) is enabled for the
   * destination endpoint.</p>
   */
  inline ForwardErrorCorrectionState GetForwardErrorCorrectionState() const { return m_forwardErrorCorrectionState; }
  inline bool ForwardErrorCorrectionStateHasBeenSet() const { return m_forwardErrorCorrectionStateHasBeenSet; }
  inline void SetForwardErrorCorrectionState(ForwardErrorCorrectionState value) {
    m_forwardErrorCorrectionStateHasBeenSet = true;
    m_forwardErrorCorrectionState = value;
  }
  inline RtpStandardDestinationEndpointConfiguration& WithForwardErrorCorrectionState(ForwardErrorCorrectionState value) {
    SetForwardErrorCorrectionState(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_destinationAddress;

  int m_destinationIngestPort{0};

  ForwardErrorCorrectionState m_forwardErrorCorrectionState{ForwardErrorCorrectionState::NOT_SET};
  bool m_destinationAddressHasBeenSet = false;
  bool m_destinationIngestPortHasBeenSet = false;
  bool m_forwardErrorCorrectionStateHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
