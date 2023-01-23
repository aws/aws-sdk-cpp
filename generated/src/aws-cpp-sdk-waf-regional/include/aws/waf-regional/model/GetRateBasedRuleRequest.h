/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/WAFRegionalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class GetRateBasedRuleRequest : public WAFRegionalRequest
  {
  public:
    AWS_WAFREGIONAL_API GetRateBasedRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRateBasedRule"; }

    AWS_WAFREGIONAL_API Aws::String SerializePayload() const override;

    AWS_WAFREGIONAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> that you want to get.
     * <code>RuleId</code> is returned by <a>CreateRateBasedRule</a> and by
     * <a>ListRateBasedRules</a>.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> that you want to get.
     * <code>RuleId</code> is returned by <a>CreateRateBasedRule</a> and by
     * <a>ListRateBasedRules</a>.</p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> that you want to get.
     * <code>RuleId</code> is returned by <a>CreateRateBasedRule</a> and by
     * <a>ListRateBasedRules</a>.</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> that you want to get.
     * <code>RuleId</code> is returned by <a>CreateRateBasedRule</a> and by
     * <a>ListRateBasedRules</a>.</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> that you want to get.
     * <code>RuleId</code> is returned by <a>CreateRateBasedRule</a> and by
     * <a>ListRateBasedRules</a>.</p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> that you want to get.
     * <code>RuleId</code> is returned by <a>CreateRateBasedRule</a> and by
     * <a>ListRateBasedRules</a>.</p>
     */
    inline GetRateBasedRuleRequest& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> that you want to get.
     * <code>RuleId</code> is returned by <a>CreateRateBasedRule</a> and by
     * <a>ListRateBasedRules</a>.</p>
     */
    inline GetRateBasedRuleRequest& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> that you want to get.
     * <code>RuleId</code> is returned by <a>CreateRateBasedRule</a> and by
     * <a>ListRateBasedRules</a>.</p>
     */
    inline GetRateBasedRuleRequest& WithRuleId(const char* value) { SetRuleId(value); return *this;}

  private:

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
