﻿/**
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
    AWS_WAF_API RateBasedRule();
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
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }
    inline RateBasedRule& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}
    inline RateBasedRule& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}
    inline RateBasedRule& WithRuleId(const char* value) { SetRuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name or description for a <code>RateBasedRule</code>. You can't
     * change the name of a <code>RateBasedRule</code> after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RateBasedRule& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RateBasedRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RateBasedRule& WithName(const char* value) { SetName(value); return *this;}
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
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }
    inline RateBasedRule& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline RateBasedRule& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline RateBasedRule& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Predicates</code> object contains one <code>Predicate</code>
     * element for each <a>ByteMatchSet</a>, <a>IPSet</a>, or
     * <a>SqlInjectionMatchSet</a> object that you want to include in a
     * <code>RateBasedRule</code>.</p>
     */
    inline const Aws::Vector<Predicate>& GetMatchPredicates() const{ return m_matchPredicates; }
    inline bool MatchPredicatesHasBeenSet() const { return m_matchPredicatesHasBeenSet; }
    inline void SetMatchPredicates(const Aws::Vector<Predicate>& value) { m_matchPredicatesHasBeenSet = true; m_matchPredicates = value; }
    inline void SetMatchPredicates(Aws::Vector<Predicate>&& value) { m_matchPredicatesHasBeenSet = true; m_matchPredicates = std::move(value); }
    inline RateBasedRule& WithMatchPredicates(const Aws::Vector<Predicate>& value) { SetMatchPredicates(value); return *this;}
    inline RateBasedRule& WithMatchPredicates(Aws::Vector<Predicate>&& value) { SetMatchPredicates(std::move(value)); return *this;}
    inline RateBasedRule& AddMatchPredicates(const Predicate& value) { m_matchPredicatesHasBeenSet = true; m_matchPredicates.push_back(value); return *this; }
    inline RateBasedRule& AddMatchPredicates(Predicate&& value) { m_matchPredicatesHasBeenSet = true; m_matchPredicates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The field that AWS WAF uses to determine if requests are likely arriving from
     * single source and thus subject to rate monitoring. The only valid value for
     * <code>RateKey</code> is <code>IP</code>. <code>IP</code> indicates that requests
     * arriving from the same IP address are subject to the <code>RateLimit</code> that
     * is specified in the <code>RateBasedRule</code>.</p>
     */
    inline const RateKey& GetRateKey() const{ return m_rateKey; }
    inline bool RateKeyHasBeenSet() const { return m_rateKeyHasBeenSet; }
    inline void SetRateKey(const RateKey& value) { m_rateKeyHasBeenSet = true; m_rateKey = value; }
    inline void SetRateKey(RateKey&& value) { m_rateKeyHasBeenSet = true; m_rateKey = std::move(value); }
    inline RateBasedRule& WithRateKey(const RateKey& value) { SetRateKey(value); return *this;}
    inline RateBasedRule& WithRateKey(RateKey&& value) { SetRateKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of requests, which have an identical value in the field
     * specified by the <code>RateKey</code>, allowed in a five-minute period. If the
     * number of requests exceeds the <code>RateLimit</code> and the other predicates
     * specified in the rule are also met, AWS WAF triggers the action that is
     * specified for this rule.</p>
     */
    inline long long GetRateLimit() const{ return m_rateLimit; }
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

    RateKey m_rateKey;
    bool m_rateKeyHasBeenSet = false;

    long long m_rateLimit;
    bool m_rateLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
