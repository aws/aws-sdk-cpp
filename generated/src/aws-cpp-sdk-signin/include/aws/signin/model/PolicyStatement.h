/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/signin/Signin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Signin {
namespace Model {

/**
 * <p>Individual policy statement within a resource-based policy</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/PolicyStatement">AWS
 * API Reference</a></p>
 */
class PolicyStatement {
 public:
  AWS_SIGNIN_API PolicyStatement() = default;
  AWS_SIGNIN_API PolicyStatement(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API PolicyStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIGNIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Effect of the policy statement (Allow/Deny)</p>
   */
  inline const Aws::String& GetEffect() const { return m_effect; }
  inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }
  template <typename EffectT = Aws::String>
  void SetEffect(EffectT&& value) {
    m_effectHasBeenSet = true;
    m_effect = std::forward<EffectT>(value);
  }
  template <typename EffectT = Aws::String>
  PolicyStatement& WithEffect(EffectT&& value) {
    SetEffect(std::forward<EffectT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Principal the statement applies to</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetPrincipal() const { return m_principal; }
  inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
  template <typename PrincipalT = Aws::Map<Aws::String, Aws::String>>
  void SetPrincipal(PrincipalT&& value) {
    m_principalHasBeenSet = true;
    m_principal = std::forward<PrincipalT>(value);
  }
  template <typename PrincipalT = Aws::Map<Aws::String, Aws::String>>
  PolicyStatement& WithPrincipal(PrincipalT&& value) {
    SetPrincipal(std::forward<PrincipalT>(value));
    return *this;
  }
  template <typename PrincipalKeyT = Aws::String, typename PrincipalValueT = Aws::String>
  PolicyStatement& AddPrincipal(PrincipalKeyT&& key, PrincipalValueT&& value) {
    m_principalHasBeenSet = true;
    m_principal.emplace(std::forward<PrincipalKeyT>(key), std::forward<PrincipalValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Actions the statement controls</p>
   */
  inline const Aws::Vector<Aws::String>& GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  template <typename ActionT = Aws::Vector<Aws::String>>
  void SetAction(ActionT&& value) {
    m_actionHasBeenSet = true;
    m_action = std::forward<ActionT>(value);
  }
  template <typename ActionT = Aws::Vector<Aws::String>>
  PolicyStatement& WithAction(ActionT&& value) {
    SetAction(std::forward<ActionT>(value));
    return *this;
  }
  template <typename ActionT = Aws::String>
  PolicyStatement& AddAction(ActionT&& value) {
    m_actionHasBeenSet = true;
    m_action.emplace_back(std::forward<ActionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Resource the statement applies to</p>
   */
  inline const Aws::String& GetResource() const { return m_resource; }
  inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
  template <typename ResourceT = Aws::String>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = Aws::String>
  PolicyStatement& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Condition block for the statement</p>
   */
  inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetCondition() const { return m_condition; }
  inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
  template <typename ConditionT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>
  void SetCondition(ConditionT&& value) {
    m_conditionHasBeenSet = true;
    m_condition = std::forward<ConditionT>(value);
  }
  template <typename ConditionT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>
  PolicyStatement& WithCondition(ConditionT&& value) {
    SetCondition(std::forward<ConditionT>(value));
    return *this;
  }
  template <typename ConditionKeyT = Aws::String, typename ConditionValueT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  PolicyStatement& AddCondition(ConditionKeyT&& key, ConditionValueT&& value) {
    m_conditionHasBeenSet = true;
    m_condition.emplace(std::forward<ConditionKeyT>(key), std::forward<ConditionValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_effect;

  Aws::Map<Aws::String, Aws::String> m_principal;

  Aws::Vector<Aws::String> m_action;

  Aws::String m_resource;

  Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>> m_condition;
  bool m_effectHasBeenSet = false;
  bool m_principalHasBeenSet = false;
  bool m_actionHasBeenSet = false;
  bool m_resourceHasBeenSet = false;
  bool m_conditionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
