/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>

#include <utility>

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
 * <p>Represents a device where a user has logged into Wickr, containing
 * information about the device's type, status, and login history.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/BasicDeviceObject">AWS
 * API Reference</a></p>
 */
class BasicDeviceObject {
 public:
  AWS_WICKR_API BasicDeviceObject() = default;
  AWS_WICKR_API BasicDeviceObject(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API BasicDeviceObject& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique application ID for the Wickr app on this device.</p>
   */
  inline const Aws::String& GetAppId() const { return m_appId; }
  inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
  template <typename AppIdT = Aws::String>
  void SetAppId(AppIdT&& value) {
    m_appIdHasBeenSet = true;
    m_appId = std::forward<AppIdT>(value);
  }
  template <typename AppIdT = Aws::String>
  BasicDeviceObject& WithAppId(AppIdT&& value) {
    SetAppId(std::forward<AppIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the device first appeared in the Wickr database.</p>
   */
  inline const Aws::String& GetCreated() const { return m_created; }
  inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
  template <typename CreatedT = Aws::String>
  void SetCreated(CreatedT&& value) {
    m_createdHasBeenSet = true;
    m_created = std::forward<CreatedT>(value);
  }
  template <typename CreatedT = Aws::String>
  BasicDeviceObject& WithCreated(CreatedT&& value) {
    SetCreated(std::forward<CreatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the device last successfully logged into Wickr. This is
   * also used to determine SSO idle time.</p>
   */
  inline const Aws::String& GetLastLogin() const { return m_lastLogin; }
  inline bool LastLoginHasBeenSet() const { return m_lastLoginHasBeenSet; }
  template <typename LastLoginT = Aws::String>
  void SetLastLogin(LastLoginT&& value) {
    m_lastLoginHasBeenSet = true;
    m_lastLogin = std::forward<LastLoginT>(value);
  }
  template <typename LastLoginT = Aws::String>
  BasicDeviceObject& WithLastLogin(LastLoginT&& value) {
    SetLastLogin(std::forward<LastLoginT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the device, either 'Active' or 'Reset' depending on
   * whether the device is currently active or has been marked for reset.</p>
   */
  inline const Aws::String& GetStatusText() const { return m_statusText; }
  inline bool StatusTextHasBeenSet() const { return m_statusTextHasBeenSet; }
  template <typename StatusTextT = Aws::String>
  void SetStatusText(StatusTextT&& value) {
    m_statusTextHasBeenSet = true;
    m_statusText = std::forward<StatusTextT>(value);
  }
  template <typename StatusTextT = Aws::String>
  BasicDeviceObject& WithStatusText(StatusTextT&& value) {
    SetStatusText(std::forward<StatusTextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the device is suspended.</p>
   */
  inline bool GetSuspend() const { return m_suspend; }
  inline bool SuspendHasBeenSet() const { return m_suspendHasBeenSet; }
  inline void SetSuspend(bool value) {
    m_suspendHasBeenSet = true;
    m_suspend = value;
  }
  inline BasicDeviceObject& WithSuspend(bool value) {
    SetSuspend(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operating system of the device (e.g., 'MacOSX', 'Windows', 'iOS',
   * 'Android').</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  BasicDeviceObject& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_appId;

  Aws::String m_created;

  Aws::String m_lastLogin;

  Aws::String m_statusText;

  bool m_suspend{false};

  Aws::String m_type;
  bool m_appIdHasBeenSet = false;
  bool m_createdHasBeenSet = false;
  bool m_lastLoginHasBeenSet = false;
  bool m_statusTextHasBeenSet = false;
  bool m_suspendHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
