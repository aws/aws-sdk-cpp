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
  class ListManagedNotificationConfigurationsRequest : public NotificationsRequest
  {
  public:
    AWS_NOTIFICATIONS_API ListManagedNotificationConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListManagedNotificationConfigurations"; }

    AWS_NOTIFICATIONS_API Aws::String SerializePayload() const override;

    AWS_NOTIFICATIONS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier or ARN of the notification channel to filter configurations
     * by.</p>
     */
    inline const Aws::String& GetChannelIdentifier() const{ return m_channelIdentifier; }
    inline bool ChannelIdentifierHasBeenSet() const { return m_channelIdentifierHasBeenSet; }
    inline void SetChannelIdentifier(const Aws::String& value) { m_channelIdentifierHasBeenSet = true; m_channelIdentifier = value; }
    inline void SetChannelIdentifier(Aws::String&& value) { m_channelIdentifierHasBeenSet = true; m_channelIdentifier = std::move(value); }
    inline void SetChannelIdentifier(const char* value) { m_channelIdentifierHasBeenSet = true; m_channelIdentifier.assign(value); }
    inline ListManagedNotificationConfigurationsRequest& WithChannelIdentifier(const Aws::String& value) { SetChannelIdentifier(value); return *this;}
    inline ListManagedNotificationConfigurationsRequest& WithChannelIdentifier(Aws::String&& value) { SetChannelIdentifier(std::move(value)); return *this;}
    inline ListManagedNotificationConfigurationsRequest& WithChannelIdentifier(const char* value) { SetChannelIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be returned in this call. Defaults to
     * 20.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListManagedNotificationConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start token for paginated calls. Retrieved from the response of a
     * previous ListManagedNotificationChannelAssociations call. Next token uses Base64
     * encoding.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListManagedNotificationConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListManagedNotificationConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListManagedNotificationConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_channelIdentifier;
    bool m_channelIdentifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
