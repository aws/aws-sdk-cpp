/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/CountAction.h>
#include <aws/wafv2/model/NoneAction.h>
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
   * <p>The action to use in the place of the action that results from the rule group
   * evaluation. Set the override action to none to leave the result of the rule
   * group alone. Set it to count to override the result to count only. </p> <p>You
   * can only use this for rule statements that reference a rule group, like
   * <code>RuleGroupReferenceStatement</code> and
   * <code>ManagedRuleGroupStatement</code>. </p>  <p>This option is usually
   * set to none. It does not affect how the rules in the rule group are evaluated.
   * If you want the rules in the rule group to only count matches, do not use this
   * and instead use the rule action override option, with <code>Count</code> action,
   * in your rule group reference statement settings. </p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/OverrideAction">AWS
   * API Reference</a></p>
   */
  class OverrideAction
  {
  public:
    AWS_WAFV2_API OverrideAction();
    AWS_WAFV2_API OverrideAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API OverrideAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Override the rule group evaluation result to count only. </p>  <p>This
     * option is usually set to none. It does not affect how the rules in the rule
     * group are evaluated. If you want the rules in the rule group to only count
     * matches, do not use this and instead use the rule action override option, with
     * <code>Count</code> action, in your rule group reference statement settings. </p>
     * 
     */
    inline const CountAction& GetCount() const{ return m_count; }

    /**
     * <p>Override the rule group evaluation result to count only. </p>  <p>This
     * option is usually set to none. It does not affect how the rules in the rule
     * group are evaluated. If you want the rules in the rule group to only count
     * matches, do not use this and instead use the rule action override option, with
     * <code>Count</code> action, in your rule group reference statement settings. </p>
     * 
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>Override the rule group evaluation result to count only. </p>  <p>This
     * option is usually set to none. It does not affect how the rules in the rule
     * group are evaluated. If you want the rules in the rule group to only count
     * matches, do not use this and instead use the rule action override option, with
     * <code>Count</code> action, in your rule group reference statement settings. </p>
     * 
     */
    inline void SetCount(const CountAction& value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>Override the rule group evaluation result to count only. </p>  <p>This
     * option is usually set to none. It does not affect how the rules in the rule
     * group are evaluated. If you want the rules in the rule group to only count
     * matches, do not use this and instead use the rule action override option, with
     * <code>Count</code> action, in your rule group reference statement settings. </p>
     * 
     */
    inline void SetCount(CountAction&& value) { m_countHasBeenSet = true; m_count = std::move(value); }

    /**
     * <p>Override the rule group evaluation result to count only. </p>  <p>This
     * option is usually set to none. It does not affect how the rules in the rule
     * group are evaluated. If you want the rules in the rule group to only count
     * matches, do not use this and instead use the rule action override option, with
     * <code>Count</code> action, in your rule group reference statement settings. </p>
     * 
     */
    inline OverrideAction& WithCount(const CountAction& value) { SetCount(value); return *this;}

    /**
     * <p>Override the rule group evaluation result to count only. </p>  <p>This
     * option is usually set to none. It does not affect how the rules in the rule
     * group are evaluated. If you want the rules in the rule group to only count
     * matches, do not use this and instead use the rule action override option, with
     * <code>Count</code> action, in your rule group reference statement settings. </p>
     * 
     */
    inline OverrideAction& WithCount(CountAction&& value) { SetCount(std::move(value)); return *this;}


    /**
     * <p>Don't override the rule group evaluation result. This is the most common
     * setting.</p>
     */
    inline const NoneAction& GetNone() const{ return m_none; }

    /**
     * <p>Don't override the rule group evaluation result. This is the most common
     * setting.</p>
     */
    inline bool NoneHasBeenSet() const { return m_noneHasBeenSet; }

    /**
     * <p>Don't override the rule group evaluation result. This is the most common
     * setting.</p>
     */
    inline void SetNone(const NoneAction& value) { m_noneHasBeenSet = true; m_none = value; }

    /**
     * <p>Don't override the rule group evaluation result. This is the most common
     * setting.</p>
     */
    inline void SetNone(NoneAction&& value) { m_noneHasBeenSet = true; m_none = std::move(value); }

    /**
     * <p>Don't override the rule group evaluation result. This is the most common
     * setting.</p>
     */
    inline OverrideAction& WithNone(const NoneAction& value) { SetNone(value); return *this;}

    /**
     * <p>Don't override the rule group evaluation result. This is the most common
     * setting.</p>
     */
    inline OverrideAction& WithNone(NoneAction&& value) { SetNone(std::move(value)); return *this;}

  private:

    CountAction m_count;
    bool m_countHasBeenSet = false;

    NoneAction m_none;
    bool m_noneHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
