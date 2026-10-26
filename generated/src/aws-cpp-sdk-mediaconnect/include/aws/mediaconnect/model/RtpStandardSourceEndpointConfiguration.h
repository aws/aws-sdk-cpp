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
 * <p>The configuration settings for a source endpoint that uses the RTP
 * protocol.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RtpStandardSourceEndpointConfiguration">AWS
 * API Reference</a></p>
 */
class RtpStandardSourceEndpointConfiguration {
 public:
  AWS_MEDIACONNECT_API RtpStandardSourceEndpointConfiguration() = default;
  AWS_MEDIACONNECT_API RtpStandardSourceEndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RtpStandardSourceEndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The port on the destination that receives the content. The valid range is
   * 3000 to 30000.</p>
   */
  inline int GetDestinationIngestPort() const { return m_destinationIngestPort; }
  inline bool DestinationIngestPortHasBeenSet() const { return m_destinationIngestPortHasBeenSet; }
  inline void SetDestinationIngestPort(int value) {
    m_destinationIngestPortHasBeenSet = true;
    m_destinationIngestPort = value;
  }
  inline RtpStandardSourceEndpointConfiguration& WithDestinationIngestPort(int value) {
    SetDestinationIngestPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether forward error correction (FEC) is enabled for the source
   * endpoint.</p>
   */
  inline ForwardErrorCorrectionState GetForwardErrorCorrectionState() const { return m_forwardErrorCorrectionState; }
  inline bool ForwardErrorCorrectionStateHasBeenSet() const { return m_forwardErrorCorrectionStateHasBeenSet; }
  inline void SetForwardErrorCorrectionState(ForwardErrorCorrectionState value) {
    m_forwardErrorCorrectionStateHasBeenSet = true;
    m_forwardErrorCorrectionState = value;
  }
  inline RtpStandardSourceEndpointConfiguration& WithForwardErrorCorrectionState(ForwardErrorCorrectionState value) {
    SetForwardErrorCorrectionState(value);
    return *this;
  }
  ///@}
 private:
  int m_destinationIngestPort{0};

  ForwardErrorCorrectionState m_forwardErrorCorrectionState{ForwardErrorCorrectionState::NOT_SET};
  bool m_destinationIngestPortHasBeenSet = false;
  bool m_forwardErrorCorrectionStateHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
