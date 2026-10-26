/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

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
 * <p>The configuration settings for a source endpoint that uses the RIST
 * protocol.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RistStandardSourceEndpointConfiguration">AWS
 * API Reference</a></p>
 */
class RistStandardSourceEndpointConfiguration {
 public:
  AWS_MEDIACONNECT_API RistStandardSourceEndpointConfiguration() = default;
  AWS_MEDIACONNECT_API RistStandardSourceEndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RistStandardSourceEndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline RistStandardSourceEndpointConfiguration& WithDestinationIngestPort(int value) {
    SetDestinationIngestPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of time, in milliseconds, that the source endpoint allows for
   * recovering lost packets. The valid range is 10 to 10000.</p>
   */
  inline long long GetRecoveryLatencyMilliseconds() const { return m_recoveryLatencyMilliseconds; }
  inline bool RecoveryLatencyMillisecondsHasBeenSet() const { return m_recoveryLatencyMillisecondsHasBeenSet; }
  inline void SetRecoveryLatencyMilliseconds(long long value) {
    m_recoveryLatencyMillisecondsHasBeenSet = true;
    m_recoveryLatencyMilliseconds = value;
  }
  inline RistStandardSourceEndpointConfiguration& WithRecoveryLatencyMilliseconds(long long value) {
    SetRecoveryLatencyMilliseconds(value);
    return *this;
  }
  ///@}
 private:
  int m_destinationIngestPort{0};

  long long m_recoveryLatencyMilliseconds{0};
  bool m_destinationIngestPortHasBeenSet = false;
  bool m_recoveryLatencyMillisecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
