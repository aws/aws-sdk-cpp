/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class EnableInsightRulesRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API EnableInsightRulesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableInsightRules"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>An array of the rule names to enable. If you need to find out the names of
     * your rules, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_DescribeInsightRules.html">DescribeInsightRules</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRuleNames() const { return m_ruleNames; }
    inline bool RuleNamesHasBeenSet() const { return m_ruleNamesHasBeenSet; }
    template<typename RuleNamesT = Aws::Vector<Aws::String>>
    void SetRuleNames(RuleNamesT&& value) { m_ruleNamesHasBeenSet = true; m_ruleNames = std::forward<RuleNamesT>(value); }
    template<typename RuleNamesT = Aws::Vector<Aws::String>>
    EnableInsightRulesRequest& WithRuleNames(RuleNamesT&& value) { SetRuleNames(std::forward<RuleNamesT>(value)); return *this;}
    template<typename RuleNamesT = Aws::String>
    EnableInsightRulesRequest& AddRuleNames(RuleNamesT&& value) { m_ruleNamesHasBeenSet = true; m_ruleNames.emplace_back(std::forward<RuleNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_ruleNames;
    bool m_ruleNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
