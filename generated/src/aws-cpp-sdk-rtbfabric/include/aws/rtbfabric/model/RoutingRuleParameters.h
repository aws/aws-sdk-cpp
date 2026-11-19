/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/RuleCondition.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {

/**
 * <p>A requested routing rule.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/RoutingRuleParameters">AWS
 * API Reference</a></p>
 */
class RoutingRuleParameters {
 public:
  AWS_RTBFABRIC_API RoutingRuleParameters() = default;
  AWS_RTBFABRIC_API RoutingRuleParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API RoutingRuleParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline int GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(int value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline RoutingRuleParameters& WithPriority(int value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{

  inline const RuleCondition& GetConditions() const { return m_conditions; }
  inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
  template <typename ConditionsT = RuleCondition>
  void SetConditions(ConditionsT&& value) {
    m_conditionsHasBeenSet = true;
    m_conditions = std::forward<ConditionsT>(value);
  }
  template <typename ConditionsT = RuleCondition>
  RoutingRuleParameters& WithConditions(ConditionsT&& value) {
    SetConditions(std::forward<ConditionsT>(value));
    return *this;
  }
  ///@}
 private:
  int m_priority{0};

  RuleCondition m_conditions;
  bool m_priorityHasBeenSet = false;
  bool m_conditionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
