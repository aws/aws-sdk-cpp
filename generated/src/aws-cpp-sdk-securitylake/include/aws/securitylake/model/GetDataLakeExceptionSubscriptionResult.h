/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecurityLake
{
namespace Model
{
  class GetDataLakeExceptionSubscriptionResult
  {
  public:
    AWS_SECURITYLAKE_API GetDataLakeExceptionSubscriptionResult() = default;
    AWS_SECURITYLAKE_API GetDataLakeExceptionSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API GetDataLakeExceptionSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The expiration period and time-to-live (TTL). It is the duration of time
     * until which the exception message remains.</p>
     */
    inline long long GetExceptionTimeToLive() const { return m_exceptionTimeToLive; }
    inline void SetExceptionTimeToLive(long long value) { m_exceptionTimeToLiveHasBeenSet = true; m_exceptionTimeToLive = value; }
    inline GetDataLakeExceptionSubscriptionResult& WithExceptionTimeToLive(long long value) { SetExceptionTimeToLive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account where you receive exception
     * notifications.</p>
     */
    inline const Aws::String& GetNotificationEndpoint() const { return m_notificationEndpoint; }
    template<typename NotificationEndpointT = Aws::String>
    void SetNotificationEndpoint(NotificationEndpointT&& value) { m_notificationEndpointHasBeenSet = true; m_notificationEndpoint = std::forward<NotificationEndpointT>(value); }
    template<typename NotificationEndpointT = Aws::String>
    GetDataLakeExceptionSubscriptionResult& WithNotificationEndpoint(NotificationEndpointT&& value) { SetNotificationEndpoint(std::forward<NotificationEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscription protocol to which exception notifications are posted.</p>
     */
    inline const Aws::String& GetSubscriptionProtocol() const { return m_subscriptionProtocol; }
    template<typename SubscriptionProtocolT = Aws::String>
    void SetSubscriptionProtocol(SubscriptionProtocolT&& value) { m_subscriptionProtocolHasBeenSet = true; m_subscriptionProtocol = std::forward<SubscriptionProtocolT>(value); }
    template<typename SubscriptionProtocolT = Aws::String>
    GetDataLakeExceptionSubscriptionResult& WithSubscriptionProtocol(SubscriptionProtocolT&& value) { SetSubscriptionProtocol(std::forward<SubscriptionProtocolT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataLakeExceptionSubscriptionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    long long m_exceptionTimeToLive{0};
    bool m_exceptionTimeToLiveHasBeenSet = false;

    Aws::String m_notificationEndpoint;
    bool m_notificationEndpointHasBeenSet = false;

    Aws::String m_subscriptionProtocol;
    bool m_subscriptionProtocolHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
