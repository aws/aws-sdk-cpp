/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/ShieldRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/shield/model/TimeRange.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Shield
{
namespace Model
{

  /**
   */
  class ListAttacksRequest : public ShieldRequest
  {
  public:
    AWS_SHIELD_API ListAttacksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAttacks"; }

    AWS_SHIELD_API Aws::String SerializePayload() const override;

    AWS_SHIELD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARNs (Amazon Resource Names) of the resources that were attacked. If you
     * leave this blank, all applicable resources for this account will be
     * included.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p>The ARNs (Amazon Resource Names) of the resources that were attacked. If you
     * leave this blank, all applicable resources for this account will be
     * included.</p>
     */
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }

    /**
     * <p>The ARNs (Amazon Resource Names) of the resources that were attacked. If you
     * leave this blank, all applicable resources for this account will be
     * included.</p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }

    /**
     * <p>The ARNs (Amazon Resource Names) of the resources that were attacked. If you
     * leave this blank, all applicable resources for this account will be
     * included.</p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }

    /**
     * <p>The ARNs (Amazon Resource Names) of the resources that were attacked. If you
     * leave this blank, all applicable resources for this account will be
     * included.</p>
     */
    inline ListAttacksRequest& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p>The ARNs (Amazon Resource Names) of the resources that were attacked. If you
     * leave this blank, all applicable resources for this account will be
     * included.</p>
     */
    inline ListAttacksRequest& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs (Amazon Resource Names) of the resources that were attacked. If you
     * leave this blank, all applicable resources for this account will be
     * included.</p>
     */
    inline ListAttacksRequest& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

    /**
     * <p>The ARNs (Amazon Resource Names) of the resources that were attacked. If you
     * leave this blank, all applicable resources for this account will be
     * included.</p>
     */
    inline ListAttacksRequest& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs (Amazon Resource Names) of the resources that were attacked. If you
     * leave this blank, all applicable resources for this account will be
     * included.</p>
     */
    inline ListAttacksRequest& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }


    /**
     * <p>The start of the time period for the attacks. This is a
     * <code>timestamp</code> type. The request syntax listing for this call indicates
     * a <code>number</code> type, but you can provide the time in any valid <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">timestamp
     * format</a> setting. </p>
     */
    inline const TimeRange& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start of the time period for the attacks. This is a
     * <code>timestamp</code> type. The request syntax listing for this call indicates
     * a <code>number</code> type, but you can provide the time in any valid <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">timestamp
     * format</a> setting. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start of the time period for the attacks. This is a
     * <code>timestamp</code> type. The request syntax listing for this call indicates
     * a <code>number</code> type, but you can provide the time in any valid <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">timestamp
     * format</a> setting. </p>
     */
    inline void SetStartTime(const TimeRange& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start of the time period for the attacks. This is a
     * <code>timestamp</code> type. The request syntax listing for this call indicates
     * a <code>number</code> type, but you can provide the time in any valid <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">timestamp
     * format</a> setting. </p>
     */
    inline void SetStartTime(TimeRange&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start of the time period for the attacks. This is a
     * <code>timestamp</code> type. The request syntax listing for this call indicates
     * a <code>number</code> type, but you can provide the time in any valid <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">timestamp
     * format</a> setting. </p>
     */
    inline ListAttacksRequest& WithStartTime(const TimeRange& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start of the time period for the attacks. This is a
     * <code>timestamp</code> type. The request syntax listing for this call indicates
     * a <code>number</code> type, but you can provide the time in any valid <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">timestamp
     * format</a> setting. </p>
     */
    inline ListAttacksRequest& WithStartTime(TimeRange&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end of the time period for the attacks. This is a <code>timestamp</code>
     * type. The request syntax listing for this call indicates a <code>number</code>
     * type, but you can provide the time in any valid <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">timestamp
     * format</a> setting. </p>
     */
    inline const TimeRange& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time period for the attacks. This is a <code>timestamp</code>
     * type. The request syntax listing for this call indicates a <code>number</code>
     * type, but you can provide the time in any valid <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">timestamp
     * format</a> setting. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end of the time period for the attacks. This is a <code>timestamp</code>
     * type. The request syntax listing for this call indicates a <code>number</code>
     * type, but you can provide the time in any valid <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">timestamp
     * format</a> setting. </p>
     */
    inline void SetEndTime(const TimeRange& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time period for the attacks. This is a <code>timestamp</code>
     * type. The request syntax listing for this call indicates a <code>number</code>
     * type, but you can provide the time in any valid <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">timestamp
     * format</a> setting. </p>
     */
    inline void SetEndTime(TimeRange&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end of the time period for the attacks. This is a <code>timestamp</code>
     * type. The request syntax listing for this call indicates a <code>number</code>
     * type, but you can provide the time in any valid <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">timestamp
     * format</a> setting. </p>
     */
    inline ListAttacksRequest& WithEndTime(const TimeRange& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time period for the attacks. This is a <code>timestamp</code>
     * type. The request syntax listing for this call indicates a <code>number</code>
     * type, but you can provide the time in any valid <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">timestamp
     * format</a> setting. </p>
     */
    inline ListAttacksRequest& WithEndTime(TimeRange&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p> <p>On your first call to a list operation, leave this setting
     * empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p> <p>On your first call to a list operation, leave this setting
     * empty.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p> <p>On your first call to a list operation, leave this setting
     * empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p> <p>On your first call to a list operation, leave this setting
     * empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p> <p>On your first call to a list operation, leave this setting
     * empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p> <p>On your first call to a list operation, leave this setting
     * empty.</p>
     */
    inline ListAttacksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p> <p>On your first call to a list operation, leave this setting
     * empty.</p>
     */
    inline ListAttacksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When you request a list of objects from Shield Advanced, if the response does
     * not include all of the remaining available objects, Shield Advanced includes a
     * <code>NextToken</code> value in the response. You can retrieve the next batch of
     * objects by requesting the list again and providing the token that was returned
     * by the prior call in your request. </p> <p>You can indicate the maximum number
     * of objects that you want Shield Advanced to return for a single call with the
     * <code>MaxResults</code> setting. Shield Advanced will not return more than
     * <code>MaxResults</code> objects, but may return fewer, even if more objects are
     * still available.</p> <p>Whenever more objects remain that Shield Advanced has
     * not yet returned to you, the response will include a <code>NextToken</code>
     * value.</p> <p>On your first call to a list operation, leave this setting
     * empty.</p>
     */
    inline ListAttacksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The greatest number of objects that you want Shield Advanced to return to the
     * list request. Shield Advanced might return fewer objects than you indicate in
     * this setting, even if more objects are available. If there are more objects
     * remaining, Shield Advanced will always also return a <code>NextToken</code>
     * value in the response.</p> <p>The default setting is 20.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The greatest number of objects that you want Shield Advanced to return to the
     * list request. Shield Advanced might return fewer objects than you indicate in
     * this setting, even if more objects are available. If there are more objects
     * remaining, Shield Advanced will always also return a <code>NextToken</code>
     * value in the response.</p> <p>The default setting is 20.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The greatest number of objects that you want Shield Advanced to return to the
     * list request. Shield Advanced might return fewer objects than you indicate in
     * this setting, even if more objects are available. If there are more objects
     * remaining, Shield Advanced will always also return a <code>NextToken</code>
     * value in the response.</p> <p>The default setting is 20.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The greatest number of objects that you want Shield Advanced to return to the
     * list request. Shield Advanced might return fewer objects than you indicate in
     * this setting, even if more objects are available. If there are more objects
     * remaining, Shield Advanced will always also return a <code>NextToken</code>
     * value in the response.</p> <p>The default setting is 20.</p>
     */
    inline ListAttacksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet = false;

    TimeRange m_startTime;
    bool m_startTimeHasBeenSet = false;

    TimeRange m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
