/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/Subscription.h>
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
namespace Shield
{
namespace Model
{
  class DescribeSubscriptionResult
  {
  public:
    AWS_SHIELD_API DescribeSubscriptionResult() = default;
    AWS_SHIELD_API DescribeSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SHIELD_API DescribeSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Shield Advanced subscription details for an account.</p>
     */
    inline const Subscription& GetSubscription() const { return m_subscription; }
    template<typename SubscriptionT = Subscription>
    void SetSubscription(SubscriptionT&& value) { m_subscriptionHasBeenSet = true; m_subscription = std::forward<SubscriptionT>(value); }
    template<typename SubscriptionT = Subscription>
    DescribeSubscriptionResult& WithSubscription(SubscriptionT&& value) { SetSubscription(std::forward<SubscriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSubscriptionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Subscription m_subscription;
    bool m_subscriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
