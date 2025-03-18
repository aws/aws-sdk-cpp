/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsWafRegionalWebAclRulesListActionDetails.h>
#include <aws/securityhub/model/AwsWafRegionalWebAclRulesListOverrideActionDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A combination of <code>ByteMatchSet</code>, <code>IPSet</code>, and/or
   * <code>SqlInjectionMatchSet</code> objects that identify the web requests that
   * you want to allow, block, or count. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafRegionalWebAclRulesListDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafRegionalWebAclRulesListDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafRegionalWebAclRulesListDetails() = default;
    AWS_SECURITYHUB_API AwsWafRegionalWebAclRulesListDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafRegionalWebAclRulesListDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action that WAF takes when a web request matches all conditions in the
     * rule, such as allow, block, or count the request. </p>
     */
    inline const AwsWafRegionalWebAclRulesListActionDetails& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = AwsWafRegionalWebAclRulesListActionDetails>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = AwsWafRegionalWebAclRulesListActionDetails>
    AwsWafRegionalWebAclRulesListDetails& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Overrides the rule evaluation result in the rule group. </p>
     */
    inline const AwsWafRegionalWebAclRulesListOverrideActionDetails& GetOverrideAction() const { return m_overrideAction; }
    inline bool OverrideActionHasBeenSet() const { return m_overrideActionHasBeenSet; }
    template<typename OverrideActionT = AwsWafRegionalWebAclRulesListOverrideActionDetails>
    void SetOverrideAction(OverrideActionT&& value) { m_overrideActionHasBeenSet = true; m_overrideAction = std::forward<OverrideActionT>(value); }
    template<typename OverrideActionT = AwsWafRegionalWebAclRulesListOverrideActionDetails>
    AwsWafRegionalWebAclRulesListDetails& WithOverrideAction(OverrideActionT&& value) { SetOverrideAction(std::forward<OverrideActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order in which WAF evaluates the rules in a web ACL. </p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline AwsWafRegionalWebAclRulesListDetails& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an WAF Regional rule to associate with a web ACL. </p>
     */
    inline const Aws::String& GetRuleId() const { return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    template<typename RuleIdT = Aws::String>
    void SetRuleId(RuleIdT&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::forward<RuleIdT>(value); }
    template<typename RuleIdT = Aws::String>
    AwsWafRegionalWebAclRulesListDetails& WithRuleId(RuleIdT&& value) { SetRuleId(std::forward<RuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For actions that are associated with a rule, the action that WAF takes when a
     * web request matches all conditions in a rule. </p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AwsWafRegionalWebAclRulesListDetails& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    AwsWafRegionalWebAclRulesListActionDetails m_action;
    bool m_actionHasBeenSet = false;

    AwsWafRegionalWebAclRulesListOverrideActionDetails m_overrideAction;
    bool m_overrideActionHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
