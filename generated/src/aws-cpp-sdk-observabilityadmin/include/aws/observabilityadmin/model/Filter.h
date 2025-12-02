/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/Condition.h>
#include <aws/observabilityadmin/model/FilterBehavior.h>
#include <aws/observabilityadmin/model/FilterRequirement.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p> A single filter condition that specifies behavior, requirement, and matching
 * conditions for WAF log records. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/Filter">AWS
 * API Reference</a></p>
 */
class Filter {
 public:
  AWS_OBSERVABILITYADMIN_API Filter() = default;
  AWS_OBSERVABILITYADMIN_API Filter(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The action to take for log records matching this filter (KEEP or DROP). </p>
   */
  inline FilterBehavior GetBehavior() const { return m_behavior; }
  inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }
  inline void SetBehavior(FilterBehavior value) {
    m_behaviorHasBeenSet = true;
    m_behavior = value;
  }
  inline Filter& WithBehavior(FilterBehavior value) {
    SetBehavior(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Whether the log record must meet all conditions (MEETS_ALL) or any condition
   * (MEETS_ANY) to match this filter. </p>
   */
  inline FilterRequirement GetRequirement() const { return m_requirement; }
  inline bool RequirementHasBeenSet() const { return m_requirementHasBeenSet; }
  inline void SetRequirement(FilterRequirement value) {
    m_requirementHasBeenSet = true;
    m_requirement = value;
  }
  inline Filter& WithRequirement(FilterRequirement value) {
    SetRequirement(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The list of conditions that determine if a log record matches this filter.
   * </p>
   */
  inline const Aws::Vector<Condition>& GetConditions() const { return m_conditions; }
  inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
  template <typename ConditionsT = Aws::Vector<Condition>>
  void SetConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions = std::forward<ConditionsT>(value);
  }
  template <typename ConditionsT = Aws::Vector<Condition>>
  Filter& WithConditions(ConditionsT&& value) {
    SetConditions(std::forward<ConditionsT>(value));
    return *this;
  }
  template <typename ConditionsT = Condition>
  Filter& AddConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions.emplace_back(std::forward<ConditionsT>(value));
    return *this;
  }
  ///@}
 private:
  FilterBehavior m_behavior{FilterBehavior::NOT_SET};
  bool m_behaviorHasBeenSet = false;

  FilterRequirement m_requirement{FilterRequirement::NOT_SET};
  bool m_requirementHasBeenSet = false;

  Aws::Vector<Condition> m_conditions;
  bool m_conditionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
