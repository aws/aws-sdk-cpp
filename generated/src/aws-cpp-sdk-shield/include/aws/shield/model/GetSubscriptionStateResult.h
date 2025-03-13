/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/SubscriptionState.h>
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
  class GetSubscriptionStateResult
  {
  public:
    AWS_SHIELD_API GetSubscriptionStateResult() = default;
    AWS_SHIELD_API GetSubscriptionStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SHIELD_API GetSubscriptionStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the subscription.</p>
     */
    inline SubscriptionState GetSubscriptionState() const { return m_subscriptionState; }
    inline void SetSubscriptionState(SubscriptionState value) { m_subscriptionStateHasBeenSet = true; m_subscriptionState = value; }
    inline GetSubscriptionStateResult& WithSubscriptionState(SubscriptionState value) { SetSubscriptionState(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSubscriptionStateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SubscriptionState m_subscriptionState{SubscriptionState::NOT_SET};
    bool m_subscriptionStateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
