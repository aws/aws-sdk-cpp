/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>

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
 * <p>The current calling permission state for a business phone number and a
 * specific WhatsApp end user.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/WhatsAppCallPermission">AWS
 * API Reference</a></p>
 */
class WhatsAppCallPermission {
 public:
  AWS_SOCIALMESSAGING_API WhatsAppCallPermission() = default;
  AWS_SOCIALMESSAGING_API WhatsAppCallPermission(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API WhatsAppCallPermission& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The permission status for the end user.</p>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  WhatsAppCallPermission& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when a temporary permission expires. This value is absent for
   * permanent permissions and when there is no permission.</p>
   */
  inline const Aws::Utils::DateTime& GetExpirationTime() const { return m_expirationTime; }
  inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  void SetExpirationTime(ExpirationTimeT&& value) {
    m_expirationTimeHasBeenSet = true;
    m_expirationTime = std::forward<ExpirationTimeT>(value);
  }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  WhatsAppCallPermission& WithExpirationTime(ExpirationTimeT&& value) {
    SetExpirationTime(std::forward<ExpirationTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_status;

  Aws::Utils::DateTime m_expirationTime{};
  bool m_statusHasBeenSet = false;
  bool m_expirationTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
