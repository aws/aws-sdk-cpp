/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/ActionCondition.h>
#include <aws/wafv2/model/LabelNameCondition.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAFV2
{
namespace Model
{

  /**
   * <p>A single match condition for a <a>Filter</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/Condition">AWS API
   * Reference</a></p>
   */
  class Condition
  {
  public:
    AWS_WAFV2_API Condition() = default;
    AWS_WAFV2_API Condition(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A single action condition. This is the action setting that a log record must
     * contain in order to meet the condition.</p>
     */
    inline const ActionCondition& GetActionCondition() const { return m_actionCondition; }
    inline bool ActionConditionHasBeenSet() const { return m_actionConditionHasBeenSet; }
    template<typename ActionConditionT = ActionCondition>
    void SetActionCondition(ActionConditionT&& value) { m_actionConditionHasBeenSet = true; m_actionCondition = std::forward<ActionConditionT>(value); }
    template<typename ActionConditionT = ActionCondition>
    Condition& WithActionCondition(ActionConditionT&& value) { SetActionCondition(std::forward<ActionConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A single label name condition. This is the fully qualified label name that a
     * log record must contain in order to meet the condition. Fully qualified labels
     * have a prefix, optional namespaces, and label name. The prefix identifies the
     * rule group or web ACL context of the rule that added the label. </p>
     */
    inline const LabelNameCondition& GetLabelNameCondition() const { return m_labelNameCondition; }
    inline bool LabelNameConditionHasBeenSet() const { return m_labelNameConditionHasBeenSet; }
    template<typename LabelNameConditionT = LabelNameCondition>
    void SetLabelNameCondition(LabelNameConditionT&& value) { m_labelNameConditionHasBeenSet = true; m_labelNameCondition = std::forward<LabelNameConditionT>(value); }
    template<typename LabelNameConditionT = LabelNameCondition>
    Condition& WithLabelNameCondition(LabelNameConditionT&& value) { SetLabelNameCondition(std::forward<LabelNameConditionT>(value)); return *this;}
    ///@}
  private:

    ActionCondition m_actionCondition;
    bool m_actionConditionHasBeenSet = false;

    LabelNameCondition m_labelNameCondition;
    bool m_labelNameConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
