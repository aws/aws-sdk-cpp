/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class UpdateDataLakeExceptionSubscriptionRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API UpdateDataLakeExceptionSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataLakeExceptionSubscription"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The time-to-live (TTL) for the exception message to remain. It is the
     * duration of time until which the exception message remains. </p>
     */
    inline long long GetExceptionTimeToLive() const{ return m_exceptionTimeToLive; }
    inline bool ExceptionTimeToLiveHasBeenSet() const { return m_exceptionTimeToLiveHasBeenSet; }
    inline void SetExceptionTimeToLive(long long value) { m_exceptionTimeToLiveHasBeenSet = true; m_exceptionTimeToLive = value; }
    inline UpdateDataLakeExceptionSubscriptionRequest& WithExceptionTimeToLive(long long value) { SetExceptionTimeToLive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account that is subscribed to receive exception notifications.</p>
     */
    inline const Aws::String& GetNotificationEndpoint() const{ return m_notificationEndpoint; }
    inline bool NotificationEndpointHasBeenSet() const { return m_notificationEndpointHasBeenSet; }
    inline void SetNotificationEndpoint(const Aws::String& value) { m_notificationEndpointHasBeenSet = true; m_notificationEndpoint = value; }
    inline void SetNotificationEndpoint(Aws::String&& value) { m_notificationEndpointHasBeenSet = true; m_notificationEndpoint = std::move(value); }
    inline void SetNotificationEndpoint(const char* value) { m_notificationEndpointHasBeenSet = true; m_notificationEndpoint.assign(value); }
    inline UpdateDataLakeExceptionSubscriptionRequest& WithNotificationEndpoint(const Aws::String& value) { SetNotificationEndpoint(value); return *this;}
    inline UpdateDataLakeExceptionSubscriptionRequest& WithNotificationEndpoint(Aws::String&& value) { SetNotificationEndpoint(std::move(value)); return *this;}
    inline UpdateDataLakeExceptionSubscriptionRequest& WithNotificationEndpoint(const char* value) { SetNotificationEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscription protocol to which exception messages are posted.</p>
     */
    inline const Aws::String& GetSubscriptionProtocol() const{ return m_subscriptionProtocol; }
    inline bool SubscriptionProtocolHasBeenSet() const { return m_subscriptionProtocolHasBeenSet; }
    inline void SetSubscriptionProtocol(const Aws::String& value) { m_subscriptionProtocolHasBeenSet = true; m_subscriptionProtocol = value; }
    inline void SetSubscriptionProtocol(Aws::String&& value) { m_subscriptionProtocolHasBeenSet = true; m_subscriptionProtocol = std::move(value); }
    inline void SetSubscriptionProtocol(const char* value) { m_subscriptionProtocolHasBeenSet = true; m_subscriptionProtocol.assign(value); }
    inline UpdateDataLakeExceptionSubscriptionRequest& WithSubscriptionProtocol(const Aws::String& value) { SetSubscriptionProtocol(value); return *this;}
    inline UpdateDataLakeExceptionSubscriptionRequest& WithSubscriptionProtocol(Aws::String&& value) { SetSubscriptionProtocol(std::move(value)); return *this;}
    inline UpdateDataLakeExceptionSubscriptionRequest& WithSubscriptionProtocol(const char* value) { SetSubscriptionProtocol(value); return *this;}
    ///@}
  private:

    long long m_exceptionTimeToLive;
    bool m_exceptionTimeToLiveHasBeenSet = false;

    Aws::String m_notificationEndpoint;
    bool m_notificationEndpointHasBeenSet = false;

    Aws::String m_subscriptionProtocol;
    bool m_subscriptionProtocolHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
