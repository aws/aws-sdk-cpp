/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/Subscription.h>
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
namespace WorkDocs
{
namespace Model
{
  class CreateNotificationSubscriptionResult
  {
  public:
    AWS_WORKDOCS_API CreateNotificationSubscriptionResult();
    AWS_WORKDOCS_API CreateNotificationSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API CreateNotificationSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The subscription.</p>
     */
    inline const Subscription& GetSubscription() const{ return m_subscription; }

    /**
     * <p>The subscription.</p>
     */
    inline void SetSubscription(const Subscription& value) { m_subscription = value; }

    /**
     * <p>The subscription.</p>
     */
    inline void SetSubscription(Subscription&& value) { m_subscription = std::move(value); }

    /**
     * <p>The subscription.</p>
     */
    inline CreateNotificationSubscriptionResult& WithSubscription(const Subscription& value) { SetSubscription(value); return *this;}

    /**
     * <p>The subscription.</p>
     */
    inline CreateNotificationSubscriptionResult& WithSubscription(Subscription&& value) { SetSubscription(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateNotificationSubscriptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateNotificationSubscriptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateNotificationSubscriptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Subscription m_subscription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
