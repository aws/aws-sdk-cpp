/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/NotificationsRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/notifications/model/LocaleCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Notifications
{
namespace Model
{

  /**
   */
  class ListNotificationEventsRequest : public NotificationsRequest
  {
  public:
    AWS_NOTIFICATIONS_API ListNotificationEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListNotificationEvents"; }

    AWS_NOTIFICATIONS_API Aws::String SerializePayload() const override;

    AWS_NOTIFICATIONS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The earliest time of events to return from this call.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ListNotificationEventsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ListNotificationEventsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Latest time of events to return from this call.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ListNotificationEventsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ListNotificationEventsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale code of the language used for the retrieved
     * <code>NotificationEvent</code>. The default locale is English
     * <code>(en_US)</code>.</p>
     */
    inline const LocaleCode& GetLocale() const{ return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(const LocaleCode& value) { m_localeHasBeenSet = true; m_locale = value; }
    inline void SetLocale(LocaleCode&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }
    inline ListNotificationEventsRequest& WithLocale(const LocaleCode& value) { SetLocale(value); return *this;}
    inline ListNotificationEventsRequest& WithLocale(LocaleCode&& value) { SetLocale(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The matched event source.</p> <p>Must match one of the valid EventBridge
     * sources. Only Amazon Web Services service sourced events are supported. For
     * example, <code>aws.ec2</code> and <code>aws.cloudwatch</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-service-event.html#eb-service-event-delivery-level">Event
     * delivery from Amazon Web Services services</a> in the <i>Amazon EventBridge User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline ListNotificationEventsRequest& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline ListNotificationEventsRequest& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline ListNotificationEventsRequest& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Include aggregated child events in the result.</p>
     */
    inline bool GetIncludeChildEvents() const{ return m_includeChildEvents; }
    inline bool IncludeChildEventsHasBeenSet() const { return m_includeChildEventsHasBeenSet; }
    inline void SetIncludeChildEvents(bool value) { m_includeChildEventsHasBeenSet = true; m_includeChildEvents = value; }
    inline ListNotificationEventsRequest& WithIncludeChildEvents(bool value) { SetIncludeChildEvents(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the
     * <code>aggregatedNotificationEventArn</code> to match.</p>
     */
    inline const Aws::String& GetAggregateNotificationEventArn() const{ return m_aggregateNotificationEventArn; }
    inline bool AggregateNotificationEventArnHasBeenSet() const { return m_aggregateNotificationEventArnHasBeenSet; }
    inline void SetAggregateNotificationEventArn(const Aws::String& value) { m_aggregateNotificationEventArnHasBeenSet = true; m_aggregateNotificationEventArn = value; }
    inline void SetAggregateNotificationEventArn(Aws::String&& value) { m_aggregateNotificationEventArnHasBeenSet = true; m_aggregateNotificationEventArn = std::move(value); }
    inline void SetAggregateNotificationEventArn(const char* value) { m_aggregateNotificationEventArnHasBeenSet = true; m_aggregateNotificationEventArn.assign(value); }
    inline ListNotificationEventsRequest& WithAggregateNotificationEventArn(const Aws::String& value) { SetAggregateNotificationEventArn(value); return *this;}
    inline ListNotificationEventsRequest& WithAggregateNotificationEventArn(Aws::String&& value) { SetAggregateNotificationEventArn(std::move(value)); return *this;}
    inline ListNotificationEventsRequest& WithAggregateNotificationEventArn(const char* value) { SetAggregateNotificationEventArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be returned in this call. Defaults to
     * 20.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListNotificationEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start token for paginated calls. Retrieved from the response of a
     * previous <code>ListEventRules</code> call. Next token uses Base64 encoding.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListNotificationEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListNotificationEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListNotificationEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    LocaleCode m_locale;
    bool m_localeHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    bool m_includeChildEvents;
    bool m_includeChildEventsHasBeenSet = false;

    Aws::String m_aggregateNotificationEventArn;
    bool m_aggregateNotificationEventArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
