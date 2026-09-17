/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/model/WhatsAppCallHours.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SocialMessaging {
namespace Model {

/**
 * <p>The calling configuration for a WhatsApp business phone number.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/WhatsAppCallSettings">AWS
 * API Reference</a></p>
 */
class WhatsAppCallSettings {
 public:
  AWS_SOCIALMESSAGING_API WhatsAppCallSettings() = default;
  AWS_SOCIALMESSAGING_API WhatsAppCallSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API WhatsAppCallSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether calling is enabled for the phone number.</p>
   */
  inline bool GetCallEnabled() const { return m_callEnabled; }
  inline bool CallEnabledHasBeenSet() const { return m_callEnabledHasBeenSet; }
  inline void SetCallEnabled(bool value) {
    m_callEnabledHasBeenSet = true;
    m_callEnabled = value;
  }
  inline WhatsAppCallSettings& WithCallEnabled(bool value) {
    SetCallEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hours during which the business accepts calls on the phone number.</p>
   */
  inline const WhatsAppCallHours& GetCallHours() const { return m_callHours; }
  inline bool CallHoursHasBeenSet() const { return m_callHoursHasBeenSet; }
  template <typename CallHoursT = WhatsAppCallHours>
  void SetCallHours(CallHoursT&& value) {
    m_callHoursHasBeenSet = true;
    m_callHours = std::forward<CallHoursT>(value);
  }
  template <typename CallHoursT = WhatsAppCallHours>
  WhatsAppCallSettings& WithCallHours(CallHoursT&& value) {
    SetCallHours(std::forward<CallHoursT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The visibility setting for the call icon shown to end users in WhatsApp.</p>
   */
  inline const Aws::String& GetCallIconVisibility() const { return m_callIconVisibility; }
  inline bool CallIconVisibilityHasBeenSet() const { return m_callIconVisibilityHasBeenSet; }
  template <typename CallIconVisibilityT = Aws::String>
  void SetCallIconVisibility(CallIconVisibilityT&& value) {
    m_callIconVisibilityHasBeenSet = true;
    m_callIconVisibility = std::forward<CallIconVisibilityT>(value);
  }
  template <typename CallIconVisibilityT = Aws::String>
  WhatsAppCallSettings& WithCallIconVisibility(CallIconVisibilityT&& value) {
    SetCallIconVisibility(std::forward<CallIconVisibilityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The callback permission status for the phone number.</p>
   */
  inline const Aws::String& GetCallbackPermissionStatus() const { return m_callbackPermissionStatus; }
  inline bool CallbackPermissionStatusHasBeenSet() const { return m_callbackPermissionStatusHasBeenSet; }
  template <typename CallbackPermissionStatusT = Aws::String>
  void SetCallbackPermissionStatus(CallbackPermissionStatusT&& value) {
    m_callbackPermissionStatusHasBeenSet = true;
    m_callbackPermissionStatus = std::forward<CallbackPermissionStatusT>(value);
  }
  template <typename CallbackPermissionStatusT = Aws::String>
  WhatsAppCallSettings& WithCallbackPermissionStatus(CallbackPermissionStatusT&& value) {
    SetCallbackPermissionStatus(std::forward<CallbackPermissionStatusT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_callEnabled{false};

  WhatsAppCallHours m_callHours;

  Aws::String m_callIconVisibility;

  Aws::String m_callbackPermissionStatus;
  bool m_callEnabledHasBeenSet = false;
  bool m_callHoursHasBeenSet = false;
  bool m_callIconVisibilityHasBeenSet = false;
  bool m_callbackPermissionStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
