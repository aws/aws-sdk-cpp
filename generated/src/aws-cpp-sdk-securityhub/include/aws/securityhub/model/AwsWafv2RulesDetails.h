/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsWafv2RulesActionDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsWafv2VisibilityConfigDetails.h>
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
   * <p> Provides details about rules in a rule group. A rule identifies web requests
   * that you want to allow, block, or count. Each rule includes one top-level
   * Statement that WAF uses to identify matching web requests, and parameters that
   * govern how WAF handles them. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafv2RulesDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafv2RulesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafv2RulesDetails() = default;
    AWS_SECURITYHUB_API AwsWafv2RulesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafv2RulesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The action that WAF should take on a web request when it matches the rule
     * statement. Settings at the web ACL level can override the rule action setting.
     * </p>
     */
    inline const AwsWafv2RulesActionDetails& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = AwsWafv2RulesActionDetails>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = AwsWafv2RulesActionDetails>
    AwsWafv2RulesDetails& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the rule. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsWafv2RulesDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The action to use in the place of the action that results from the rule
     * group evaluation. </p>
     */
    inline const Aws::String& GetOverrideAction() const { return m_overrideAction; }
    inline bool OverrideActionHasBeenSet() const { return m_overrideActionHasBeenSet; }
    template<typename OverrideActionT = Aws::String>
    void SetOverrideAction(OverrideActionT&& value) { m_overrideActionHasBeenSet = true; m_overrideAction = std::forward<OverrideActionT>(value); }
    template<typename OverrideActionT = Aws::String>
    AwsWafv2RulesDetails& WithOverrideAction(OverrideActionT&& value) { SetOverrideAction(std::forward<OverrideActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If you define more than one Rule in a WebACL, WAF evaluates each request
     * against the Rules in order based on the value of <code>Priority</code>. WAF
     * processes rules with lower priority first. The priorities don't need to be
     * consecutive, but they must all be different. </p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline AwsWafv2RulesDetails& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline const AwsWafv2VisibilityConfigDetails& GetVisibilityConfig() const { return m_visibilityConfig; }
    inline bool VisibilityConfigHasBeenSet() const { return m_visibilityConfigHasBeenSet; }
    template<typename VisibilityConfigT = AwsWafv2VisibilityConfigDetails>
    void SetVisibilityConfig(VisibilityConfigT&& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = std::forward<VisibilityConfigT>(value); }
    template<typename VisibilityConfigT = AwsWafv2VisibilityConfigDetails>
    AwsWafv2RulesDetails& WithVisibilityConfig(VisibilityConfigT&& value) { SetVisibilityConfig(std::forward<VisibilityConfigT>(value)); return *this;}
    ///@}
  private:

    AwsWafv2RulesActionDetails m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_overrideAction;
    bool m_overrideActionHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    AwsWafv2VisibilityConfigDetails m_visibilityConfig;
    bool m_visibilityConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
