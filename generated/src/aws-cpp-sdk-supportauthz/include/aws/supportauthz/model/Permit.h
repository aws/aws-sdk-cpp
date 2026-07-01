/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>
#include <aws/supportauthz/model/ActionSet.h>
#include <aws/supportauthz/model/Condition.h>
#include <aws/supportauthz/model/ResourceSet.h>

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
 * <p>The permit definition specifying the authorized actions, resources, and
 * time-window conditions for a support operator.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/supportauthz-2026-06-30/Permit">AWS
 * API Reference</a></p>
 */
class Permit {
 public:
  AWS_SUPPORTAUTHZ_API Permit() = default;
  AWS_SUPPORTAUTHZ_API Permit(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORTAUTHZ_API Permit& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUPPORTAUTHZ_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The set of actions that the support operator is authorized to perform.</p>
   */
  inline const ActionSet& GetActions() const { return m_actions; }
  inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
  template <typename ActionsT = ActionSet>
  void SetActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions = std::forward<ActionsT>(value);
  }
  template <typename ActionsT = ActionSet>
  Permit& WithActions(ActionsT&& value) {
    SetActions(std::forward<ActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The set of resources that the support operator is authorized to act upon.</p>
   */
  inline const ResourceSet& GetResources() const { return m_resources; }
  inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
  template <typename ResourcesT = ResourceSet>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = ResourceSet>
  Permit& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time-window conditions that constrain when the permit is valid. Maximum
   * of 2 conditions.</p>
   */
  inline const Aws::Vector<Condition>& GetConditions() const { return m_conditions; }
  inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
  template <typename ConditionsT = Aws::Vector<Condition>>
  void SetConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions = std::forward<ConditionsT>(value);
  }
  template <typename ConditionsT = Aws::Vector<Condition>>
  Permit& WithConditions(ConditionsT&& value) {
    SetConditions(std::forward<ConditionsT>(value));
    return *this;
  }
  template <typename ConditionsT = Condition>
  Permit& AddConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions.emplace_back(std::forward<ConditionsT>(value));
    return *this;
  }
  ///@}
 private:
  ActionSet m_actions;

  ResourceSet m_resources;

  Aws::Vector<Condition> m_conditions;
  bool m_actionsHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
  bool m_conditionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
