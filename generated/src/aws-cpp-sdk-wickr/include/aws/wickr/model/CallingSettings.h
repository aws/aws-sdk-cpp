/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wickr/Wickr_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {

/**
 * <p>Defines the calling feature permissions and settings for users in a security
 * group, controlling what types of calls users can initiate and participate
 * in.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/CallingSettings">AWS
 * API Reference</a></p>
 */
class CallingSettings {
 public:
  AWS_WICKR_API CallingSettings() = default;
  AWS_WICKR_API CallingSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API CallingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether users can start one-to-one calls.</p>
   */
  inline bool GetCanStart11Call() const { return m_canStart11Call; }
  inline bool CanStart11CallHasBeenSet() const { return m_canStart11CallHasBeenSet; }
  inline void SetCanStart11Call(bool value) {
    m_canStart11CallHasBeenSet = true;
    m_canStart11Call = value;
  }
  inline CallingSettings& WithCanStart11Call(bool value) {
    SetCanStart11Call(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether users can make video calls (as opposed to audio-only
   * calls). Valid only when audio call(canStart11Call) is enabled.</p>
   */
  inline bool GetCanVideoCall() const { return m_canVideoCall; }
  inline bool CanVideoCallHasBeenSet() const { return m_canVideoCallHasBeenSet; }
  inline void SetCanVideoCall(bool value) {
    m_canVideoCallHasBeenSet = true;
    m_canVideoCall = value;
  }
  inline CallingSettings& WithCanVideoCall(bool value) {
    SetCanVideoCall(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When enabled, forces all calls to use TCP protocol instead of UDP for network
   * traversal.</p>
   */
  inline bool GetForceTcpCall() const { return m_forceTcpCall; }
  inline bool ForceTcpCallHasBeenSet() const { return m_forceTcpCallHasBeenSet; }
  inline void SetForceTcpCall(bool value) {
    m_forceTcpCallHasBeenSet = true;
    m_forceTcpCall = value;
  }
  inline CallingSettings& WithForceTcpCall(bool value) {
    SetForceTcpCall(value);
    return *this;
  }
  ///@}
 private:
  bool m_canStart11Call{false};

  bool m_canVideoCall{false};

  bool m_forceTcpCall{false};
  bool m_canStart11CallHasBeenSet = false;
  bool m_canVideoCallHasBeenSet = false;
  bool m_forceTcpCallHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
