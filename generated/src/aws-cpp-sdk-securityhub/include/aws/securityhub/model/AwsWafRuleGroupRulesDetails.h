/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsWafRuleGroupRulesActionDetails.h>
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
   * <p>Provides information about the rules attached to the rule group. These rules
   * identify the web requests that you want to allow, block, or count.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafRuleGroupRulesDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafRuleGroupRulesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafRuleGroupRulesDetails();
    AWS_SECURITYHUB_API AwsWafRuleGroupRulesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafRuleGroupRulesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides information about what action WAF should take on a web request when
     * it matches the criteria defined in the rule. </p>
     */
    inline const AwsWafRuleGroupRulesActionDetails& GetAction() const{ return m_action; }

    /**
     * <p>Provides information about what action WAF should take on a web request when
     * it matches the criteria defined in the rule. </p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Provides information about what action WAF should take on a web request when
     * it matches the criteria defined in the rule. </p>
     */
    inline void SetAction(const AwsWafRuleGroupRulesActionDetails& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Provides information about what action WAF should take on a web request when
     * it matches the criteria defined in the rule. </p>
     */
    inline void SetAction(AwsWafRuleGroupRulesActionDetails&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Provides information about what action WAF should take on a web request when
     * it matches the criteria defined in the rule. </p>
     */
    inline AwsWafRuleGroupRulesDetails& WithAction(const AwsWafRuleGroupRulesActionDetails& value) { SetAction(value); return *this;}

    /**
     * <p>Provides information about what action WAF should take on a web request when
     * it matches the criteria defined in the rule. </p>
     */
    inline AwsWafRuleGroupRulesDetails& WithAction(AwsWafRuleGroupRulesActionDetails&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>If you define more than one rule in a web ACL, WAF evaluates each request
     * against the rules in order based on the value of <code>Priority</code>.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>If you define more than one rule in a web ACL, WAF evaluates each request
     * against the rules in order based on the value of <code>Priority</code>.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>If you define more than one rule in a web ACL, WAF evaluates each request
     * against the rules in order based on the value of <code>Priority</code>.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>If you define more than one rule in a web ACL, WAF evaluates each request
     * against the rules in order based on the value of <code>Priority</code>.</p>
     */
    inline AwsWafRuleGroupRulesDetails& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The rule ID for a rule. </p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The rule ID for a rule. </p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>The rule ID for a rule. </p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The rule ID for a rule. </p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>The rule ID for a rule. </p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The rule ID for a rule. </p>
     */
    inline AwsWafRuleGroupRulesDetails& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The rule ID for a rule. </p>
     */
    inline AwsWafRuleGroupRulesDetails& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>The rule ID for a rule. </p>
     */
    inline AwsWafRuleGroupRulesDetails& WithRuleId(const char* value) { SetRuleId(value); return *this;}


    /**
     * <p>The type of rule. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of rule. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of rule. </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of rule. </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of rule. </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of rule. </p>
     */
    inline AwsWafRuleGroupRulesDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of rule. </p>
     */
    inline AwsWafRuleGroupRulesDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of rule. </p>
     */
    inline AwsWafRuleGroupRulesDetails& WithType(const char* value) { SetType(value); return *this;}

  private:

    AwsWafRuleGroupRulesActionDetails m_action;
    bool m_actionHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
