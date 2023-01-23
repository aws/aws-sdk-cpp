/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsWafRuleGroupRulesDetails.h>
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
   * <p>Provides information about an WAF rule group. A rule group is a collection of
   * rules for inspecting and controlling web requests. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafRuleGroupDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafRuleGroupDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafRuleGroupDetails();
    AWS_SECURITYHUB_API AwsWafRuleGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafRuleGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the metrics for this rule group. </p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metrics for this rule group. </p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the metrics for this rule group. </p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metrics for this rule group. </p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the metrics for this rule group. </p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the metrics for this rule group. </p>
     */
    inline AwsWafRuleGroupDetails& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metrics for this rule group. </p>
     */
    inline AwsWafRuleGroupDetails& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the metrics for this rule group. </p>
     */
    inline AwsWafRuleGroupDetails& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The name of the rule group. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rule group. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the rule group. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the rule group. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the rule group. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the rule group. </p>
     */
    inline AwsWafRuleGroupDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rule group. </p>
     */
    inline AwsWafRuleGroupDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule group. </p>
     */
    inline AwsWafRuleGroupDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the rule group. </p>
     */
    inline const Aws::String& GetRuleGroupId() const{ return m_ruleGroupId; }

    /**
     * <p>The ID of the rule group. </p>
     */
    inline bool RuleGroupIdHasBeenSet() const { return m_ruleGroupIdHasBeenSet; }

    /**
     * <p>The ID of the rule group. </p>
     */
    inline void SetRuleGroupId(const Aws::String& value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId = value; }

    /**
     * <p>The ID of the rule group. </p>
     */
    inline void SetRuleGroupId(Aws::String&& value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId = std::move(value); }

    /**
     * <p>The ID of the rule group. </p>
     */
    inline void SetRuleGroupId(const char* value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId.assign(value); }

    /**
     * <p>The ID of the rule group. </p>
     */
    inline AwsWafRuleGroupDetails& WithRuleGroupId(const Aws::String& value) { SetRuleGroupId(value); return *this;}

    /**
     * <p>The ID of the rule group. </p>
     */
    inline AwsWafRuleGroupDetails& WithRuleGroupId(Aws::String&& value) { SetRuleGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the rule group. </p>
     */
    inline AwsWafRuleGroupDetails& WithRuleGroupId(const char* value) { SetRuleGroupId(value); return *this;}


    /**
     * <p>Provides information about the rules attached to the rule group. These rules
     * identify the web requests that you want to allow, block, or count. </p>
     */
    inline const Aws::Vector<AwsWafRuleGroupRulesDetails>& GetRules() const{ return m_rules; }

    /**
     * <p>Provides information about the rules attached to the rule group. These rules
     * identify the web requests that you want to allow, block, or count. </p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>Provides information about the rules attached to the rule group. These rules
     * identify the web requests that you want to allow, block, or count. </p>
     */
    inline void SetRules(const Aws::Vector<AwsWafRuleGroupRulesDetails>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>Provides information about the rules attached to the rule group. These rules
     * identify the web requests that you want to allow, block, or count. </p>
     */
    inline void SetRules(Aws::Vector<AwsWafRuleGroupRulesDetails>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>Provides information about the rules attached to the rule group. These rules
     * identify the web requests that you want to allow, block, or count. </p>
     */
    inline AwsWafRuleGroupDetails& WithRules(const Aws::Vector<AwsWafRuleGroupRulesDetails>& value) { SetRules(value); return *this;}

    /**
     * <p>Provides information about the rules attached to the rule group. These rules
     * identify the web requests that you want to allow, block, or count. </p>
     */
    inline AwsWafRuleGroupDetails& WithRules(Aws::Vector<AwsWafRuleGroupRulesDetails>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>Provides information about the rules attached to the rule group. These rules
     * identify the web requests that you want to allow, block, or count. </p>
     */
    inline AwsWafRuleGroupDetails& AddRules(const AwsWafRuleGroupRulesDetails& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>Provides information about the rules attached to the rule group. These rules
     * identify the web requests that you want to allow, block, or count. </p>
     */
    inline AwsWafRuleGroupDetails& AddRules(AwsWafRuleGroupRulesDetails&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ruleGroupId;
    bool m_ruleGroupIdHasBeenSet = false;

    Aws::Vector<AwsWafRuleGroupRulesDetails> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
