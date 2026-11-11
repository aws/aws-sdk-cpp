/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/WorkSpaces_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace WorkSpaces {
namespace Model {

/**
 * <p>Describes the timeout settings for a pool of WorkSpaces.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/TimeoutSettings">AWS
 * API Reference</a></p>
 */
class TimeoutSettings {
 public:
  AWS_WORKSPACES_API TimeoutSettings() = default;
  AWS_WORKSPACES_API TimeoutSettings(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACES_API TimeoutSettings& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACES_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Specifies the amount of time, in seconds, that a streaming session remains
   * active after users disconnect. If users try to reconnect to the streaming
   * session after a disconnection or network interruption within the time set, they
   * are connected to their previous session. Otherwise, they are connected to a new
   * session with a new streaming instance.</p>
   */
  inline int64_t GetDisconnectTimeoutInSeconds() const { return m_disconnectTimeoutInSeconds; }
  inline bool DisconnectTimeoutInSecondsHasBeenSet() const { return m_disconnectTimeoutInSecondsHasBeenSet; }
  inline void SetDisconnectTimeoutInSeconds(int64_t value) {
    m_disconnectTimeoutInSecondsHasBeenSet = true;
    m_disconnectTimeoutInSeconds = value;
  }
  inline TimeoutSettings& WithDisconnectTimeoutInSeconds(int64_t value) {
    SetDisconnectTimeoutInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of time in seconds a connection will stay active while idle.</p>
   */
  inline int64_t GetIdleDisconnectTimeoutInSeconds() const { return m_idleDisconnectTimeoutInSeconds; }
  inline bool IdleDisconnectTimeoutInSecondsHasBeenSet() const { return m_idleDisconnectTimeoutInSecondsHasBeenSet; }
  inline void SetIdleDisconnectTimeoutInSeconds(int64_t value) {
    m_idleDisconnectTimeoutInSecondsHasBeenSet = true;
    m_idleDisconnectTimeoutInSeconds = value;
  }
  inline TimeoutSettings& WithIdleDisconnectTimeoutInSeconds(int64_t value) {
    SetIdleDisconnectTimeoutInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the maximum amount of time, in seconds, that a streaming session
   * can remain active. If users are still connected to a streaming instance five
   * minutes before this limit is reached, they are prompted to save any open
   * documents before being disconnected. After this time elapses, the instance is
   * terminated and replaced by a new instance.</p>
   */
  inline int64_t GetMaxUserDurationInSeconds() const { return m_maxUserDurationInSeconds; }
  inline bool MaxUserDurationInSecondsHasBeenSet() const { return m_maxUserDurationInSecondsHasBeenSet; }
  inline void SetMaxUserDurationInSeconds(int64_t value) {
    m_maxUserDurationInSecondsHasBeenSet = true;
    m_maxUserDurationInSeconds = value;
  }
  inline TimeoutSettings& WithMaxUserDurationInSeconds(int64_t value) {
    SetMaxUserDurationInSeconds(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_disconnectTimeoutInSeconds{0};

  int64_t m_idleDisconnectTimeoutInSeconds{0};

  int64_t m_maxUserDurationInSeconds{0};
  bool m_disconnectTimeoutInSecondsHasBeenSet = false;
  bool m_idleDisconnectTimeoutInSecondsHasBeenSet = false;
  bool m_maxUserDurationInSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws
