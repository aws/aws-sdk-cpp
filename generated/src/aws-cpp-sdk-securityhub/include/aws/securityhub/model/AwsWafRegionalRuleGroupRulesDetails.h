/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsWafRegionalRuleGroupRulesActionDetails.h>
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
   * <p>Provides information about the rules attached to a rule group </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafRegionalRuleGroupRulesDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafRegionalRuleGroupRulesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafRegionalRuleGroupRulesDetails();
    AWS_SECURITYHUB_API AwsWafRegionalRuleGroupRulesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafRegionalRuleGroupRulesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action that WAF should take on a web request when it matches the criteria
     * defined in the rule. </p>
     */
    inline const AwsWafRegionalRuleGroupRulesActionDetails& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const AwsWafRegionalRuleGroupRulesActionDetails& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(AwsWafRegionalRuleGroupRulesActionDetails&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline AwsWafRegionalRuleGroupRulesDetails& WithAction(const AwsWafRegionalRuleGroupRulesActionDetails& value) { SetAction(value); return *this;}
    inline AwsWafRegionalRuleGroupRulesDetails& WithAction(AwsWafRegionalRuleGroupRulesActionDetails&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you define more than one rule in a web ACL, WAF evaluates each request
     * against the rules in order based on the value of <code>Priority</code>. </p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline AwsWafRegionalRuleGroupRulesDetails& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for a rule. </p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }
    inline AwsWafRegionalRuleGroupRulesDetails& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}
    inline AwsWafRegionalRuleGroupRulesDetails& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}
    inline AwsWafRegionalRuleGroupRulesDetails& WithRuleId(const char* value) { SetRuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of rule in the rule group. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline AwsWafRegionalRuleGroupRulesDetails& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline AwsWafRegionalRuleGroupRulesDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline AwsWafRegionalRuleGroupRulesDetails& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    AwsWafRegionalRuleGroupRulesActionDetails m_action;
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
