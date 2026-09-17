/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/model/WhatsAppCallPermissionLimit.h>

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
 * <p>Describes a single calling action the business can take with an end user,
 * including whether the action is currently allowed and any limits that apply to
 * it. Returned as an item in the actions list from
 * <code>GetWhatsAppCallPermission</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/WhatsAppCallPermissionAction">AWS
 * API Reference</a></p>
 */
class WhatsAppCallPermissionAction {
 public:
  AWS_SOCIALMESSAGING_API WhatsAppCallPermissionAction() = default;
  AWS_SOCIALMESSAGING_API WhatsAppCallPermissionAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API WhatsAppCallPermissionAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the calling action.</p>
   */
  inline const Aws::String& GetActionName() const { return m_actionName; }
  inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
  template <typename ActionNameT = Aws::String>
  void SetActionName(ActionNameT&& value) {
    m_actionNameHasBeenSet = true;
    m_actionName = std::forward<ActionNameT>(value);
  }
  template <typename ActionNameT = Aws::String>
  WhatsAppCallPermissionAction& WithActionName(ActionNameT&& value) {
    SetActionName(std::forward<ActionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the business can currently perform the action.</p>
   */
  inline bool GetCanPerformAction() const { return m_canPerformAction; }
  inline bool CanPerformActionHasBeenSet() const { return m_canPerformActionHasBeenSet; }
  inline void SetCanPerformAction(bool value) {
    m_canPerformActionHasBeenSet = true;
    m_canPerformAction = value;
  }
  inline WhatsAppCallPermissionAction& WithCanPerformAction(bool value) {
    SetCanPerformAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time-bound limits that apply to the action.</p>
   */
  inline const Aws::Vector<WhatsAppCallPermissionLimit>& GetLimits() const { return m_limits; }
  inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }
  template <typename LimitsT = Aws::Vector<WhatsAppCallPermissionLimit>>
  void SetLimits(LimitsT&& value) {
    m_limitsHasBeenSet = true;
    m_limits = std::forward<LimitsT>(value);
  }
  template <typename LimitsT = Aws::Vector<WhatsAppCallPermissionLimit>>
  WhatsAppCallPermissionAction& WithLimits(LimitsT&& value) {
    SetLimits(std::forward<LimitsT>(value));
    return *this;
  }
  template <typename LimitsT = WhatsAppCallPermissionLimit>
  WhatsAppCallPermissionAction& AddLimits(LimitsT&& value) {
    m_limitsHasBeenSet = true;
    m_limits.emplace_back(std::forward<LimitsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_actionName;

  bool m_canPerformAction{false};

  Aws::Vector<WhatsAppCallPermissionLimit> m_limits;
  bool m_actionNameHasBeenSet = false;
  bool m_canPerformActionHasBeenSet = false;
  bool m_limitsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
