﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/WAFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class GetRateBasedRuleManagedKeysRequest : public WAFRequest
  {
  public:
    AWS_WAF_API GetRateBasedRuleManagedKeysRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRateBasedRuleManagedKeys"; }

    AWS_WAF_API Aws::String SerializePayload() const override;

    AWS_WAF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>RuleId</code> of the <a>RateBasedRule</a> for which you want to get
     * a list of <code>ManagedKeys</code>. <code>RuleId</code> is returned by
     * <a>CreateRateBasedRule</a> and by <a>ListRateBasedRules</a>.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }
    inline GetRateBasedRuleManagedKeysRequest& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}
    inline GetRateBasedRuleManagedKeysRequest& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}
    inline GetRateBasedRuleManagedKeysRequest& WithRuleId(const char* value) { SetRuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A null value and not currently used. Do not include this in your request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }
    inline GetRateBasedRuleManagedKeysRequest& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline GetRateBasedRuleManagedKeysRequest& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline GetRateBasedRuleManagedKeysRequest& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}
  private:

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
