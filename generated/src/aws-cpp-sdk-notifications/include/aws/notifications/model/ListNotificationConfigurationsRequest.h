/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/NotificationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notifications/model/NotificationConfigurationStatus.h>
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
    AWS_NOTIFICATIONS_API ListNotificationConfigurationsRequest();

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
    inline const Aws::String& GetEventRuleSource() const{ return m_eventRuleSource; }
    inline bool EventRuleSourceHasBeenSet() const { return m_eventRuleSourceHasBeenSet; }
    inline void SetEventRuleSource(const Aws::String& value) { m_eventRuleSourceHasBeenSet = true; m_eventRuleSource = value; }
    inline void SetEventRuleSource(Aws::String&& value) { m_eventRuleSourceHasBeenSet = true; m_eventRuleSource = std::move(value); }
    inline void SetEventRuleSource(const char* value) { m_eventRuleSourceHasBeenSet = true; m_eventRuleSource.assign(value); }
    inline ListNotificationConfigurationsRequest& WithEventRuleSource(const Aws::String& value) { SetEventRuleSource(value); return *this;}
    inline ListNotificationConfigurationsRequest& WithEventRuleSource(Aws::String&& value) { SetEventRuleSource(std::move(value)); return *this;}
    inline ListNotificationConfigurationsRequest& WithEventRuleSource(const char* value) { SetEventRuleSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Channel to match.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }
    inline ListNotificationConfigurationsRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline ListNotificationConfigurationsRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline ListNotificationConfigurationsRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
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
    inline const NotificationConfigurationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const NotificationConfigurationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(NotificationConfigurationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListNotificationConfigurationsRequest& WithStatus(const NotificationConfigurationStatus& value) { SetStatus(value); return *this;}
    inline ListNotificationConfigurationsRequest& WithStatus(NotificationConfigurationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be returned in this call. Defaults to
     * 20.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListNotificationConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline ListNotificationConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListNotificationConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListNotificationConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_eventRuleSource;
    bool m_eventRuleSourceHasBeenSet = false;

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    NotificationConfigurationStatus m_status;
    bool m_statusHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
