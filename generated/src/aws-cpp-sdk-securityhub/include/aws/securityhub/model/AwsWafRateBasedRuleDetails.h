/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsWafRateBasedRuleMatchPredicate.h>
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
   * <p>Details about a rate-based rule for global resources. A rate-based rule
   * provides settings to indicate when to allow, block, or count a request.
   * Rate-based rules include the number of requests that arrive over a specified
   * period of time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafRateBasedRuleDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafRateBasedRuleDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafRateBasedRuleDetails();
    AWS_SECURITYHUB_API AwsWafRateBasedRuleDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafRateBasedRuleDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the metrics for the rate-based rule.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metrics for the rate-based rule.</p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the metrics for the rate-based rule.</p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metrics for the rate-based rule.</p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the metrics for the rate-based rule.</p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the metrics for the rate-based rule.</p>
     */
    inline AwsWafRateBasedRuleDetails& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metrics for the rate-based rule.</p>
     */
    inline AwsWafRateBasedRuleDetails& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the metrics for the rate-based rule.</p>
     */
    inline AwsWafRateBasedRuleDetails& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>The name of the rate-based rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rate-based rule.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the rate-based rule.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the rate-based rule.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the rate-based rule.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the rate-based rule.</p>
     */
    inline AwsWafRateBasedRuleDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rate-based rule.</p>
     */
    inline AwsWafRateBasedRuleDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rate-based rule.</p>
     */
    inline AwsWafRateBasedRuleDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The field that WAF uses to determine whether requests are likely arriving
     * from single source and are subject to rate monitoring.</p>
     */
    inline const Aws::String& GetRateKey() const{ return m_rateKey; }

    /**
     * <p>The field that WAF uses to determine whether requests are likely arriving
     * from single source and are subject to rate monitoring.</p>
     */
    inline bool RateKeyHasBeenSet() const { return m_rateKeyHasBeenSet; }

    /**
     * <p>The field that WAF uses to determine whether requests are likely arriving
     * from single source and are subject to rate monitoring.</p>
     */
    inline void SetRateKey(const Aws::String& value) { m_rateKeyHasBeenSet = true; m_rateKey = value; }

    /**
     * <p>The field that WAF uses to determine whether requests are likely arriving
     * from single source and are subject to rate monitoring.</p>
     */
    inline void SetRateKey(Aws::String&& value) { m_rateKeyHasBeenSet = true; m_rateKey = std::move(value); }

    /**
     * <p>The field that WAF uses to determine whether requests are likely arriving
     * from single source and are subject to rate monitoring.</p>
     */
    inline void SetRateKey(const char* value) { m_rateKeyHasBeenSet = true; m_rateKey.assign(value); }

    /**
     * <p>The field that WAF uses to determine whether requests are likely arriving
     * from single source and are subject to rate monitoring.</p>
     */
    inline AwsWafRateBasedRuleDetails& WithRateKey(const Aws::String& value) { SetRateKey(value); return *this;}

    /**
     * <p>The field that WAF uses to determine whether requests are likely arriving
     * from single source and are subject to rate monitoring.</p>
     */
    inline AwsWafRateBasedRuleDetails& WithRateKey(Aws::String&& value) { SetRateKey(std::move(value)); return *this;}

    /**
     * <p>The field that WAF uses to determine whether requests are likely arriving
     * from single source and are subject to rate monitoring.</p>
     */
    inline AwsWafRateBasedRuleDetails& WithRateKey(const char* value) { SetRateKey(value); return *this;}


    /**
     * <p>The maximum number of requests that have an identical value for the field
     * specified in <code>RateKey</code> that are allowed within a five-minute period.
     * If the number of requests exceeds <code>RateLimit</code> and the other
     * predicates specified in the rule are met, WAF triggers the action for the
     * rule.</p>
     */
    inline long long GetRateLimit() const{ return m_rateLimit; }

    /**
     * <p>The maximum number of requests that have an identical value for the field
     * specified in <code>RateKey</code> that are allowed within a five-minute period.
     * If the number of requests exceeds <code>RateLimit</code> and the other
     * predicates specified in the rule are met, WAF triggers the action for the
     * rule.</p>
     */
    inline bool RateLimitHasBeenSet() const { return m_rateLimitHasBeenSet; }

    /**
     * <p>The maximum number of requests that have an identical value for the field
     * specified in <code>RateKey</code> that are allowed within a five-minute period.
     * If the number of requests exceeds <code>RateLimit</code> and the other
     * predicates specified in the rule are met, WAF triggers the action for the
     * rule.</p>
     */
    inline void SetRateLimit(long long value) { m_rateLimitHasBeenSet = true; m_rateLimit = value; }

    /**
     * <p>The maximum number of requests that have an identical value for the field
     * specified in <code>RateKey</code> that are allowed within a five-minute period.
     * If the number of requests exceeds <code>RateLimit</code> and the other
     * predicates specified in the rule are met, WAF triggers the action for the
     * rule.</p>
     */
    inline AwsWafRateBasedRuleDetails& WithRateLimit(long long value) { SetRateLimit(value); return *this;}


    /**
     * <p>The unique identifier for the rate-based rule.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The unique identifier for the rate-based rule.</p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>The unique identifier for the rate-based rule.</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The unique identifier for the rate-based rule.</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>The unique identifier for the rate-based rule.</p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The unique identifier for the rate-based rule.</p>
     */
    inline AwsWafRateBasedRuleDetails& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The unique identifier for the rate-based rule.</p>
     */
    inline AwsWafRateBasedRuleDetails& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the rate-based rule.</p>
     */
    inline AwsWafRateBasedRuleDetails& WithRuleId(const char* value) { SetRuleId(value); return *this;}


    /**
     * <p>The predicates to include in the rate-based rule.</p>
     */
    inline const Aws::Vector<AwsWafRateBasedRuleMatchPredicate>& GetMatchPredicates() const{ return m_matchPredicates; }

    /**
     * <p>The predicates to include in the rate-based rule.</p>
     */
    inline bool MatchPredicatesHasBeenSet() const { return m_matchPredicatesHasBeenSet; }

    /**
     * <p>The predicates to include in the rate-based rule.</p>
     */
    inline void SetMatchPredicates(const Aws::Vector<AwsWafRateBasedRuleMatchPredicate>& value) { m_matchPredicatesHasBeenSet = true; m_matchPredicates = value; }

    /**
     * <p>The predicates to include in the rate-based rule.</p>
     */
    inline void SetMatchPredicates(Aws::Vector<AwsWafRateBasedRuleMatchPredicate>&& value) { m_matchPredicatesHasBeenSet = true; m_matchPredicates = std::move(value); }

    /**
     * <p>The predicates to include in the rate-based rule.</p>
     */
    inline AwsWafRateBasedRuleDetails& WithMatchPredicates(const Aws::Vector<AwsWafRateBasedRuleMatchPredicate>& value) { SetMatchPredicates(value); return *this;}

    /**
     * <p>The predicates to include in the rate-based rule.</p>
     */
    inline AwsWafRateBasedRuleDetails& WithMatchPredicates(Aws::Vector<AwsWafRateBasedRuleMatchPredicate>&& value) { SetMatchPredicates(std::move(value)); return *this;}

    /**
     * <p>The predicates to include in the rate-based rule.</p>
     */
    inline AwsWafRateBasedRuleDetails& AddMatchPredicates(const AwsWafRateBasedRuleMatchPredicate& value) { m_matchPredicatesHasBeenSet = true; m_matchPredicates.push_back(value); return *this; }

    /**
     * <p>The predicates to include in the rate-based rule.</p>
     */
    inline AwsWafRateBasedRuleDetails& AddMatchPredicates(AwsWafRateBasedRuleMatchPredicate&& value) { m_matchPredicatesHasBeenSet = true; m_matchPredicates.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_rateKey;
    bool m_rateKeyHasBeenSet = false;

    long long m_rateLimit;
    bool m_rateLimitHasBeenSet = false;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Aws::Vector<AwsWafRateBasedRuleMatchPredicate> m_matchPredicates;
    bool m_matchPredicatesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
