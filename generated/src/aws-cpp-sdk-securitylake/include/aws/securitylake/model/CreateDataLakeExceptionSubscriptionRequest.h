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
  class CreateDataLakeExceptionSubscriptionRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API CreateDataLakeExceptionSubscriptionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataLakeExceptionSubscription"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The expiration period and time-to-live (TTL). It is the duration of time
     * until which the exception message remains.</p>
     */
    inline long long GetExceptionTimeToLive() const { return m_exceptionTimeToLive; }
    inline bool ExceptionTimeToLiveHasBeenSet() const { return m_exceptionTimeToLiveHasBeenSet; }
    inline void SetExceptionTimeToLive(long long value) { m_exceptionTimeToLiveHasBeenSet = true; m_exceptionTimeToLive = value; }
    inline CreateDataLakeExceptionSubscriptionRequest& WithExceptionTimeToLive(long long value) { SetExceptionTimeToLive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account where you want to receive exception
     * notifications.</p>
     */
    inline const Aws::String& GetNotificationEndpoint() const { return m_notificationEndpoint; }
    inline bool NotificationEndpointHasBeenSet() const { return m_notificationEndpointHasBeenSet; }
    template<typename NotificationEndpointT = Aws::String>
    void SetNotificationEndpoint(NotificationEndpointT&& value) { m_notificationEndpointHasBeenSet = true; m_notificationEndpoint = std::forward<NotificationEndpointT>(value); }
    template<typename NotificationEndpointT = Aws::String>
    CreateDataLakeExceptionSubscriptionRequest& WithNotificationEndpoint(NotificationEndpointT&& value) { SetNotificationEndpoint(std::forward<NotificationEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscription protocol to which exception notifications are posted.</p>
     */
    inline const Aws::String& GetSubscriptionProtocol() const { return m_subscriptionProtocol; }
    inline bool SubscriptionProtocolHasBeenSet() const { return m_subscriptionProtocolHasBeenSet; }
    template<typename SubscriptionProtocolT = Aws::String>
    void SetSubscriptionProtocol(SubscriptionProtocolT&& value) { m_subscriptionProtocolHasBeenSet = true; m_subscriptionProtocol = std::forward<SubscriptionProtocolT>(value); }
    template<typename SubscriptionProtocolT = Aws::String>
    CreateDataLakeExceptionSubscriptionRequest& WithSubscriptionProtocol(SubscriptionProtocolT&& value) { SetSubscriptionProtocol(std::forward<SubscriptionProtocolT>(value)); return *this;}
    ///@}
  private:

    long long m_exceptionTimeToLive{0};
    bool m_exceptionTimeToLiveHasBeenSet = false;

    Aws::String m_notificationEndpoint;
    bool m_notificationEndpointHasBeenSet = false;

    Aws::String m_subscriptionProtocol;
    bool m_subscriptionProtocolHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
