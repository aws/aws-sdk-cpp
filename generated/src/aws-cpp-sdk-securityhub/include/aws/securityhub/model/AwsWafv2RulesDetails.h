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
   * Statement that AWS WAF uses to identify matching web requests, and parameters
   * that govern how AWS WAF handles them. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafv2RulesDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafv2RulesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafv2RulesDetails();
    AWS_SECURITYHUB_API AwsWafv2RulesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafv2RulesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The action that WAF should take on a web request when it matches the rule
     * statement. Settings at the web ACL level can override the rule action setting.
     * </p>
     */
    inline const AwsWafv2RulesActionDetails& GetAction() const{ return m_action; }

    /**
     * <p> The action that WAF should take on a web request when it matches the rule
     * statement. Settings at the web ACL level can override the rule action setting.
     * </p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p> The action that WAF should take on a web request when it matches the rule
     * statement. Settings at the web ACL level can override the rule action setting.
     * </p>
     */
    inline void SetAction(const AwsWafv2RulesActionDetails& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p> The action that WAF should take on a web request when it matches the rule
     * statement. Settings at the web ACL level can override the rule action setting.
     * </p>
     */
    inline void SetAction(AwsWafv2RulesActionDetails&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p> The action that WAF should take on a web request when it matches the rule
     * statement. Settings at the web ACL level can override the rule action setting.
     * </p>
     */
    inline AwsWafv2RulesDetails& WithAction(const AwsWafv2RulesActionDetails& value) { SetAction(value); return *this;}

    /**
     * <p> The action that WAF should take on a web request when it matches the rule
     * statement. Settings at the web ACL level can override the rule action setting.
     * </p>
     */
    inline AwsWafv2RulesDetails& WithAction(AwsWafv2RulesActionDetails&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p> The name of the rule. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the rule. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the rule. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the rule. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the rule. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the rule. </p>
     */
    inline AwsWafv2RulesDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the rule. </p>
     */
    inline AwsWafv2RulesDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the rule. </p>
     */
    inline AwsWafv2RulesDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The action to use in the place of the action that results from the rule
     * group evaluation. </p>
     */
    inline const Aws::String& GetOverrideAction() const{ return m_overrideAction; }

    /**
     * <p> The action to use in the place of the action that results from the rule
     * group evaluation. </p>
     */
    inline bool OverrideActionHasBeenSet() const { return m_overrideActionHasBeenSet; }

    /**
     * <p> The action to use in the place of the action that results from the rule
     * group evaluation. </p>
     */
    inline void SetOverrideAction(const Aws::String& value) { m_overrideActionHasBeenSet = true; m_overrideAction = value; }

    /**
     * <p> The action to use in the place of the action that results from the rule
     * group evaluation. </p>
     */
    inline void SetOverrideAction(Aws::String&& value) { m_overrideActionHasBeenSet = true; m_overrideAction = std::move(value); }

    /**
     * <p> The action to use in the place of the action that results from the rule
     * group evaluation. </p>
     */
    inline void SetOverrideAction(const char* value) { m_overrideActionHasBeenSet = true; m_overrideAction.assign(value); }

    /**
     * <p> The action to use in the place of the action that results from the rule
     * group evaluation. </p>
     */
    inline AwsWafv2RulesDetails& WithOverrideAction(const Aws::String& value) { SetOverrideAction(value); return *this;}

    /**
     * <p> The action to use in the place of the action that results from the rule
     * group evaluation. </p>
     */
    inline AwsWafv2RulesDetails& WithOverrideAction(Aws::String&& value) { SetOverrideAction(std::move(value)); return *this;}

    /**
     * <p> The action to use in the place of the action that results from the rule
     * group evaluation. </p>
     */
    inline AwsWafv2RulesDetails& WithOverrideAction(const char* value) { SetOverrideAction(value); return *this;}


    /**
     * <p> If you define more than one Rule in a WebACL, WAF evaluates each request
     * against the Rules in order based on the value of <code>Priority</code>. WAF
     * processes rules with lower priority first. The priorities don't need to be
     * consecutive, but they must all be different. </p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p> If you define more than one Rule in a WebACL, WAF evaluates each request
     * against the Rules in order based on the value of <code>Priority</code>. WAF
     * processes rules with lower priority first. The priorities don't need to be
     * consecutive, but they must all be different. </p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p> If you define more than one Rule in a WebACL, WAF evaluates each request
     * against the Rules in order based on the value of <code>Priority</code>. WAF
     * processes rules with lower priority first. The priorities don't need to be
     * consecutive, but they must all be different. </p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p> If you define more than one Rule in a WebACL, WAF evaluates each request
     * against the Rules in order based on the value of <code>Priority</code>. WAF
     * processes rules with lower priority first. The priorities don't need to be
     * consecutive, but they must all be different. </p>
     */
    inline AwsWafv2RulesDetails& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p> Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline const AwsWafv2VisibilityConfigDetails& GetVisibilityConfig() const{ return m_visibilityConfig; }

    /**
     * <p> Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline bool VisibilityConfigHasBeenSet() const { return m_visibilityConfigHasBeenSet; }

    /**
     * <p> Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline void SetVisibilityConfig(const AwsWafv2VisibilityConfigDetails& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = value; }

    /**
     * <p> Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline void SetVisibilityConfig(AwsWafv2VisibilityConfigDetails&& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = std::move(value); }

    /**
     * <p> Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline AwsWafv2RulesDetails& WithVisibilityConfig(const AwsWafv2VisibilityConfigDetails& value) { SetVisibilityConfig(value); return *this;}

    /**
     * <p> Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline AwsWafv2RulesDetails& WithVisibilityConfig(AwsWafv2VisibilityConfigDetails&& value) { SetVisibilityConfig(std::move(value)); return *this;}

  private:

    AwsWafv2RulesActionDetails m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_overrideAction;
    bool m_overrideActionHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    AwsWafv2VisibilityConfigDetails m_visibilityConfig;
    bool m_visibilityConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
