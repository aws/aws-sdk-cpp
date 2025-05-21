/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class PutInsightRuleRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API PutInsightRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutInsightRule"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A unique name for the rule.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    PutInsightRuleRequest& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the rule. Valid values are ENABLED and DISABLED.</p>
     */
    inline const Aws::String& GetRuleState() const { return m_ruleState; }
    inline bool RuleStateHasBeenSet() const { return m_ruleStateHasBeenSet; }
    template<typename RuleStateT = Aws::String>
    void SetRuleState(RuleStateT&& value) { m_ruleStateHasBeenSet = true; m_ruleState = std::forward<RuleStateT>(value); }
    template<typename RuleStateT = Aws::String>
    PutInsightRuleRequest& WithRuleState(RuleStateT&& value) { SetRuleState(std::forward<RuleStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of the rule, as a JSON object. For details on the valid
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights-RuleSyntax.html">Contributor
     * Insights Rule Syntax</a>.</p>
     */
    inline const Aws::String& GetRuleDefinition() const { return m_ruleDefinition; }
    inline bool RuleDefinitionHasBeenSet() const { return m_ruleDefinitionHasBeenSet; }
    template<typename RuleDefinitionT = Aws::String>
    void SetRuleDefinition(RuleDefinitionT&& value) { m_ruleDefinitionHasBeenSet = true; m_ruleDefinition = std::forward<RuleDefinitionT>(value); }
    template<typename RuleDefinitionT = Aws::String>
    PutInsightRuleRequest& WithRuleDefinition(RuleDefinitionT&& value) { SetRuleDefinition(std::forward<RuleDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs to associate with the Contributor Insights rule.
     * You can associate as many as 50 tags with a rule.</p> <p>Tags can help you
     * organize and categorize your resources. You can also use them to scope user
     * permissions, by granting a user permission to access or change only the
     * resources that have certain tag values.</p> <p>To be able to associate tags with
     * a rule, you must have the <code>cloudwatch:TagResource</code> permission in
     * addition to the <code>cloudwatch:PutInsightRule</code> permission.</p> <p>If you
     * are using this operation to update an existing Contributor Insights rule, any
     * tags you specify in this parameter are ignored. To change the tags of an
     * existing rule, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_TagResource.html">TagResource</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    PutInsightRuleRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    PutInsightRuleRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify <code>true</code> to have this rule evalute log events after they
     * have been transformed by <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html">Log
     * transformation</a>. If you specify <code>true</code>, then the log events in log
     * groups that have transformers will be evaluated by Contributor Insights after
     * being transformed. Log groups that don't have transformers will still have their
     * original log events evaluated by Contributor Insights.</p> <p>The default is
     * <code>false</code> </p>  <p>If a log group has a transformer, and
     * transformation fails for some log events, those log events won't be evaluated by
     * Contributor Insights. For information about investigating log transformation
     * failures, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/Transformation-Errors-Metrics.html">Transformation
     * metrics and errors</a>.</p> 
     */
    inline bool GetApplyOnTransformedLogs() const { return m_applyOnTransformedLogs; }
    inline bool ApplyOnTransformedLogsHasBeenSet() const { return m_applyOnTransformedLogsHasBeenSet; }
    inline void SetApplyOnTransformedLogs(bool value) { m_applyOnTransformedLogsHasBeenSet = true; m_applyOnTransformedLogs = value; }
    inline PutInsightRuleRequest& WithApplyOnTransformedLogs(bool value) { SetApplyOnTransformedLogs(value); return *this;}
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_ruleState;
    bool m_ruleStateHasBeenSet = false;

    Aws::String m_ruleDefinition;
    bool m_ruleDefinitionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_applyOnTransformedLogs{false};
    bool m_applyOnTransformedLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
