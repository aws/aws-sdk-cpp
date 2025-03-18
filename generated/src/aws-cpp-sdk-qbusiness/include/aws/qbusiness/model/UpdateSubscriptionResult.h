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
  class UpdateSubscriptionResult
  {
  public:
    AWS_QBUSINESS_API UpdateSubscriptionResult() = default;
    AWS_QBUSINESS_API UpdateSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API UpdateSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q Business subscription that was
     * updated.</p>
     */
    inline const Aws::String& GetSubscriptionArn() const { return m_subscriptionArn; }
    template<typename SubscriptionArnT = Aws::String>
    void SetSubscriptionArn(SubscriptionArnT&& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = std::forward<SubscriptionArnT>(value); }
    template<typename SubscriptionArnT = Aws::String>
    UpdateSubscriptionResult& WithSubscriptionArn(SubscriptionArnT&& value) { SetSubscriptionArn(std::forward<SubscriptionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of your current Amazon Q Business subscription.</p>
     */
    inline const SubscriptionDetails& GetCurrentSubscription() const { return m_currentSubscription; }
    template<typename CurrentSubscriptionT = SubscriptionDetails>
    void SetCurrentSubscription(CurrentSubscriptionT&& value) { m_currentSubscriptionHasBeenSet = true; m_currentSubscription = std::forward<CurrentSubscriptionT>(value); }
    template<typename CurrentSubscriptionT = SubscriptionDetails>
    UpdateSubscriptionResult& WithCurrentSubscription(CurrentSubscriptionT&& value) { SetCurrentSubscription(std::forward<CurrentSubscriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the Amazon Q Business subscription for the next month.</p>
     */
    inline const SubscriptionDetails& GetNextSubscription() const { return m_nextSubscription; }
    template<typename NextSubscriptionT = SubscriptionDetails>
    void SetNextSubscription(NextSubscriptionT&& value) { m_nextSubscriptionHasBeenSet = true; m_nextSubscription = std::forward<NextSubscriptionT>(value); }
    template<typename NextSubscriptionT = SubscriptionDetails>
    UpdateSubscriptionResult& WithNextSubscription(NextSubscriptionT&& value) { SetNextSubscription(std::forward<NextSubscriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateSubscriptionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subscriptionArn;
    bool m_subscriptionArnHasBeenSet = false;

    SubscriptionDetails m_currentSubscription;
    bool m_currentSubscriptionHasBeenSet = false;

    SubscriptionDetails m_nextSubscription;
    bool m_nextSubscriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
