/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/WAFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf/model/TimeWindow.h>
#include <utility>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class GetSampledRequestsRequest : public WAFRequest
  {
  public:
    AWS_WAF_API GetSampledRequestsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSampledRequests"; }

    AWS_WAF_API Aws::String SerializePayload() const override;

    AWS_WAF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>WebACLId</code> of the <code>WebACL</code> for which you want
     * <code>GetSampledRequests</code> to return a sample of requests.</p>
     */
    inline const Aws::String& GetWebAclId() const { return m_webAclId; }
    inline bool WebAclIdHasBeenSet() const { return m_webAclIdHasBeenSet; }
    template<typename WebAclIdT = Aws::String>
    void SetWebAclId(WebAclIdT&& value) { m_webAclIdHasBeenSet = true; m_webAclId = std::forward<WebAclIdT>(value); }
    template<typename WebAclIdT = Aws::String>
    GetSampledRequestsRequest& WithWebAclId(WebAclIdT&& value) { SetWebAclId(std::forward<WebAclIdT>(value)); return *this;}
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
    inline const Aws::String& GetRuleId() const { return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    template<typename RuleIdT = Aws::String>
    void SetRuleId(RuleIdT&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::forward<RuleIdT>(value); }
    template<typename RuleIdT = Aws::String>
    GetSampledRequestsRequest& WithRuleId(RuleIdT&& value) { SetRuleId(std::forward<RuleIdT>(value)); return *this;}
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
    inline const TimeWindow& GetTimeWindow() const { return m_timeWindow; }
    inline bool TimeWindowHasBeenSet() const { return m_timeWindowHasBeenSet; }
    template<typename TimeWindowT = TimeWindow>
    void SetTimeWindow(TimeWindowT&& value) { m_timeWindowHasBeenSet = true; m_timeWindow = std::forward<TimeWindowT>(value); }
    template<typename TimeWindowT = TimeWindow>
    GetSampledRequestsRequest& WithTimeWindow(TimeWindowT&& value) { SetTimeWindow(std::forward<TimeWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of requests that you want AWS WAF to return from among the first
     * 5,000 requests that your AWS resource received during the time range. If your
     * resource received fewer requests than the value of <code>MaxItems</code>,
     * <code>GetSampledRequests</code> returns information about all of them. </p>
     */
    inline long long GetMaxItems() const { return m_maxItems; }
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

    long long m_maxItems{0};
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
