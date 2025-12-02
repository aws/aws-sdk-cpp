/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/ActionCondition.h>
#include <aws/observabilityadmin/model/LabelNameCondition.h>

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
 * <p> A single condition that can match based on WAF rule action or label name.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/Condition">AWS
 * API Reference</a></p>
 */
class Condition {
 public:
  AWS_OBSERVABILITYADMIN_API Condition() = default;
  AWS_OBSERVABILITYADMIN_API Condition(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> Matches log records based on the WAF rule action taken (ALLOW, BLOCK, COUNT,
   * etc.). </p>
   */
  inline const ActionCondition& GetActionCondition() const { return m_actionCondition; }
  inline bool ActionConditionHasBeenSet() const { return m_actionConditionHasBeenSet; }
  template <typename ActionConditionT = ActionCondition>
  void SetActionCondition(ActionConditionT&& value) {
    m_actionConditionHasBeenSet = true;
    m_actionCondition = std::forward<ActionConditionT>(value);
  }
  template <typename ActionConditionT = ActionCondition>
  Condition& WithActionCondition(ActionConditionT&& value) {
    SetActionCondition(std::forward<ActionConditionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Matches log records based on WAF rule labels applied to the request. </p>
   */
  inline const LabelNameCondition& GetLabelNameCondition() const { return m_labelNameCondition; }
  inline bool LabelNameConditionHasBeenSet() const { return m_labelNameConditionHasBeenSet; }
  template <typename LabelNameConditionT = LabelNameCondition>
  void SetLabelNameCondition(LabelNameConditionT&& value) {
    m_labelNameConditionHasBeenSet = true;
    m_labelNameCondition = std::forward<LabelNameConditionT>(value);
  }
  template <typename LabelNameConditionT = LabelNameCondition>
  Condition& WithLabelNameCondition(LabelNameConditionT&& value) {
    SetLabelNameCondition(std::forward<LabelNameConditionT>(value));
    return *this;
  }
  ///@}
 private:
  ActionCondition m_actionCondition;
  bool m_actionConditionHasBeenSet = false;

  LabelNameCondition m_labelNameCondition;
  bool m_labelNameConditionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
