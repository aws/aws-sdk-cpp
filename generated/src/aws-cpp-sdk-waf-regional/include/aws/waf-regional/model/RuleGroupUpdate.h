/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/ChangeAction.h>
#include <aws/waf-regional/model/ActivatedRule.h>
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
namespace WAFRegional
{
namespace Model
{

  /**
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>Specifies an
   * <code>ActivatedRule</code> and indicates whether you want to add it to a
   * <code>RuleGroup</code> or delete it from a <code>RuleGroup</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/RuleGroupUpdate">AWS
   * API Reference</a></p>
   */
  class RuleGroupUpdate
  {
  public:
    AWS_WAFREGIONAL_API RuleGroupUpdate() = default;
    AWS_WAFREGIONAL_API RuleGroupUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API RuleGroupUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify <code>INSERT</code> to add an <code>ActivatedRule</code> to a
     * <code>RuleGroup</code>. Use <code>DELETE</code> to remove an
     * <code>ActivatedRule</code> from a <code>RuleGroup</code>.</p>
     */
    inline ChangeAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(ChangeAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline RuleGroupUpdate& WithAction(ChangeAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ActivatedRule</code> object specifies a <code>Rule</code> that you
     * want to insert or delete, the priority of the <code>Rule</code> in the
     * <code>WebACL</code>, and the action that you want AWS WAF to take when a web
     * request matches the <code>Rule</code> (<code>ALLOW</code>, <code>BLOCK</code>,
     * or <code>COUNT</code>).</p>
     */
    inline const ActivatedRule& GetActivatedRule() const { return m_activatedRule; }
    inline bool ActivatedRuleHasBeenSet() const { return m_activatedRuleHasBeenSet; }
    template<typename ActivatedRuleT = ActivatedRule>
    void SetActivatedRule(ActivatedRuleT&& value) { m_activatedRuleHasBeenSet = true; m_activatedRule = std::forward<ActivatedRuleT>(value); }
    template<typename ActivatedRuleT = ActivatedRule>
    RuleGroupUpdate& WithActivatedRule(ActivatedRuleT&& value) { SetActivatedRule(std::forward<ActivatedRuleT>(value)); return *this;}
    ///@}
  private:

    ChangeAction m_action{ChangeAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    ActivatedRule m_activatedRule;
    bool m_activatedRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
