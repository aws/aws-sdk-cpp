/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/NotificationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notifications/model/NotificationConfigurationStatus.h>
#include <aws/notifications/model/NotificationConfigurationSubtype.h>
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
  class ListNotificationConfigurationsRequest : public NotificationsRequest
  {
  public:
    AWS_NOTIFICATIONS_API ListNotificationConfigurationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListNotificationConfigurations"; }

    AWS_NOTIFICATIONS_API Aws::String SerializePayload() const override;

    AWS_NOTIFICATIONS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    inline const Aws::String& GetEventRuleSource() const { return m_eventRuleSource; }
    inline bool EventRuleSourceHasBeenSet() const { return m_eventRuleSourceHasBeenSet; }
    template<typename EventRuleSourceT = Aws::String>
    void SetEventRuleSource(EventRuleSourceT&& value) { m_eventRuleSourceHasBeenSet = true; m_eventRuleSource = std::forward<EventRuleSourceT>(value); }
    template<typename EventRuleSourceT = Aws::String>
    ListNotificationConfigurationsRequest& WithEventRuleSource(EventRuleSourceT&& value) { SetEventRuleSource(std::forward<EventRuleSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Channel to match.</p>
     */
    inline const Aws::String& GetChannelArn() const { return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    template<typename ChannelArnT = Aws::String>
    void SetChannelArn(ChannelArnT&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::forward<ChannelArnT>(value); }
    template<typename ChannelArnT = Aws::String>
    ListNotificationConfigurationsRequest& WithChannelArn(ChannelArnT&& value) { SetChannelArn(std::forward<ChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>NotificationConfiguration</code> status to match.</p> <ul> <li>
     * <p>Values:</p> <ul> <li> <p> <code>ACTIVE</code> </p> <ul> <li> <p>All
     * <code>EventRules</code> are <code>ACTIVE</code> and any call can be run.</p>
     * </li> </ul> </li> <li> <p> <code>PARTIALLY_ACTIVE</code> </p> <ul> <li> <p>Some
     * <code>EventRules</code> are <code>ACTIVE</code> and some are
     * <code>INACTIVE</code>. Any call can be run.</p> </li> <li> <p>Any call can be
     * run.</p> </li> </ul> </li> <li> <p> <code>INACTIVE</code> </p> <ul> <li> <p>All
     * <code>EventRules</code> are <code>INACTIVE</code> and any call can be run.</p>
     * </li> </ul> </li> <li> <p> <code>DELETING</code> </p> <ul> <li> <p>This
     * <code>NotificationConfiguration</code> is being deleted.</p> </li> <li> <p>Only
     * <code>GET</code> and <code>LIST</code> calls can be run.</p> </li> </ul> </li>
     * </ul> </li> </ul>
     */
    inline NotificationConfigurationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(NotificationConfigurationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListNotificationConfigurationsRequest& WithStatus(NotificationConfigurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subtype used to filter the notification configurations in the
     * request.</p>
     */
    inline NotificationConfigurationSubtype GetSubtype() const { return m_subtype; }
    inline bool SubtypeHasBeenSet() const { return m_subtypeHasBeenSet; }
    inline void SetSubtype(NotificationConfigurationSubtype value) { m_subtypeHasBeenSet = true; m_subtype = value; }
    inline ListNotificationConfigurationsRequest& WithSubtype(NotificationConfigurationSubtype value) { SetSubtype(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be returned in this call. Defaults to
     * 20.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListNotificationConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    ListNotificationConfigurationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventRuleSource;
    bool m_eventRuleSourceHasBeenSet = false;

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    NotificationConfigurationStatus m_status{NotificationConfigurationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    NotificationConfigurationSubtype m_subtype{NotificationConfigurationSubtype::NOT_SET};
    bool m_subtypeHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
