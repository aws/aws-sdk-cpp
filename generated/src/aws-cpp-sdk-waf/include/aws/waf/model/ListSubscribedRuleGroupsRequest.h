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
  class ListSubscribedRuleGroupsRequest : public WAFRequest
  {
  public:
    AWS_WAF_API ListSubscribedRuleGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSubscribedRuleGroups"; }

    AWS_WAF_API Aws::String SerializePayload() const override;

    AWS_WAF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>If you specify a value for <code>Limit</code> and you have more
     * <code>ByteMatchSets</code>subscribed rule groups than the value of
     * <code>Limit</code>, AWS WAF returns a <code>NextMarker</code> value in the
     * response that allows you to list another group of subscribed rule groups. For
     * the second and subsequent <code>ListSubscribedRuleGroupsRequest</code> requests,
     * specify the value of <code>NextMarker</code> from the previous response to get
     * information about another batch of subscribed rule groups.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }
    inline ListSubscribedRuleGroupsRequest& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline ListSubscribedRuleGroupsRequest& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline ListSubscribedRuleGroupsRequest& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of subscribed rule groups that you want AWS WAF to
     * return for this request. If you have more objects than the number you specify
     * for <code>Limit</code>, the response includes a <code>NextMarker</code> value
     * that you can use to get another batch of objects.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListSubscribedRuleGroupsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
