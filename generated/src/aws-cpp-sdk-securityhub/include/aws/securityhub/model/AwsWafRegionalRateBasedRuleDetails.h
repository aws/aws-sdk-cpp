/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsWafRegionalRateBasedRuleMatchPredicate.h>
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
   * <p>contains details about a rate-based rule for Regional resources. A rate-based
   * rule provides settings to indicate when to allow, block, or count a request.
   * Rate-based rules include the number of requests that arrive over a specified
   * period of time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafRegionalRateBasedRuleDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafRegionalRateBasedRuleDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafRegionalRateBasedRuleDetails() = default;
    AWS_SECURITYHUB_API AwsWafRegionalRateBasedRuleDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafRegionalRateBasedRuleDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the metrics for the rate-based rule.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    AwsWafRegionalRateBasedRuleDetails& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the rate-based rule.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsWafRegionalRateBasedRuleDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field that WAF uses to determine whether requests are likely arriving
     * from single source and are subject to rate monitoring.</p>
     */
    inline const Aws::String& GetRateKey() const { return m_rateKey; }
    inline bool RateKeyHasBeenSet() const { return m_rateKeyHasBeenSet; }
    template<typename RateKeyT = Aws::String>
    void SetRateKey(RateKeyT&& value) { m_rateKeyHasBeenSet = true; m_rateKey = std::forward<RateKeyT>(value); }
    template<typename RateKeyT = Aws::String>
    AwsWafRegionalRateBasedRuleDetails& WithRateKey(RateKeyT&& value) { SetRateKey(std::forward<RateKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of requests that have an identical value for the field
     * specified in <code>RateKey</code> that are allowed within a five-minute period.
     * If the number of requests exceeds <code>RateLimit</code> and the other
     * predicates specified in the rule are met, WAF triggers the action for the
     * rule.</p>
     */
    inline long long GetRateLimit() const { return m_rateLimit; }
    inline bool RateLimitHasBeenSet() const { return m_rateLimitHasBeenSet; }
    inline void SetRateLimit(long long value) { m_rateLimitHasBeenSet = true; m_rateLimit = value; }
    inline AwsWafRegionalRateBasedRuleDetails& WithRateLimit(long long value) { SetRateLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the rate-based rule.</p>
     */
    inline const Aws::String& GetRuleId() const { return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    template<typename RuleIdT = Aws::String>
    void SetRuleId(RuleIdT&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::forward<RuleIdT>(value); }
    template<typename RuleIdT = Aws::String>
    AwsWafRegionalRateBasedRuleDetails& WithRuleId(RuleIdT&& value) { SetRuleId(std::forward<RuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The predicates to include in the rate-based rule.</p>
     */
    inline const Aws::Vector<AwsWafRegionalRateBasedRuleMatchPredicate>& GetMatchPredicates() const { return m_matchPredicates; }
    inline bool MatchPredicatesHasBeenSet() const { return m_matchPredicatesHasBeenSet; }
    template<typename MatchPredicatesT = Aws::Vector<AwsWafRegionalRateBasedRuleMatchPredicate>>
    void SetMatchPredicates(MatchPredicatesT&& value) { m_matchPredicatesHasBeenSet = true; m_matchPredicates = std::forward<MatchPredicatesT>(value); }
    template<typename MatchPredicatesT = Aws::Vector<AwsWafRegionalRateBasedRuleMatchPredicate>>
    AwsWafRegionalRateBasedRuleDetails& WithMatchPredicates(MatchPredicatesT&& value) { SetMatchPredicates(std::forward<MatchPredicatesT>(value)); return *this;}
    template<typename MatchPredicatesT = AwsWafRegionalRateBasedRuleMatchPredicate>
    AwsWafRegionalRateBasedRuleDetails& AddMatchPredicates(MatchPredicatesT&& value) { m_matchPredicatesHasBeenSet = true; m_matchPredicates.emplace_back(std::forward<MatchPredicatesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_rateKey;
    bool m_rateKeyHasBeenSet = false;

    long long m_rateLimit{0};
    bool m_rateLimitHasBeenSet = false;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Aws::Vector<AwsWafRegionalRateBasedRuleMatchPredicate> m_matchPredicates;
    bool m_matchPredicatesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
