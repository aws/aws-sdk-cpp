/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/NotificationsRequest.h>
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
  class ListEventRulesRequest : public NotificationsRequest
  {
  public:
    AWS_NOTIFICATIONS_API ListEventRulesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEventRules"; }

    AWS_NOTIFICATIONS_API Aws::String SerializePayload() const override;

    AWS_NOTIFICATIONS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the
     * <code>NotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetNotificationConfigurationArn() const{ return m_notificationConfigurationArn; }
    inline bool NotificationConfigurationArnHasBeenSet() const { return m_notificationConfigurationArnHasBeenSet; }
    inline void SetNotificationConfigurationArn(const Aws::String& value) { m_notificationConfigurationArnHasBeenSet = true; m_notificationConfigurationArn = value; }
    inline void SetNotificationConfigurationArn(Aws::String&& value) { m_notificationConfigurationArnHasBeenSet = true; m_notificationConfigurationArn = std::move(value); }
    inline void SetNotificationConfigurationArn(const char* value) { m_notificationConfigurationArnHasBeenSet = true; m_notificationConfigurationArn.assign(value); }
    inline ListEventRulesRequest& WithNotificationConfigurationArn(const Aws::String& value) { SetNotificationConfigurationArn(value); return *this;}
    inline ListEventRulesRequest& WithNotificationConfigurationArn(Aws::String&& value) { SetNotificationConfigurationArn(std::move(value)); return *this;}
    inline ListEventRulesRequest& WithNotificationConfigurationArn(const char* value) { SetNotificationConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be returned in this call. The default value
     * is 20.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEventRulesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline ListEventRulesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEventRulesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEventRulesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_notificationConfigurationArn;
    bool m_notificationConfigurationArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
