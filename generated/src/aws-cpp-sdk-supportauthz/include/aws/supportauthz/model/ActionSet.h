/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>
#include <aws/supportauthz/model/Unit.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SupportAuthZ {
namespace Model {

/**
 * <p>The set of actions authorized by a permit. Specify either all actions or a
 * list of specific actions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/supportauthz-2026-06-30/ActionSet">AWS
 * API Reference</a></p>
 */
class ActionSet {
 public:
  AWS_SUPPORTAUTHZ_API ActionSet() = default;
  AWS_SUPPORTAUTHZ_API ActionSet(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORTAUTHZ_API ActionSet& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORTAUTHZ_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Authorizes all available support actions.</p>
   */
  inline const Unit& GetAllActions() const { return m_allActions; }
  inline bool AllActionsHasBeenSet() const { return m_allActionsHasBeenSet; }
  template <typename AllActionsT = Unit>
  void SetAllActions(AllActionsT&& value) {
    m_allActionsHasBeenSet = true;
    m_allActions = std::forward<AllActionsT>(value);
  }
  template <typename AllActionsT = Unit>
  ActionSet& WithAllActions(AllActionsT&& value) {
    SetAllActions(std::forward<AllActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of specific support actions to authorize. Maximum of 10 actions.</p>
   */
  inline const Aws::Vector<Aws::String>& GetActions() const { return m_actions; }
  inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
  template <typename ActionsT = Aws::Vector<Aws::String>>
  void SetActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions = std::forward<ActionsT>(value);
  }
  template <typename ActionsT = Aws::Vector<Aws::String>>
  ActionSet& WithActions(ActionsT&& value) {
    SetActions(std::forward<ActionsT>(value));
    return *this;
  }
  template <typename ActionsT = Aws::String>
  ActionSet& AddActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions.emplace_back(std::forward<ActionsT>(value));
    return *this;
  }
  ///@}
 private:
  Unit m_allActions;

  Aws::Vector<Aws::String> m_actions;
  bool m_allActionsHasBeenSet = false;
  bool m_actionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
