/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/WAFRegionalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf-regional/model/TimeWindow.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class GetSampledRequestsRequest : public WAFRegionalRequest
  {
  public:
    AWS_WAFREGIONAL_API GetSampledRequestsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSampledRequests"; }

    AWS_WAFREGIONAL_API Aws::String SerializePayload() const override;

    AWS_WAFREGIONAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>WebACLId</code> of the <code>WebACL</code> for which you want
     * <code>GetSampledRequests</code> to return a sample of requests.</p>
     */
    inline const Aws::String& GetWebAclId() const{ return m_webAclId; }
    inline bool WebAclIdHasBeenSet() const { return m_webAclIdHasBeenSet; }
    inline void SetWebAclId(const Aws::String& value) { m_webAclIdHasBeenSet = true; m_webAclId = value; }
    inline void SetWebAclId(Aws::String&& value) { m_webAclIdHasBeenSet = true; m_webAclId = std::move(value); }
    inline void SetWebAclId(const char* value) { m_webAclIdHasBeenSet = true; m_webAclId.assign(value); }
    inline GetSampledRequestsRequest& WithWebAclId(const Aws::String& value) { SetWebAclId(value); return *this;}
    inline GetSampledRequestsRequest& WithWebAclId(Aws::String&& value) { SetWebAclId(std::move(value)); return *this;}
    inline GetSampledRequestsRequest& WithWebAclId(const char* value) { SetWebAclId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>RuleId</code> is one of three values:</p> <ul> <li> <p>The
     * <code>RuleId</code> of the <code>Rule</code> or the <code>RuleGroupId</code> of
     * the <code>RuleGroup</code> for which you want <code>GetSampledRequests</code> to
     * return a sample of requests.</p> </li> <li> <p> <code>Default_Action</code>,
     * which causes <code>GetSampledRequests</code> to return a sample of the requests
     * that didn't match any of the rules in the specified <code>WebACL</code>.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }
    inline GetSampledRequestsRequest& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}
    inline GetSampledRequestsRequest& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}
    inline GetSampledRequestsRequest& WithRuleId(const char* value) { SetRuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date and time and the end date and time of the range for which you
     * want <code>GetSampledRequests</code> to return a sample of requests. You must
     * specify the times in Coordinated Universal Time (UTC) format. UTC format
     * includes the special designator, <code>Z</code>. For example,
     * <code>"2016-09-27T14:50Z"</code>. You can specify any time range in the previous
     * three hours.</p>
     */
    inline const TimeWindow& GetTimeWindow() const{ return m_timeWindow; }
    inline bool TimeWindowHasBeenSet() const { return m_timeWindowHasBeenSet; }
    inline void SetTimeWindow(const TimeWindow& value) { m_timeWindowHasBeenSet = true; m_timeWindow = value; }
    inline void SetTimeWindow(TimeWindow&& value) { m_timeWindowHasBeenSet = true; m_timeWindow = std::move(value); }
    inline GetSampledRequestsRequest& WithTimeWindow(const TimeWindow& value) { SetTimeWindow(value); return *this;}
    inline GetSampledRequestsRequest& WithTimeWindow(TimeWindow&& value) { SetTimeWindow(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of requests that you want AWS WAF to return from among the first
     * 5,000 requests that your AWS resource received during the time range. If your
     * resource received fewer requests than the value of <code>MaxItems</code>,
     * <code>GetSampledRequests</code> returns information about all of them. </p>
     */
    inline long long GetMaxItems() const{ return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(long long value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline GetSampledRequestsRequest& WithMaxItems(long long value) { SetMaxItems(value); return *this;}
    ///@}
  private:

    Aws::String m_webAclId;
    bool m_webAclIdHasBeenSet = false;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    TimeWindow m_timeWindow;
    bool m_timeWindowHasBeenSet = false;

    long long m_maxItems;
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
