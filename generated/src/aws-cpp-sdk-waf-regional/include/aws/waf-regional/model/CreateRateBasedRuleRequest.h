/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/WAFRegionalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf-regional/model/RateKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/Tag.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class CreateRateBasedRuleRequest : public WAFRegionalRequest
  {
  public:
    AWS_WAFREGIONAL_API CreateRateBasedRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRateBasedRule"; }

    AWS_WAFREGIONAL_API Aws::String SerializePayload() const override;

    AWS_WAFREGIONAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A friendly name or description of the <a>RateBasedRule</a>. You can't change
     * the name of a <code>RateBasedRule</code> after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateRateBasedRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateRateBasedRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateRateBasedRuleRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name or description for the metrics for this
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
    inline CreateRateBasedRuleRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline CreateRateBasedRuleRequest& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline CreateRateBasedRuleRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field that AWS WAF uses to determine if requests are likely arriving from
     * a single source and thus subject to rate monitoring. The only valid value for
     * <code>RateKey</code> is <code>IP</code>. <code>IP</code> indicates that requests
     * that arrive from the same IP address are subject to the <code>RateLimit</code>
     * that is specified in the <code>RateBasedRule</code>.</p>
     */
    inline const RateKey& GetRateKey() const{ return m_rateKey; }
    inline bool RateKeyHasBeenSet() const { return m_rateKeyHasBeenSet; }
    inline void SetRateKey(const RateKey& value) { m_rateKeyHasBeenSet = true; m_rateKey = value; }
    inline void SetRateKey(RateKey&& value) { m_rateKeyHasBeenSet = true; m_rateKey = std::move(value); }
    inline CreateRateBasedRuleRequest& WithRateKey(const RateKey& value) { SetRateKey(value); return *this;}
    inline CreateRateBasedRuleRequest& WithRateKey(RateKey&& value) { SetRateKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of requests, which have an identical value in the field
     * that is specified by <code>RateKey</code>, allowed in a five-minute period. If
     * the number of requests exceeds the <code>RateLimit</code> and the other
     * predicates specified in the rule are also met, AWS WAF triggers the action that
     * is specified for this rule.</p>
     */
    inline long long GetRateLimit() const{ return m_rateLimit; }
    inline bool RateLimitHasBeenSet() const { return m_rateLimitHasBeenSet; }
    inline void SetRateLimit(long long value) { m_rateLimitHasBeenSet = true; m_rateLimit = value; }
    inline CreateRateBasedRuleRequest& WithRateLimit(long long value) { SetRateLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRateBasedRule</code> request. You can also use this value to query
     * the status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }
    inline bool ChangeTokenHasBeenSet() const { return m_changeTokenHasBeenSet; }
    inline void SetChangeToken(const Aws::String& value) { m_changeTokenHasBeenSet = true; m_changeToken = value; }
    inline void SetChangeToken(Aws::String&& value) { m_changeTokenHasBeenSet = true; m_changeToken = std::move(value); }
    inline void SetChangeToken(const char* value) { m_changeTokenHasBeenSet = true; m_changeToken.assign(value); }
    inline CreateRateBasedRuleRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}
    inline CreateRateBasedRuleRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}
    inline CreateRateBasedRuleRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateRateBasedRuleRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateRateBasedRuleRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateRateBasedRuleRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateRateBasedRuleRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    RateKey m_rateKey;
    bool m_rateKeyHasBeenSet = false;

    long long m_rateLimit;
    bool m_rateLimitHasBeenSet = false;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
