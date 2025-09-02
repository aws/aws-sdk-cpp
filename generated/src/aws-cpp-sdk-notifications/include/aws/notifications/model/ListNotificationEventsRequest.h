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
    AWS_NOTIFICATIONS_API ListNotificationEventsRequest() = default;

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
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ListNotificationEventsRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Latest time of events to return from this call.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ListNotificationEventsRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale code of the language used for the retrieved
     * <code>NotificationEvent</code>. The default locale is English
     * <code>(en_US)</code>.</p>
     */
    inline LocaleCode GetLocale() const { return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(LocaleCode value) { m_localeHasBeenSet = true; m_locale = value; }
    inline ListNotificationEventsRequest& WithLocale(LocaleCode value) { SetLocale(value); return *this;}
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
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    ListNotificationEventsRequest& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Include aggregated child events in the result.</p>
     */
    inline bool GetIncludeChildEvents() const { return m_includeChildEvents; }
    inline bool IncludeChildEventsHasBeenSet() const { return m_includeChildEventsHasBeenSet; }
    inline void SetIncludeChildEvents(bool value) { m_includeChildEventsHasBeenSet = true; m_includeChildEvents = value; }
    inline ListNotificationEventsRequest& WithIncludeChildEvents(bool value) { SetIncludeChildEvents(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the
     * <code>aggregatedNotificationEventArn</code> to match.</p>
     */
    inline const Aws::String& GetAggregateNotificationEventArn() const { return m_aggregateNotificationEventArn; }
    inline bool AggregateNotificationEventArnHasBeenSet() const { return m_aggregateNotificationEventArnHasBeenSet; }
    template<typename AggregateNotificationEventArnT = Aws::String>
    void SetAggregateNotificationEventArn(AggregateNotificationEventArnT&& value) { m_aggregateNotificationEventArnHasBeenSet = true; m_aggregateNotificationEventArn = std::forward<AggregateNotificationEventArnT>(value); }
    template<typename AggregateNotificationEventArnT = Aws::String>
    ListNotificationEventsRequest& WithAggregateNotificationEventArn(AggregateNotificationEventArnT&& value) { SetAggregateNotificationEventArn(std::forward<AggregateNotificationEventArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be returned in this call. Defaults to
     * 20.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListNotificationEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start token for paginated calls. Retrieved from the response of a
     * previous <code>ListEventRules</code> call. Next token uses Base64 encoding.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListNotificationEventsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the organizational unit used to filter notification
     * events.</p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const { return m_organizationalUnitId; }
    inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }
    template<typename OrganizationalUnitIdT = Aws::String>
    void SetOrganizationalUnitId(OrganizationalUnitIdT&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = std::forward<OrganizationalUnitIdT>(value); }
    template<typename OrganizationalUnitIdT = Aws::String>
    ListNotificationEventsRequest& WithOrganizationalUnitId(OrganizationalUnitIdT&& value) { SetOrganizationalUnitId(std::forward<OrganizationalUnitIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    LocaleCode m_locale{LocaleCode::NOT_SET};
    bool m_localeHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    bool m_includeChildEvents{false};
    bool m_includeChildEventsHasBeenSet = false;

    Aws::String m_aggregateNotificationEventArn;
    bool m_aggregateNotificationEventArnHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
