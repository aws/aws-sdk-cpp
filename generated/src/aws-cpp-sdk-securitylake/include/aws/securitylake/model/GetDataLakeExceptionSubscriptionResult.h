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
    AWS_SECURITYLAKE_API GetDataLakeExceptionSubscriptionResult();
    AWS_SECURITYLAKE_API GetDataLakeExceptionSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API GetDataLakeExceptionSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The expiration period and time-to-live (TTL).</p>
     */
    inline long long GetExceptionTimeToLive() const{ return m_exceptionTimeToLive; }

    /**
     * <p>The expiration period and time-to-live (TTL).</p>
     */
    inline void SetExceptionTimeToLive(long long value) { m_exceptionTimeToLive = value; }

    /**
     * <p>The expiration period and time-to-live (TTL).</p>
     */
    inline GetDataLakeExceptionSubscriptionResult& WithExceptionTimeToLive(long long value) { SetExceptionTimeToLive(value); return *this;}


    /**
     * <p>The Amazon Web Services account where you receive exception
     * notifications.</p>
     */
    inline const Aws::String& GetNotificationEndpoint() const{ return m_notificationEndpoint; }

    /**
     * <p>The Amazon Web Services account where you receive exception
     * notifications.</p>
     */
    inline void SetNotificationEndpoint(const Aws::String& value) { m_notificationEndpoint = value; }

    /**
     * <p>The Amazon Web Services account where you receive exception
     * notifications.</p>
     */
    inline void SetNotificationEndpoint(Aws::String&& value) { m_notificationEndpoint = std::move(value); }

    /**
     * <p>The Amazon Web Services account where you receive exception
     * notifications.</p>
     */
    inline void SetNotificationEndpoint(const char* value) { m_notificationEndpoint.assign(value); }

    /**
     * <p>The Amazon Web Services account where you receive exception
     * notifications.</p>
     */
    inline GetDataLakeExceptionSubscriptionResult& WithNotificationEndpoint(const Aws::String& value) { SetNotificationEndpoint(value); return *this;}

    /**
     * <p>The Amazon Web Services account where you receive exception
     * notifications.</p>
     */
    inline GetDataLakeExceptionSubscriptionResult& WithNotificationEndpoint(Aws::String&& value) { SetNotificationEndpoint(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account where you receive exception
     * notifications.</p>
     */
    inline GetDataLakeExceptionSubscriptionResult& WithNotificationEndpoint(const char* value) { SetNotificationEndpoint(value); return *this;}


    /**
     * <p>The subscription protocol to which exception notifications are posted.</p>
     */
    inline const Aws::String& GetSubscriptionProtocol() const{ return m_subscriptionProtocol; }

    /**
     * <p>The subscription protocol to which exception notifications are posted.</p>
     */
    inline void SetSubscriptionProtocol(const Aws::String& value) { m_subscriptionProtocol = value; }

    /**
     * <p>The subscription protocol to which exception notifications are posted.</p>
     */
    inline void SetSubscriptionProtocol(Aws::String&& value) { m_subscriptionProtocol = std::move(value); }

    /**
     * <p>The subscription protocol to which exception notifications are posted.</p>
     */
    inline void SetSubscriptionProtocol(const char* value) { m_subscriptionProtocol.assign(value); }

    /**
     * <p>The subscription protocol to which exception notifications are posted.</p>
     */
    inline GetDataLakeExceptionSubscriptionResult& WithSubscriptionProtocol(const Aws::String& value) { SetSubscriptionProtocol(value); return *this;}

    /**
     * <p>The subscription protocol to which exception notifications are posted.</p>
     */
    inline GetDataLakeExceptionSubscriptionResult& WithSubscriptionProtocol(Aws::String&& value) { SetSubscriptionProtocol(std::move(value)); return *this;}

    /**
     * <p>The subscription protocol to which exception notifications are posted.</p>
     */
    inline GetDataLakeExceptionSubscriptionResult& WithSubscriptionProtocol(const char* value) { SetSubscriptionProtocol(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDataLakeExceptionSubscriptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDataLakeExceptionSubscriptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDataLakeExceptionSubscriptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    long long m_exceptionTimeToLive;

    Aws::String m_notificationEndpoint;

    Aws::String m_subscriptionProtocol;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
