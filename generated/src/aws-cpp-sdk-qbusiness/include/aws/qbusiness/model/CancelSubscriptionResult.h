/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/SubscriptionDetails.h>
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
namespace QBusiness
{
namespace Model
{
  class CancelSubscriptionResult
  {
  public:
    AWS_QBUSINESS_API CancelSubscriptionResult();
    AWS_QBUSINESS_API CancelSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API CancelSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q Business subscription being
     * cancelled.</p>
     */
    inline const Aws::String& GetSubscriptionArn() const{ return m_subscriptionArn; }
    inline void SetSubscriptionArn(const Aws::String& value) { m_subscriptionArn = value; }
    inline void SetSubscriptionArn(Aws::String&& value) { m_subscriptionArn = std::move(value); }
    inline void SetSubscriptionArn(const char* value) { m_subscriptionArn.assign(value); }
    inline CancelSubscriptionResult& WithSubscriptionArn(const Aws::String& value) { SetSubscriptionArn(value); return *this;}
    inline CancelSubscriptionResult& WithSubscriptionArn(Aws::String&& value) { SetSubscriptionArn(std::move(value)); return *this;}
    inline CancelSubscriptionResult& WithSubscriptionArn(const char* value) { SetSubscriptionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of your current Amazon Q Business subscription.</p>
     */
    inline const SubscriptionDetails& GetCurrentSubscription() const{ return m_currentSubscription; }
    inline void SetCurrentSubscription(const SubscriptionDetails& value) { m_currentSubscription = value; }
    inline void SetCurrentSubscription(SubscriptionDetails&& value) { m_currentSubscription = std::move(value); }
    inline CancelSubscriptionResult& WithCurrentSubscription(const SubscriptionDetails& value) { SetCurrentSubscription(value); return *this;}
    inline CancelSubscriptionResult& WithCurrentSubscription(SubscriptionDetails&& value) { SetCurrentSubscription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the Amazon Q Business subscription for the next month.</p>
     */
    inline const SubscriptionDetails& GetNextSubscription() const{ return m_nextSubscription; }
    inline void SetNextSubscription(const SubscriptionDetails& value) { m_nextSubscription = value; }
    inline void SetNextSubscription(SubscriptionDetails&& value) { m_nextSubscription = std::move(value); }
    inline CancelSubscriptionResult& WithNextSubscription(const SubscriptionDetails& value) { SetNextSubscription(value); return *this;}
    inline CancelSubscriptionResult& WithNextSubscription(SubscriptionDetails&& value) { SetNextSubscription(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CancelSubscriptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CancelSubscriptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CancelSubscriptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_subscriptionArn;

    SubscriptionDetails m_currentSubscription;

    SubscriptionDetails m_nextSubscription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
