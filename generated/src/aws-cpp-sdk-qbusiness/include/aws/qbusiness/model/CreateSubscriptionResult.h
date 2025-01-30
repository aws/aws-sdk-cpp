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
  class CreateSubscriptionResult
  {
  public:
    AWS_QBUSINESS_API CreateSubscriptionResult();
    AWS_QBUSINESS_API CreateSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API CreateSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business subscription created.</p>
     */
    inline const Aws::String& GetSubscriptionId() const{ return m_subscriptionId; }
    inline void SetSubscriptionId(const Aws::String& value) { m_subscriptionId = value; }
    inline void SetSubscriptionId(Aws::String&& value) { m_subscriptionId = std::move(value); }
    inline void SetSubscriptionId(const char* value) { m_subscriptionId.assign(value); }
    inline CreateSubscriptionResult& WithSubscriptionId(const Aws::String& value) { SetSubscriptionId(value); return *this;}
    inline CreateSubscriptionResult& WithSubscriptionId(Aws::String&& value) { SetSubscriptionId(std::move(value)); return *this;}
    inline CreateSubscriptionResult& WithSubscriptionId(const char* value) { SetSubscriptionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q Business subscription
     * created.</p>
     */
    inline const Aws::String& GetSubscriptionArn() const{ return m_subscriptionArn; }
    inline void SetSubscriptionArn(const Aws::String& value) { m_subscriptionArn = value; }
    inline void SetSubscriptionArn(Aws::String&& value) { m_subscriptionArn = std::move(value); }
    inline void SetSubscriptionArn(const char* value) { m_subscriptionArn.assign(value); }
    inline CreateSubscriptionResult& WithSubscriptionArn(const Aws::String& value) { SetSubscriptionArn(value); return *this;}
    inline CreateSubscriptionResult& WithSubscriptionArn(Aws::String&& value) { SetSubscriptionArn(std::move(value)); return *this;}
    inline CreateSubscriptionResult& WithSubscriptionArn(const char* value) { SetSubscriptionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of your current Amazon Q Business subscription.</p>
     */
    inline const SubscriptionDetails& GetCurrentSubscription() const{ return m_currentSubscription; }
    inline void SetCurrentSubscription(const SubscriptionDetails& value) { m_currentSubscription = value; }
    inline void SetCurrentSubscription(SubscriptionDetails&& value) { m_currentSubscription = std::move(value); }
    inline CreateSubscriptionResult& WithCurrentSubscription(const SubscriptionDetails& value) { SetCurrentSubscription(value); return *this;}
    inline CreateSubscriptionResult& WithCurrentSubscription(SubscriptionDetails&& value) { SetCurrentSubscription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the Amazon Q Business subscription for the next month.</p>
     */
    inline const SubscriptionDetails& GetNextSubscription() const{ return m_nextSubscription; }
    inline void SetNextSubscription(const SubscriptionDetails& value) { m_nextSubscription = value; }
    inline void SetNextSubscription(SubscriptionDetails&& value) { m_nextSubscription = std::move(value); }
    inline CreateSubscriptionResult& WithNextSubscription(const SubscriptionDetails& value) { SetNextSubscription(value); return *this;}
    inline CreateSubscriptionResult& WithNextSubscription(SubscriptionDetails&& value) { SetNextSubscription(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSubscriptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSubscriptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSubscriptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_subscriptionId;

    Aws::String m_subscriptionArn;

    SubscriptionDetails m_currentSubscription;

    SubscriptionDetails m_nextSubscription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
