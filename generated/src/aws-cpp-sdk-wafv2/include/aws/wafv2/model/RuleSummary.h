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
   * <p>High-level information about a <a>Rule</a>, returned by operations like
   * <a>DescribeManagedRuleGroup</a>. This provides information like the ID, that you
   * can use to retrieve and manage a <code>RuleGroup</code>, and the ARN, that you
   * provide to the <a>RuleGroupReferenceStatement</a> to use the rule group in a
   * <a>Rule</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RuleSummary">AWS
   * API Reference</a></p>
   */
  class RuleSummary
  {
  public:
    AWS_WAFV2_API RuleSummary() = default;
    AWS_WAFV2_API RuleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RuleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the rule. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RuleSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that WAF should take on a web request when it matches a rule's
     * statement. Settings at the web ACL level can override the rule action setting.
     * </p>
     */
    inline const RuleAction& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = RuleAction>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = RuleAction>
    RuleSummary& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RuleAction m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
