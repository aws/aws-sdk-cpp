/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/RateKey.h>
#include <aws/waf/model/Predicate.h>
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
namespace WAF
{
namespace Model
{

  /**
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>A
   * <code>RateBasedRule</code> is identical to a regular <a>Rule</a>, with one
   * addition: a <code>RateBasedRule</code> counts the number of requests that arrive
   * from a specified IP address every five minutes. For example, based on recent
   * requests that you've seen from an attacker, you might create a
   * <code>RateBasedRule</code> that includes the following conditions: </p> <ul>
   * <li> <p>The requests come from 192.0.2.44.</p> </li> <li> <p>They contain the
   * value <code>BadBot</code> in the <code>User-Agent</code> header.</p> </li> </ul>
   * <p>In the rule, you also define the rate limit as 1,000.</p> <p>Requests that
   * meet both of these conditions and exceed 1,000 requests every five minutes
   * trigger the rule's action (block or count), which is defined in the web
   * ACL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/RateBasedRule">AWS
   * API Reference</a></p>
   */
  class RateBasedRule
  {
  public:
    AWS_WAF_API RateBasedRule() = default;
    AWS_WAF_API RateBasedRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API RateBasedRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for a <code>RateBasedRule</code>. You use
     * <code>RuleId</code> to get more information about a <code>RateBasedRule</code>
     * (see <a>GetRateBasedRule</a>), update a <code>RateBasedRule</code> (see
     * <a>UpdateRateBasedRule</a>), insert a <code>RateBasedRule</code> into a
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RateBasedRule</code> from AWS WAF (see
     * <a>DeleteRateBasedRule</a>).</p>
     */
    inline const Aws::String& GetRuleId() const { return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    template<typename RuleIdT = Aws::String>
    void SetRuleId(RuleIdT&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::forward<RuleIdT>(value); }
    template<typename RuleIdT = Aws::String>
    RateBasedRule& WithRuleId(RuleIdT&& value) { SetRuleId(std::forward<RuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name or description for a <code>RateBasedRule</code>. You can't
     * change the name of a <code>RateBasedRule</code> after you create it.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RateBasedRule& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name or description for the metrics for a
     * <code>RateBasedRule</code>. The name can contain only alphanumeric characters
     * (A-Z, a-z, 0-9), with maximum length 128 and minimum length one. It can't
     * contain whitespace or metric names reserved for AWS WAF, including "All" and
     * "Default_Action." You can't change the name of the metric after you create the
     * <code>RateBasedRule</code>.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    RateBasedRule& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Predicates</code> object contains one <code>Predicate</code>
     * element for each <a>ByteMatchSet</a>, <a>IPSet</a>, or
     * <a>SqlInjectionMatchSet</a> object that you want to include in a
     * <code>RateBasedRule</code>.</p>
     */
    inline const Aws::Vector<Predicate>& GetMatchPredicates() const { return m_matchPredicates; }
    inline bool MatchPredicatesHasBeenSet() const { return m_matchPredicatesHasBeenSet; }
    template<typename MatchPredicatesT = Aws::Vector<Predicate>>
    void SetMatchPredicates(MatchPredicatesT&& value) { m_matchPredicatesHasBeenSet = true; m_matchPredicates = std::forward<MatchPredicatesT>(value); }
    template<typename MatchPredicatesT = Aws::Vector<Predicate>>
    RateBasedRule& WithMatchPredicates(MatchPredicatesT&& value) { SetMatchPredicates(std::forward<MatchPredicatesT>(value)); return *this;}
    template<typename MatchPredicatesT = Predicate>
    RateBasedRule& AddMatchPredicates(MatchPredicatesT&& value) { m_matchPredicatesHasBeenSet = true; m_matchPredicates.emplace_back(std::forward<MatchPredicatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The field that AWS WAF uses to determine if requests are likely arriving from
     * single source and thus subject to rate monitoring. The only valid value for
     * <code>RateKey</code> is <code>IP</code>. <code>IP</code> indicates that requests
     * arriving from the same IP address are subject to the <code>RateLimit</code> that
     * is specified in the <code>RateBasedRule</code>.</p>
     */
    inline RateKey GetRateKey() const { return m_rateKey; }
    inline bool RateKeyHasBeenSet() const { return m_rateKeyHasBeenSet; }
    inline void SetRateKey(RateKey value) { m_rateKeyHasBeenSet = true; m_rateKey = value; }
    inline RateBasedRule& WithRateKey(RateKey value) { SetRateKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of requests, which have an identical value in the field
     * specified by the <code>RateKey</code>, allowed in a five-minute period. If the
     * number of requests exceeds the <code>RateLimit</code> and the other predicates
     * specified in the rule are also met, AWS WAF triggers the action that is
     * specified for this rule.</p>
     */
    inline long long GetRateLimit() const { return m_rateLimit; }
    inline bool RateLimitHasBeenSet() const { return m_rateLimitHasBeenSet; }
    inline void SetRateLimit(long long value) { m_rateLimitHasBeenSet = true; m_rateLimit = value; }
    inline RateBasedRule& WithRateLimit(long long value) { SetRateLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::Vector<Predicate> m_matchPredicates;
    bool m_matchPredicatesHasBeenSet = false;

    RateKey m_rateKey{RateKey::NOT_SET};
    bool m_rateKeyHasBeenSet = false;

    long long m_rateLimit{0};
    bool m_rateLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
