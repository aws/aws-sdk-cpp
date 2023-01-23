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
    AWS_WAFV2_API Condition();
    AWS_WAFV2_API Condition(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A single action condition. This is the action setting that a log record must
     * contain in order to meet the condition.</p>
     */
    inline const ActionCondition& GetActionCondition() const{ return m_actionCondition; }

    /**
     * <p>A single action condition. This is the action setting that a log record must
     * contain in order to meet the condition.</p>
     */
    inline bool ActionConditionHasBeenSet() const { return m_actionConditionHasBeenSet; }

    /**
     * <p>A single action condition. This is the action setting that a log record must
     * contain in order to meet the condition.</p>
     */
    inline void SetActionCondition(const ActionCondition& value) { m_actionConditionHasBeenSet = true; m_actionCondition = value; }

    /**
     * <p>A single action condition. This is the action setting that a log record must
     * contain in order to meet the condition.</p>
     */
    inline void SetActionCondition(ActionCondition&& value) { m_actionConditionHasBeenSet = true; m_actionCondition = std::move(value); }

    /**
     * <p>A single action condition. This is the action setting that a log record must
     * contain in order to meet the condition.</p>
     */
    inline Condition& WithActionCondition(const ActionCondition& value) { SetActionCondition(value); return *this;}

    /**
     * <p>A single action condition. This is the action setting that a log record must
     * contain in order to meet the condition.</p>
     */
    inline Condition& WithActionCondition(ActionCondition&& value) { SetActionCondition(std::move(value)); return *this;}


    /**
     * <p>A single label name condition. This is the fully qualified label name that a
     * log record must contain in order to meet the condition. Fully qualified labels
     * have a prefix, optional namespaces, and label name. The prefix identifies the
     * rule group or web ACL context of the rule that added the label. </p>
     */
    inline const LabelNameCondition& GetLabelNameCondition() const{ return m_labelNameCondition; }

    /**
     * <p>A single label name condition. This is the fully qualified label name that a
     * log record must contain in order to meet the condition. Fully qualified labels
     * have a prefix, optional namespaces, and label name. The prefix identifies the
     * rule group or web ACL context of the rule that added the label. </p>
     */
    inline bool LabelNameConditionHasBeenSet() const { return m_labelNameConditionHasBeenSet; }

    /**
     * <p>A single label name condition. This is the fully qualified label name that a
     * log record must contain in order to meet the condition. Fully qualified labels
     * have a prefix, optional namespaces, and label name. The prefix identifies the
     * rule group or web ACL context of the rule that added the label. </p>
     */
    inline void SetLabelNameCondition(const LabelNameCondition& value) { m_labelNameConditionHasBeenSet = true; m_labelNameCondition = value; }

    /**
     * <p>A single label name condition. This is the fully qualified label name that a
     * log record must contain in order to meet the condition. Fully qualified labels
     * have a prefix, optional namespaces, and label name. The prefix identifies the
     * rule group or web ACL context of the rule that added the label. </p>
     */
    inline void SetLabelNameCondition(LabelNameCondition&& value) { m_labelNameConditionHasBeenSet = true; m_labelNameCondition = std::move(value); }

    /**
     * <p>A single label name condition. This is the fully qualified label name that a
     * log record must contain in order to meet the condition. Fully qualified labels
     * have a prefix, optional namespaces, and label name. The prefix identifies the
     * rule group or web ACL context of the rule that added the label. </p>
     */
    inline Condition& WithLabelNameCondition(const LabelNameCondition& value) { SetLabelNameCondition(value); return *this;}

    /**
     * <p>A single label name condition. This is the fully qualified label name that a
     * log record must contain in order to meet the condition. Fully qualified labels
     * have a prefix, optional namespaces, and label name. The prefix identifies the
     * rule group or web ACL context of the rule that added the label. </p>
     */
    inline Condition& WithLabelNameCondition(LabelNameCondition&& value) { SetLabelNameCondition(std::move(value)); return *this;}

  private:

    ActionCondition m_actionCondition;
    bool m_actionConditionHasBeenSet = false;

    LabelNameCondition m_labelNameCondition;
    bool m_labelNameConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
