/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/RuleAction.h>
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
   * <p>Action setting to use in the place of a rule action that is configured inside
   * the rule group. You specify one override for each rule whose action you want to
   * change. </p>  <p>Verify the rule names in your overrides carefully. With
   * managed rule groups, WAF silently ignores any override that uses an invalid rule
   * name. With customer-owned rule groups, invalid rule names in your overrides will
   * cause web ACL updates to fail. An invalid rule name is any name that doesn't
   * exactly match the case-sensitive name of an existing rule in the rule group.</p>
   *  <p>You can use overrides for testing, for example you can override all
   * of rule actions to <code>Count</code> and then monitor the resulting count
   * metrics to understand how the rule group would handle your web traffic. You can
   * also permanently override some or all actions, to modify how the rule group
   * manages your web traffic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RuleActionOverride">AWS
   * API Reference</a></p>
   */
  class RuleActionOverride
  {
  public:
    AWS_WAFV2_API RuleActionOverride() = default;
    AWS_WAFV2_API RuleActionOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RuleActionOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the rule to override.</p>  <p>Verify the rule names in your
     * overrides carefully. With managed rule groups, WAF silently ignores any override
     * that uses an invalid rule name. With customer-owned rule groups, invalid rule
     * names in your overrides will cause web ACL updates to fail. An invalid rule name
     * is any name that doesn't exactly match the case-sensitive name of an existing
     * rule in the rule group.</p> 
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RuleActionOverride& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The override action to use, in place of the configured action of the rule in
     * the rule group. </p>
     */
    inline const RuleAction& GetActionToUse() const { return m_actionToUse; }
    inline bool ActionToUseHasBeenSet() const { return m_actionToUseHasBeenSet; }
    template<typename ActionToUseT = RuleAction>
    void SetActionToUse(ActionToUseT&& value) { m_actionToUseHasBeenSet = true; m_actionToUse = std::forward<ActionToUseT>(value); }
    template<typename ActionToUseT = RuleAction>
    RuleActionOverride& WithActionToUse(ActionToUseT&& value) { SetActionToUse(std::forward<ActionToUseT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RuleAction m_actionToUse;
    bool m_actionToUseHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
