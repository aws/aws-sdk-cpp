﻿/**
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
    AWS_SHIELD_API GetSubscriptionStateResult();
    AWS_SHIELD_API GetSubscriptionStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SHIELD_API GetSubscriptionStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the subscription.</p>
     */
    inline const SubscriptionState& GetSubscriptionState() const{ return m_subscriptionState; }
    inline void SetSubscriptionState(const SubscriptionState& value) { m_subscriptionState = value; }
    inline void SetSubscriptionState(SubscriptionState&& value) { m_subscriptionState = std::move(value); }
    inline GetSubscriptionStateResult& WithSubscriptionState(const SubscriptionState& value) { SetSubscriptionState(value); return *this;}
    inline GetSubscriptionStateResult& WithSubscriptionState(SubscriptionState&& value) { SetSubscriptionState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSubscriptionStateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSubscriptionStateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSubscriptionStateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SubscriptionState m_subscriptionState;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
