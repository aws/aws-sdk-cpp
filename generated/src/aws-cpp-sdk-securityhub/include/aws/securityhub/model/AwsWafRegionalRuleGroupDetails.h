/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsWafRegionalRuleGroupRulesDetails.h>
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
   * <p>Provides information about an WAF Regional rule group. The rule group is a
   * collection of rules for inspecting and controlling web requests. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafRegionalRuleGroupDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafRegionalRuleGroupDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafRegionalRuleGroupDetails();
    AWS_SECURITYHUB_API AwsWafRegionalRuleGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafRegionalRuleGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A name for the metrics for this rule group. </p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }
    inline AwsWafRegionalRuleGroupDetails& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline AwsWafRegionalRuleGroupDetails& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline AwsWafRegionalRuleGroupDetails& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The descriptive name of the rule group. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AwsWafRegionalRuleGroupDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AwsWafRegionalRuleGroupDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AwsWafRegionalRuleGroupDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the rule group. </p>
     */
    inline const Aws::String& GetRuleGroupId() const{ return m_ruleGroupId; }
    inline bool RuleGroupIdHasBeenSet() const { return m_ruleGroupIdHasBeenSet; }
    inline void SetRuleGroupId(const Aws::String& value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId = value; }
    inline void SetRuleGroupId(Aws::String&& value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId = std::move(value); }
    inline void SetRuleGroupId(const char* value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId.assign(value); }
    inline AwsWafRegionalRuleGroupDetails& WithRuleGroupId(const Aws::String& value) { SetRuleGroupId(value); return *this;}
    inline AwsWafRegionalRuleGroupDetails& WithRuleGroupId(Aws::String&& value) { SetRuleGroupId(std::move(value)); return *this;}
    inline AwsWafRegionalRuleGroupDetails& WithRuleGroupId(const char* value) { SetRuleGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the rule statements used to identify the web
     * requests that you want to allow, block, or count. </p>
     */
    inline const Aws::Vector<AwsWafRegionalRuleGroupRulesDetails>& GetRules() const{ return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    inline void SetRules(const Aws::Vector<AwsWafRegionalRuleGroupRulesDetails>& value) { m_rulesHasBeenSet = true; m_rules = value; }
    inline void SetRules(Aws::Vector<AwsWafRegionalRuleGroupRulesDetails>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }
    inline AwsWafRegionalRuleGroupDetails& WithRules(const Aws::Vector<AwsWafRegionalRuleGroupRulesDetails>& value) { SetRules(value); return *this;}
    inline AwsWafRegionalRuleGroupDetails& WithRules(Aws::Vector<AwsWafRegionalRuleGroupRulesDetails>&& value) { SetRules(std::move(value)); return *this;}
    inline AwsWafRegionalRuleGroupDetails& AddRules(const AwsWafRegionalRuleGroupRulesDetails& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }
    inline AwsWafRegionalRuleGroupDetails& AddRules(AwsWafRegionalRuleGroupRulesDetails&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_ruleGroupId;
    bool m_ruleGroupIdHasBeenSet = false;

    Aws::Vector<AwsWafRegionalRuleGroupRulesDetails> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
