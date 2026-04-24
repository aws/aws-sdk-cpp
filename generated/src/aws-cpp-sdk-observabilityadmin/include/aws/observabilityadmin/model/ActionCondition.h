/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/Action.h>

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
 * <p> Condition that matches based on the specific WAF action taken on the
 * request. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/ActionCondition">AWS
 * API Reference</a></p>
 */
class ActionCondition {
 public:
  AWS_OBSERVABILITYADMIN_API ActionCondition() = default;
  AWS_OBSERVABILITYADMIN_API ActionCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API ActionCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The WAF action to match against (ALLOW, BLOCK, COUNT, CAPTCHA, CHALLENGE,
   * EXCLUDED_AS_COUNT). </p>
   */
  inline Action GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(Action value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline ActionCondition& WithAction(Action value) {
    SetAction(value);
    return *this;
  }
  ///@}
 private:
  Action m_action{Action::NOT_SET};
  bool m_actionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
