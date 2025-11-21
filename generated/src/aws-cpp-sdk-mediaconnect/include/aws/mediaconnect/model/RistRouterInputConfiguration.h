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
 * <p>The configuration settings for a router input using the RIST (Reliable
 * Internet Stream Transport) protocol, including the port and recovery
 * latency.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RistRouterInputConfiguration">AWS
 * API Reference</a></p>
 */
class RistRouterInputConfiguration {
 public:
  AWS_MEDIACONNECT_API RistRouterInputConfiguration() = default;
  AWS_MEDIACONNECT_API RistRouterInputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RistRouterInputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The port number used for the RIST protocol in the router input
   * configuration.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline RistRouterInputConfiguration& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recovery latency in milliseconds for the RIST protocol in the router
   * input configuration.</p>
   */
  inline long long GetRecoveryLatencyMilliseconds() const { return m_recoveryLatencyMilliseconds; }
  inline bool RecoveryLatencyMillisecondsHasBeenSet() const { return m_recoveryLatencyMillisecondsHasBeenSet; }
  inline void SetRecoveryLatencyMilliseconds(long long value) {
    m_recoveryLatencyMillisecondsHasBeenSet = true;
    m_recoveryLatencyMilliseconds = value;
  }
  inline RistRouterInputConfiguration& WithRecoveryLatencyMilliseconds(long long value) {
    SetRecoveryLatencyMilliseconds(value);
    return *this;
  }
  ///@}
 private:
  int m_port{0};
  bool m_portHasBeenSet = false;

  long long m_recoveryLatencyMilliseconds{0};
  bool m_recoveryLatencyMillisecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
