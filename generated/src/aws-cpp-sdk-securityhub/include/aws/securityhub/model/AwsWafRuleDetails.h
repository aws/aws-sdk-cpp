/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsWafRulePredicateListDetails.h>
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
   * <p>Provides information about a WAF rule. This rule specifies the web requests
   * that you want to allow, block, or count. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafRuleDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafRuleDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafRuleDetails() = default;
    AWS_SECURITYHUB_API AwsWafRuleDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafRuleDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the metrics for this rule. </p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    AwsWafRuleDetails& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive name for the rule. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsWafRuleDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, and
     * <code>SizeConstraintSet</code> objects that you want to add to a rule and, for
     * each object, indicates whether you want to negate the settings. </p>
     */
    inline const Aws::Vector<AwsWafRulePredicateListDetails>& GetPredicateList() const { return m_predicateList; }
    inline bool PredicateListHasBeenSet() const { return m_predicateListHasBeenSet; }
    template<typename PredicateListT = Aws::Vector<AwsWafRulePredicateListDetails>>
    void SetPredicateList(PredicateListT&& value) { m_predicateListHasBeenSet = true; m_predicateList = std::forward<PredicateListT>(value); }
    template<typename PredicateListT = Aws::Vector<AwsWafRulePredicateListDetails>>
    AwsWafRuleDetails& WithPredicateList(PredicateListT&& value) { SetPredicateList(std::forward<PredicateListT>(value)); return *this;}
    template<typename PredicateListT = AwsWafRulePredicateListDetails>
    AwsWafRuleDetails& AddPredicateList(PredicateListT&& value) { m_predicateListHasBeenSet = true; m_predicateList.emplace_back(std::forward<PredicateListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the WAF rule. </p>
     */
    inline const Aws::String& GetRuleId() const { return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    template<typename RuleIdT = Aws::String>
    void SetRuleId(RuleIdT&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::forward<RuleIdT>(value); }
    template<typename RuleIdT = Aws::String>
    AwsWafRuleDetails& WithRuleId(RuleIdT&& value) { SetRuleId(std::forward<RuleIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<AwsWafRulePredicateListDetails> m_predicateList;
    bool m_predicateListHasBeenSet = false;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
